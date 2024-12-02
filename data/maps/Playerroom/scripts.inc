# 1 "data/maps/Playerroom/scripts.pory"

# 2 "data/maps/Playerroom/scripts.pory"
Playerroom_MapScripts::
# 3 "data/maps/Playerroom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Playerroom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, outfit
# 5 "data/maps/Playerroom/scripts.pory"

# 6 "data/maps/Playerroom/scripts.pory"
	.byte 0
# 7 "data/maps/Playerroom/scripts.pory"
	Playerroom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Playerroom/scripts.pory"
     map_script_2 LUXURA_TRAGEDY, 1, mira
# 9 "data/maps/Playerroom/scripts.pory"
	 map_script_2 LUXURA_TRAGEDY, 5, metdad
# 10 "data/maps/Playerroom/scripts.pory"
	.2byte 0

mira::
# 13 "data/maps/Playerroom/scripts.pory"
	lockall
# 14 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_0
# 15 "data/maps/Playerroom/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera1
# 17 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove
# 18 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 19 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 20 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_1
# 21 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 22 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera
# 23 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove1
# 24 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 25 "data/maps/Playerroom/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 27 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_2
# 28 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 29 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar1
# 30 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 31 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_3
# 32 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 33 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 34 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_4
# 35 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 36 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 37 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_5
# 38 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 39 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, xylar
# 40 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 41 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_6
# 42 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 43 "data/maps/Playerroom/scripts.pory"
	namebox name4
# 44 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_7
# 45 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 46 "data/maps/Playerroom/scripts.pory"
	namebox Xylar
# 47 "data/maps/Playerroom/scripts.pory"
	msgbox mira_Text_8
# 48 "data/maps/Playerroom/scripts.pory"
	hidenamebox
# 49 "data/maps/Playerroom/scripts.pory"
	applymovement 1, miramove2
# 50 "data/maps/Playerroom/scripts.pory"
	waitmovement 0
# 51 "data/maps/Playerroom/scripts.pory"
	removeobject 1
# 52 "data/maps/Playerroom/scripts.pory"
	releaseall
# 53 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x0E9
# 54 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 2
	return


# 57 "data/maps/Playerroom/scripts.pory"
miramove:
# 58 "data/maps/Playerroom/scripts.pory"
	face_up
# 59 "data/maps/Playerroom/scripts.pory"
	set_visible
	step_end

# 62 "data/maps/Playerroom/scripts.pory"
miramove2:
# 63 "data/maps/Playerroom/scripts.pory"
	emote_happy
# 64 "data/maps/Playerroom/scripts.pory"
	walk_right
# 64 "data/maps/Playerroom/scripts.pory"
	walk_right
# 65 "data/maps/Playerroom/scripts.pory"
	walk_down
# 65 "data/maps/Playerroom/scripts.pory"
	walk_down
# 65 "data/maps/Playerroom/scripts.pory"
	walk_down
# 65 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 68 "data/maps/Playerroom/scripts.pory"
miramove1:
# 69 "data/maps/Playerroom/scripts.pory"
	walk_up
# 69 "data/maps/Playerroom/scripts.pory"
	walk_up
# 69 "data/maps/Playerroom/scripts.pory"
	walk_up
# 69 "data/maps/Playerroom/scripts.pory"
	walk_up
# 70 "data/maps/Playerroom/scripts.pory"
	walk_left
# 70 "data/maps/Playerroom/scripts.pory"
	walk_left
# 71 "data/maps/Playerroom/scripts.pory"
	emote_upset
	step_end

# 73 "data/maps/Playerroom/scripts.pory"
xylar:
# 74 "data/maps/Playerroom/scripts.pory"
	emote_exclamation_mark
# 75 "data/maps/Playerroom/scripts.pory"
	face_right
	step_end

# 77 "data/maps/Playerroom/scripts.pory"
xylar1:
# 78 "data/maps/Playerroom/scripts.pory"
	delay_1
# 79 "data/maps/Playerroom/scripts.pory"
	face_left
	step_end

# 85 "data/maps/Playerroom/scripts.pory"
camera1:
# 86 "data/maps/Playerroom/scripts.pory"
	delay_2
# 87 "data/maps/Playerroom/scripts.pory"
	walk_down
# 87 "data/maps/Playerroom/scripts.pory"
	walk_down
# 87 "data/maps/Playerroom/scripts.pory"
	walk_down
# 87 "data/maps/Playerroom/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/Playerroom/scripts.pory"
camera:
# 90 "data/maps/Playerroom/scripts.pory"
	walk_up
# 90 "data/maps/Playerroom/scripts.pory"
	walk_up
# 90 "data/maps/Playerroom/scripts.pory"
	walk_up
# 90 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

clock::
# 94 "data/maps/Playerroom/scripts.pory"
	lockall
# 95 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 96 "data/maps/Playerroom/scripts.pory"
	msgbox clock_Text_0
# 97 "data/maps/Playerroom/scripts.pory"
	setflag FLAG_UNUSED_0x496
# 98 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 100 "data/maps/Playerroom/scripts.pory"
notp:
# 101 "data/maps/Playerroom/scripts.pory"
	walk_up
# 101 "data/maps/Playerroom/scripts.pory"
	walk_up
	step_end

guest::
# 105 "data/maps/Playerroom/scripts.pory"
	lockall
# 106 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 107 "data/maps/Playerroom/scripts.pory"
	msgbox guest_Text_0
# 108 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


# 110 "data/maps/Playerroom/scripts.pory"
not:
# 111 "data/maps/Playerroom/scripts.pory"
	walk_right
	step_end

parent::
# 115 "data/maps/Playerroom/scripts.pory"
	lockall
# 116 "data/maps/Playerroom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, not
# 117 "data/maps/Playerroom/scripts.pory"
	msgbox parent_Text_0
# 118 "data/maps/Playerroom/scripts.pory"
	releaseall
	return


metdad::
# 121 "data/maps/Playerroom/scripts.pory"
	lockall
# 122 "data/maps/Playerroom/scripts.pory"
	msgbox metdad_Text_0
# 123 "data/maps/Playerroom/scripts.pory"
	releaseall
# 124 "data/maps/Playerroom/scripts.pory"
	setvar LUXURA_TRAGEDY, 6
	return


mira_Text_0:
# 14 "data/maps/Playerroom/scripts.pory"
	.string "KNOCK..KNOCK$"

mira_Text_1:
# 20 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, good morning. It's time\n"
	.string "for breakfast. Lord Aurther and Lady\l"
	.string "Elysia are waiting for you at the table.$"

mira_Text_2:
# 27 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Still in bed, I see? You know you can't\n"
	.string "stay there all day, young master. Come\l"
	.string "now, you wouldn't want to keep Lord\l"
	.string "Aurther and Lady Elysia waiting, would\l"
	.string "you?$"

mira_Text_3:
# 31 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Umm..$"

mira_Text_4:
# 34 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Up with you, Master Xylar. If you don't\n"
	.string "hurry, I'll have to pull the covers off\l"
	.string "myself. Don't make me do it.$"

mira_Text_5:
# 37 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Besides, I made your favorite Ramen\n"
	.string "this morning. You wouldn't want it to\l"
	.string "get cold, would you?$"

mira_Text_6:
# 41 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ramen? But didn't Dad say I shouldn't\n"
	.string "have it? He always forbids it.$"

mira_Text_7:
# 44 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ah, yes, Lord Aurther did mention that.\n"
	.string "But Lady Elysia insisted it was alright\l"
	.string "this morning. She thought it might be\l"
	.string "just the thing to brighten your day.$"

mira_Text_8:
# 47 "data/maps/Playerroom/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll be there in a sec.$"

clock_Text_0:
# 96 "data/maps/Playerroom/scripts.pory"
	.string "The clock isn't working, i should fix it\n"
	.string "before going.$"

guest_Text_0:
# 107 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for\n"
	.string "guests not for me.$"

parent_Text_0:
# 117 "data/maps/Playerroom/scripts.pory"
	.string "I can't sleep here, this bed is for Mom\n"
	.string "and Dad,not me$"

metdad_Text_0:
# 122 "data/maps/Playerroom/scripts.pory"
	.string "I should check on Dad.\p"
	.string "He's probably busy with his work.\p"
	.string "(He usually works downstairs, in the\n"
	.string "first room on the left.)$"

Xylar::
# 81 "data/maps/Playerroom/scripts.pory"
	.string "Xylar$"
