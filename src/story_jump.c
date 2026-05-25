#include "story_jump.h"

#include "global.h"
#include "event_data.h"
#include "field_screen_effect.h"
#include "overworld.h"
#include "string_util.h"
#include "constants/flags.h"
#include "constants/maps.h"
#include "constants/vars.h"

void DummySetupFunc(void){}

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

void SetStoryPoint(u16 storyPointID)
{
    CallAllStoryPointDependencies(storyPointID);
    SetupIndividualStoryPoint(storyPointID);
    // Create party using default with the min level assigned to the story point
}

void JumpToStoryPoint(u16 storyPointID)
{
    SetStoryPoint(storyPointID);
    SetWarpDestination(
        gStoryPoints[storyPointID].mapGroup, 
        gStoryPoints[storyPointID].mapNum, 
        gStoryPoints[storyPointID].warpId, 
        gStoryPoints[storyPointID].x, 
        gStoryPoints[storyPointID].y
    );
    DoWarp();
    ResetInitialPlayerAvatarState();
}

// story jump functionality like jumping to a point and running dependencies will go here
// also, there will be a section notated for the user to add their own setup funcs
// or maybe we suggest a blank file to reduces conflicts idk
