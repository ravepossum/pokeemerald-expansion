
#ifndef STORY_JUMP_H
#define STORY_JUMP_H

#include "gba/types.h"

typedef void (*StoryPointSetupFunc)(void);

#define MAX_EXPLICIT_STORY_POINT_DEPENDENCIES 10

enum StoryAct
{
    STORY_ACT_EXAMPLE_1,
    STORY_ACT_EXAMPLE_2,
    STORY_ACT_EXAMPLE_3,
    NUM_STORY_ACTS,
    STORY_ACT_NONE = 0xFF,
};

enum StoryPointID
{
    STORY_POINT_EXAMPLE_1,
    STORY_POINT_EXAMPLE_2,
    STORY_POINT_EXAMPLE_3,
    STORY_POINT_EXAMPLE_4,
    STORY_POINT_EXAMPLE_5,
    STORY_POINT_EXAMPLE_6,
    NUM_STORY_POINTS,
    STORY_POINT_NONE = 0xFFFF,
};

struct StoryPoint
{
    const u8 *title;
    const enum StoryAct act;
    const u16 dependencies[MAX_EXPLICIT_STORY_POINT_DEPENDENCIES];
    const StoryPointSetupFunc setupFunc;
    const u8 minLevel;
    const s8 mapGroup;
    const s8 mapNum;
    const s8 warpId;
    const s8 x;
    const s8 y;
};

void DummySetupFunc(void);

extern const struct StoryPoint gStoryPoints[];

#endif // STORY_JUMP_H
