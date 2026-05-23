#ifndef GUARD_QUEST_DEBUG_H
#define GUARD_QUEST_DEBUG_H

#define MAX_QUEST_STATES 10

typedef void (*QuestStateFunc)(void);

#define MAX_QUEST_EXPLICIT_DEPENDENCIES 10

enum QuestAct 
{
    QUEST_ACT_1,
    NUM_QUEST_ACTS
};

enum QuestID 
{
    QUEST_INTRO_MALE,
    NUM_QUESTS,
    QUEST_NONE = 0xFFFF
};

struct QuestState
{
    const u8 *title;
    const QuestStateFunc setupFunc;
    const s8 mapGroup;
    const s8 mapNum;
    const s8 warpId;
    const s8 x;
    const s8 y;
};

struct Quest
{
    const u8 *title;
    const enum QuestAct act;
    const u16 dependencies[MAX_QUEST_EXPLICIT_DEPENDENCIES];
    const struct QuestState states[MAX_QUEST_STATES];
};

void DummySetupFunc(void);

#define DUMMY_QUEST_STATE                                                                                                      \
{                                                                                                                              \
    .title = COMPOUND_STRING("DUMMY"), .setupFunc = DummySetupFunc, .mapGroup = 0, .mapNum = 0, .warpId = 0, .x = 0, .y = 0    \
}

extern const struct Quest gQuests[];

// Utility functions
void SetQuestState(u16 questID, u8 questState);
void JumpToQuestState(u16 questID, u8 questState);
u8 *CopyQuestName(u16 questID, u8 *dst);
u8 *CopyQuestStateName(u16 questID, u8 questState, u8 *dst);
u32 GetQuestStateCount(u16 questID);

// QUEST_INTRO_MALE - example code
void QuestIntroMale_InTruck(void);
void QuestIntroMale_EnteredHouse(void);
void QuestIntroMale_ClockSet(void);
void QuestIntroMale_GoMeetRival(void);

#endif // GUARD_QUEST_DEBUG_H
