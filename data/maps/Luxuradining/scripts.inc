# 1 "data/maps/Luxuradining/scripts.pory"

# 2 "data/maps/Luxuradining/scripts.pory"
Luxuradining_MapScripts::
# 3 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxuradining_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/Luxuradining/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, outfit
# 6 "data/maps/Luxuradining/scripts.pory"
	.byte 0
# 7 "data/maps/Luxuradining/scripts.pory"
Luxuradining_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/Luxuradining/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 3, Youwake
# 9 "data/maps/Luxuradining/scripts.pory"
	.2byte 0

Youwake::
# 12 "data/maps/Luxuradining/scripts.pory"
	lockall
# 13 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 14 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera2
# 15 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 16 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, mom
# 17 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 18 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 20 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 21 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 23 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera3
# 24 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 25 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 26 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dining
# 27 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 28 "data/maps/Luxuradining/scripts.pory"
	special SpawnCameraObject
# 29 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 30 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 31 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 32 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 34 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 35 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_3, MSGBOX_AUTOCLOSE
# 36 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 37 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mlq
# 38 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 39 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_4, MSGBOX_AUTOCLOSE
# 40 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 41 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mlo
# 42 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 43 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_5, MSGBOX_AUTOCLOSE
# 44 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 45 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, mol
# 46 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 47 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 48 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_6, MSGBOX_AUTOCLOSE
# 49 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 50 "data/maps/Luxuradining/scripts.pory"
	applymovement 2, happy
# 51 "data/maps/Luxuradining/scripts.pory"
	applymovement 1, happy
# 52 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 53 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_7, MSGBOX_AUTOCLOSE
# 54 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 55 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 56 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_8, MSGBOX_AUTOCLOSE
# 57 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 58 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 59 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_9
# 60 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 61 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, upset
# 62 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 63 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 64 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_10
# 65 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 66 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 67 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_11
# 68 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 69 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_TO_BLACK
# 70 "data/maps/Luxuradining/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data/maps/Luxuradining/scripts.pory"
	namebox Xylar
# 72 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_12
# 73 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 74 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 75 "data/maps/Luxuradining/scripts.pory"
	msgbox Youwake_Text_13
# 76 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 77 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 78 "data/maps/Luxuradining/scripts.pory"
	waitmovement 0
# 79 "data/maps/Luxuradining/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/Luxuradining/scripts.pory"
	releaseall
# 81 "data/maps/Luxuradining/scripts.pory"
	setvar LUXURA_TRAGEDY, 4
	return


# 83 "data/maps/Luxuradining/scripts.pory"
happy:
# 84 "data/maps/Luxuradining/scripts.pory"
	emote_happy
	step_end

# 86 "data/maps/Luxuradining/scripts.pory"
camera5:
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 87 "data/maps/Luxuradining/scripts.pory"
	walk_down
	step_end

# 89 "data/maps/Luxuradining/scripts.pory"
camera2:
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 90 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

# 92 "data/maps/Luxuradining/scripts.pory"
camera4:
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_up
# 93 "data/maps/Luxuradining/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/Luxuradining/scripts.pory"
camera3:
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
# 96 "data/maps/Luxuradining/scripts.pory"
	walk_right
	step_end

# 98 "data/maps/Luxuradining/scripts.pory"
mom:
# 99 "data/maps/Luxuradining/scripts.pory"
	face_right
# 100 "data/maps/Luxuradining/scripts.pory"
	emote_heart
# 101 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 103 "data/maps/Luxuradining/scripts.pory"
dining:
# 104 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 104 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 104 "data/maps/Luxuradining/scripts.pory"
	walk_down
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 105 "data/maps/Luxuradining/scripts.pory"
	walk_left
# 106 "data/maps/Luxuradining/scripts.pory"
	face_up
	step_end

# 108 "data/maps/Luxuradining/scripts.pory"
mlq:
# 109 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
	step_end

# 111 "data/maps/Luxuradining/scripts.pory"
mlo:
# 112 "data/maps/Luxuradining/scripts.pory"
	emote_question_mark
# 113 "data/maps/Luxuradining/scripts.pory"
	face_down
	step_end

# 115 "data/maps/Luxuradining/scripts.pory"
mol:
# 116 "data/maps/Luxuradining/scripts.pory"
	face_right
	step_end

# 118 "data/maps/Luxuradining/scripts.pory"
upset:
# 119 "data/maps/Luxuradining/scripts.pory"
	emote_upset
	step_end

Mom::
# 122 "data/maps/Luxuradining/scripts.pory"
	lockall
# 123 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 124 "data/maps/Luxuradining/scripts.pory"
	namebox name2
# 125 "data/maps/Luxuradining/scripts.pory"
	msgbox Mom_Text_0
# 126 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 127 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


Dad::
# 130 "data/maps/Luxuradining/scripts.pory"
	lockall
# 131 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 132 "data/maps/Luxuradining/scripts.pory"
	namebox name3
# 133 "data/maps/Luxuradining/scripts.pory"
	msgbox Dad_Text_0
# 134 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 135 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


waiting::
# 138 "data/maps/Luxuradining/scripts.pory"
	lockall
# 139 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 140 "data/maps/Luxuradining/scripts.pory"
	msgbox waiting_Text_0
# 141 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD::
# 145 "data/maps/Luxuradining/scripts.pory"
	compare LUXURA_TRAGEDY, 4
	goto_if_gt Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Luxuradining_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 146 "data/maps/Luxuradining/scripts.pory"
	removeobject 1
# 147 "data/maps/Luxuradining/scripts.pory"
	removeobject 2
# 148 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x498
# 149 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x499
	return


garden::
# 155 "data/maps/Luxuradining/scripts.pory"
	lock
# 156 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 157 "data/maps/Luxuradining/scripts.pory"
	namebox gardener
# 158 "data/maps/Luxuradining/scripts.pory"
	msgbox garden_Text_0
# 159 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 160 "data/maps/Luxuradining/scripts.pory"
	release
	return


rest::
# 163 "data/maps/Luxuradining/scripts.pory"
	lock
# 164 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 165 "data/maps/Luxuradining/scripts.pory"
	namebox rest_Text_0
# 166 "data/maps/Luxuradining/scripts.pory"
	msgbox rest_Text_1
# 167 "data/maps/Luxuradining/scripts.pory"
	hidenamebox
# 168 "data/maps/Luxuradining/scripts.pory"
	release
	return


nurse::
# 171 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, nurse_10
nurse_8:
# 178 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, nurse_7
nurse_5:
# 191 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, nurse_4
	return

nurse_1:
# 172 "data/maps/Luxuradining/scripts.pory"
	lockall
# 173 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 174 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_0
# 175 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return

nurse_2:
# 179 "data/maps/Luxuradining/scripts.pory"
	lockall
# 180 "data/maps/Luxuradining/scripts.pory"
	faceplayer
# 181 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_1, MSGBOX_AUTOCLOSE
# 182 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_2, MSGBOX_AUTOCLOSE
# 183 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_3, MSGBOX_AUTOCLOSE
# 184 "data/maps/Luxuradining/scripts.pory"
	giveitem ITEM_POTION, 2
# 185 "data/maps/Luxuradining/scripts.pory"
	giveitem ITEM_PARALYZE_HEAL, 3
# 186 "data/maps/Luxuradining/scripts.pory"
	setflag FLAG_UNUSED_0x4B7
# 187 "data/maps/Luxuradining/scripts.pory"
	setvar LUXURA_TRAGEDY, 20
# 188 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return

nurse_3:
# 192 "data/maps/Luxuradining/scripts.pory"
	lockall
# 193 "data/maps/Luxuradining/scripts.pory"
	msgbox nurse_Text_4
# 194 "data/maps/Luxuradining/scripts.pory"
	setvar VAR_0x800B, 1
# 195 "data/maps/Luxuradining/scripts.pory"
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
# 196 "data/maps/Luxuradining/scripts.pory"
	waitmessage
# 197 "data/maps/Luxuradining/scripts.pory"
	waitbuttonpress
# 198 "data/maps/Luxuradining/scripts.pory"
	release
	end

nurse_4:
# 191 "data/maps/Luxuradining/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B7, nurse_3
	return

nurse_7:
# 178 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B7, nurse_2
	goto nurse_5

nurse_10:
# 171 "data/maps/Luxuradining/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B7, nurse_1
	goto nurse_8


checknurse::
# 203 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 204 "data/maps/Luxuradining/scripts.pory"
	msgbox checknurse_Text_0
# 205 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


atkspark::
# 209 "data/maps/Luxuradining/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, luspark
# 210 "data/maps/Luxuradining/scripts.pory"
	msgbox atkspark_Text_0
# 211 "data/maps/Luxuradining/scripts.pory"
	releaseall
	return


# 214 "data/maps/Luxuradining/scripts.pory"
luspark:
# 215 "data/maps/Luxuradining/scripts.pory"
	walk_left
	step_end

Youwake_Text_0:
# 18 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good Morning, Mom,Dad.\p"
	.string "Sorry to keep you waiting.$"

Youwake_Text_1:
# 21 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No need to apologize.We were just\n"
	.string "discussing today's plans.\p"
	.string "Come sit next to me.$"

Youwake_Text_2:
# 32 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}How did you sleep dear?$"

Youwake_Text_3:
# 35 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I slept well.$"

Youwake_Text_4:
# 39 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Ramen?$"

Youwake_Text_5:
# 43 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ramen? I thought I forbade it.$"

Youwake_Text_6:
# 48 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But Mira told me you allowed it for\n"
	.string "today.$"

Youwake_Text_7:
# 53 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha..\p"
	.string "She got you again.$"

Youwake_Text_8:
# 56 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do you mean?$"

Youwake_Text_9:
# 59 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You have been tricked my dear.$"

Youwake_Text_10:
# 64 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Ok, now lets eat before the food gets\n"
	.string "cold.$"

Youwake_Text_11:
# 67 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Sure\p"
	.string "Maids$"

Youwake_Text_12:
# 72 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira?\p"
	.string "I need to ask her something.$"

Youwake_Text_13:
# 75 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}She's out helping the gardener.$"

Mom_Text_0:
# 125 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}She's always successful in tricking you$"

Dad_Text_0:
# 133 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guess you guys are really close.\p"
	.string "She always knows how to trick you.$"

waiting_Text_0:
# 140 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, I don't want to make Mom\n"
	.string "and Dad wait!$"

garden_Text_0:
# 158 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This garden has never looked better,\n"
	.string "thanks to Lady Mira.$"

rest_Text_0:
# 165 "data/maps/Luxuradining/scripts.pory"
	.string "Maid$"

rest_Text_1:
# 166 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day, Young Master! It's my rest\n"
	.string "day so I'm taking it easy.\p"
	.string "But if you need anything, just let me\n"
	.string "know.$"

nurse_Text_0:
# 174 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Good day,Master Xylar.$"

nurse_Text_1:
# 181 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}When they attacked the mansion... they\n"
	.string "didn't kill me. They kept me alive. Not\l"
	.string "out of mercy, but because they needed\l"
	.string "someone to heal their Pokémon. I... I\l"
	.string "didn't have a choice.\p"
	.string "I was just a tool to them, a way to keep\n"
	.string "their strength up. Every time I patched\l"
	.string "them up, I felt like I was betraying\l"
	.string "everyone in that house.\p"
	.string "But seeing you alive... it's a small relief\n"
	.string "in all this darkness. I'm so glad you\l"
	.string "made it, Master Xylar.\p"
	.string "But it's dangerous here ,you should\n"
	.string "hide.$"

nurse_Text_2:
# 182 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I survived for a reason. I'll get my\n"
	.string "revenge, every last one of them will pay\l"
	.string "for what they've done.\p"
	.string "Don't worry about me. I know what I have\n"
	.string "to do.$"

nurse_Text_3:
# 183 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}If your Pokémon need healing, don't\n"
	.string "hesitate to come to me. No matter what\l"
	.string "happens, I'll be here to help them\l"
	.string "recover.\p"
	.string "Here are some items that will help you.$"

nurse_Text_4:
# 193 "data/maps/Luxuradining/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Let me heal your pokemon.$"

checknurse_Text_0:
# 204 "data/maps/Luxuradining/scripts.pory"
	.string "I should look for some healing supplies\n"
	.string "in the servant's quarter.$"

atkspark_Text_0:
# 210 "data/maps/Luxuradining/scripts.pory"
	.string "I should hurry, mom is in danger.$"
