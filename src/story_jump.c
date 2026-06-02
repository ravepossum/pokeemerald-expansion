#include "story_jump.h"

#include "global.h"
#include "event_data.h"
#include "field_screen_effect.h"
#include "overworld.h"
#include "string_util.h"
#include "random.h"
#include "new_game.h"
#include "script_pokemon_util.h"
#include "rtc.h"
#include "clock.h"
#include "sound.h"
#include "load_save.h"
#include "main.h"
#include "script.h"
#include "story_jump_menu.h"
#include "story_jump_setup_funcs.h"
#include "main_menu.h"
#include "play_time.h"
#include "constants/flags.h"
#include "constants/maps.h"
#include "constants/vars.h"


static void CreateDefaultParty(u16 storyPointID)
{
    FlagSet(FLAG_SYS_POKEMON_GET);
    for (u32 i = 0; i < ARRAY_COUNT(gDefaultStoryJumpParty); i++)
    {
        ScriptGiveMon(gDefaultStoryJumpParty[i], gStoryPoints[storyPointID].minLevel, ITEM_NONE);
    }    
}

static void SetupIndividualStoryPoint(u16 storyPointID)
{
    gStoryPoints[storyPointID].setupFunc();            
}

static void CallAllStoryPointDependencies(u16 storyPointID)
{
    for (u32 currentPoint = 0; currentPoint < storyPointID; currentPoint++)
    {
        SetupIndividualStoryPoint(currentPoint);
    }

    for (u32 depIndex = 0; depIndex < MAX_EXPLICIT_STORY_POINT_DEPENDENCIES; depIndex++)
    {
        if (gStoryPoints[storyPointID].dependencies[depIndex] == STORY_POINT_NONE) break;

        SetupIndividualStoryPoint(gStoryPoints[storyPointID].dependencies[depIndex]);
    }
}

static void StoryJumpResetSaveFile(void)
{
    gSaveBlock2Ptr->playerGender = Random() % 2;
    NewGameBirchSpeech_SetDefaultPlayerName(0);
    StopMapMusic();
    NewGameInitData();
    ResetInitialPlayerAvatarState();
    PlayTimeCounter_Start();
    ScriptContext_Init();
    UnlockPlayerFieldControls();
}

static void StoryJumpWarpFromTitlescreen(u16 storyPointID)
{
    SetContinueGameWarpStatus();
    SetContinueGameWarp(
        gStoryPoints[storyPointID].mapGroup, 
        gStoryPoints[storyPointID].mapNum, 
        gStoryPoints[storyPointID].warpId, 
        gStoryPoints[storyPointID].x, 
        gStoryPoints[storyPointID].y
    );
    SetMainCallback2(CB2_ContinueSavedGame);
}

void SetStoryPoint(u16 storyPointID)
{
    bool32 resetSaveFile = TRUE;

    if (STORY_JUMP_VAR_CURRENT_POINT != 0)
    {
        u32 currentPoint = VarGet(STORY_JUMP_VAR_CURRENT_POINT);
        resetSaveFile = currentPoint != 0 && storyPointID <= currentPoint;
        VarSet(STORY_JUMP_VAR_CURRENT_POINT, storyPointID);
    }

    if (resetSaveFile) StoryJumpResetSaveFile();

    CallAllStoryPointDependencies(storyPointID);
    SetupIndividualStoryPoint(storyPointID);
    if (gStoryPoints[storyPointID].minLevel != 0) CreateDefaultParty(storyPointID);
}

void JumpToStoryPoint(u16 storyPointID)
{
    SetStoryPoint(storyPointID);
    StoryJumpWarpFromTitlescreen(storyPointID);
}

void CB2_JumpToStoryPoint(void)
{
    JumpToStoryPoint(gStoryPointToJumpTo);
}
