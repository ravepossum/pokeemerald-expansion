#include "global.h"
#include "event_data.h"
#include "field_screen_effect.h"
#include "overworld.h"
#include "quest_debug.h"
#include "string_util.h"
#include "constants/flags.h"
#include "constants/maps.h"
#include "constants/vars.h"

// Utility functions

void DummySetupFunc(void){}

#define currentQuestState gQuests[questID].states[questState]

void SetQuestState(u16 questID, u8 questState)
{
    currentQuestState.setupFunc();
}

void JumpToQuestState(u16 questID, u8 questState)
{
    SetQuestState(questID, questState);
    SetWarpDestination(currentQuestState.mapGroup, currentQuestState.mapNum, currentQuestState.warpId, currentQuestState.x, currentQuestState.y);
    DoWarp();
    ResetInitialPlayerAvatarState();
}

u8 *CopyQuestName(u16 questID, u8 *dst)
{
    return StringCopy(dst, gQuests[questID].title);
}

u8 *CopyQuestStateName(u16 questID, u8 questState, u8 *dst)
{
    return StringCopy(dst, currentQuestState.title);
}

#undef currentQuestState

u32 GetQuestStateCount(u16 questID)
{
    for (u32 i = 0; i < MAX_QUEST_STATES; i++)
    {
        if (gQuests[questID].states[i].setupFunc == DummySetupFunc)
            return i;
    }
    return MAX_QUEST_STATES;
}

// QUEST_INTRO_MALE - example code

static void QuestIntroMale_SetupIntroFlags(void)
{
    FlagClear(FLAG_SYS_POKEMON_GET);
    FlagClear(FLAG_SYS_POKEDEX_GET);
    FlagClear(FLAG_RECEIVED_POKEDEX_FROM_BIRCH);
    FlagClear(FLAG_RESCUED_BIRCH);
    FlagClear(FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE);
    FlagClear(FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG);
    FlagClear(FLAG_ADVENTURE_STARTED);
    FlagClear(FLAG_SET_WALL_CLOCK);
    FlagClear(FLAG_RECEIVED_RUNNING_SHOES);
    FlagClear(FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK);
    FlagClear(FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1);
    FlagClear(FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2);
    
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN);
    FlagSet(FLAG_HIDE_MAP_NAME_POPUP);

    VarSet(VAR_LITTLEROOT_INTRO_STATE, 1);
    VarSet(VAR_LITTLEROOT_TOWN_STATE, 0);
    VarSet(VAR_BIRCH_LAB_STATE, 0);
    VarSet(VAR_ROUTE101_STATE, 0);
    VarSet(VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1);
    VarSet(VAR_LITTLEROOT_RIVAL_STATE, 0);
}

void QuestIntroMale_InTruck(void)
{
    QuestIntroMale_SetupIntroFlags();
    VarSet(VAR_LITTLEROOT_INTRO_STATE, 1);
    SetDynamicWarpWithCoords(0, MAP_GROUP(LITTLEROOT_TOWN), MAP_NUM(LITTLEROOT_TOWN), -1, 3, 10);
}

void QuestIntroMale_EnteredHouse(void)
{
    QuestIntroMale_SetupIntroFlags();
    VarSet(VAR_LITTLEROOT_INTRO_STATE, 3);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE);
    FlagClear(FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN);
    FlagClear(FLAG_HIDE_MAP_NAME_POPUP);
}

void QuestIntroMale_ClockSet(void)
{
    QuestIntroMale_EnteredHouse();
    VarSet(VAR_LITTLEROOT_INTRO_STATE, 6);
    FlagSet(FLAG_SET_WALL_CLOCK);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1);
    FlagSet(FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2);
}

void QuestIntroMale_GoMeetRival(void)
{
    QuestIntroMale_ClockSet();
    VarSet(VAR_TEMP_1, 1);
    VarSet(VAR_LITTLEROOT_INTRO_STATE, 7);
}
