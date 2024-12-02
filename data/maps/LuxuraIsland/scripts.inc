# 1 "data/maps/LuxuraIsland/scripts.pory"

# 2 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts::
# 3 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD
# 5 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION, musicchange
# 6 "data/maps/LuxuraIsland/scripts.pory"
map_script MAP_SCRIPT_ON_RESUME, outfit
# 7 "data/maps/LuxuraIsland/scripts.pory"
	.byte 0
# 8 "data/maps/LuxuraIsland/scripts.pory"
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/LuxuraIsland/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 9, stroll
# 10 "data/maps/LuxuraIsland/scripts.pory"
.2byte 0

ran::
# 13 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 14 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x496
# 15 "data/maps/LuxuraIsland/scripts.pory"
	special SpawnCameraObject
# 16 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, cam
# 17 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 18 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, face
# 19 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 2, mol
# 20 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 21 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 22 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_0, MSGBOX_AUTOCLOSE
# 23 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 24 "data/maps/LuxuraIsland/scripts.pory"
	namebox gardener
# 25 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_1, MSGBOX_AUTOCLOSE
# 26 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 27 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 28 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 30 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 31 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_3, MSGBOX_AUTOCLOSE
# 32 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 33 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, run
# 34 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 35 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mir
# 36 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 37 "data/maps/LuxuraIsland/scripts.pory"
	special RemoveCameraObject
# 38 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 39 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_4, MSGBOX_AUTOCLOSE
# 40 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 41 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 42 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_5, MSGBOX_AUTOCLOSE
# 43 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 44 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 45 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_6, MSGBOX_AUTOCLOSE
# 46 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 47 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, rum
# 48 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rmu
# 49 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 50 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 51 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_7, MSGBOX_AUTOCLOSE
# 52 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 53 "data/maps/LuxuraIsland/scripts.pory"
	waitmessage
# 54 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 55 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_8, MSGBOX_AUTOCLOSE
# 56 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 57 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, move
# 58 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, move2
# 59 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 60 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 61 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_9, MSGBOX_AUTOCLOSE
# 62 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 63 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, falls
# 64 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 65 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_10
# 66 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 67 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fall
# 68 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 69 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fallss
# 70 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 71 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_11
# 72 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 73 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 74 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_12
# 75 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 76 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, falll
# 77 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 78 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 79 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_13
# 80 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 81 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 82 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_14
# 83 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 84 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fallls
# 85 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 3, fal
# 86 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 87 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 88 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_15
# 89 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 90 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 4, fals
# 91 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 92 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 93 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_16
# 94 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 95 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 3
# 97 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 4
# 98 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 99 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x494
# 100 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 1, fade
# 101 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, fade2
# 102 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 103 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 104 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 105 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_17
# 106 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 107 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 108 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_18
# 109 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 110 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 111 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_19
# 112 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 113 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 114 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_20
# 115 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 116 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 117 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_21
# 118 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 119 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 120 "data/maps/LuxuraIsland/scripts.pory"
	msgbox ran_Text_22
# 121 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 122 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 1
# 124 "data/maps/LuxuraIsland/scripts.pory"
	removeobject OBJ_EVENT_ID_PLAYER
# 125 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x497
# 126 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_LUXURA_INDOOR, 14, 41
# 127 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 128 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 5
	return


# 131 "data/maps/LuxuraIsland/scripts.pory"
talk:
# 132 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 134 "data/maps/LuxuraIsland/scripts.pory"
tak:
# 135 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 137 "data/maps/LuxuraIsland/scripts.pory"
inn:
# 138 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 138 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 138 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 139 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 142 "data/maps/LuxuraIsland/scripts.pory"
in:
# 143 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 143 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 143 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 144 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 146 "data/maps/LuxuraIsland/scripts.pory"
fade2:
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 147 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 148 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 149 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 150 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 152 "data/maps/LuxuraIsland/scripts.pory"
fade:
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 153 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 154 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 155 "data/maps/LuxuraIsland/scripts.pory"
	face_down
# 156 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 158 "data/maps/LuxuraIsland/scripts.pory"
fals:
# 159 "data/maps/LuxuraIsland/scripts.pory"
	face_right
# 160 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 162 "data/maps/LuxuraIsland/scripts.pory"
fal:
# 163 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 164 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 166 "data/maps/LuxuraIsland/scripts.pory"
fallls:
# 167 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 168 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 170 "data/maps/LuxuraIsland/scripts.pory"
falll:
# 171 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 171 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
	step_end

# 174 "data/maps/LuxuraIsland/scripts.pory"
fallss:
# 175 "data/maps/LuxuraIsland/scripts.pory"
	face_left
# 176 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 178 "data/maps/LuxuraIsland/scripts.pory"
falls:
# 179 "data/maps/LuxuraIsland/scripts.pory"
	walk_faster_right
# 180 "data/maps/LuxuraIsland/scripts.pory"
	jump_2_right
# 181 "data/maps/LuxuraIsland/scripts.pory"
	set_invisible
	step_end

# 184 "data/maps/LuxuraIsland/scripts.pory"
fall:
# 185 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

# 187 "data/maps/LuxuraIsland/scripts.pory"
move:
# 188 "data/maps/LuxuraIsland/scripts.pory"
	emote_happy
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 189 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 190 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 191 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 193 "data/maps/LuxuraIsland/scripts.pory"
move2:
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 194 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 195 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_up
# 196 "data/maps/LuxuraIsland/scripts.pory"
	face_right
	step_end

# 198 "data/maps/LuxuraIsland/scripts.pory"
run:
# 199 "data/maps/LuxuraIsland/scripts.pory"
	emote_exclamation_mark
# 200 "data/maps/LuxuraIsland/scripts.pory"
	face_up
	step_end

# 202 "data/maps/LuxuraIsland/scripts.pory"
cam:
# 203 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 203 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 203 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 203 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 208 "data/maps/LuxuraIsland/scripts.pory"
face:
# 209 "data/maps/LuxuraIsland/scripts.pory"
	emote_heart
# 210 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 212 "data/maps/LuxuraIsland/scripts.pory"
mir:
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 213 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

# 215 "data/maps/LuxuraIsland/scripts.pory"
rum:
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 216 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 217 "data/maps/LuxuraIsland/scripts.pory"
	face_left
	step_end

# 219 "data/maps/LuxuraIsland/scripts.pory"
rmu:
# 220 "data/maps/LuxuraIsland/scripts.pory"
	delay_8
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 221 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
# 222 "data/maps/LuxuraIsland/scripts.pory"
	walk_fast_right
	step_end

trig1::
# 226 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 227 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, player
# 228 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 229 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


trig2::
# 232 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, tro
# 233 "data/maps/LuxuraIsland/scripts.pory"
	msgbox trig1_Text_0
# 234 "data/maps/LuxuraIsland/scripts.pory"
	goto ran
	return


# 236 "data/maps/LuxuraIsland/scripts.pory"
player:
# 237 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 238 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 240 "data/maps/LuxuraIsland/scripts.pory"
tro:
# 241 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 241 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 242 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

gone::
# 245 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 246 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


indoor::
# 249 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 250 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, innnn
# 251 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, ii
# 252 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 253 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, inn
# 254 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 6, in
# 255 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 256 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 257 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_0
# 258 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 259 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 260 "data/maps/LuxuraIsland/scripts.pory"
	msgbox indoor_Text_1
# 261 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 262 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 263 "data/maps/LuxuraIsland/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 264 "data/maps/LuxuraIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 265 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 266 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x496
	return


# 269 "data/maps/LuxuraIsland/scripts.pory"
innn:
# 270 "data/maps/LuxuraIsland/scripts.pory"
	walk_right
# 271 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 273 "data/maps/LuxuraIsland/scripts.pory"
ii:
# 274 "data/maps/LuxuraIsland/scripts.pory"
	face_up
# 275 "data/maps/LuxuraIsland/scripts.pory"
	set_visible
	step_end

# 277 "data/maps/LuxuraIsland/scripts.pory"
innnn:
# 278 "data/maps/LuxuraIsland/scripts.pory"
	face_down
	step_end

# 282 "data/maps/LuxuraIsland/scripts.pory"
io:
# 283 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 283 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

# 286 "data/maps/LuxuraIsland/scripts.pory"
ioo:
# 287 "data/maps/LuxuraIsland/scripts.pory"
	walk_left
# 288 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

stroll::
# 293 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 294 "data/maps/LuxuraIsland/scripts.pory"
	applymovement 5, str
# 295 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 296 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 297 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 298 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 299 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 300 "data/maps/LuxuraIsland/scripts.pory"
	waitmovement 0
# 301 "data/maps/LuxuraIsland/scripts.pory"
	namebox Xylar
# 302 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_1
# 303 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 304 "data/maps/LuxuraIsland/scripts.pory"
	setfollower 5, CAN_LEAVE_ROUTE
# 305 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 306 "data/maps/LuxuraIsland/scripts.pory"
	setvar LUXURA_TRAGEDY, 10
	return


# 309 "data/maps/LuxuraIsland/scripts.pory"
str:
# 310 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
# 310 "data/maps/LuxuraIsland/scripts.pory"
	walk_up
	step_end

mirafollowerscript::
# 313 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 314 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 315 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 316 "data/maps/LuxuraIsland/scripts.pory"
	msgbox stroll_Text_0
# 317 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 318 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


# 321 "data/maps/LuxuraIsland/scripts.pory"
strp:
# 322 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 322 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
# 322 "data/maps/LuxuraIsland/scripts.pory"
	walk_down
	step_end

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD::
# 326 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 332 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 338 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 344 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 353 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13:
# 362 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 13
	goto_if_gt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 371 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10
LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 380 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 21
	goto_if_ge LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 327 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 328 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 329 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 330 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 333 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 334 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 335 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 336 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 339 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 340 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 341 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 6
# 342 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A5
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 345 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 346 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 347 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 348 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 349 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 350 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 351 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 354 "data/maps/LuxuraIsland/scripts.pory"
	addobject 5
# 355 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4EF
# 356 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 357 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 358 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 359 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 360 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 363 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 364 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 365 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 366 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 367 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 368 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 369 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 372 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 373 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 374 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 375 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 376 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 377 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 378 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 381 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 5
# 382 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4EF
# 383 "data/maps/LuxuraIsland/scripts.pory"
	removeobject 2
# 384 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_UNUSED_0x4A4
# 385 "data/maps/LuxuraIsland/scripts.pory"
	addobject 6
# 386 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_UNUSED_0x4A5
# 387 "data/maps/LuxuraIsland/scripts.pory"
	setmetatile 6, 28, 0x001, 1
	return

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 371 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 20
	goto_if_eq LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_9

LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 353 "data/maps/LuxuraIsland/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_lt LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto LuxuraIsland_MapScripts_MAP_SCRIPT_ON_LOAD_13


strolll::
# 391 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 392 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 393 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, strp
# 394 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 395 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strolll_Text_0
# 396 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 397 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


Sailor::
# 400 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 401 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 402 "data/maps/LuxuraIsland/scripts.pory"
	msgbox Sailor_Text_0
# 403 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sailorr::
# 407 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 408 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 409 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sailorr_Text_0
# 410 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


sail::
# 414 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 415 "data/maps/LuxuraIsland/scripts.pory"
	faceplayer
# 416 "data/maps/LuxuraIsland/scripts.pory"
	msgbox sail_Text_0
# 417 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


blood::
# 420 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 421 "data/maps/LuxuraIsland/scripts.pory"
	msgbox blood_Text_0
# 422 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


bloodsee::
# 427 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 428 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 429 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, exclam
# 430 "data/maps/LuxuraIsland/scripts.pory"
	facefollower
# 431 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 432 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 433 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 434 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
# 435 "data/maps/LuxuraIsland/scripts.pory"
	setvar VAR_ROUTE103_STATE, 4
	return


blo::
# 439 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 440 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, io
# 441 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, io
# 442 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 443 "data/maps/LuxuraIsland/scripts.pory"
	msgbox bloodsee_Text_0
# 444 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 445 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


musicchange::
# 450 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4AA, musicchange_1
	return

musicchange_1:
# 451 "data/maps/LuxuraIsland/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 452 "data/maps/LuxuraIsland/scripts.pory"
	doweather
# 453 "data/maps/LuxuraIsland/scripts.pory"
	playbgm MUS_DUMMY, TRUE
	return


strollll::
# 459 "data/maps/LuxuraIsland/scripts.pory"
	lockall
# 460 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, strp
# 461 "data/maps/LuxuraIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, strp
# 462 "data/maps/LuxuraIsland/scripts.pory"
	namebox name4
# 463 "data/maps/LuxuraIsland/scripts.pory"
	msgbox strollll_Text_0
# 464 "data/maps/LuxuraIsland/scripts.pory"
	hidenamebox
# 465 "data/maps/LuxuraIsland/scripts.pory"
	releaseall
	return


signluxura::
# 468 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 469 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxura_Text_0, MSGBOX_SIGN
# 470 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signlmansion::
# 473 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 474 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signlmansion_Text_0, MSGBOX_SIGN
# 475 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signforest::
# 478 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 479 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signforest_Text_0, MSGBOX_SIGN
# 480 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signservantquarter::
# 484 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 485 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signservantquarter_Text_0, MSGBOX_SIGN
# 486 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signluxuraharbor::
# 490 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 491 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signluxuraharbor_Text_0, MSGBOX_SIGN
# 492 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


signend::
# 496 "data/maps/LuxuraIsland/scripts.pory"
	lock
# 497 "data/maps/LuxuraIsland/scripts.pory"
	msgbox signend_Text_0
# 498 "data/maps/LuxuraIsland/scripts.pory"
	release
	return


outfit::
# 502 "data/maps/LuxuraIsland/scripts.pory"
	goto_if_set FLAG_UNUSED_0x49E, outfit_1
	end

outfit_1:
# 503 "data/maps/LuxuraIsland/scripts.pory"
	iswearingoutfit OUTFIT_USUAL_GREEN
# 504 "data/maps/LuxuraIsland/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq outfit_4
# 508 "data/maps/LuxuraIsland/scripts.pory"
	clearflag FLAG_SYS_B_DASH
	return

outfit_4:
# 505 "data/maps/LuxuraIsland/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return


ran_Text_0:
# 22 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Now that's perfect.$"

ran_Text_1:
# 25 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wow! Lady Mira, You really have a knack\n"
	.string "for this.\p"
	.string "It turned out so beautiful.$"

ran_Text_2:
# 28 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}No no, It's all your hard wor..$"

ran_Text_3:
# 31 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Miiiirrrraaaa!!$"

ran_Text_4:
# 39 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You tricked me with that Ramen, I ran\n"
	.string "down so fast and then they all started\l"
	.string "laughing.\p"
	.string "You know Dad would never allow it.\p"
	.string "But seroiusly, you won't get away with\n"
	.string "this so easily$"

ran_Text_5:
# 42 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'm sorry, Master Xylar, but I couldn't\n"
	.string "resist! You should've seen your face.$"

ran_Text_6:
# 45 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Uhhhh!!!$"

ran_Text_7:
# 51 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can't escape that easily, Mira.$"

ran_Text_8:
# 55 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Catch me if you can, Master Xylar.$"

ran_Text_9:
# 61 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha$"

ran_Text_10:
# 65 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Ahh..Oh no..$"

ran_Text_11:
# 71 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Well, this wasn't part of the plan.$"

ran_Text_12:
# 74 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahahaha, Serves you right.\p"
	.string "I guess now I have to help you out, huh?$"

ran_Text_13:
# 79 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Here Mira, grab my hand, I'll pull you\n"
	.string "out.$"

ran_Text_14:
# 82 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, Master Xylar.$"

ran_Text_15:
# 88 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hey! Mira, What was that for?$"

ran_Text_16:
# 93 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hahahaha!\p"
	.string "You wanted to help me, didn't you?\p"
	.string "Now we're both in this together!$"

ran_Text_17:
# 105 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't believe you pulled me in.\p"
	.string "Now we're both soaked.$"

ran_Text_18:
# 108 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}It was worth it.\p"
	.string "We won't have any more moments like\n"
	.string "this when you leave for the Pokemon\l"
	.string "Academy.$"

ran_Text_19:
# 111 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah...\p"
	.string "It feels strange knowing i'll be away\n"
	.string "from everyone.\p"
	.string "I'm a bit nervous.$"

ran_Text_20:
# 114 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You'll do great, Master Xylar.\p"
	.string "Remember, We're always here for you.\p"
	.string "And when you come back I'll make Ramen\n"
	.string "for you and this time for real.$"

ran_Text_21:
# 117 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Promise?$"

ran_Text_22:
# 120 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Promise. Now, let's get inside before we\n"
	.string "catch a cold.$"

trig1_Text_0:
# 228 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is she?$"

indoor_Text_0:
# 257 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, You should take a bath\n"
	.string "and get changed before Lady Elysia\l"
	.string "sees you like this.$"

indoor_Text_1:
# 260 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah.I'll do that.$"

stroll_Text_0:
# 297 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Let's go Master Xylar.$"

stroll_Text_1:
# 302 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Let's go.$"

strolll_Text_0:
# 395 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}That's not the way,Master Xylar.$"

Sailor_Text_0:
# 402 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I have to tell you, your\n"
	.string "father is one of the bravest men I've\l"
	.string "ever known.\p"
	.string "The way he stood up against the Dark\n"
	.string "Force to protect us all,I've never seen\l"
	.string "courage like that.\p"
	.string "Without him, who knows what would have\n"
	.string "happened?\p"
	.string "He's a true hero, and it's an honor to\n"
	.string "serve him.$"

sailorr_Text_0:
# 409 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good day, young master Xylar!\p"
	.string "The captain's busy preparing the ship\n"
	.string "for your journey, even though the\l"
	.string "academy starts in a week.\p"
	.string "He wants to make sure everything is\n"
	.string "perfect for when the time comes.\p"
	.string "We'll be ready to set sail whenever\n"
	.string "you're ready!$"

sail_Text_0:
# 416 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Master Xylar, I'll never forget the day\n"
	.string "your Father faced the Dark Force.\p"
	.string "The skies turned dark, and portals\n"
	.string "opened everywhere, unleashing chaos.\p"
	.string "It was the most terrifying thing I've\n"
	.string "ever seen.\p"
	.string "But your father, he didn't even flinch.\p"
	.string "He stood firm, right in the face of that\n"
	.string "monster, and fought with a bravery I've\l"
	.string "never witnessed before.\p"
	.string "We all owe him our lives for what he did\n"
	.string "that day.$"

blood_Text_0:
# 421 "data/maps/LuxuraIsland/scripts.pory"
	.string "The blood splatters on the ground, its\n"
	.string "vivid red stark against everything\l"
	.string "else.$"

bloodsee_Text_0:
# 432 "data/maps/LuxuraIsland/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, Don't look at it. You're\n"
	.string "too young to see something like this...\l"
	.string "Please, just trust me and let's go back\l"
	.string "inside.$"

strollll_Text_0:
# 463 "data/maps/LuxuraIsland/scripts.pory"
	.string "I should go to mansion.\p"
	.string "I'm worried about Mom and Dad.$"

signluxura_Text_0:
# 469 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Island\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A serene haven where beauty and\n"
	.string "mystery intertwine beneath tranquil\l"
	.string "skies.$"

signlmansion_Text_0:
# 474 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Mansion\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A magnificent estate, home to wealth,\n"
	.string "power, and a legacy of prestige.$"

signforest_Text_0:
# 479 "data/maps/LuxuraIsland/scripts.pory"
	.string "Luxura Veilwood\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}A dense, ancient forest where secrets\n"
	.string "are whispered among the trees and\l"
	.string "shadows linger at every turn.$"

signservantquarter_Text_0:
# 485 "data/maps/LuxuraIsland/scripts.pory"
	.string "Servant's Quarter$"

signluxuraharbor_Text_0:
# 491 "data/maps/LuxuraIsland/scripts.pory"
	.string "Harbor Haven\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}The central gathering place for sailors\n"
	.string "on Luxura Island, where voyages are\l"
	.string "planned and tales are shared.$"

signend_Text_0:
# 497 "data/maps/LuxuraIsland/scripts.pory"
	.string "End of Beta 1.$"

gardener::
# 205 "data/maps/LuxuraIsland/scripts.pory"
	.string "Gardener$"
