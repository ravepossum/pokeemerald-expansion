#ifndef STORY_JUMP_MENU_H
#define STORY_JUMP_MENU_H

#define STORY_JUMP_BUTTON    (SELECT_BUTTON) // key to hold to activate story jump from title screen
#define STORY_JUMP_SAVE_WARN TRUE // whether or not to prompt for confirmation when creating a save if one already exists
#define STORY_JUMP_DELAY     60 // how long the button needs to be held to open the story jump menu

void CB2_InitStoryJumpMenu(void);

#endif // STORY_JUMP_MENU_H
