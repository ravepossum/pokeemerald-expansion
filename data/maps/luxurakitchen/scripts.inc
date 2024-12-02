# 1 "data/maps/luxurakitchen/scripts.pory"

# 2 "data/maps/luxurakitchen/scripts.pory"
luxurakitchen_MapScripts::
# 3 "data/maps/luxurakitchen/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD
# 4 "data/maps/luxurakitchen/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, outfit
# 5 "data/maps/luxurakitchen/scripts.pory"
	.byte 0

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD::
# 8 "data/maps/luxurakitchen/scripts.pory"
	compare LUXURA_TRAGEDY, 6
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 20 "data/maps/luxurakitchen/scripts.pory"
	compare LUXURA_TRAGEDY, 5
	goto_if_lt luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 32 "data/maps/luxurakitchen/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_gt luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 44 "data/maps/luxurakitchen/scripts.pory"
	compare LUXURA_TRAGEDY, 7
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 52 "data/maps/luxurakitchen/scripts.pory"
	compare LUXURA_TRAGEDY, 8
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 59 "data/maps/luxurakitchen/scripts.pory"
	compare LUXURA_TRAGEDY, 9
	goto_if_eq luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/luxurakitchen/scripts.pory"
	addobject 7
# 10 "data/maps/luxurakitchen/scripts.pory"
	addobject 8
# 11 "data/maps/luxurakitchen/scripts.pory"
	removeobject 9
# 12 "data/maps/luxurakitchen/scripts.pory"
	removeobject 10
# 13 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 14 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 15 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 16 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 17 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x49B
# 18 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x49C
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 21 "data/maps/luxurakitchen/scripts.pory"
	removeobject 7
# 22 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 23 "data/maps/luxurakitchen/scripts.pory"
	removeobject 9
# 24 "data/maps/luxurakitchen/scripts.pory"
	removeobject 10
# 25 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 26 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 27 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 28 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 29 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 30 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 33 "data/maps/luxurakitchen/scripts.pory"
	removeobject 7
# 34 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 35 "data/maps/luxurakitchen/scripts.pory"
	removeobject 9
# 36 "data/maps/luxurakitchen/scripts.pory"
	removeobject 10
# 37 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 38 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 39 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A0
# 40 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A1
# 41 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 42 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 45 "data/maps/luxurakitchen/scripts.pory"
	removeobject 7
# 46 "data/maps/luxurakitchen/scripts.pory"
	addobject 9
# 47 "data/maps/luxurakitchen/scripts.pory"
	addobject 10
# 48 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49B
# 49 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x4A0
# 50 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x4A1
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 53 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 54 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
# 55 "data/maps/luxurakitchen/scripts.pory"
	addobject 11
# 56 "data/maps/luxurakitchen/scripts.pory"
	clearflag FLAG_UNUSED_0x4A3
	return

luxurakitchen_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 60 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 61 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 62 "data/maps/luxurakitchen/scripts.pory"
	removeobject 8
# 63 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49C
	return


momm::
# 68 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49D, momm_1
# 82 "data/maps/luxurakitchen/scripts.pory"
	goto_if_set FLAG_UNUSED_0x49D, momm_2
	return

momm_1:
# 69 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 70 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 71 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 72 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_0
# 73 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 74 "data/maps/luxurakitchen/scripts.pory"
	namebox Xylar
# 75 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_1
# 76 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 77 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 78 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_2
# 79 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 80 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return

momm_2:
# 83 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 84 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 85 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 86 "data/maps/luxurakitchen/scripts.pory"
	msgbox momm_Text_3
# 87 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 88 "data/maps/luxurakitchen/scripts.pory"
	releaseall
# 89 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x49E
	return


mommafter::
# 94 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 95 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 96 "data/maps/luxurakitchen/scripts.pory"
	namebox name2
# 97 "data/maps/luxurakitchen/scripts.pory"
	msgbox mommafter_Text_0
# 98 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 99 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return


feliciaafter::
# 102 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 103 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 104 "data/maps/luxurakitchen/scripts.pory"
	namebox felicia
# 105 "data/maps/luxurakitchen/scripts.pory"
	msgbox feliciaafter_Text_0
# 106 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 107 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return


mirakitchen::
# 111 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x49F, mirakitchen_6
mirakitchen_4:
# 119 "data/maps/luxurakitchen/scripts.pory"
	goto_if_set FLAG_UNUSED_0x49F, mirakitchen_2
# 119 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, mirakitchen_2
	return

mirakitchen_1:
# 112 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 113 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 114 "data/maps/luxurakitchen/scripts.pory"
	namebox name4
# 115 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_0
# 116 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 117 "data/maps/luxurakitchen/scripts.pory"
	releaseall
	return

mirakitchen_2:
# 120 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 121 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 122 "data/maps/luxurakitchen/scripts.pory"
	namebox Xylar
# 123 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_1
# 124 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 125 "data/maps/luxurakitchen/scripts.pory"
	namebox name4
# 126 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_2
# 127 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 128 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirakitchen_Text_3
# 129 "data/maps/luxurakitchen/scripts.pory"
	releaseall
# 130 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A2
	return

mirakitchen_6:
# 111 "data/maps/luxurakitchen/scripts.pory"
	goto_if_unset FLAG_SYS_B_DASH, mirakitchen_1
	goto mirakitchen_4


mirastrol::
# 135 "data/maps/luxurakitchen/scripts.pory"
	lockall
# 136 "data/maps/luxurakitchen/scripts.pory"
	faceplayer
# 137 "data/maps/luxurakitchen/scripts.pory"
	namebox name4
# 138 "data/maps/luxurakitchen/scripts.pory"
	msgbox mirastrol_Text_0
# 139 "data/maps/luxurakitchen/scripts.pory"
	hidenamebox
# 140 "data/maps/luxurakitchen/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/luxurakitchen/scripts.pory"
	removeobject 11
# 142 "data/maps/luxurakitchen/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 143 "data/maps/luxurakitchen/scripts.pory"
	releaseall
# 144 "data/maps/luxurakitchen/scripts.pory"
	setflag FLAG_UNUSED_0x4A3
# 145 "data/maps/luxurakitchen/scripts.pory"
	setvar LUXURA_TRAGEDY, 9
# 146 "data/maps/luxurakitchen/scripts.pory"
	setvar VAR_ROUTE103_STATE, 2
	return


momm_Text_0:
# 72 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar, your Father wanted to have a\n"
	.string "talk with you.\p"
	.string "He's in his workroom busy as usual.\p"
	.string "You should go see him.$"

momm_Text_1:
# 75 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Okay, Mom.\p"
	.string "I'll head there now.$"

momm_Text_2:
# 78 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Don't worry, I'm sure it's nothing\n"
	.string "serious.$"

momm_Text_3:
# 86 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Xylar, Can you call Felicia for me?\p"
	.string "She must be in the Library.$"

mommafter_Text_0:
# 97 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Thanks, dear.$"

feliciaafter_Text_0:
# 105 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I'd do anything for her.$"

mirakitchen_Text_0:
# 115 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'm a little busy right\n"
	.string "now.\p"
	.string "Why don't you find something else to do\n"
	.string "for a while.$"

mirakitchen_Text_1:
# 123 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mira, It's time for our walk.\p"
	.string "Ready to go.$"

mirakitchen_Text_2:
# 126 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Already?\p"
	.string "Alright,Master Xylar.Just give me a\n"
	.string "moment and we can head out.$"

mirakitchen_Text_3:
# 128 "data/maps/luxurakitchen/scripts.pory"
	.string "I should go grab my shoes.\p"
	.string "The maid upstairs should have it.$"

mirastrol_Text_0:
# 138 "data/maps/luxurakitchen/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Master Xylar, I'll be waiting for you\n"
	.string "outside.$"
