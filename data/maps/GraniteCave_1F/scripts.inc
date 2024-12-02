# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 3 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_FRAME_TABLE, Luxurawoodsmewtwo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 4 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_LOAD, Mewtworecover
# 5 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_TRANSITION,newheal
# 6 "data/maps/GraniteCave_1F/scripts.pory"
map_script MAP_SCRIPT_ON_RESUME, outfit
# 7 "data/maps/GraniteCave_1F/scripts.pory"

# 8 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 9 "data/maps/GraniteCave_1F/scripts.pory"
Luxurawoodsmewtwo_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/GraniteCave_1F/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 15, herb
# 11 "data/maps/GraniteCave_1F/scripts.pory"
map_script_2 LUXURA_TRAGEDY, 18, mewrt
# 12 "data/maps/GraniteCave_1F/scripts.pory"
.2byte 0
# 13 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 16 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 20 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 21 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 23 "data/maps/GraniteCave_1F/scripts.pory"

# 24 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 28 "data/maps/GraniteCave_1F/scripts.pory"

# 29 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 32 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 33 "data/maps/GraniteCave_1F/scripts.pory"
	.string "That guy who came by earlier…\n"
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "to be all right, but…\p"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 40 "data/maps/GraniteCave_1F/scripts.pory"

# 41 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 42 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 43 "data/maps/GraniteCave_1F/scripts.pory"
	.string "a POKéMON and use it.\p"
# 44 "data/maps/GraniteCave_1F/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	.string "of caves.\p"
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"

herb::
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	lockall
# 52 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 55 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 56 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_1, MSGBOX_AUTOCLOSE
# 58 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 59 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 60 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_2, MSGBOX_AUTOCLOSE
# 61 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 62 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, str
# 63 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 64 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox herb_Text_3, MSGBOX_AUTOCLOSE
# 65 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 66 "data/maps/GraniteCave_1F/scripts.pory"
	releaseall
# 67 "data/maps/GraniteCave_1F/scripts.pory"
	setvar LUXURA_TRAGEDY, 16
	return


Mewtworecover::
# 71 "data/maps/GraniteCave_1F/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_eq Mewtworecover_1
# 78 "data/maps/GraniteCave_1F/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_lt Mewtworecover_2
# 84 "data/maps/GraniteCave_1F/scripts.pory"
	compare LUXURA_TRAGEDY, 18
	goto_if_gt Mewtworecover_3
	return

Mewtworecover_1:
# 72 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 2
# 73 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B4
# 74 "data/maps/GraniteCave_1F/scripts.pory"
	addobject 3
# 75 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_UNUSED_0x4B5
	return

Mewtworecover_2:
# 79 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 80 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B5
# 81 "data/maps/GraniteCave_1F/scripts.pory"
	addobject 2
# 82 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_UNUSED_0x4B4
	return

Mewtworecover_3:
# 85 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 86 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B5
# 87 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 2
# 88 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B4
	return


mewrt::
# 92 "data/maps/GraniteCave_1F/scripts.pory"
	lockall
# 93 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exclam
# 94 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 96 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_0, MSGBOX_AUTOCLOSE
# 97 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 98 "data/maps/GraniteCave_1F/scripts.pory"
	namebox mewtwo
# 99 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_1, MSGBOX_AUTOCLOSE
# 100 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 101 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 102 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_2, MSGBOX_AUTOCLOSE
# 103 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 104 "data/maps/GraniteCave_1F/scripts.pory"
	namebox mewtwo
# 105 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_3, MSGBOX_AUTOCLOSE
# 106 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 107 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 108 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_4, MSGBOX_AUTOCLOSE
# 109 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 110 "data/maps/GraniteCave_1F/scripts.pory"
	namebox mewtwo
# 111 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_5, MSGBOX_AUTOCLOSE
# 112 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 113 "data/maps/GraniteCave_1F/scripts.pory"
	namebox Xylar
# 114 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_6, MSGBOX_AUTOCLOSE
# 115 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 116 "data/maps/GraniteCave_1F/scripts.pory"
	namebox mewtwo
# 117 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_7, MSGBOX_AUTOCLOSE
# 118 "data/maps/GraniteCave_1F/scripts.pory"
	hidenamebox
# 119 "data/maps/GraniteCave_1F/scripts.pory"
	removeobject 3
# 120 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_UNUSED_0x4B5
# 121 "data/maps/GraniteCave_1F/scripts.pory"
	givemon SPECIES_MEWTWO, 5, ITEM_MEWTWONITE_Y, ITEM_POKE_BALL, NATURE_HASTY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PSYBEAM, MOVE_FIRE_BLAST, MOVE_RECOVER, MOVE_HYPNOSIS
# 122 "data/maps/GraniteCave_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 123 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox mewrt_Text_8
# 124 "data/maps/GraniteCave_1F/scripts.pory"
	waitfanfare
# 125 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 126 "data/maps/GraniteCave_1F/scripts.pory"
	releaseall
# 127 "data/maps/GraniteCave_1F/scripts.pory"
	setvar LUXURA_TRAGEDY, 19
# 128 "data/maps/GraniteCave_1F/scripts.pory"
	clearflag FLAG_UNUSED_0x26B
	return


newheal::
# 133 "data/maps/GraniteCave_1F/scripts.pory"
	setrespawn HEAL_LOCATION_MEWTWOMET
	end


spark1::
# 138 "data/maps/GraniteCave_1F/scripts.pory"
	trainerbattle_single SPARK_GRUNT_1, Grunt1_Intro, Grunt1_Outro
# 139 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox PostBattle_Grunt1, MSGBOX_AUTOCLOSE
# 140 "data/maps/GraniteCave_1F/scripts.pory"
	waitmessage
	end


herb_Text_0:
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}These cuts... they're deep.\p"
	.string "I don't know how to fix this!$"

herb_Text_1:
# 57 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Wait…\p"
	.string "Mira. She said something about herbs\n"
	.string "before...\p"
	.string "Yeah, herbs can help heal wounds!$"

herb_Text_2:
# 60 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Hang in there. I'll find something.\p"
	.string "Mira always knew which ones to pick…\n"
	.string "I just have to remember.$"

herb_Text_3:
# 64 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I won't let you down, not like this.\p"
	.string "You'll make it. You have to.$"

mewrt_Text_0:
# 96 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Why?$"

mewrt_Text_1:
# 99 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}Because you... saved me.\p"
	.string "I sense no malice in your thoughts.$"

mewrt_Text_2:
# 102 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I didn't do much.\p"
	.string "I just didn't want to lose someone\n"
	.string "else... like I lost my family.$"

mewrt_Text_3:
# 105 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}........\p"
	.string "Your pain... is like mine.\p"
	.string "Perhaps... we are not so different.$"

mewrt_Text_4:
# 108 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Does that mean... you'll trust me?$"

mewrt_Text_5:
# 111 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}For now. You have proven yourself...\p"
	.string "different from the others.\p"
	.string "But know this..\p"
	.string "if you betray me, the consequences will\n"
	.string "be dire.$"

mewrt_Text_6:
# 114 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Consequences?\p"
	.string "There's nothing left to lose. No one\n"
	.string "left to face...\p"
	.string "except the ones who took everything\n"
	.string "from me.$"

mewrt_Text_7:
# 117 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR LIGHT_RED}{SHADOW LIGHT_GRAY}I sense your resolve, human.\p"
	.string "Perhaps... our goals align. I will join\n"
	.string "you.\p"
	.string "But remember, my trust is not easily\n"
	.string "earned.$"

mewrt_Text_8:
# 123 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Mewtwo decided to join you.$"

Grunt1_Intro::
# 145 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Feel the strikes of Sparks power!$"

Grunt1_Outro::
# 149 "data/maps/GraniteCave_1F/scripts.pory"
	.string "No way! How could you withstand our\n"
	.string "lightning strikes?$"

PostBattle_Grunt1::
# 153 "data/maps/GraniteCave_1F/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"
