
#define STORY_POINT_MAP(map) .mapGroup = MAP_GROUP(map), .mapNum = MAP_NUM(map)

const u8* const gStoryActTitles[NUM_STORY_ACTS] = 
{
    [STORY_ACT_EXAMPLE_1] = COMPOUND_STRING("Example Act 1"),
    [STORY_ACT_EXAMPLE_2] = COMPOUND_STRING("Example Act 2"),
    [STORY_ACT_EXAMPLE_3] = COMPOUND_STRING("Example Act 3"),
};

const u16 gDefaultStoryJumpTeam[] =
{
    SPECIES_BULBASAUR,
};

const struct StoryPoint gStoryPoints[NUM_STORY_POINTS] =
{
    [STORY_POINT_EXAMPLE_1] = {
        .title = COMPOUND_STRING("Example Story Point 1"),
        .act = STORY_ACT_EXAMPLE_1,
        .dependencies = {STORY_POINT_NONE},
        .setupFunc = DummySetupFunc,
        .minLevel = 5,
        STORY_POINT_MAP(MAP_LITTLEROOT_TOWN),
        .warpId = WARP_ID_NONE,
        .x = 0,
        .y = 0,
    },
    [STORY_POINT_EXAMPLE_2] = {
        .title = COMPOUND_STRING("Example Story Point 2"),
        .act = STORY_ACT_EXAMPLE_1,
        .dependencies = {STORY_POINT_NONE},
        .setupFunc = DummySetupFunc,
        .minLevel = 5,
        STORY_POINT_MAP(MAP_LITTLEROOT_TOWN),
        .warpId = WARP_ID_NONE,
        .x = 0,
        .y = 0,
    },
    [STORY_POINT_EXAMPLE_3] = {
        .title = COMPOUND_STRING("Example Story Point 3"),
        .act = STORY_ACT_EXAMPLE_2,
        .dependencies = {STORY_POINT_NONE},
        .setupFunc = DummySetupFunc,
        .minLevel = 5,
        STORY_POINT_MAP(MAP_LITTLEROOT_TOWN),
        .warpId = WARP_ID_NONE,
        .x = 0,
        .y = 0,
    },
    [STORY_POINT_EXAMPLE_4] = {
        .title = COMPOUND_STRING("Example Story Point 4"),
        .act = STORY_ACT_EXAMPLE_2,
        .dependencies = {STORY_POINT_NONE},
        .setupFunc = DummySetupFunc,
        .minLevel = 5,
        STORY_POINT_MAP(MAP_LITTLEROOT_TOWN),
        .warpId = WARP_ID_NONE,
        .x = 0,
        .y = 0,
    },
    [STORY_POINT_EXAMPLE_5] = {
        .title = COMPOUND_STRING("Example Story Point 5"),
        .act = STORY_ACT_EXAMPLE_3,
        .dependencies = {STORY_POINT_NONE},
        .setupFunc = DummySetupFunc,
        .minLevel = 5,
        STORY_POINT_MAP(MAP_LITTLEROOT_TOWN),
        .warpId = WARP_ID_NONE,
        .x = 0,
        .y = 0,
    },
    [STORY_POINT_EXAMPLE_6] = {
        .title = COMPOUND_STRING("Example Story Point 6"),
        .act = STORY_ACT_EXAMPLE_3,
        .dependencies = {STORY_POINT_NONE},
        .setupFunc = DummySetupFunc,
        .minLevel = 5,
        STORY_POINT_MAP(MAP_LITTLEROOT_TOWN),
        .warpId = WARP_ID_NONE,
        .x = 0,
        .y = 0,
    },
};
