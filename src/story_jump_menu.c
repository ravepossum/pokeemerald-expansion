#include "story_jump_menu.h"

#include "gba/types.h"
#include "gba/defines.h"
#include "global.h"
#include "main.h"
#include "bg.h"
#include "list_menu.h"
#include "text_window.h"
#include "window.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "menu_helpers.h"
#include "menu.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "constants/rgb.h"
#include "decompress.h"
#include "constants/songs.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "gpu_regs.h"
#include "title_screen.h"
#include "story_jump.h"
#include "story_jump_setup_funcs.h"
#include "save.h"

#define STORY_JUMP_MENU_MAX_ITEMS 20

EWRAM_DATA u16 gStoryPointToJumpTo = 0;

struct StoryJumpMenu
{
    MainCallback savedCallback;
    struct ListMenuItem listItems[STORY_JUMP_MENU_MAX_ITEMS + 1];
    u8 currentItems;
    u8 currentAct;
    u8 menuTaskId;
    u8 loadState;
};

enum StoryJumpListMode
{
    LIST_MODE_ACTS,
    LIST_MODE_POINTS,
};

enum StoryJumpWindowIds
{
    WIN_TITLE,
    WIN_LIST,
    WIN_MSG,
    WIN_YESNO,
    NUM_WINDOWS
};

static EWRAM_DATA struct StoryJumpMenu *sStoryJumpMenu = NULL;
static EWRAM_DATA u8 *sBg2TilemapBuffer = NULL;

static const struct BgTemplate sStoryJumpMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 27,
        .priority = 1
    },
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 25,
        .priority = 2
    }
};

static const struct WindowTemplate sStoryJumpMenuWindowTemplates[NUM_WINDOWS + 1] =
{
    [WIN_TITLE] =
    {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 1,
        .width = 14,
        .height = 2,
        .paletteNum = 14,
        .baseBlock = 11
    },
    [WIN_LIST] =
    {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 5,
        .width = 25,
        .height = 14,
        .paletteNum = 14,
        .baseBlock = 39
    },
    [WIN_MSG] =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 389,
    },
    [WIN_YESNO] =
    {
        .bg = 0,
        .tilemapLeft = 24,
        .tilemapTop = 9,
        .width = 5,
        .height = 4,
        .paletteNum = 14,
        .baseBlock = 501 
    },
    DUMMY_WIN_TEMPLATE
};

enum FontColor
{
    FONT_WHITE,
    FONT_GRAY,
};

static const u8 sStoryJumpMenuWindowFontColors[][3] =
{
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY},
    [FONT_GRAY]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY},
};

#include "data/story_jump.h"

static const u32 sStoryJumpMenuTiles[] = INCGFX_U32("graphics/story_jump_menu/bg.png", ".4bpp.smol");
static const u32 sStoryJumpMenuTilemap[] = INCBIN_U32("graphics/story_jump_menu/bg.bin.smolTM");
static const u16 sStoryJumpMenuPalette[] = INCGFX_U16("graphics/story_jump_menu/bg.pal", ".gbapal");

static void StoryJumpMenu_SetupCB(void);
static void StoryJumpMenu_MainCB(void);
static void StoryJumpMenu_VBlankCB(void);

static void Task_StoryJumpMenu_WaitFadeIn(u8 taskId);
static void Task_StoryJumpMenu_MainInput(u8 taskId);
static void Task_StoryJumpMenu_YesNoMenuInput(u8 taskId);
static void Task_StoryJumpMenu_WaitFadeAndExit(u8 taskId);
static void Task_StoryJumpMenu_WaitFadeAndJump(u8 taskId);

static void StoryJumpMenu_Init(MainCallback callback);
static void StoryJumpMenu_ResetGpuRegsAndBgs(void);
static bool8 StoryJumpMenu_InitBgs(void);
static void StoryJumpMenu_FadeAndExit(void);
static bool8 StoryJumpMenu_LoadGraphics(void);
static void StoryJumpMenu_InitWindows(void);
static void StoryJumpMenu_PrintTitle(void);
static void StoryJumpMenu_PrintList(enum StoryJumpListMode listMode);
static void StoryJumpMenu_ShowSaveWarning(void);
static void StoryJumpMenu_FreeResources(void);
static void StoryJumpMenu_RefreshListMenu(void);

void CB2_InitStoryJumpMenuFromTitleScreen(void)
{
    if (!gPaletteFade.active) StoryJumpMenu_Init(CB2_InitTitleScreen);
}

void CB2_InitStoryJumpMenuFromOverworld(void)
{
    if (!gPaletteFade.active) StoryJumpMenu_Init(CB2_ReturnToField);
}

static void StoryJumpMenu_Init(MainCallback callback)
{
    sStoryJumpMenu = AllocZeroed(sizeof(struct StoryJumpMenu));
    sStoryJumpMenu->currentAct = STORY_ACT_NONE;

    if (sStoryJumpMenu == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sStoryJumpMenu->loadState = 0;
    sStoryJumpMenu->savedCallback = callback;

    SetMainCallback2(StoryJumpMenu_SetupCB);
}

static void StoryJumpMenu_ResetGpuRegsAndBgs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WIN1H, 0);
    SetGpuReg(REG_OFFSET_WIN1V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    CpuFill16(0, (void *)VRAM, VRAM_SIZE);
    CpuFill32(0, (void *)OAM, OAM_SIZE);
}

static void StoryJumpMenu_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        StoryJumpMenu_ResetGpuRegsAndBgs();
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (StoryJumpMenu_InitBgs())
        {
            sStoryJumpMenu->loadState = 0;
            gMain.state++;
        }
        else
        {
            StoryJumpMenu_FadeAndExit();
            return;
        }
        break;
    case 3:
        if (StoryJumpMenu_LoadGraphics() == TRUE)
        {
            gMain.state++;
        }
        break;
    case 4:
        StoryJumpMenu_InitWindows();
        gMain.state++;
        break;
    case 5:
        StoryJumpMenu_PrintTitle();
        StoryJumpMenu_PrintList(LIST_MODE_ACTS);
        CreateTask(Task_StoryJumpMenu_WaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(StoryJumpMenu_VBlankCB);
        SetMainCallback2(StoryJumpMenu_MainCB);
        break;
    }
}

static void StoryJumpMenu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void StoryJumpMenu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
    ChangeBgX(2, 64, BG_COORD_ADD);
    ChangeBgY(2, 64, BG_COORD_ADD);
}

#define tSelectedStoryPoint data[0]

static void Task_StoryJumpMenu_WaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_StoryJumpMenu_MainInput;
    }
}

static void Task_StoryJumpMenu_MainInput(u8 taskId)
{
    u32 input = ListMenu_ProcessInput(sStoryJumpMenu->menuTaskId);

    if (JOY_NEW(B_BUTTON))
    {
        if (sStoryJumpMenu->currentAct == STORY_ACT_NONE)
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_StoryJumpMenu_WaitFadeAndExit;
        }
        else
        {
            PlaySE(SE_SELECT);
            sStoryJumpMenu->currentAct = STORY_ACT_NONE;
            StoryJumpMenu_PrintList(LIST_MODE_ACTS);
        }
    }
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        if (sStoryJumpMenu->currentAct == STORY_ACT_NONE)
        {
            sStoryJumpMenu->currentAct = input;
            StoryJumpMenu_PrintList(LIST_MODE_POINTS);
        }
        else
        {
            gTasks[taskId].tSelectedStoryPoint = input;

            if (STORY_JUMP_SAVE_WARN && gSaveFileStatus == SAVE_STATUS_OK)
            {
                StoryJumpMenu_ShowSaveWarning();
                gTasks[taskId].func = Task_StoryJumpMenu_YesNoMenuInput;
            }
            else
            {
                PlaySE(SE_PC_ON);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_StoryJumpMenu_WaitFadeAndJump;
            }
        }
    }
}

static void Task_StoryJumpMenu_WaitFadeAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sStoryJumpMenu->savedCallback);
        StoryJumpMenu_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_StoryJumpMenu_WaitFadeAndJump(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gStoryPointToJumpTo = gTasks[taskId].tSelectedStoryPoint;
        SetMainCallback2(CB2_JumpToStoryPoint);
        StoryJumpMenu_FreeResources();
        DestroyTask(taskId);
    }
}

#define TILEMAP_BUFFER_SIZE (1024 * 2)

static bool8 StoryJumpMenu_InitBgs(void)
{
    ResetAllBgsCoordinates();

    sBg2TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg2TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sStoryJumpMenuBgTemplates, NELEMS(sStoryJumpMenuBgTemplates));

    SetBgTilemapBuffer(2, sBg2TilemapBuffer);
    ScheduleBgCopyTilemapToVram(2);

    ShowBg(0);
    ShowBg(1);
    ShowBg(2);

    return TRUE;
}

#undef TILEMAP_BUFFER_SIZE

static void StoryJumpMenu_FadeAndExit(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_StoryJumpMenu_WaitFadeAndExit, 0);
    SetVBlankCallback(StoryJumpMenu_VBlankCB);
    SetMainCallback2(StoryJumpMenu_MainCB);
}

static bool8 StoryJumpMenu_LoadGraphics(void)
{
    switch (sStoryJumpMenu->loadState)
    {
    case 0:
        FreeAllWindowBuffers();
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(2, sStoryJumpMenuTiles, 0, 0, 0);
        sStoryJumpMenu->loadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderVram(sStoryJumpMenuTilemap, sBg2TilemapBuffer);
            sStoryJumpMenu->loadState++;
        }
        break;
    case 2:
        LoadPalette(sStoryJumpMenuPalette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(14), PLTT_SIZE_4BPP);
        sStoryJumpMenu->loadState++;
        break;
    case 3:
        LoadWindowGfx(WIN_TITLE, 0, 2, BG_PLTT_ID(15));
        sStoryJumpMenu->loadState++;
        break;
    default:
        sStoryJumpMenu->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void StoryJumpMenu_InitWindows(void)
{
    InitWindows(sStoryJumpMenuWindowTemplates);
    DeactivateAllTextPrinters();

    FillWindowPixelBuffer(WIN_TITLE, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_MSG, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_YESNO, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PutWindowTilemap(WIN_TITLE);
    PutWindowTilemap(WIN_LIST);
    PutWindowTilemap(WIN_MSG);
    PutWindowTilemap(WIN_YESNO);

    DrawStdFrameWithCustomTileAndPalette(WIN_TITLE, FALSE, 2, 15);
    DrawStdFrameWithCustomTileAndPalette(WIN_LIST, FALSE, 2, 15);

    CopyWindowToVram(WIN_TITLE, COPYWIN_FULL);
    CopyWindowToVram(WIN_LIST, COPYWIN_FULL);

    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
}

static const u8 sText_StoryJumpMenu[] = _("Story Jump Menu");
static const u8 sText_NewSaveWarning[] = _("This will start a new save file.\nDo you want to continue?");

static void StoryJumpMenu_PrintList(enum StoryJumpListMode listMode)
{
    struct ListMenuTemplate menuTemplate = {0};
    sStoryJumpMenu->currentItems = 0;

    FillWindowPixelBuffer(WIN_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch (listMode)
    {
    case LIST_MODE_ACTS:
        for (u32 i = 0; i < NUM_STORY_ACTS; i++)
        {
            sStoryJumpMenu->listItems[sStoryJumpMenu->currentItems].id = i;
            sStoryJumpMenu->listItems[sStoryJumpMenu->currentItems].name = gStoryActTitles[i];
            sStoryJumpMenu->currentItems++;
        }
        break;
    case LIST_MODE_POINTS:
        for (u32 i = 0; i < NUM_STORY_POINTS; i++)
        {
            if (gStoryPoints[i].act == sStoryJumpMenu->currentAct)
            {
                sStoryJumpMenu->listItems[sStoryJumpMenu->currentItems].id = i;
                sStoryJumpMenu->listItems[sStoryJumpMenu->currentItems].name = gStoryPoints[i].title;
                sStoryJumpMenu->currentItems++;
            }
        }
        break;
    }

    menuTemplate.items = sStoryJumpMenu->listItems;
    menuTemplate.moveCursorFunc = ListMenuDefaultCursorMoveFunc;
    menuTemplate.totalItems = sStoryJumpMenu->currentItems;
    menuTemplate.maxShowed = 9;
    menuTemplate.windowId = WIN_LIST;
    menuTemplate.header_X = 0;
    menuTemplate.item_X = 8;
    menuTemplate.cursor_X = 0;
    menuTemplate.upText_Y = 1;
    menuTemplate.cursorPal = 2;
    menuTemplate.fillValue = 1;
    menuTemplate.cursorShadowPal = 3;
    menuTemplate.lettersSpacing = 1;
    menuTemplate.itemVerticalPadding = 0;
    menuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    menuTemplate.fontId = FONT_NORMAL;
    menuTemplate.cursorKind = 0;
    sStoryJumpMenu->menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    StoryJumpMenu_RefreshListMenu();

    CopyWindowToVram(WIN_LIST, COPYWIN_GFX);
}

static void StoryJumpMenu_RefreshListMenu(void)
{
    gMultiuseListMenuTemplate.items = sStoryJumpMenu->listItems;
    gMultiuseListMenuTemplate.totalItems = sStoryJumpMenu->currentItems;
    gMultiuseListMenuTemplate.maxShowed = 9;
    gMultiuseListMenuTemplate.windowId = WIN_LIST;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 8;
    gMultiuseListMenuTemplate.cursor_X = 0;
    gMultiuseListMenuTemplate.upText_Y = 1;
    gMultiuseListMenuTemplate.cursorPal = 2;
    gMultiuseListMenuTemplate.fillValue = 1;
    gMultiuseListMenuTemplate.cursorShadowPal = 3;
    gMultiuseListMenuTemplate.lettersSpacing = 1;
    gMultiuseListMenuTemplate.itemVerticalPadding = 0;
    gMultiuseListMenuTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    gMultiuseListMenuTemplate.fontId = 1;
    gMultiuseListMenuTemplate.cursorKind = 0;
}

static void StoryJumpMenu_PrintTitle(void)
{
    FillWindowPixelBuffer(WIN_TITLE, PIXEL_FILL(TEXT_COLOR_WHITE));

    AddTextPrinterParameterized4(WIN_TITLE, FONT_NORMAL, 4, 0, 0, 0,
        sStoryJumpMenuWindowFontColors[FONT_GRAY], TEXT_SKIP_DRAW, sText_StoryJumpMenu);

    CopyWindowToVram(WIN_TITLE, COPYWIN_GFX);
}

static void StoryJumpMenu_ShowSaveWarning(void)
{
    FillWindowPixelBuffer(WIN_MSG, PIXEL_FILL(TEXT_COLOR_WHITE));
    FillWindowPixelBuffer(WIN_YESNO, PIXEL_FILL(TEXT_COLOR_WHITE));

    DrawStdFrameWithCustomTileAndPalette(WIN_MSG, FALSE, 2, 15);

    AddTextPrinterParameterized4(WIN_MSG, FONT_NORMAL, 4, 0, 0, 0,
        sStoryJumpMenuWindowFontColors[FONT_GRAY], TEXT_SKIP_DRAW, sText_NewSaveWarning);

    CreateYesNoMenu(&sStoryJumpMenuWindowTemplates[WIN_YESNO], 2, 15, 0);

    CopyWindowToVram(WIN_MSG, COPYWIN_GFX);
}


static void RemoveSaveWarningWindows(void)
{
    FillWindowPixelBuffer(WIN_MSG, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_YESNO, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    ClearStdWindowAndFrameToTransparent(WIN_MSG, FALSE);
    ClearStdWindowAndFrameToTransparent(WIN_YESNO, FALSE);

    ClearWindowTilemap(WIN_MSG);
    ClearWindowTilemap(WIN_YESNO);

    CopyWindowToVram(WIN_MSG, COPYWIN_GFX);
    CopyWindowToVram(WIN_YESNO, COPYWIN_GFX);
}


static void Task_StoryJumpMenu_YesNoMenuInput(u8 taskId)
{
    switch (Menu_ProcessInputNoWrapClearOnChoose())
    {
    case 0: // YES
        PlaySE(SE_PC_ON);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_StoryJumpMenu_WaitFadeAndJump;
        break;
    case 1: // NO
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        RemoveSaveWarningWindows();
        gTasks[taskId].func = Task_StoryJumpMenu_MainInput;
        break;
    }
}

static void StoryJumpMenu_FreeResources(void)
{
    if (sStoryJumpMenu != NULL)
    {
        Free(sStoryJumpMenu);
    }
    if (sBg2TilemapBuffer != NULL)
    {
        Free(sBg2TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}
