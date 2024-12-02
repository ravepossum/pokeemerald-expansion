# 1 "data/maps/Luxurawork/scripts.pory"

# 2 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts::
# 3 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Luxurawork/scripts.pory"
map_script MAP_SCRIPT_ON_RESUME, outfit
# 6 "data/maps/Luxurawork/scripts.pory"

# 7 "data/maps/Luxurawork/scripts.pory"
	.byte 0
# 8 "data/maps/Luxurawork/scripts.pory"
Luxurawork_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Luxurawork/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 11, trage
# 10 "data/maps/Luxurawork/scripts.pory"
.2byte 0

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD::
# 13 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 32 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_ge Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5
Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 50 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_gt Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 15 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 16 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 17 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 18 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 19 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 20 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 21 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 22 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 23 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 24 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 25 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 26 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 27 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 28 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 29 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 30 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 33 "data/maps/Luxurawork/scripts.pory"
	addobject 4
# 34 "data/maps/Luxurawork/scripts.pory"
	removeobject 5
# 35 "data/maps/Luxurawork/scripts.pory"
	removeobject 6
# 36 "data/maps/Luxurawork/scripts.pory"
	removeobject 7
# 37 "data/maps/Luxurawork/scripts.pory"
	removeobject 8
# 38 "data/maps/Luxurawork/scripts.pory"
	removeobject 9
# 39 "data/maps/Luxurawork/scripts.pory"
	removeobject 10
# 40 "data/maps/Luxurawork/scripts.pory"
	removeobject 11
# 41 "data/maps/Luxurawork/scripts.pory"
	removeobject 12
# 42 "data/maps/Luxurawork/scripts.pory"
	removeobject 14
# 43 "data/maps/Luxurawork/scripts.pory"
	removeobject 13
# 44 "data/maps/Luxurawork/scripts.pory"
	removeobject 15
# 45 "data/maps/Luxurawork/scripts.pory"
	removeobject 16
# 46 "data/maps/Luxurawork/scripts.pory"
	removeobject 17
# 47 "data/maps/Luxurawork/scripts.pory"
	removeobject 18
# 48 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
# 49 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 51 "data/maps/Luxurawork/scripts.pory"
	removeobject 1
# 52 "data/maps/Luxurawork/scripts.pory"
	removeobject 2
# 53 "data/maps/Luxurawork/scripts.pory"
	removeobject 3
# 54 "data/maps/Luxurawork/scripts.pory"
	removeobject 4
# 55 "data/maps/Luxurawork/scripts.pory"
	addobject 5
# 56 "data/maps/Luxurawork/scripts.pory"
	addobject 6
# 57 "data/maps/Luxurawork/scripts.pory"
	addobject 7
# 58 "data/maps/Luxurawork/scripts.pory"
	addobject 8
# 59 "data/maps/Luxurawork/scripts.pory"
	addobject 9
# 60 "data/maps/Luxurawork/scripts.pory"
	addobject 10
# 61 "data/maps/Luxurawork/scripts.pory"
	addobject 11
# 62 "data/maps/Luxurawork/scripts.pory"
	addobject 12
# 63 "data/maps/Luxurawork/scripts.pory"
	addobject 13
# 64 "data/maps/Luxurawork/scripts.pory"
	addobject 14
# 65 "data/maps/Luxurawork/scripts.pory"
	addobject 15
# 66 "data/maps/Luxurawork/scripts.pory"
	addobject 16
# 67 "data/maps/Luxurawork/scripts.pory"
	addobject 17
# 68 "data/maps/Luxurawork/scripts.pory"
	addobject 18
# 69 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 70 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 71 "data/maps/Luxurawork/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 72 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49A
	return

Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 32 "data/maps/Luxurawork/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_le Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto Luxurawork_MapScripts_MAP_SCRIPT_ON_LOAD_4


dad::
# 78 "data/maps/Luxurawork/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, dad_1
# 116 "data/maps/Luxurawork/scripts.pory"
	lockall
# 117 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 118 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 119 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_10
# 120 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 121 "data/maps/Luxurawork/scripts.pory"
	releaseall
	return

dad_1:
# 79 "data/maps/Luxurawork/scripts.pory"
	lockall
# 80 "data/maps/Luxurawork/scripts.pory"
	faceplayer
# 81 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 82 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_0
# 83 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 84 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 85 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_1
# 86 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 87 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 88 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_2
# 89 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 90 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 91 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_3
# 92 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 93 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 94 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_4
# 95 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 96 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 97 "data/maps/Luxurawork/scripts.pory"
	applymovement 4, exclam
# 98 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 99 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_5
# 100 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 101 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 102 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_6
# 103 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 104 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 105 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_7
# 106 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 107 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 108 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_8
# 109 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 110 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 111 "data/maps/Luxurawork/scripts.pory"
	msgbox dad_Text_9
# 112 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 113 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 114 "data/maps/Luxurawork/scripts.pory"
	setflag FLAG_UNUSED_0x49D
	return


# 124 "data/maps/Luxurawork/scripts.pory"
exclam:
# 125 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
	step_end

trage::
# 129 "data/maps/Luxurawork/scripts.pory"
	lockall
# 130 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, players
# 131 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, players
# 132 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 133 "data/maps/Luxurawork/scripts.pory"
	special SpawnCameraObject
# 134 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mo
# 135 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 136 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 137 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 139 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 140 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 141 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_1, MSGBOX_AUTOCLOSE
# 142 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 143 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 144 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 145 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, invisible
# 146 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 147 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 148 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 149 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, finish
# 150 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, finish
# 151 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 152 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 153 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 154 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, visible
# 155 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 156 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 157 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, atk
# 158 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, moq
# 159 "data/maps/Luxurawork/scripts.pory"
	applymovement 12, faint
# 160 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 161 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, visible
# 162 "data/maps/Luxurawork/scripts.pory"
	applymovement 13, invisible
# 163 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 164 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, notal
# 165 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 166 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 167 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_2, MSGBOX_AUTOCLOSE
# 168 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 169 "data/maps/Luxurawork/scripts.pory"
	namebox name3
# 170 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_3, MSGBOX_AUTOCLOSE
# 171 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 172 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, visible
# 173 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 174 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, run
# 175 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_TO_BLACK
# 176 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 177 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_4, MSGBOX_AUTOCLOSE
# 178 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 179 "data/maps/Luxurawork/scripts.pory"
	applymovement 17, visible
# 180 "data/maps/Luxurawork/scripts.pory"
	applymovement 18, invisible
# 181 "data/maps/Luxurawork/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 182 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ded
# 183 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, exclam
# 184 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 185 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_5, MSGBOX_AUTOCLOSE
# 186 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 187 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 188 "data/maps/Luxurawork/scripts.pory"
	applymovement 16, ded
# 189 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 190 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_6, MSGBOX_AUTOCLOSE
# 191 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 192 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 193 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_7, MSGBOX_AUTOCLOSE
# 194 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 195 "data/maps/Luxurawork/scripts.pory"
	applymovement 11, revert
# 196 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, reverte
# 197 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 198 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 199 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_8
# 200 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 201 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 202 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_9, MSGBOX_AUTOCLOSE
# 203 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 204 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 205 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, visible
# 206 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 207 "data/maps/Luxurawork/scripts.pory"
	applymovement 14, invisible
# 208 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 209 "data/maps/Luxurawork/scripts.pory"
	applymovement 15, invisible
# 210 "data/maps/Luxurawork/scripts.pory"
	namebox unknown
# 211 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_10, MSGBOX_AUTOCLOSE
# 212 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 213 "data/maps/Luxurawork/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, back
# 214 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 215 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 216 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_11
# 217 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 218 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 219 "data/maps/Luxurawork/scripts.pory"
	applymovement 8, players
# 220 "data/maps/Luxurawork/scripts.pory"
	applymovement 5, players
# 221 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 222 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_12, MSGBOX_AUTOCLOSE
# 223 "data/maps/Luxurawork/scripts.pory"
	waitmessage
# 224 "data/maps/Luxurawork/scripts.pory"
	namebox Xylar
# 225 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_13, MSGBOX_AUTOCLOSE
# 226 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 227 "data/maps/Luxurawork/scripts.pory"
	namebox surge
# 228 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_14, MSGBOX_AUTOCLOSE
# 229 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 230 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_15, MSGBOX_AUTOCLOSE
# 231 "data/maps/Luxurawork/scripts.pory"
	applymovement 9, capture
# 232 "data/maps/Luxurawork/scripts.pory"
	applymovement 10, capture
# 233 "data/maps/Luxurawork/scripts.pory"
	waitmovement 0
# 234 "data/maps/Luxurawork/scripts.pory"
	namebox name2
# 235 "data/maps/Luxurawork/scripts.pory"
	msgbox trage_Text_16, MSGBOX_AUTOCLOSE
# 236 "data/maps/Luxurawork/scripts.pory"
	hidenamebox
# 237 "data/maps/Luxurawork/scripts.pory"
	special RemoveCameraObject
# 238 "data/maps/Luxurawork/scripts.pory"
	releaseall
# 239 "data/maps/Luxurawork/scripts.pory"
	warp MAP_LUXURA_INDOOR, 7, 6
# 240 "data/maps/Luxurawork/scripts.pory"
	setvar LUXURA_TRAGEDY, 12
	return


# 243 "data/maps/Luxurawork/scripts.pory"
capture:
# 244 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 244 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 254 "data/maps/Luxurawork/scripts.pory"
back:
# 255 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 255 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 255 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 255 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 257 "data/maps/Luxurawork/scripts.pory"
reverte:
# 258 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 259 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 260 "data/maps/Luxurawork/scripts.pory"
	face_up
# 261 "data/maps/Luxurawork/scripts.pory"
	face_left
# 262 "data/maps/Luxurawork/scripts.pory"
	face_down
# 263 "data/maps/Luxurawork/scripts.pory"
	face_right
# 264 "data/maps/Luxurawork/scripts.pory"
	face_up
	step_end

# 268 "data/maps/Luxurawork/scripts.pory"
revert:
# 269 "data/maps/Luxurawork/scripts.pory"
	face_left
# 270 "data/maps/Luxurawork/scripts.pory"
	face_down
# 271 "data/maps/Luxurawork/scripts.pory"
	face_right
# 272 "data/maps/Luxurawork/scripts.pory"
	face_up
# 273 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 275 "data/maps/Luxurawork/scripts.pory"
moq:
# 276 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 276 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
# 276 "data/maps/Luxurawork/scripts.pory"
	walk_fast_right
	step_end

# 278 "data/maps/Luxurawork/scripts.pory"
faint:
# 279 "data/maps/Luxurawork/scripts.pory"
	delay_16
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 280 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 281 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 283 "data/maps/Luxurawork/scripts.pory"
players:
# 284 "data/maps/Luxurawork/scripts.pory"
	emote_exclamation_mark
# 285 "data/maps/Luxurawork/scripts.pory"
	face_down
	step_end

# 287 "data/maps/Luxurawork/scripts.pory"
atk:
# 288 "data/maps/Luxurawork/scripts.pory"
	face_right
# 289 "data/maps/Luxurawork/scripts.pory"
	set_visible
# 290 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 290 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 290 "data/maps/Luxurawork/scripts.pory"
	slide_right
# 291 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 291 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 291 "data/maps/Luxurawork/scripts.pory"
	slide_left
# 292 "data/maps/Luxurawork/scripts.pory"
	face_right
	step_end

# 294 "data/maps/Luxurawork/scripts.pory"
visible:
# 295 "data/maps/Luxurawork/scripts.pory"
	set_visible
	step_end

# 297 "data/maps/Luxurawork/scripts.pory"
invisible:
# 298 "data/maps/Luxurawork/scripts.pory"
	set_invisible
	step_end

# 300 "data/maps/Luxurawork/scripts.pory"
mo:
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
# 301 "data/maps/Luxurawork/scripts.pory"
	walk_up
	step_end

# 303 "data/maps/Luxurawork/scripts.pory"
finish:
# 304 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 304 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 304 "data/maps/Luxurawork/scripts.pory"
	walk_left
# 305 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 305 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 305 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

# 307 "data/maps/Luxurawork/scripts.pory"
ded:
# 308 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 308 "data/maps/Luxurawork/scripts.pory"
	walk_down
# 308 "data/maps/Luxurawork/scripts.pory"
	walk_down
	step_end

dad_Text_0:
# 82 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Xylar, all set for the academy?$"

dad_Text_1:
# 85 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Dad.\p"
	.string "I've got everything packed.$"

dad_Text_2:
# 88 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Good to hear.\p"
	.string "Remember you don't need to worry about\n"
	.string "living up to our name.\p"
	.string "I want you to have a life full of joy and\n"
	.string "discovery.$"

dad_Text_3:
# 91 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Thanks Dad, I'll try to make the most of\n"
	.string "it.$"

dad_Text_4:
# 94 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}That's all i ask, son.$"

dad_Text_5:
# 99 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Oh, Xylar, I almost forgot\p"
	.string "Guests from the academy are coming in\n"
	.string "two days.$"

dad_Text_6:
# 102 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Guests?\p"
	.string "From the academy, You didn't tell me\n"
	.string "about this.$"

dad_Text_7:
# 105 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hahaha I meant to but it slipped my\n"
	.string "mind.\p"
	.string "They want to meet you before the start.\p"
	.string "Don't worry they're just here to make\n"
	.string "sure you're comfortable and ready.$"

dad_Text_8:
# 108 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Alright, I guess I'd better be on my\n"
	.string "best behaviour, then.$"

dad_Text_9:
# 111 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Just be yourself, son. That's all they'll\n"
	.string "want to see.$"

dad_Text_10:
# 119 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have some work to do.\p"
	.string "Go ahead and join your mother.$"

trage_Text_0:
# 137 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This is my last Pokemon.$"

trage_Text_1:
# 141 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hoopa!\pEnd this.$"

trage_Text_2:
# 167 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're strong. I'll give you that.$"

trage_Text_3:
# 170 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Strong? Is that what you call this?\p"
	.string "You're weak, Surge.Pathetically so.\p"
	.string "Now it's the end for you.$"

trage_Text_4:
# 177 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You spoke too soon,\n"
	.string "Aurther.$"

trage_Text_5:
# 185 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Honey!!!$"

trage_Text_6:
# 190 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I told you, you can't defeat him.\p"
	.string "He solely took down the Nexus Order.\p"
	.string "You could even call him the strongest\n"
	.string "trainer to ever exist.$"

trage_Text_7:
# 193 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Looks like even the strongest can fall\n"
	.string "if you kill them.\p"
	.string "Right Aurther?$"

trage_Text_8:
# 199 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}So, his death would seal Hoopa's powers.\p"
	.string "Now it would be much easier to catch\n"
	.string "Hoopa, I guess.$"

trage_Text_9:
# 202 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Hoopa, your powers... they're sealed!\n"
	.string "You're too weak, please, run!\p"
	.string "You cannot let them capture you.$"

trage_Text_10:
# 211 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}My work here is done.\p"
	.string "I'll go report everything to boss.$"

trage_Text_11:
# 216 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No... no, this can't be happening.$"

trage_Text_12:
# 222 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(Xylar stares at his father's lifeless\n"
	.string "body, blood soaking the ground. His\l"
	.string "heart pounds in his chest, unable to\l"
	.string "fully grasp the horror in front of him.)$"

trage_Text_13:
# 225 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Dad?.......DAD!!!!$"

trage_Text_14:
# 228 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What do we have here?\p"
	.string "Grunts! capture them.\p"
	.string "They could be valuable test subjects.$"

trage_Text_15:
# 230 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes Sir!$"

trage_Text_16:
# 235 "data/maps/Luxurawork/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira! Take Xylar and run.\p"
	.string "Hurry!!$"

surge::
# 247 "data/maps/Luxurawork/scripts.pory"
	.string "Surge$"

unknown::
# 250 "data/maps/Luxurawork/scripts.pory"
	.string "???$"
