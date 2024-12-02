#include "global.h"
#include "blit.h"
#include "window.h"
#include "menu.h"
#include "palette.h"
#include "event_data.h"
#include "constants/mugshots.h"

#define MUGSHOT_PALETTE_NUM 13

struct Mugshot{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u32* image;
    const u16* palette;
};

void DrawMugshot(void); //VAR_0x8000 = mugshot id
void DrawMugshotAtPos(void); //VAR_0x8000 = mugshot id, VAR_0x8001 = x, VAR_0x8002 = y
void ClearMugshot(void);


static const u32 sMugshotImg_Blaine[] = INCBIN_U32("graphics/mugshots/blaine.4bpp.lz");
static const u16 sMugshotPal_Blaine[] = INCBIN_U16("graphics/mugshots/blaine.gbapal");

static const u32 sMugshotImg_Leaf[] = INCBIN_U32("graphics/mugshots/leaf.4bpp.lz");
static const u16 sMugshotPal_Leaf[] = INCBIN_U16("graphics/mugshots/leaf.gbapal");

static const u32 sMugshotImg_Kris[] = INCBIN_U32("graphics/mugshots/kris.4bpp.lz");
static const u16 sMugshotPal_Kris[] = INCBIN_U16("graphics/mugshots/kris.gbapal");

static const u32 sMugshotImg_Morty[] = INCBIN_U32("graphics/mugshots/morty.4bpp.lz");
static const u16 sMugshotPal_Morty[] = INCBIN_U16("graphics/mugshots/morty.gbapal");

static const u32 sMugshotImg_Gold[] = INCBIN_U32("graphics/mugshots/gold.4bpp.lz");
static const u16 sMugshotPal_Gold[] = INCBIN_U16("graphics/mugshots/gold.gbapal");

static const u32 sMugshotImg_Will[] = INCBIN_U32("graphics/mugshots/will.4bpp.lz");
static const u16 sMugshotPal_Will[] = INCBIN_U16("graphics/mugshots/will.gbapal");

static const u32 sMugshotImg_Bruno[] = INCBIN_U32("graphics/mugshots/bruno.4bpp.lz");
static const u16 sMugshotPal_Bruno[] = INCBIN_U16("graphics/mugshots/bruno.gbapal");

static const u32 sMugshotImg_Lorlei[] = INCBIN_U32("graphics/mugshots/lorlei.4bpp.lz");
static const u16 sMugshotPal_Lorlei[] = INCBIN_U16("graphics/mugshots/lorlei.gbapal");

static const u32 sMugshotImg_Bugsy[] = INCBIN_U32("graphics/mugshots/bugsy.4bpp.lz");
static const u16 sMugshotPal_Bugsy[] = INCBIN_U16("graphics/mugshots/bugsy.gbapal");

static const u32 sMugshotImg_Erika[] = INCBIN_U32("graphics/mugshots/erika.4bpp.lz");
static const u16 sMugshotPal_Erika[] = INCBIN_U16("graphics/mugshots/erika.gbapal");

static const u32 sMugshotImg_Sabrina[] = INCBIN_U32("graphics/mugshots/sabrina.4bpp.lz");
static const u16 sMugshotPal_Sabrina[] = INCBIN_U16("graphics/mugshots/sabrina.gbapal");

static const u32 sMugshotImg_Pryce[] = INCBIN_U32("graphics/mugshots/pryce.4bpp.lz");
static const u16 sMugshotPal_Pryce[] = INCBIN_U16("graphics/mugshots/pryce.gbapal");

static const u32 sMugshotImg_Brendan[] = INCBIN_U32("graphics/mugshots/brendan.4bpp.lz");
static const u16 sMugshotPal_Brendan[] = INCBIN_U16("graphics/mugshots/brendan.gbapal");

static const u32 sMugshotImg_Steven[] = INCBIN_U32("graphics/mugshots/steven.4bpp.lz");
static const u16 sMugshotPal_Steven[] = INCBIN_U16("graphics/mugshots/steven.gbapal");

static const u32 sMugshotImg_May[] = INCBIN_U32("graphics/mugshots/may.4bpp.lz");
static const u16 sMugshotPal_May[] = INCBIN_U16("graphics/mugshots/may.gbapal");

static const u32 sMugshotImg_Jasmine[] = INCBIN_U32("graphics/mugshots/jasmine.4bpp.lz");
static const u16 sMugshotPal_Jasmine[] = INCBIN_U16("graphics/mugshots/jasmine.gbapal");

static const u32 sMugshotImg_Red[] = INCBIN_U32("graphics/mugshots/red.4bpp.lz");
static const u16 sMugshotPal_Red[] = INCBIN_U16("graphics/mugshots/red.gbapal");

static const u32 sMugshotImg_Misty[] = INCBIN_U32("graphics/mugshots/misty.4bpp.lz");
static const u16 sMugshotPal_Misty[] = INCBIN_U16("graphics/mugshots/misty.gbapal");

static const u32 sMugshotImg_Agatha[] = INCBIN_U32("graphics/mugshots/agatha.4bpp.lz");
static const u16 sMugshotPal_Agatha[] = INCBIN_U16("graphics/mugshots/agatha.gbapal");

static const u32 sMugshotImg_Lance[] = INCBIN_U32("graphics/mugshots/lance.4bpp.lz");
static const u16 sMugshotPal_Lance[] = INCBIN_U16("graphics/mugshots/lance.gbapal");

static const u32 sMugshotImg_Blue[] = INCBIN_U32("graphics/mugshots/blue.4bpp.lz");
static const u16 sMugshotPal_Blue[] = INCBIN_U16("graphics/mugshots/blue.gbapal");

static const u32 sMugshotImg_Brock[] = INCBIN_U32("graphics/mugshots/brock.4bpp.lz");
static const u16 sMugshotPal_Brock[] = INCBIN_U16("graphics/mugshots/brock.gbapal");

static const u32 sMugshotImg_Whitney[] = INCBIN_U32("graphics/mugshots/whitney.4bpp.lz");
static const u16 sMugshotPal_Whitney[] = INCBIN_U16("graphics/mugshots/whitney.gbapal");

static const u32 sMugshotImg_Janine[] = INCBIN_U32("graphics/mugshots/janine.4bpp.lz");
static const u16 sMugshotPal_Janine[] = INCBIN_U16("graphics/mugshots/janine.gbapal");

static const u32 sMugshotImg_Claire[] = INCBIN_U32("graphics/mugshots/claire.4bpp.lz");
static const u16 sMugshotPal_Claire[] = INCBIN_U16("graphics/mugshots/claire.gbapal");

static const u32 sMugshotImg_Karen[] = INCBIN_U32("graphics/mugshots/karen.4bpp.lz");
static const u16 sMugshotPal_Karen[] = INCBIN_U16("graphics/mugshots/karen.gbapal");

static const u32 sMugshotImg_Surge[] = INCBIN_U32("graphics/mugshots/surge.4bpp.lz");
static const u16 sMugshotPal_Surge[] = INCBIN_U16("graphics/mugshots/surge.gbapal");

static const u32 sMugshotImg_Chuck[] = INCBIN_U32("graphics/mugshots/chuck.4bpp.lz");
static const u16 sMugshotPal_Chuck[] = INCBIN_U16("graphics/mugshots/chuck.gbapal");

static const u32 sMugshotImg_Silver[] = INCBIN_U32("graphics/mugshots/silver.4bpp.lz");
static const u16 sMugshotPal_Silver[] = INCBIN_U16("graphics/mugshots/silver.gbapal");

static const u32 sMugshotImg_Falkner[] = INCBIN_U32("graphics/mugshots/falkner.4bpp.lz");
static const u16 sMugshotPal_Falkner[] = INCBIN_U16("graphics/mugshots/falkner.gbapal");

static const u32 sMugshotImg_Koga[] = INCBIN_U32("graphics/mugshots/koga.4bpp.lz");
static const u16 sMugshotPal_Koga[] = INCBIN_U16("graphics/mugshots/koga.gbapal");

static const u32 sMugshotImg_Proton[] = INCBIN_U32("graphics/mugshots/proton.4bpp.lz");
static const u16 sMugshotPal_Proton[] = INCBIN_U16("graphics/mugshots/proton.gbapal");

static const u32 sMugshotImg_Petrel[] = INCBIN_U32("graphics/mugshots/petrel.4bpp.lz");
static const u16 sMugshotPal_Petrel[] = INCBIN_U16("graphics/mugshots/petrel.gbapal");

static const u32 sMugshotImg_Lucas[] = INCBIN_U32("graphics/mugshots/lucas.4bpp.lz");
static const u16 sMugshotPal_Lucas[] = INCBIN_U16("graphics/mugshots/lucas.gbapal");

static const u32 sMugshotImg_Ghetsis[] = INCBIN_U32("graphics/mugshots/ghetsis.4bpp.lz");
static const u16 sMugshotPal_Ghetsis[] = INCBIN_U16("graphics/mugshots/ghetsis.gbapal");

static const u32 sMugshotImg_Maid[] = INCBIN_U32("graphics/mugshots/maid.4bpp.lz");
static const u16 sMugshotPal_Maid[] = INCBIN_U16("graphics/mugshots/maid.gbapal");

static const u32 sMugshotImg_Baby[] = INCBIN_U32("graphics/mugshots/baby.4bpp.lz");
static const u16 sMugshotPal_Baby[] = INCBIN_U16("graphics/mugshots/baby.gbapal");



static const struct Mugshot sMugshots[] = {
[MUGSHOT_BLAINE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Blaine, .palette = sMugshotPal_Blaine},
[MUGSHOT_LEAF] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Leaf, .palette = sMugshotPal_Leaf},
[MUGSHOT_KRIS] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Kris, .palette = sMugshotPal_Kris},
[MUGSHOT_GOLD] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Gold, .palette =  sMugshotPal_Gold},
[MUGSHOT_WILL] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Will, .palette =  sMugshotPal_Will},
[MUGSHOT_MORTY] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Morty, .palette =  sMugshotPal_Morty},
[MUGSHOT_LORLEI] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Lorlei, .palette =  sMugshotPal_Lorlei},
[MUGSHOT_BUGSY] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Bugsy, .palette =  sMugshotPal_Bugsy},
[MUGSHOT_ERIKA] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Erika, .palette =  sMugshotPal_Erika},
[MUGSHOT_SABRINA] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Sabrina, .palette =  sMugshotPal_Sabrina},
[MUGSHOT_PRYCE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Pryce, .palette =  sMugshotPal_Pryce},
[MUGSHOT_BRUNO] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Bruno, .palette =  sMugshotPal_Bruno},
[MUGSHOT_BRENDAN] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Brendan, .palette =  sMugshotPal_Brendan},
[MUGSHOT_STEVEN] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Steven, .palette =  sMugshotPal_Steven},
[MUGSHOT_MAY] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_May, .palette =  sMugshotPal_May},
[MUGSHOT_JASMINE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Jasmine, .palette =  sMugshotPal_Jasmine},
[MUGSHOT_RED] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Red, .palette =  sMugshotPal_Red},
[MUGSHOT_MISTY] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Misty, .palette =  sMugshotPal_Misty},
[MUGSHOT_AGATHA] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Agatha, .palette =  sMugshotPal_Agatha},
[MUGSHOT_BLUE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Blue, .palette =  sMugshotPal_Blue},
[MUGSHOT_LANCE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Lance, .palette =  sMugshotPal_Lance},
[MUGSHOT_BROCK] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Brock, .palette =  sMugshotPal_Brock},
[MUGSHOT_KAREN] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Karen, .palette =  sMugshotPal_Karen},
[MUGSHOT_JANINE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Janine, .palette =  sMugshotPal_Janine},
[MUGSHOT_WHITNEY] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Whitney, .palette =  sMugshotPal_Whitney},
[MUGSHOT_CLAIRE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Claire, .palette =  sMugshotPal_Claire},
[MUGSHOT_SURGE] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Surge, .palette =  sMugshotPal_Surge},
[MUGSHOT_CHUCK] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Chuck, .palette =  sMugshotPal_Chuck},
[MUGSHOT_KOGA] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Koga, .palette =  sMugshotPal_Koga},
[MUGSHOT_SILVER] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Silver, .palette =  sMugshotPal_Silver},
[MUGSHOT_FALKNER] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Falkner, .palette =  sMugshotPal_Falkner},
[MUGSHOT_PROTON] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Proton, .palette =  sMugshotPal_Proton},
[MUGSHOT_PETREL] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Petrel, .palette =  sMugshotPal_Petrel},
[MUGSHOT_GHETSIS] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Ghetsis, .palette =  sMugshotPal_Ghetsis},
[MUGSHOT_LUCAS] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Lucas, .palette =  sMugshotPal_Lucas},
[MUGSHOT_MAID] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Maid, .palette =  sMugshotPal_Maid},
[MUGSHOT_BABY] = {.x = 20, .y = 6, .width = 64, .height = 64, .image = sMugshotImg_Baby, .palette =  sMugshotPal_Baby},
    //ADD YOUR MUGSHOTS HERE
};


//WindowId + 1, 0 if window is not open
static EWRAM_DATA u8 sMugshotWindow = 0;

void ClearMugshot(void){
    if(sMugshotWindow != 0){
        ClearStdWindowAndFrameToTransparent(sMugshotWindow - 1, 0);
        CopyWindowToVram(sMugshotWindow - 1, 3);
        RemoveWindow(sMugshotWindow - 1);
        sMugshotWindow = 0;
    }
}

static void DrawMugshotCore(const struct Mugshot* const mugshot, int x, int y){
    struct WindowTemplate t;
    u16 windowId;
    
    if(sMugshotWindow != 0){
        ClearMugshot();
    }
    
    #if GAME_VERSION==VERSION_EMERALD
    SetWindowTemplateFields(&t, 0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #else
    t = SetWindowTemplateFields(0, x, y, mugshot->width/8, mugshot->height/8, MUGSHOT_PALETTE_NUM, 0x40);
    #endif
    windowId = AddWindow(&t);
    sMugshotWindow = windowId + 1;
    
    LoadPalette(mugshot->palette, 16 * MUGSHOT_PALETTE_NUM, 32);
    CopyToWindowPixelBuffer(windowId, (const void*)mugshot->image, 0, 0);
    PutWindowRectTilemap(windowId, 0, 0, mugshot->width/8, mugshot->height/8);
    CopyWindowToVram(windowId, 3);
}

void DrawMugshot(void){
    const struct Mugshot* const mugshot = sMugshots + VarGet(VAR_0x8000);
    DrawMugshotCore(mugshot, mugshot->x, mugshot->y);
}

void DrawMugshotAtPos(void){
    DrawMugshotCore(sMugshots + VarGet(VAR_0x8000), VarGet(VAR_0x8001), VarGet(VAR_0x8002));
}