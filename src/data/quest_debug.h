const struct Quest gQuests[NUM_QUESTS] =
{
    [QUEST_INTRO_MALE] = // example quest
    {
        .questID = QUEST_INTRO_MALE,
        .title = COMPOUND_STRING("Intro Male"),
        .states =
        {    
            {
                .title = COMPOUND_STRING("In Truck"),
                .setupFunc = QuestIntroMale_InTruck,
                .mapGroup = MAP_GROUP(INSIDE_OF_TRUCK),
                .mapNum = MAP_NUM(INSIDE_OF_TRUCK),
                .warpId = WARP_ID_NONE,
                .x = -1,
                .y = -1,
            },
            {
                .title = COMPOUND_STRING("Entered House"),
                .setupFunc = QuestIntroMale_EnteredHouse,
                .mapGroup = MAP_GROUP(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
                .mapNum = MAP_NUM(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
                .warpId = 1,
                .x = 0,
                .y = 0,
            },
            {
                .title = COMPOUND_STRING("Clock Set"),
                .setupFunc = QuestIntroMale_ClockSet,
                .mapGroup = MAP_GROUP(LITTLEROOT_TOWN_BRENDANS_HOUSE_2F),
                .mapNum = MAP_NUM(LITTLEROOT_TOWN_BRENDANS_HOUSE_2F),
                .warpId = -1,
                .x = 5,
                .y = 2,
            },
            {
                .title = COMPOUND_STRING("Go Meet Rival"),
                .setupFunc = QuestIntroMale_GoMeetRival,
                .mapGroup = MAP_GROUP(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
                .mapNum = MAP_NUM(LITTLEROOT_TOWN_BRENDANS_HOUSE_1F),
                .warpId = -1,
                .x = 4,
                .y = 5,
            },
            DUMMY_QUEST_STATE // you have to terminate the state list with a DUMMY_QUEST_STATE
        },
    },
};
