Luxurawoods_MapScripts::
# 2 "data/maps/Luxurawoods/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, mewtwofind
# 3 "data/maps/Luxurawoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, outfit
	.byte 0


mewtwofind::
# 6 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 14
	goto_if_eq mewtwofind_1
# 21 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 16
	goto_if_eq mewtwofind_2
# 45 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_eq mewtwofind_3
# 69 "data/maps/Luxurawoods/scripts.pory"
	compare LUXURA_TRAGEDY, 17
	goto_if_gt mewtwofind_4
	return

mewtwofind_1:
# 7 "data/maps/Luxurawoods/scripts.pory"
	addobject 1
# 8 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4AF
# 9 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 10 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 11 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 12 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 13 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 14 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 15 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 16 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 17 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 18 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 19 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B3
	return

mewtwofind_2:
# 22 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 23 "data/maps/Luxurawoods/scripts.pory"
	addobject 2
# 24 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 25 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 26 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 27 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 28 "data/maps/Luxurawoods/scripts.pory"
	removeobject 7
# 29 "data/maps/Luxurawoods/scripts.pory"
	removeobject 8
# 30 "data/maps/Luxurawoods/scripts.pory"
	removeobject 9
# 31 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B3
# 32 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 33 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_ITEM_ROUTE_102_POTION
# 34 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 35 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 36 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 37 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 38 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 39 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 40 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 41 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 42 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 43 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_3:
# 46 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 47 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 48 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 49 "data/maps/Luxurawoods/scripts.pory"
	addobject 4
# 50 "data/maps/Luxurawoods/scripts.pory"
	addobject 5
# 51 "data/maps/Luxurawoods/scripts.pory"
	addobject 6
# 52 "data/maps/Luxurawoods/scripts.pory"
	addobject 10
# 53 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B2
# 54 "data/maps/Luxurawoods/scripts.pory"
	addobject 7
# 55 "data/maps/Luxurawoods/scripts.pory"
	addobject 8
# 56 "data/maps/Luxurawoods/scripts.pory"
	addobject 9
# 57 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B3
# 58 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 59 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 60 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 61 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 62 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 63 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 64 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 65 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 66 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 67 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return

mewtwofind_4:
# 70 "data/maps/Luxurawoods/scripts.pory"
	removeobject 1
# 71 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 72 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 73 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 74 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 75 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 76 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 77 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 78 "data/maps/Luxurawoods/scripts.pory"
	addobject 7
# 79 "data/maps/Luxurawoods/scripts.pory"
	addobject 8
# 80 "data/maps/Luxurawoods/scripts.pory"
	addobject 9
# 81 "data/maps/Luxurawoods/scripts.pory"
	clearflag FLAG_UNUSED_0x4B3
# 82 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4AF
# 83 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 3, 0x332, 0
# 84 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 3, 0x332, 0
# 85 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 3, 0x332, 0
# 86 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 4, 0x332, 0
# 87 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 25, 5, 0x332, 0
# 88 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 4, 0x332, 0
# 89 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 4, 0x332, 0
# 90 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 26, 5, 0x332, 0
# 91 "data/maps/Luxurawoods/scripts.pory"
	setmetatile 27, 5, 0x332, 0
	return


mewtwotend::
# 96 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 97 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 98 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 99 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_0
# 100 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 101 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 102 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mw
# 104 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 105 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 106 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_1, MSGBOX_AUTOCLOSE
# 107 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 108 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mw
# 109 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 110 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 111 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_FAINT
# 112 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 113 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 114 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_2, MSGBOX_AUTOCLOSE
# 115 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 116 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 117 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 119 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotend_Text_3, MSGBOX_AUTOCLOSE
# 120 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 121 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 122 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 123 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 124 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 15
	return


nocave::
# 128 "data/maps/Luxurawoods/scripts.pory"
	lock
# 129 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, nol
# 130 "data/maps/Luxurawoods/scripts.pory"
	msgbox nocave_Text_0
# 131 "data/maps/Luxurawoods/scripts.pory"
	release
	return


mewtwotendq::
# 134 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 135 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, thuddd
# 136 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotendq_Text_0
# 137 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


mewtwotende::
# 140 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 141 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mq
# 142 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewtwotendq_Text_0
# 143 "data/maps/Luxurawoods/scripts.pory"
	goto mewtwotend
	return


# 145 "data/maps/Luxurawoods/scripts.pory"
mq:
# 146 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 146 "data/maps/Luxurawoods/scripts.pory"
	walk_left
	step_end

miradr::
# 149 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 150 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 151 "data/maps/Luxurawoods/scripts.pory"
	msgbox miradr_Text_0, MSGBOX_AUTOCLOSE
# 152 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 154 "data/maps/Luxurawoods/scripts.pory"
nol:
# 155 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewherb::
# 159 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, mewherb_10
mewherb_8:
# 165 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_7
mewherb_5:
# 171 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, mewherb_4
	return

mewherb_1:
# 160 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 161 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 162 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_2:
# 166 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 167 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 168 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_1, MSGBOX_AUTOCLOSE
# 169 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_3:
# 172 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 173 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 174 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 175 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

mewherb_4:
# 171 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, mewherb_3
	return

mewherb_7:
# 165 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_2
	goto mewherb_5

mewherb_10:
# 159 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, mewherb_1
	goto mewherb_8


mewrev::
# 179 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 180 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, no
# 181 "data/maps/Luxurawoods/scripts.pory"
	msgbox mewherb_Text_2, MSGBOX_AUTOCLOSE
# 182 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 184 "data/maps/Luxurawoods/scripts.pory"
no:
# 185 "data/maps/Luxurawoods/scripts.pory"
	walk_right
	step_end

# 187 "data/maps/Luxurawoods/scripts.pory"
mw:
# 188 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 188 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 188 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 188 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 188 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

revivalherb::
# 191 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 192 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 193 "data/maps/Luxurawoods/scripts.pory"
	msgbox revivalherb_Text_0, MSGBOX_AUTOCLOSE
# 194 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 195 "data/maps/Luxurawoods/scripts.pory"
	finditem ITEM_REVIVAL_HERB, 1
# 196 "data/maps/Luxurawoods/scripts.pory"
	removeobject 2
# 197 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_ITEM_ROUTE_102_POTION
# 198 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


revive::
# 203 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B0, revive_20
revive_16:
# 231 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_15
revive_11:
# 263 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_10
revive_6:
# 295 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B0, revive_5
	return

revive_1:
# 204 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 205 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_REVIVAL_HERB, 1
# 206 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_26
# 225 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 226 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_3, MSGBOX_AUTOCLOSE
# 227 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
revive_25:
# 229 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_2:
# 232 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 233 "data/maps/Luxurawoods/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 234 "data/maps/Luxurawoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq revive_30
# 256 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 257 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 258 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_9, MSGBOX_AUTOCLOSE
# 259 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
revive_29:
# 261 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_3:
# 264 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 265 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 266 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_10, MSGBOX_AUTOCLOSE
# 267 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 268 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 269 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_11, MSGBOX_AUTOCLOSE
# 270 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 271 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 272 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_12, MSGBOX_AUTOCLOSE
# 273 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 274 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 275 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_PSYBEAM2
# 276 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 277 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_13, MSGBOX_AUTOCLOSE
# 278 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 279 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 280 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_14, MSGBOX_AUTOCLOSE
# 281 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 282 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 283 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_15, MSGBOX_AUTOCLOSE
# 284 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 285 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 286 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_HEAL
# 287 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_16, MSGBOX_AUTOCLOSE
# 288 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 289 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 290 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x479
# 291 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 292 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 17
	return

revive_4:
# 296 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 297 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 298 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_17, MSGBOX_AUTOCLOSE
# 299 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 300 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return

revive_5:
# 295 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_7
	return

revive_7:
# 295 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x479, revive_4
	return

revive_10:
# 263 "data/maps/Luxurawoods/scripts.pory"
	goto_if_set FLAG_UNUSED_0x4B1, revive_12
	goto revive_6

revive_12:
# 263 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_3
	goto revive_6

revive_15:
# 231 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_17
	goto revive_11

revive_17:
# 231 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_2
	goto revive_11

revive_20:
# 203 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4B1, revive_22
	goto revive_16

revive_22:
# 203 "data/maps/Luxurawoods/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x479, revive_1
	goto revive_16

revive_26:
# 207 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 208 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_0, MSGBOX_AUTOCLOSE
# 209 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 210 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_REVIVAL_HERB, 1
# 212 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_HEAL
# 213 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 214 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 215 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 216 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_1, MSGBOX_AUTOCLOSE
# 217 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 218 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 219 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 220 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_2, MSGBOX_AUTOCLOSE
# 221 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 222 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B0
	goto revive_25

revive_30:
# 235 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 236 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_4, MSGBOX_AUTOCLOSE
# 237 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 238 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 239 "data/maps/Luxurawoods/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 240 "data/maps/Luxurawoods/scripts.pory"
	playse MUS_HEAL
# 241 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 242 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 243 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 244 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_5, MSGBOX_AUTOCLOSE
# 245 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 246 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 247 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_6, MSGBOX_AUTOCLOSE
# 248 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_7, MSGBOX_AUTOCLOSE
# 249 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 250 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 251 "data/maps/Luxurawoods/scripts.pory"
	msgbox revive_Text_8, MSGBOX_AUTOCLOSE
# 252 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 253 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B1
	goto revive_29


gruntsded::
# 308 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 309 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, invisible
# 310 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, invisible
# 311 "data/maps/Luxurawoods/scripts.pory"
	applymovement 8, invisible
# 312 "data/maps/Luxurawoods/scripts.pory"
	applymovement 9, invisible
# 313 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, invisible
# 314 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, dd
# 315 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 316 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_0, MSGBOX_AUTOCLOSE
# 317 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 318 "data/maps/Luxurawoods/scripts.pory"
	special SpawnCameraObject
# 319 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 320 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 321 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, in
# 322 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_1, MSGBOX_AUTOCLOSE
# 323 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_2, MSGBOX_AUTOCLOSE
# 324 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_3, MSGBOX_AUTOCLOSE
# 325 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_4, MSGBOX_AUTOCLOSE
# 326 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 327 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_5, MSGBOX_AUTOCLOSE
# 328 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 329 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_6, MSGBOX_AUTOCLOSE
# 330 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_7, MSGBOX_AUTOCLOSE
# 331 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 332 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_8, MSGBOX_AUTOCLOSE
# 333 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 334 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, dds
# 335 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_9, MSGBOX_AUTOCLOSE
# 336 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_10, MSGBOX_AUTOCLOSE
# 337 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_11, MSGBOX_AUTOCLOSE
# 338 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_12, MSGBOX_AUTOCLOSE
# 339 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 340 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_13, MSGBOX_AUTOCLOSE
# 341 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 342 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_14, MSGBOX_AUTOCLOSE
# 343 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_15, MSGBOX_AUTOCLOSE
# 344 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 345 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_16, MSGBOX_AUTOCLOSE
# 346 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 347 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_17, MSGBOX_AUTOCLOSE
# 348 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, visible
# 349 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_18, MSGBOX_AUTOCLOSE
# 350 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
# 351 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19
# 352 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 353 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 354 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_20, MSGBOX_AUTOCLOSE
# 355 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 356 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 357 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 358 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 359 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_21, MSGBOX_AUTOCLOSE
# 360 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 361 "data/maps/Luxurawoods/scripts.pory"
	namebox Xylar
# 362 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_22, MSGBOX_AUTOCLOSE
# 363 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 364 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_23, MSGBOX_AUTOCLOSE
# 365 "data/maps/Luxurawoods/scripts.pory"
	namebox unknown
# 366 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_24, MSGBOX_AUTOCLOSE
# 367 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 368 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 369 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, visible
# 370 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 371 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_25, MSGBOX_AUTOCLOSE
# 372 "data/maps/Luxurawoods/scripts.pory"
	playmoncry SPECIES_ELECTRODE, CRY_MODE_WEAK
# 373 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_19
# 374 "data/maps/Luxurawoods/scripts.pory"
	waitmoncry
# 375 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_COSMIC_POWER
# 376 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 377 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_26
# 378 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_27, MSGBOX_AUTOCLOSE
# 379 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 380 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_28, MSGBOX_AUTOCLOSE
# 381 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 382 "data/maps/Luxurawoods/scripts.pory"
	applymovement 6, ee
# 383 "data/maps/Luxurawoods/scripts.pory"
	applymovement 4, exclam
# 384 "data/maps/Luxurawoods/scripts.pory"
	applymovement 5, exclam
# 385 "data/maps/Luxurawoods/scripts.pory"
	waitmovement 0
# 386 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_29, MSGBOX_AUTOCLOSE
# 387 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_30, MSGBOX_AUTOCLOSE
# 388 "data/maps/Luxurawoods/scripts.pory"
	waitmessage
# 389 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 390 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_31, MSGBOX_AUTOCLOSE
# 391 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 392 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 393 "data/maps/Luxurawoods/scripts.pory"
	playse SE_M_EXPLOSION
# 394 "data/maps/Luxurawoods/scripts.pory"
	waitse
# 395 "data/maps/Luxurawoods/scripts.pory"
	removeobject 4
# 396 "data/maps/Luxurawoods/scripts.pory"
	removeobject 5
# 397 "data/maps/Luxurawoods/scripts.pory"
	removeobject 6
# 398 "data/maps/Luxurawoods/scripts.pory"
	applymovement 7, visible
# 399 "data/maps/Luxurawoods/scripts.pory"
	applymovement 8, visible
# 400 "data/maps/Luxurawoods/scripts.pory"
	applymovement 9, visible
# 401 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 402 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, strp
# 403 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 404 "data/maps/Luxurawoods/scripts.pory"
	applymovement 10, sss
# 405 "data/maps/Luxurawoods/scripts.pory"
	namebox mewtwo
# 406 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntsded_Text_32, MSGBOX_AUTOCLOSE
# 407 "data/maps/Luxurawoods/scripts.pory"
	hidenamebox
# 408 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 409 "data/maps/Luxurawoods/scripts.pory"
	removeobject 10
# 410 "data/maps/Luxurawoods/scripts.pory"
	setflag FLAG_UNUSED_0x4B2
# 411 "data/maps/Luxurawoods/scripts.pory"
	special RemoveCameraObject
# 412 "data/maps/Luxurawoods/scripts.pory"
	warp MAP_GRANITE_CAVE_1F, 12, 9
# 413 "data/maps/Luxurawoods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 414 "data/maps/Luxurawoods/scripts.pory"
	releaseall
# 415 "data/maps/Luxurawoods/scripts.pory"
	setvar LUXURA_TRAGEDY, 18
	return


# 419 "data/maps/Luxurawoods/scripts.pory"
sss:
# 420 "data/maps/Luxurawoods/scripts.pory"
	face_down
	step_end

# 423 "data/maps/Luxurawoods/scripts.pory"
dds:
# 424 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 424 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 424 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 424 "data/maps/Luxurawoods/scripts.pory"
	walk_down
# 425 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 425 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 426 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 428 "data/maps/Luxurawoods/scripts.pory"
ss:
# 429 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 429 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 429 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 429 "data/maps/Luxurawoods/scripts.pory"
	walk_up
# 429 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 431 "data/maps/Luxurawoods/scripts.pory"
dd:
# 432 "data/maps/Luxurawoods/scripts.pory"
	walk_up
	step_end

# 435 "data/maps/Luxurawoods/scripts.pory"
ee:
# 436 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

gruntded::
# 440 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 441 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, rr
# 442 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 443 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


# 445 "data/maps/Luxurawoods/scripts.pory"
rr:
# 446 "data/maps/Luxurawoods/scripts.pory"
	walk_left
# 447 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

# 450 "data/maps/Luxurawoods/scripts.pory"
cm:
# 451 "data/maps/Luxurawoods/scripts.pory"
	walk_right
# 452 "data/maps/Luxurawoods/scripts.pory"
	face_up
	step_end

grut::
# 455 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 456 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, cm
# 457 "data/maps/Luxurawoods/scripts.pory"
	msgbox gruntded_Text_0, MSGBOX_AUTOCLOSE
# 458 "data/maps/Luxurawoods/scripts.pory"
	goto gruntsded
	return


nio::
# 462 "data/maps/Luxurawoods/scripts.pory"
	lockall
# 463 "data/maps/Luxurawoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, csm
# 464 "data/maps/Luxurawoods/scripts.pory"
	msgbox nio_Text_0, MSGBOX_AUTOCLOSE
# 465 "data/maps/Luxurawoods/scripts.pory"
	releaseall
	return


# 468 "data/maps/Luxurawoods/scripts.pory"
csm:
# 469 "data/maps/Luxurawoods/scripts.pory"
	walk_down
	step_end

mewtwotend_Text_0:
# 99 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Why isn't Mira here yet? She said she'd\n"
	.string "catch up… Did something happen?\p"
	.string "She's strong, I know she can handle\n"
	.string "them… right? But how?\p"
	.string "No… I can't stop now, she told me to run.\n"
	.string "She'll be okay…\p"
	.string "She has to be okay.$"

mewtwotend_Text_1:
# 106 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the...?\p"
	.string "Is that... a Pokémon?\p"
	.string "What happened to you...?$"

mewtwotend_Text_2:
# 114 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're hurt... bad. I can't just leave you\n"
	.string "here.\p"
	.string "I don't know if you can understand me,\n"
	.string "but...\p"
	.string "I'll definitely save you. I promise.$"

mewtwotend_Text_3:
# 119 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I've lost too much already.I won't let\n"
	.string "you die here,too.$"

nocave_Text_0:
# 130 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}I should not go into the cave alone.$"

mewtwotendq_Text_0:
# 136 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_BLUE}I'm worried.$"

miradr_Text_0:
# 151 "data/maps/Luxurawoods/scripts.pory"
	.string "No! I have to get away.$"

mewherb_Text_0:
# 162 "data/maps/Luxurawoods/scripts.pory"
	.string "I should search for the herbs.$"

mewherb_Text_1:
# 168 "data/maps/Luxurawoods/scripts.pory"
	.string "I should look for water.$"

mewherb_Text_2:
# 174 "data/maps/Luxurawoods/scripts.pory"
	.string "I can't leave him alone.$"

revivalherb_Text_0:
# 193 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I found it... This is it!\p"
	.string "Mira, you were right, these herbs really\n"
	.string "do grow everywhere.$"

revive_Text_0:
# 208 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should apply the herb on the wounds.$"

revive_Text_1:
# 216 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This should help stop the bleeding...\p"
	.string "But it's not enough. You need water too.$"

revive_Text_2:
# 220 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there, I'll be back in no time.$"

revive_Text_3:
# 226 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I should go search for the herbs\p"
	.string "the wounds look pretty painful.$"

revive_Text_4:
# 236 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there, I've got the water.$"

revive_Text_5:
# 244 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Finally... This should do.\p"
	.string "You've been through so much... Just a\n"
	.string "little longer.\p"
	.string "We'll get through this together.$"

revive_Text_6:
# 247 "data/maps/Luxurawoods/scripts.pory"
	.string "Xylar continued to take care of the\n"
	.string "pokemon for a few days hoping it would\l"
	.string "open it's eyes.$"

revive_Text_7:
# 248 "data/maps/Luxurawoods/scripts.pory"
	.string "A few days later...$"

revive_Text_8:
# 251 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I can't... I can't keep going like this.\n"
	.string "How many days has it been... since I last\l"
	.string "ate anything real? These plants... they\l"
	.string "barely keep me standing\p"
	.string "but he looks better than before.$"

revive_Text_9:
# 258 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I have to find some water for him.$"

revive_Text_10:
# 266 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}...Who... are you?$"

revive_Text_11:
# 269 "data/maps/Luxurawoods/scripts.pory"
	.string "(Is this telepathy?)\p"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I...\p"
	.string "I found you.You were hurt, bleeding...\p"
	.string "I couldn't just leave you there.$"

revive_Text_12:
# 272 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Why would you help me?\p"
	.string "Humans are nothing but deceivers...$"

revive_Text_13:
# 277 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo used his psychic powers to read\n"
	.string "Xylar's mind$"

revive_Text_14:
# 280 "data/maps/Luxurawoods/scripts.pory"
	.string "(He's... telling the truth. His concern...\n"
	.string "it's genu...)$"

revive_Text_15:
# 283 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He fainted.\p"
	.string "Maybe using telepathy strained him,\n"
	.string "since he hasn't fully recovered yet.\p"
	.string "I should also rest for a bit.$"

revive_Text_16:
# 287 "data/maps/Luxurawoods/scripts.pory"
	.string "Zzzzzz.....$"

revive_Text_17:
# 298 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}He's still recovering, I should look for\n"
	.string "more herbs.$"

gruntsded_Text_0:
# 316 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}It's a relief i remembered about the\n"
	.string "herbs.\p"
	.string "I'm worried about Mira, It's been almost\n"
	.string "a week.\p"
	.string "I hope she is okay.$"

gruntsded_Text_1:
# 322 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Look who we have here...$"

gruntsded_Text_2:
# 323 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}The little runaway.\p"
	.string "And all alone this time...$"

gruntsded_Text_3:
# 324 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Poor little rich boy... you think you can\n"
	.string "run? Think you can hide? No, no, no...\l"
	.string "your fate is written, carved in the same\l"
	.string "blood as your family's.$"

gruntsded_Text_4:
# 325 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Look at him... so lost, so angry.\p"
	.string "We can almost taste it, can't we?$"

gruntsded_Text_5:
# 327 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is Mira? What did you do to her?$"

gruntsded_Text_6:
# 329 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Mira... such a sweet girl.\p"
	.string "Brave.\p"
	.string "Too brave for her own good.$"

gruntsded_Text_7:
# 330 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She fought so hard.\p"
	.string "But do you know what broke her? It\n"
	.string "wasn't the pain\p"
	.string "...\p"
	.string "It was You.\p"
	.string "Her hope in you... shattered like glass.\n"
	.string "She screamed for you, right before we\l"
	.string "made her...\p"
	.string "Disappear.$"

gruntsded_Text_8:
# 332 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Stop... stop lying!$"

gruntsded_Text_9:
# 335 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Lie? Why would we lie? It was beautiful.\p"
	.string "The way her eyes widened when she\n"
	.string "realized... you weren't coming.\p"
	.string "You couldn't save her, just like you\n"
	.string "couldn't save anyone!$"

gruntsded_Text_10:
# 336 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think this all started today? Oh,\n"
	.string "no... it's always been you, Xylar. Your\l"
	.string "weakness... your failure. They're dead\l"
	.string "because of you.$"

gruntsded_Text_11:
# 337 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your father... your mother... Mira... They\n"
	.string "all died... waiting for you.$"

gruntsded_Text_12:
# 338 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You couldn't save her. You couldn't save\n"
	.string "any of them.\p"
	.string "And now you're alone... Just like you\n"
	.string "were always meant to be.\p"
	.string "Alone in the dark, where no one will hear\n"
	.string "you scream.$"

gruntsded_Text_13:
# 340 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'll kill you! I'll fucking kill you all!$"

gruntsded_Text_14:
# 342 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Kill us?\p"
	.string "You?\p"
	.string "You can't even save yourself! You're\n"
	.string "drowning in your own guilt.\p"
	.string "And the deeper you sink, the closer you\n"
	.string "get to her... to all of them, waiting for\l"
	.string "you in the dark.$"

gruntsded_Text_15:
# 343 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yes, join them! Let the guilt consume\n"
	.string "you. Soon... you'll hear their voices too,\l"
	.string "whispering your name. Waiting for you to\l"
	.string "fall... just like them.$"

gruntsded_Text_16:
# 345 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I SAID SHUT UP!$"

gruntsded_Text_17:
# 347 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}They died because of you. And now...\n"
	.string "you'll join them.\p"
	.string "Let's see how strong you really are\n"
	.string "when you can't even save yourself.\p"
	.string "Electrode!$"

gruntsded_Text_18:
# 349 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let's end this...\p"
	.string "Electrode, EXPLODE!$"

gruntsded_Text_19:
# 351 "data/maps/Luxurawoods/scripts.pory"
	.string "Bzzz$"

gruntsded_Text_20:
# 354 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}HAHAHAHAHAHAHA!$"

gruntsded_Text_21:
# 359 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What... what the hell is wrong with you?$"

gruntsded_Text_22:
# 362 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think I couldn't save her? You\n"
	.string "think it's over? It's never over!\p"
	.string "I'LL TEAR THIS WORLD APART! RIP EVERY\n"
	.string "ONE OF YOU TO SHREDS!\p"
	.string "YOU'RE DEAD! DEAD! DEAD!\p"
	.string "I'LL KILL EVERY LAST ONE OF YOU! I'LL\n"
	.string "MAKE YOU FEEL EVERYTHING I'VE FELT!\l"
	.string "YOU HEAR ME?!$"

gruntsded_Text_23:
# 364 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's... he's broken.$"

gruntsded_Text_24:
# 366 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}This ends now!$"

gruntsded_Text_25:
# 371 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the...\p"
	.string "Electrode finish both of them.\p"
	.string "Use Explosion!$"

gruntsded_Text_26:
# 377 "data/maps/Luxurawoods/scripts.pory"
	.string "Electrode, frozen mid-charge, begins to\n"
	.string "tremble under Mewtwo's control.$"

gruntsded_Text_27:
# 378 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Do something you stupid ball.$"

gruntsded_Text_28:
# 380 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}You know what to do.$"

gruntsded_Text_29:
# 386 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}W-What?! No! What's happening?!$"

gruntsded_Text_30:
# 387 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Stop it, you stupid ball! Listen to us!$"

gruntsded_Text_31:
# 390 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Now...\p"
	.string "Explode.$"

gruntsded_Text_32:
# 406 "data/maps/Luxurawoods/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Let's go, Human.$"

gruntded_Text_0:
# 442 "data/maps/Luxurawoods/scripts.pory"
	.string "I'm glad he's fine.$"

nio_Text_0:
# 464 "data/maps/Luxurawoods/scripts.pory"
	.string "That's not where herbs grow.$"

mewtwo::
# 303 "data/maps/Luxurawoods/scripts.pory"
	.string "Mewtwo$"
