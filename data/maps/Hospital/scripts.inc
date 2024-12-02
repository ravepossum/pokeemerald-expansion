# 1 "data/maps/Hospital/scripts.pory"

# 2 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts::
# 3 "data/maps/Hospital/scripts.pory"
# 2 "data/maps/Hospital/scripts.pory"
# 4 "data/maps/Hospital/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Hospital_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/Hospital/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, outfit
# 6 "data/maps/Hospital/scripts.pory"
	.byte 0
# 7 "data/maps/Hospital/scripts.pory"

# 8 "data/maps/Hospital/scripts.pory"
Hospital_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/Hospital/scripts.pory"
# 3 "data/maps/Hospital/scripts.pory"
# 10 "data/maps/Hospital/scripts.pory"
	map_script_2 LUXURA_TRAGEDY, 0, Luxura
# 11 "data/maps/Hospital/scripts.pory"
	.2byte 0
# 12 "data/maps/Hospital/scripts.pory"

# 13 "data/maps/Hospital/scripts.pory"

# 14 "data/maps/Hospital/scripts.pory"
Luxura::
# 15 "data/maps/Hospital/scripts.pory"
playse MUS_DUMMY
# 16 "data/maps/Hospital/scripts.pory"
# 8 "data/maps/Hospital/scripts.pory"
# 17 "data/maps/Hospital/scripts.pory"
	lockall
# 18 "data/maps/Hospital/scripts.pory"
# 9 "data/maps/Hospital/scripts.pory"
# 19 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/maps/Hospital/scripts.pory"
# 10 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LUXURA_ISLAND
# 22 "data/maps/Hospital/scripts.pory"
# 11 "data/maps/Hospital/scripts.pory"
# 23 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/maps/Hospital/scripts.pory"
# 12 "data/maps/Hospital/scripts.pory"
# 25 "data/maps/Hospital/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/Hospital/scripts.pory"
# 13 "data/maps/Hospital/scripts.pory"
# 27 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, boom
# 28 "data/maps/Hospital/scripts.pory"
# 14 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 30 "data/maps/Hospital/scripts.pory"
# 15 "data/maps/Hospital/scripts.pory"
# 31 "data/maps/Hospital/scripts.pory"
	msgbox myloll , MSGBOX_AUTOCLOSE
# 32 "data/maps/Hospital/scripts.pory"
# 16 "data/maps/Hospital/scripts.pory"
# 33 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mylol
# 34 "data/maps/Hospital/scripts.pory"
# 17 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 36 "data/maps/Hospital/scripts.pory"
# 18 "data/maps/Hospital/scripts.pory"
# 37 "data/maps/Hospital/scripts.pory"
	msgbox scared , MSGBOX_AUTOCLOSE
# 38 "data/maps/Hospital/scripts.pory"
# 19 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
	applymovement 11, thudd
# 40 "data/maps/Hospital/scripts.pory"
# 20 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
	applymovement 9, thud
# 42 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
# 43 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_0 , MSGBOX_AUTOCLOSE
# 44 "data/maps/Hospital/scripts.pory"
# 22 "data/maps/Hospital/scripts.pory"
# 45 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 46 "data/maps/Hospital/scripts.pory"
# 23 "data/maps/Hospital/scripts.pory"
# 47 "data/maps/Hospital/scripts.pory"
	applymovement 10, thuddd
# 48 "data/maps/Hospital/scripts.pory"
# 24 "data/maps/Hospital/scripts.pory"
# 49 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, old
# 50 "data/maps/Hospital/scripts.pory"
# 25 "data/maps/Hospital/scripts.pory"
# 51 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 52 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
# 53 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_1 , MSGBOX_AUTOCLOSE
# 54 "data/maps/Hospital/scripts.pory"
# 27 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, main
# 56 "data/maps/Hospital/scripts.pory"
# 28 "data/maps/Hospital/scripts.pory"
# 57 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 58 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
    namebox(name1)
# 60 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_2 , MSGBOX_AUTOCLOSE
# 61 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 62 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
    setvar VAR_0x8000, MUGSHOT_BABY
# 64 "data/maps/Hospital/scripts.pory"
    callnative DrawMugshot
# 65 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_3
# 66 "data/maps/Hospital/scripts.pory"
	callnative ClearMugshot
# 67 "data/maps/Hospital/scripts.pory"
# 31 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
	applymovement 2, heart
# 69 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
# 70 "data/maps/Hospital/scripts.pory"
	namebox(name2)
# 71 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_4 , MSGBOX_AUTOCLOSE
# 72 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 73 "data/maps/Hospital/scripts.pory"
# 33 "data/maps/Hospital/scripts.pory"
# 74 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 75 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
# 76 "data/maps/Hospital/scripts.pory"
    namebox(name3)
# 77 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_5 , MSGBOX_AUTOCLOSE
# 78 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 79 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
# 80 "data/maps/Hospital/scripts.pory"
    setvar VAR_0x8000, MUGSHOT_BABY
# 81 "data/maps/Hospital/scripts.pory"
    callnative DrawMugshot
# 82 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_6 , MSGBOX_AUTOCLOSE
# 83 "data/maps/Hospital/scripts.pory"
	callnative ClearMugshot
# 84 "data/maps/Hospital/scripts.pory"
# 36 "data/maps/Hospital/scripts.pory"
# 85 "data/maps/Hospital/scripts.pory"
	applymovement 4, bye
# 86 "data/maps/Hospital/scripts.pory"
# 37 "data/maps/Hospital/scripts.pory"
# 87 "data/maps/Hospital/scripts.pory"
	applymovement 3, bye
# 88 "data/maps/Hospital/scripts.pory"
# 38 "data/maps/Hospital/scripts.pory"
# 89 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 90 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
# 91 "data/maps/Hospital/scripts.pory"
    namebox(name2)
# 92 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_7 , MSGBOX_AUTOCLOSE
# 93 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 94 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
# 95 "data/maps/Hospital/scripts.pory"
    namebox(name3)
# 96 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_8 , MSGBOX_AUTOCLOSE
# 97 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 98 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
# 99 "data/maps/Hospital/scripts.pory"
    setvar VAR_0x8000, MUGSHOT_BABY
# 100 "data/maps/Hospital/scripts.pory"
    callnative DrawMugshot
# 101 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_9 , MSGBOX_AUTOCLOSE
# 102 "data/maps/Hospital/scripts.pory"
	callnative ClearMugshot
# 103 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
# 104 "data/maps/Hospital/scripts.pory"
	namebox(name4)
# 105 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_10 , MSGBOX_AUTOCLOSE
# 106 "data/maps/Hospital/scripts.pory"
	hidenamebox
# 107 "data/maps/Hospital/scripts.pory"
# 43 "data/maps/Hospital/scripts.pory"
# 108 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_TO_BLACK
# 109 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
# 110 "data/maps/Hospital/scripts.pory"
	msgbox Luxura_Text_11 , MSGBOX_AUTOCLOSE
# 111 "data/maps/Hospital/scripts.pory"
	applymovement 1,heart
# 112 "data/maps/Hospital/scripts.pory"
	applymovement 2,heart
# 113 "data/maps/Hospital/scripts.pory"
	applymovement 5,heart
# 114 "data/maps/Hospital/scripts.pory"
	waitmovement 0
# 115 "data/maps/Hospital/scripts.pory"
# 45 "data/maps/Hospital/scripts.pory"
# 116 "data/maps/Hospital/scripts.pory"
	warp MAP_PLAYERROOM, 2, 5
# 117 "data/maps/Hospital/scripts.pory"
# 46 "data/maps/Hospital/scripts.pory"
# 118 "data/maps/Hospital/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LUXURA_INDOOR
# 119 "data/maps/Hospital/scripts.pory"
# 47 "data/maps/Hospital/scripts.pory"
# 120 "data/maps/Hospital/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 121 "data/maps/Hospital/scripts.pory"
# 48 "data/maps/Hospital/scripts.pory"
# 122 "data/maps/Hospital/scripts.pory"
	setvar LUXURA_TRAGEDY, 1
# 123 "data/maps/Hospital/scripts.pory"
# 49 "data/maps/Hospital/scripts.pory"
# 124 "data/maps/Hospital/scripts.pory"
	releaseall
# 125 "data/maps/Hospital/scripts.pory"
	return
# 126 "data/maps/Hospital/scripts.pory"

# 127 "data/maps/Hospital/scripts.pory"

# 128 "data/maps/Hospital/scripts.pory"
# 51 "data/maps/Hospital/scripts.pory"
# 129 "data/maps/Hospital/scripts.pory"
boom:
# 130 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 131 "data/maps/Hospital/scripts.pory"
	walk_up
# 132 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 133 "data/maps/Hospital/scripts.pory"
	walk_up
# 134 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 135 "data/maps/Hospital/scripts.pory"
	walk_up
# 136 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 137 "data/maps/Hospital/scripts.pory"
	walk_up
# 138 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 139 "data/maps/Hospital/scripts.pory"
	walk_up
# 140 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 141 "data/maps/Hospital/scripts.pory"
	walk_up
# 142 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 143 "data/maps/Hospital/scripts.pory"
	walk_up
# 144 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 145 "data/maps/Hospital/scripts.pory"
	walk_up
# 146 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 147 "data/maps/Hospital/scripts.pory"
	walk_up
# 148 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 149 "data/maps/Hospital/scripts.pory"
	walk_up
# 150 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 151 "data/maps/Hospital/scripts.pory"
	walk_up
# 152 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 153 "data/maps/Hospital/scripts.pory"
	walk_up
# 154 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 155 "data/maps/Hospital/scripts.pory"
	walk_up
# 156 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 157 "data/maps/Hospital/scripts.pory"
	walk_up
# 158 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 159 "data/maps/Hospital/scripts.pory"
	walk_up
# 160 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 161 "data/maps/Hospital/scripts.pory"
	walk_up
# 162 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 163 "data/maps/Hospital/scripts.pory"
	walk_up
# 164 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 165 "data/maps/Hospital/scripts.pory"
	walk_up
# 166 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 167 "data/maps/Hospital/scripts.pory"
	walk_up
# 168 "data/maps/Hospital/scripts.pory"
# 52 "data/maps/Hospital/scripts.pory"
# 169 "data/maps/Hospital/scripts.pory"
	walk_up
# 170 "data/maps/Hospital/scripts.pory"
	step_end
# 171 "data/maps/Hospital/scripts.pory"

# 172 "data/maps/Hospital/scripts.pory"
# 54 "data/maps/Hospital/scripts.pory"
# 173 "data/maps/Hospital/scripts.pory"
bye:
# 174 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 175 "data/maps/Hospital/scripts.pory"
	walk_down
# 176 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 177 "data/maps/Hospital/scripts.pory"
	walk_down
# 178 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 179 "data/maps/Hospital/scripts.pory"
	walk_down
# 180 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 181 "data/maps/Hospital/scripts.pory"
	walk_down
# 182 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 183 "data/maps/Hospital/scripts.pory"
	walk_down
# 184 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 185 "data/maps/Hospital/scripts.pory"
	walk_down
# 186 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 187 "data/maps/Hospital/scripts.pory"
	walk_down
# 188 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 189 "data/maps/Hospital/scripts.pory"
	walk_down
# 190 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 191 "data/maps/Hospital/scripts.pory"
	walk_down
# 192 "data/maps/Hospital/scripts.pory"
# 55 "data/maps/Hospital/scripts.pory"
# 193 "data/maps/Hospital/scripts.pory"
	walk_down
# 194 "data/maps/Hospital/scripts.pory"
	step_end
# 195 "data/maps/Hospital/scripts.pory"

# 196 "data/maps/Hospital/scripts.pory"
# 58 "data/maps/Hospital/scripts.pory"
# 197 "data/maps/Hospital/scripts.pory"
mylol:
# 198 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 199 "data/maps/Hospital/scripts.pory"
	walk_right
# 200 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 201 "data/maps/Hospital/scripts.pory"
	walk_right
# 202 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 203 "data/maps/Hospital/scripts.pory"
	walk_right
# 204 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 205 "data/maps/Hospital/scripts.pory"
	walk_right
# 206 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 207 "data/maps/Hospital/scripts.pory"
	walk_right
# 208 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 209 "data/maps/Hospital/scripts.pory"
	walk_right
# 210 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 211 "data/maps/Hospital/scripts.pory"
	walk_right
# 212 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 213 "data/maps/Hospital/scripts.pory"
	walk_right
# 214 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 215 "data/maps/Hospital/scripts.pory"
	walk_right
# 216 "data/maps/Hospital/scripts.pory"
# 59 "data/maps/Hospital/scripts.pory"
# 217 "data/maps/Hospital/scripts.pory"
	walk_right
# 218 "data/maps/Hospital/scripts.pory"
	step_end
# 219 "data/maps/Hospital/scripts.pory"

# 220 "data/maps/Hospital/scripts.pory"
# 62 "data/maps/Hospital/scripts.pory"
# 221 "data/maps/Hospital/scripts.pory"
thud:
# 222 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 223 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 224 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 225 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 226 "data/maps/Hospital/scripts.pory"
# 63 "data/maps/Hospital/scripts.pory"
# 227 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 228 "data/maps/Hospital/scripts.pory"
# 64 "data/maps/Hospital/scripts.pory"
# 229 "data/maps/Hospital/scripts.pory"
	walk_fast_right
# 230 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
# 231 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 232 "data/maps/Hospital/scripts.pory"
# 65 "data/maps/Hospital/scripts.pory"
# 233 "data/maps/Hospital/scripts.pory"
	walk_fast_down
# 234 "data/maps/Hospital/scripts.pory"
	step_end
# 235 "data/maps/Hospital/scripts.pory"

# 236 "data/maps/Hospital/scripts.pory"
# 67 "data/maps/Hospital/scripts.pory"
# 237 "data/maps/Hospital/scripts.pory"
main:
# 238 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 239 "data/maps/Hospital/scripts.pory"
	walk_right
# 240 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 241 "data/maps/Hospital/scripts.pory"
	walk_right
# 242 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 243 "data/maps/Hospital/scripts.pory"
	walk_right
# 244 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 245 "data/maps/Hospital/scripts.pory"
	walk_right
# 246 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 247 "data/maps/Hospital/scripts.pory"
	walk_right
# 248 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 249 "data/maps/Hospital/scripts.pory"
	walk_right
# 250 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 251 "data/maps/Hospital/scripts.pory"
	walk_right
# 252 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 253 "data/maps/Hospital/scripts.pory"
	walk_right
# 254 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 255 "data/maps/Hospital/scripts.pory"
	walk_right
# 256 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 257 "data/maps/Hospital/scripts.pory"
	walk_right
# 258 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 259 "data/maps/Hospital/scripts.pory"
	walk_right
# 260 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 261 "data/maps/Hospital/scripts.pory"
	walk_right
# 262 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 263 "data/maps/Hospital/scripts.pory"
	walk_right
# 264 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 265 "data/maps/Hospital/scripts.pory"
	walk_right
# 266 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 267 "data/maps/Hospital/scripts.pory"
	walk_right
# 268 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 269 "data/maps/Hospital/scripts.pory"
	walk_right
# 270 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 271 "data/maps/Hospital/scripts.pory"
	walk_right
# 272 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 273 "data/maps/Hospital/scripts.pory"
	walk_right
# 274 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 275 "data/maps/Hospital/scripts.pory"
	walk_right
# 276 "data/maps/Hospital/scripts.pory"
# 68 "data/maps/Hospital/scripts.pory"
# 277 "data/maps/Hospital/scripts.pory"
	walk_right
# 278 "data/maps/Hospital/scripts.pory"
	step_end
# 279 "data/maps/Hospital/scripts.pory"

# 280 "data/maps/Hospital/scripts.pory"
# 70 "data/maps/Hospital/scripts.pory"
# 281 "data/maps/Hospital/scripts.pory"
old:
# 282 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 283 "data/maps/Hospital/scripts.pory"
	walk_right
# 284 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 285 "data/maps/Hospital/scripts.pory"
	walk_right
# 286 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 287 "data/maps/Hospital/scripts.pory"
	walk_right
# 288 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 289 "data/maps/Hospital/scripts.pory"
	walk_right
# 290 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 291 "data/maps/Hospital/scripts.pory"
	walk_right
# 292 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 293 "data/maps/Hospital/scripts.pory"
	walk_right
# 294 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 295 "data/maps/Hospital/scripts.pory"
	walk_right
# 296 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 297 "data/maps/Hospital/scripts.pory"
	walk_right
# 298 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 299 "data/maps/Hospital/scripts.pory"
	walk_right
# 300 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 301 "data/maps/Hospital/scripts.pory"
	walk_right
# 302 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 303 "data/maps/Hospital/scripts.pory"
	walk_right
# 304 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 305 "data/maps/Hospital/scripts.pory"
	walk_right
# 306 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 307 "data/maps/Hospital/scripts.pory"
	walk_right
# 308 "data/maps/Hospital/scripts.pory"
# 71 "data/maps/Hospital/scripts.pory"
# 309 "data/maps/Hospital/scripts.pory"
	walk_right
# 310 "data/maps/Hospital/scripts.pory"
	step_end
# 311 "data/maps/Hospital/scripts.pory"

# 312 "data/maps/Hospital/scripts.pory"
# 73 "data/maps/Hospital/scripts.pory"
# 313 "data/maps/Hospital/scripts.pory"
thudd:
# 314 "data/maps/Hospital/scripts.pory"
# 74 "data/maps/Hospital/scripts.pory"
# 315 "data/maps/Hospital/scripts.pory"
	jump_2_left
# 316 "data/maps/Hospital/scripts.pory"
# 75 "data/maps/Hospital/scripts.pory"
# 317 "data/maps/Hospital/scripts.pory"
	face_right
# 318 "data/maps/Hospital/scripts.pory"
	step_end
# 319 "data/maps/Hospital/scripts.pory"

# 320 "data/maps/Hospital/scripts.pory"
# 79 "data/maps/Hospital/scripts.pory"
# 321 "data/maps/Hospital/scripts.pory"
thuddd:
# 322 "data/maps/Hospital/scripts.pory"
# 80 "data/maps/Hospital/scripts.pory"
# 323 "data/maps/Hospital/scripts.pory"
	walk_left
# 324 "data/maps/Hospital/scripts.pory"
	step_end
# 325 "data/maps/Hospital/scripts.pory"

# 326 "data/maps/Hospital/scripts.pory"
# 83 "data/maps/Hospital/scripts.pory"
# 327 "data/maps/Hospital/scripts.pory"
heart:
# 328 "data/maps/Hospital/scripts.pory"
# 84 "data/maps/Hospital/scripts.pory"
# 329 "data/maps/Hospital/scripts.pory"
	emote_heart
# 330 "data/maps/Hospital/scripts.pory"
	step_end
# 331 "data/maps/Hospital/scripts.pory"

# 332 "data/maps/Hospital/scripts.pory"
Luxura_Text_0:
# 333 "data/maps/Hospital/scripts.pory"
# 21 "data/maps/Hospital/scripts.pory"
# 334 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY} Nurses, grab her don't let her\n"
# 335 "data/maps/Hospital/scripts.pory"
	.string "run away!$"
# 336 "data/maps/Hospital/scripts.pory"

# 337 "data/maps/Hospital/scripts.pory"
Luxura_Text_1:
# 338 "data/maps/Hospital/scripts.pory"
# 26 "data/maps/Hospital/scripts.pory"
# 339 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY}Don't worry you will feel better\n"
# 340 "data/maps/Hospital/scripts.pory"
	.string "after taking the medicine.\p"
# 341 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Old woman:{COLOR RED}{SHADOW LIGHT_GRAY}Will he be alright?\p"
# 342 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}Nurse:{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry Ma'am.$"
# 343 "data/maps/Hospital/scripts.pory"

# 344 "data/maps/Hospital/scripts.pory"
Luxura_Text_2:
# 345 "data/maps/Hospital/scripts.pory"
# 29 "data/maps/Hospital/scripts.pory"
# 346 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Congratulations, it's a boy!\p"
# 347 "data/maps/Hospital/scripts.pory"
	.string "{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}(The nurse gently hands baby to his\n"
# 348 "data/maps/Hospital/scripts.pory"
	.string "mother.)$"
# 349 "data/maps/Hospital/scripts.pory"

# 350 "data/maps/Hospital/scripts.pory"
Luxura_Text_3:
# 351 "data/maps/Hospital/scripts.pory"
# 30 "data/maps/Hospital/scripts.pory"
# 352 "data/maps/Hospital/scripts.pory"
	.string "Baby:Wahh...Wahh$"
# 353 "data/maps/Hospital/scripts.pory"

# 354 "data/maps/Hospital/scripts.pory"
Luxura_Text_4:
# 355 "data/maps/Hospital/scripts.pory"
# 32 "data/maps/Hospital/scripts.pory"
# 356 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's so small...\n"
# 357 "data/maps/Hospital/scripts.pory"
	.string "and perfect.\p"
# 358 "data/maps/Hospital/scripts.pory"
	.string "What should we name him?$"
# 359 "data/maps/Hospital/scripts.pory"

# 360 "data/maps/Hospital/scripts.pory"
Luxura_Text_5:
# 361 "data/maps/Hospital/scripts.pory"
# 34 "data/maps/Hospital/scripts.pory"
# 362 "data/maps/Hospital/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}We'll name him Xylar. He's\n"
# 363 "data/maps/Hospital/scripts.pory"
	.string "destined for great things, I can feel\l"
# 364 "data/maps/Hospital/scripts.pory"
	.string "it.$"
# 365 "data/maps/Hospital/scripts.pory"

# 366 "data/maps/Hospital/scripts.pory"
Luxura_Text_6:
# 367 "data/maps/Hospital/scripts.pory"
# 35 "data/maps/Hospital/scripts.pory"
# 368 "data/maps/Hospital/scripts.pory"
	.string "Baby:Hehh...Hehh$"
# 369 "data/maps/Hospital/scripts.pory"

# 370 "data/maps/Hospital/scripts.pory"
Luxura_Text_7:
# 371 "data/maps/Hospital/scripts.pory"
# 39 "data/maps/Hospital/scripts.pory"
# 372 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar... Our precious little Xylar.\n"
# 373 "data/maps/Hospital/scripts.pory"
	.string "We'll protect you, always.$"
# 374 "data/maps/Hospital/scripts.pory"

# 375 "data/maps/Hospital/scripts.pory"
Luxura_Text_8:
# 376 "data/maps/Hospital/scripts.pory"
# 40 "data/maps/Hospital/scripts.pory"
# 377 "data/maps/Hospital/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}This world is full of challenges,\n"
# 378 "data/maps/Hospital/scripts.pory"
	.string "but you won't face them alone. We'll be\l"
# 379 "data/maps/Hospital/scripts.pory"
	.string "with you, every step of the way.$"
# 380 "data/maps/Hospital/scripts.pory"

# 381 "data/maps/Hospital/scripts.pory"
Luxura_Text_9:
# 382 "data/maps/Hospital/scripts.pory"
# 41 "data/maps/Hospital/scripts.pory"
# 383 "data/maps/Hospital/scripts.pory"
	.string "Baby:Goo...Gahh$"
# 384 "data/maps/Hospital/scripts.pory"

# 385 "data/maps/Hospital/scripts.pory"
Luxura_Text_10:
# 386 "data/maps/Hospital/scripts.pory"
# 42 "data/maps/Hospital/scripts.pory"
# 387 "data/maps/Hospital/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}He's a strong one already. I can\n"
# 388 "data/maps/Hospital/scripts.pory"
	.string "tell he'll grow up to be someone special.$"
# 389 "data/maps/Hospital/scripts.pory"

# 390 "data/maps/Hospital/scripts.pory"
Luxura_Text_11:
# 391 "data/maps/Hospital/scripts.pory"
# 44 "data/maps/Hospital/scripts.pory"
# 392 "data/maps/Hospital/scripts.pory"
	.string "12 years later$"
# 393 "data/maps/Hospital/scripts.pory"

# 394 "data/maps/Hospital/scripts.pory"
myloll::
# 395 "data/maps/Hospital/scripts.pory"
# 87 "data/maps/Hospital/scripts.pory"
# 396 "data/maps/Hospital/scripts.pory"
	.string "Doctor:{COLOR BLUE}{SHADOW LIGHT_GRAY}Say Aaaaaa\p"
# 397 "data/maps/Hospital/scripts.pory"
	.string "$"
# 398 "data/maps/Hospital/scripts.pory"

# 399 "data/maps/Hospital/scripts.pory"
scared::
# 400 "data/maps/Hospital/scripts.pory"
# 91 "data/maps/Hospital/scripts.pory"
# 401 "data/maps/Hospital/scripts.pory"
	.string "Girl:{COLOR RED}{SHADOW LIGHT_GRAY}I can't take that injection! I have\n"
# 402 "data/maps/Hospital/scripts.pory"
	.string "to get out of here!\p"
# 403 "data/maps/Hospital/scripts.pory"
	.string "THUUDDD!!!$"

name1::
# 405 "data/maps/Hospital/scripts.pory"
	.string "Nurse$"

name2::
# 409 "data/maps/Hospital/scripts.pory"
	.string "Elysia$"

name3::
# 412 "data/maps/Hospital/scripts.pory"
	.string "Aurther$"

name4::
# 416 "data/maps/Hospital/scripts.pory"
	.string "Mira$"
