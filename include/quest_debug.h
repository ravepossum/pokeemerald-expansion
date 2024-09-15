#ifndef GUARD_QUEST_DEBUG_H
#define GUARD_QUEST_DEBUG_H

#define MAX_QUEST_STATES 10

typedef void (*QuestStateFunc)(void);

enum QuestID 
{
    QUEST_INTRO_MALE,
    NUM_QUESTS
};

struct QuestState
{
    const u8 *title;
    QuestStateFunc setupFunc;
    s8 mapGroup;
    s8 mapNum;
    s8 warpId;
    s8 x;
    s8 y;
};

struct Quest
{
    const u8 *title;
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