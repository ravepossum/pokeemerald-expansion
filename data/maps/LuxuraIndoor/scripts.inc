LuxuraIndoor_MapScripts::
# 2 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, tragedy
# 5 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, outfit
# 3 "data/maps/LuxuraIndoor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LuxuraIndoor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

LuxuraIndoor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/LuxuraIndoor/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 5, indoor
	.2byte 0


MaidZ::
# 8 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x4A2, MaidZ_1
# 16 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 17 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 18 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 19 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 20 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 21 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 1, exclam
# 22 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_2
# 24 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 25 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 27 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 28 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_3
# 29 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 30 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 31 "data/maps/LuxuraIndoor/scripts.pory"
	playfanfare FANFARE_OBTAIN_ITEM
# 32 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_4
# 33 "data/maps/LuxuraIndoor/scripts.pory"
	waitfanfare
# 34 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 8
# 35 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A2
# 36 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return

MaidZ_1:
# 9 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 10 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 11 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 12 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 13 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 14 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Maid::
# 41 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 42 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 43 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 44 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidZ_Text_1
# 45 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 46 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidG::
# 50 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 51 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 52 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 53 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidG_Text_0
# 54 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 55 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidD::
# 59 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 60 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 61 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 62 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidD_Text_0
# 63 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 64 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidB::
# 68 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 69 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 70 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 71 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidB_Text_0
# 72 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 73 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidM::
# 77 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 78 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 79 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 80 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidM_Text_0
# 81 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 82 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidE::
# 86 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49E, MaidE_1
# 94 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 95 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 96 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 97 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 98 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 99 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 2, exclam
# 100 "data/maps/LuxuraIndoor/scripts.pory"
	namebox felicia
# 101 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_1
# 102 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 103 "data/maps/LuxuraIndoor/scripts.pory"
	waitmessage
# 104 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 106 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x49F
# 107 "data/maps/LuxuraIndoor/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 108 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
# 109 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 7
# 110 "data/maps/LuxuraIndoor/scripts.pory"
	setvar VAR_ROUTE103_STATE, 1
	return

MaidE_1:
# 87 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 88 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 89 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 90 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidE_Text_0
# 91 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 92 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


MaidC::
# 115 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 116 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 117 "data/maps/LuxuraIndoor/scripts.pory"
	namebox MaidZ_Text_0
# 118 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox MaidC_Text_0
# 119 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 120 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Minccino::
# 124 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 125 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 126 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Minccino_Text_0
# 127 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_MINCCINO, CRY_MODE_NORMAL
# 128 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Minccino_Text_1
# 129 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 130 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 131 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Grumpig::
# 135 "data/maps/LuxuraIndoor/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x493, Grumpig_1
# 148 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 149 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 150 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 151 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Grumpig_Text_0
# 152 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 153 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 154 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 155 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 156 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return

Grumpig_1:
# 136 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 137 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 138 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement 5, heart
# 139 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Grumpig_Text_0
# 140 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_GRUMPIG, CRY_MODE_NORMAL
# 141 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Grumpig_Text_1
# 142 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 143 "data/maps/LuxuraIndoor/scripts.pory"
	giveitem ITEM_TWISTED_SPOON, 1
# 144 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x493
# 145 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 146 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


Blissey::
# 160 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 161 "data/maps/LuxuraIndoor/scripts.pory"
	faceplayer
# 162 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Blissey_Text_0
# 163 "data/maps/LuxuraIndoor/scripts.pory"
	playmoncry SPECIES_BLISSEY, CRY_MODE_NORMAL
# 164 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox Blissey_Text_1
# 165 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 166 "data/maps/LuxuraIndoor/scripts.pory"
	waitmoncry
# 167 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


strol::
# 176 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 177 "data/maps/LuxuraIndoor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, notp
# 178 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox strol_Text_0
# 179 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
	return


tragedy::
# 183 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_lt tragedy_1
# 189 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq tragedy_2
# 195 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 10
	goto_if_eq tragedy_3
# 201 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_eq tragedy_4
# 258 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 11
	goto_if_gt tragedy_8
tragedy_7:
# 317 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_gt tragedy_6
	return

tragedy_1:
# 184 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 185 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 186 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 187 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
	return

tragedy_2:
# 190 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 191 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 192 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 193 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
	return

tragedy_3:
# 196 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 7
# 197 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 8
# 198 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 9
# 199 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A6
	return

tragedy_4:
# 202 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 203 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 204 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 205 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 206 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 207 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 208 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 209 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 210 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 211 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 212 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 213 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 214 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 215 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 216 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 217 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 218 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 219 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 220 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 221 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 222 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 223 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 224 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 225 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 226 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 227 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 228 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 229 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 230 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 231 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 232 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 233 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 234 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 235 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 236 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 237 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 238 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 239 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 240 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 241 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 242 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 243 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 244 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 245 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 246 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 247 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 248 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 249 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 250 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 251 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 252 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 253 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 254 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 255 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 256 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
	return

tragedy_5:
# 259 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 260 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 261 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 262 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 263 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 264 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 265 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 266 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 267 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 268 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 269 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 270 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 271 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 272 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 273 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 274 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 275 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 276 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 277 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 278 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 279 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 280 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 281 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 282 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 283 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 284 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 285 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 286 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 287 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 288 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 289 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 290 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 291 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 292 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 293 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 294 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 295 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 296 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 297 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 298 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 299 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 300 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 301 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 302 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 303 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 304 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 305 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 306 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 307 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 308 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 309 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 310 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 311 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 312 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 313 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 314 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
	return

tragedy_6:
# 318 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 7
# 319 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 8
# 320 "data/maps/LuxuraIndoor/scripts.pory"
	addobject 9
# 321 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 1
# 322 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 2
# 323 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 3
# 324 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 4
# 325 "data/maps/LuxuraIndoor/scripts.pory"
	removeobject 5
# 326 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A7
# 327 "data/maps/LuxuraIndoor/scripts.pory"
	setflag FLAG_UNUSED_0x4A8
# 328 "data/maps/LuxuraIndoor/scripts.pory"
	clearflag FLAG_UNUSED_0x4A6
# 329 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 5, 0x2CF, 1
# 330 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 26, 0x2A0, 1
# 331 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 26, 0x2A1, 1
# 332 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 27, 0x2A8, 1
# 333 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 27, 0x2A9, 1
# 334 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 20, 0x2A0, 1
# 335 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 20, 0x2A1, 1
# 336 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 18, 21, 0x2A8, 1
# 337 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 19, 21, 0x2A9, 1
# 338 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 30, 0x2B0, 1
# 339 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 30, 0x2B1, 1
# 340 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 31, 0x2B8, 1
# 341 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 31, 0x2B9, 1
# 342 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 38, 0x2B0, 1
# 343 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 38, 0x2B1, 1
# 344 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 39, 0x2B8, 1
# 345 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 11, 39, 0x2B9, 1
# 346 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 6, 0x2B0, 1
# 347 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 6, 0x2B1, 1
# 348 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 26, 7, 0x2B8, 1
# 349 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 27, 7, 0x2B9, 1
# 350 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 6, 0x2A0, 1
# 351 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 6, 0x2A1, 1
# 352 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 7, 0x2A8, 1
# 353 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 7, 0x2A9, 1
# 354 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 15, 0x1E1, 1
# 355 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 15, 0x1E2, 1
# 356 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 4, 16, 0x1E9, 1
# 357 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 5, 16, 0x1EA, 1
# 358 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 6, 0x2A0, 1
# 359 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 6, 0x2A1, 1
# 360 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 14, 7, 0x2A8, 1
# 361 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 15, 7, 0x2A9, 1
# 362 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 6, 0x2A0, 1
# 363 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 6, 0x2A1, 1
# 364 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 22, 7, 0x2A8, 1
# 365 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 23, 7, 0x2A9, 1
# 366 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 3, 0x1E1, 1
# 367 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 3, 0x1E2, 1
# 368 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 9, 4, 0x1E9, 1
# 369 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 10, 4, 0x1EA, 1
# 370 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 10, 0x2B0, 1
# 371 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 10, 0x2B1, 1
# 372 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 12, 11, 0x2B8, 1
# 373 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 13, 11, 0x2B9, 1
# 374 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 6, 0x2B0, 1
# 375 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 6, 0x2B1, 1
# 376 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 6, 7, 0x2B8, 1
# 377 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 7, 7, 0x2B9, 1
# 378 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 36, 0x0E0, 1
# 379 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 36, 0x0E1, 1
# 380 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 0, 37, 0x0E8, 1
# 381 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 1, 37, 0x0E9, 1
# 382 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 36, 0x340, 0
# 383 "data/maps/LuxuraIndoor/scripts.pory"
	setmetatile 2, 37, 0x348, 0
	return

tragedy_8:
# 258 "data/maps/LuxuraIndoor/scripts.pory"
	compare LUXURA_TRAGEDY, 19
	goto_if_lt tragedy_5
	goto tragedy_7


caprun::
# 387 "data/maps/LuxuraIndoor/scripts.pory"
	lockall
# 388 "data/maps/LuxuraIndoor/scripts.pory"
	facefollower
# 389 "data/maps/LuxuraIndoor/scripts.pory"
	namebox name4
# 390 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_0
# 391 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 392 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Xylar
# 393 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_1
# 394 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 395 "data/maps/LuxuraIndoor/scripts.pory"
	namebox name4
# 396 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_2
# 397 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 398 "data/maps/LuxuraIndoor/scripts.pory"
	namebox Xylar
# 399 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_3, MSGBOX_AUTOCLOSE
# 400 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 401 "data/maps/LuxuraIndoor/scripts.pory"
	namebox name4
# 402 "data/maps/LuxuraIndoor/scripts.pory"
	msgbox caprun_Text_4
# 403 "data/maps/LuxuraIndoor/scripts.pory"
	hidenamebox
# 404 "data/maps/LuxuraIndoor/scripts.pory"
	releaseall
# 405 "data/maps/LuxuraIndoor/scripts.pory"
	setvar LUXURA_TRAGEDY, 13
	return


# 407 "data/maps/LuxuraIndoor/scripts.pory"
rop:
# 408 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
# 409 "data/maps/LuxuraIndoor/scripts.pory"
	walk_right
	step_end

# 412 "data/maps/LuxuraIndoor/scripts.pory"
rope:
# 413 "data/maps/LuxuraIndoor/scripts.pory"
	walk_down
	step_end

MaidZ_Text_0:
# 11 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Maid$"

MaidZ_Text_1:
# 12 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Young master, please let me know if you\n"
	.string "need anything.$"

MaidZ_Text_2:
# 23 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Your shoes?\p"
	.string "I'll go get it right away.$"

MaidZ_Text_3:
# 28 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Here you go!$"

MaidZ_Text_4:
# 32 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Recieved {COLOR BLUE}{SHADOW LIGHT_GRAY}RUNNING SHOES$"

MaidG_Text_0:
# 53 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Grumpig helps us by using its psychic\n"
	.string "powers to precisely measure and mix the\l"
	.string "ingredients, ensuring perfect results\l"
	.string "every time.$"

MaidD_Text_0:
# 62 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} I'm just finishing up the dishes and\n"
	.string "will have everything cleaned and put\l"
	.string "away shortly.$"

MaidB_Text_0:
# 71 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Having Blissey in the kitchen ensures\n"
	.string "that every dish is prepared with care\l"
	.string "and has a touch of healing energy,\l"
	.string "making meals not only delicious but also\l"
	.string "comforting.$"

MaidM_Text_0:
# 80 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} With Minccino around, cleaning is a\n"
	.string "breeze, its Swift Swipes keep\l"
	.string "everything spotless and organized in\l"
	.string "no time.$"

MaidE_Text_0:
# 90 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Lady Elysia is so considerate, she\n"
	.string "knows I love reading, so she's given me\l"
	.string "a break in the library to enjoy my book.$"

MaidE_Text_1:
# 101 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}What? Lady Elysia is asking for me?\p"
	.string "I'll be on my way.$"

MaidC_Text_0:
# 118 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} I'm just dusting the shelves in the\n"
	.string "library to keep everything neat.$"

Minccino_Text_0:
# 126 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Minccino$"

Minccino_Text_1:
# 128 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Chii,chii! Min-min!$"

Grumpig_Text_0:
# 139 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Grumpig$"

Grumpig_Text_1:
# 141 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Pii, pii! Grrum, grrum!$"

Blissey_Text_0:
# 162 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Blissey$"

Blissey_Text_1:
# 164 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY} Hoo, hoo! Blii, bliiss!$"

strol_Text_0:
# 178 "data/maps/LuxuraIndoor/scripts.pory"
	.string "It's time for my stroll with Mira.\p"
	.string "I should go tell her.$"

caprun_Text_0:
# 390 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Come on, Master Xylar we have to go\n"
	.string "quickly.$"

caprun_Text_1:
# 393 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}But what about Mom? and Dad, he's hurt!\n"
	.string "I can't leave them behind.$"

caprun_Text_2:
# 396 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}We don't have time Master Xylar.\p"
	.string "Your Mom and Dad...\p"
	.string "they're strong.They'll be okay.\p"
	.string "But you need to live! For them!$"

caprun_Text_3:
# 399 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}No! I can't leave Mom and Dad. I can't..$"

caprun_Text_4:
# 402 "data/maps/LuxuraIndoor/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Please, Master Xylar, for your\n"
	.string "parents....run!$"

felicia::
# 170 "data/maps/LuxuraIndoor/scripts.pory"
	.string "Felicia$"
