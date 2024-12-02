Sparkbase_MapScripts::
# 2 "data/maps/Sparkbase/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sparkbase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sparkbase_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


spark2::
# 8 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_2, Grunt2_Intro, Grunt2_Outro
# 9 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt2, MSGBOX_AUTOCLOSE
# 10 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark3::
# 21 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_3, Grunt3_Intro, Grunt3_Outro
# 22 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt3, MSGBOX_AUTOCLOSE
# 23 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark4::
# 34 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_4, Grunt4_Intro, Grunt4_Outro
# 35 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt4, MSGBOX_AUTOCLOSE
# 36 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark5::
# 56 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_5, Grunt5_Intro, Grunt5_Outro
# 57 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt5, MSGBOX_AUTOCLOSE
# 58 "data/maps/Sparkbase/scripts.pory"
	waitmessage
	end


spark6::
# 72 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_single SPARK_GRUNT_6, Grunt6_Intro, Grunt6_Outro, surgeb
# 73 "data/maps/Sparkbase/scripts.pory"
	msgbox PostBattle_Grunt6, MSGBOX_AUTOCLOSE
# 74 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 75 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
	end


Surgebattle::
# 89 "data/maps/Sparkbase/scripts.pory"
	lock
# 90 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 91 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 92 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 93 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 94 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 95 "data/maps/Sparkbase/scripts.pory"
	special HealPlayerParty
# 96 "data/maps/Sparkbase/scripts.pory"
	ballfollowingmon
# 97 "data/maps/Sparkbase/scripts.pory"
	setflag FLAG_UNUSED_0x267
# 98 "data/maps/Sparkbase/scripts.pory"
	special SpawnCameraObject
# 99 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 100 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 101 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surd
# 102 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 103 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, camera4
# 104 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, camera4
# 105 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 106 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 107 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 109 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 110 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_1, MSGBOX_AUTOCLOSE
# 111 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 112 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 113 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_2, MSGBOX_AUTOCLOSE
# 114 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 115 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 116 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, surde
# 117 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera4
# 118 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 119 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, camera5
# 120 "data/maps/Sparkbase/scripts.pory"
	special RemoveCameraObject
# 121 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 122 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_3, MSGBOX_AUTOCLOSE
# 123 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 124 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 125 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_4, MSGBOX_AUTOCLOSE
# 126 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 127 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 128 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_5, MSGBOX_AUTOCLOSE
# 129 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 130 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 131 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_6, MSGBOX_AUTOCLOSE
# 132 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 133 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 134 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_7, MSGBOX_AUTOCLOSE
# 135 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 136 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 137 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_8, MSGBOX_AUTOCLOSE
# 138 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 139 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 140 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_9, MSGBOX_AUTOCLOSE
# 141 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 142 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 143 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_10, MSGBOX_AUTOCLOSE
# 144 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 145 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 146 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_11, MSGBOX_AUTOCLOSE
# 147 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 148 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 149 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_12, MSGBOX_AUTOCLOSE
# 150 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 151 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 152 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_13, MSGBOX_AUTOCLOSE
# 153 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 154 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 155 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_14, MSGBOX_AUTOCLOSE
# 156 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 157 "data/maps/Sparkbase/scripts.pory"
	trainerbattle_no_intro SPARK_ADMIN_SURGE, surgelose
# 158 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 159 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_15, MSGBOX_AUTOCLOSE
# 160 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 161 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 162 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_16, MSGBOX_AUTOCLOSE
# 163 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 164 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 165 "data/maps/Sparkbase/scripts.pory"
	applymovement 6, exclam
# 166 "data/maps/Sparkbase/scripts.pory"
	namebox surge
# 167 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_17, MSGBOX_AUTOCLOSE
# 168 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 169 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 170 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_18, MSGBOX_AUTOCLOSE
# 171 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 172 "data/maps/Sparkbase/scripts.pory"
	applymovement 10, fireball
# 173 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 174 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 175 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_19, MSGBOX_AUTOCLOSE
# 176 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 177 "data/maps/Sparkbase/scripts.pory"
	playfirstmoncry
# 178 "data/maps/Sparkbase/scripts.pory"
	waitmoncry
# 179 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, visible
# 180 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, visible
# 181 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, visible
# 182 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 183 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f0
# 184 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f0
# 185 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f0
# 186 "data/maps/Sparkbase/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 187 "data/maps/Sparkbase/scripts.pory"
	waitse
# 188 "data/maps/Sparkbase/scripts.pory"
	setfollower 10, CAN_LEAVE_ROUTE
# 189 "data/maps/Sparkbase/scripts.pory"
	removeobject 6
# 190 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, visible
# 191 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 192 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, f1
# 193 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, f2
# 194 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, f3
# 195 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 196 "data/maps/Sparkbase/scripts.pory"
	removeobject 11
# 197 "data/maps/Sparkbase/scripts.pory"
	removeobject 12
# 198 "data/maps/Sparkbase/scripts.pory"
	removeobject 13
# 199 "data/maps/Sparkbase/scripts.pory"
	setflag FLAG_UNUSED_0x4B8
# 200 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 201 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_20, MSGBOX_AUTOCLOSE
# 202 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 203 "data/maps/Sparkbase/scripts.pory"
	waitmessage
# 204 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, startcrim
# 205 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 206 "data/maps/Sparkbase/scripts.pory"
	namebox Xylar
# 207 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_21, MSGBOX_AUTOCLOSE
# 208 "data/maps/Sparkbase/scripts.pory"
	hidenamebox
# 209 "data/maps/Sparkbase/scripts.pory"
	clearflag FLAG_AFTERTRAGEDY_MUSIC
# 210 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/Sparkbase/scripts.pory"
	playbgm MUS_RG_TEACHY_TV_MENU, TRUE
# 212 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_22, MSGBOX_AUTOCLOSE
# 213 "data/maps/Sparkbase/scripts.pory"
	msgbox Surgebattle_Text_23
# 214 "data/maps/Sparkbase/scripts.pory"
	warp MAP_NEWHOUSE, 2, 24
# 215 "data/maps/Sparkbase/scripts.pory"
	destroyfollower
# 216 "data/maps/Sparkbase/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 217 "data/maps/Sparkbase/scripts.pory"
	setvar LUXURA_TRAGEDY, 21
# 218 "data/maps/Sparkbase/scripts.pory"
	release
	return


# 224 "data/maps/Sparkbase/scripts.pory"
startcrim:
# 225 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 226 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 227 "data/maps/Sparkbase/scripts.pory"
	face_right
	step_end

# 230 "data/maps/Sparkbase/scripts.pory"
surd:
# 231 "data/maps/Sparkbase/scripts.pory"
	emote_exclamation_mark
# 232 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

# 234 "data/maps/Sparkbase/scripts.pory"
surde:
# 235 "data/maps/Sparkbase/scripts.pory"
	face_up
# 236 "data/maps/Sparkbase/scripts.pory"
	delay_16
# 237 "data/maps/Sparkbase/scripts.pory"
	face_down
	step_end

surgeb::
# 240 "data/maps/Sparkbase/scripts.pory"
	applymovement 11, invisible
# 241 "data/maps/Sparkbase/scripts.pory"
	applymovement 12, invisible
# 242 "data/maps/Sparkbase/scripts.pory"
	applymovement 13, invisible
# 243 "data/maps/Sparkbase/scripts.pory"
	applymovement 14, invisible
# 244 "data/maps/Sparkbase/scripts.pory"
	waitmovement 0
# 245 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbat
# 246 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 247 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 249 "data/maps/Sparkbase/scripts.pory"
sbat:
# 250 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

surgebw::
# 253 "data/maps/Sparkbase/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, sbatw
# 254 "data/maps/Sparkbase/scripts.pory"
	msgbox surgeb_Text_0, MSGBOX_AUTOCLOSE
# 255 "data/maps/Sparkbase/scripts.pory"
	goto Surgebattle
	return


# 257 "data/maps/Sparkbase/scripts.pory"
sbatw:
# 258 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 259 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 262 "data/maps/Sparkbase/scripts.pory"
f0:
# 263 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

# 265 "data/maps/Sparkbase/scripts.pory"
fireball:
# 266 "data/maps/Sparkbase/scripts.pory"
	walk_right
# 267 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 267 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 267 "data/maps/Sparkbase/scripts.pory"
	walk_up
# 268 "data/maps/Sparkbase/scripts.pory"
	walk_left
# 269 "data/maps/Sparkbase/scripts.pory"
	face_up
	step_end

# 271 "data/maps/Sparkbase/scripts.pory"
f1:
# 272 "data/maps/Sparkbase/scripts.pory"
	walk_left
	step_end

# 275 "data/maps/Sparkbase/scripts.pory"
f2:
# 276 "data/maps/Sparkbase/scripts.pory"
	walk_right
	step_end

# 279 "data/maps/Sparkbase/scripts.pory"
f3:
# 280 "data/maps/Sparkbase/scripts.pory"
	walk_up
	step_end

Surgebattle_Text_0:
# 107 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're Aurther's kid, aren't you?$"

Surgebattle_Text_1:
# 110 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Where is my Mom?$"

Surgebattle_Text_2:
# 113 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mom?\p"
	.string "Oh.. you mean her...$"

Surgebattle_Text_3:
# 122 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}She was a tough one.\p"
	.string "No one's ever survived a fusion with a\n"
	.string "Poison-type before, but she did.\p"
	.string "And even after all that...\n"
	.string "she still had a sliver of consciousness\l"
	.string "left.\p"
	.string "She even tried to take us down.\p"
	.string "But luckily, we recieved orders to put\n"
	.string "an end to that toxic bitch.$"

Surgebattle_Text_4:
# 125 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You...What the fuck did you just called\n"
	.string "my Mom?$"

Surgebattle_Text_5:
# 128 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Struck a nerve, did I?\p"
	.string "Heh... Not surprising.\p"
	.string "She was strong, I'll give her that. Even\n"
	.string "tried to kill us.\p"
	.string "But in the end, we were ordered to\n"
	.string "dispose of that TOXIC mistake. Guess\l"
	.string "her strength wasn't enough, huh?$"

Surgebattle_Text_6:
# 131 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You... You bastards... You... killed her?!\n"
	.string "You destroyed everything! I'll make you\l"
	.string "pay, I swear...$"

Surgebattle_Text_7:
# 134 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Kid, you don't get it, do you? Your\n"
	.string "father, Aurther, saved the world once.\l"
	.string "He fought to stop Nexus Order from\l"
	.string "controlling Hoopa. But you know what\l"
	.string "they say, right?\p"
	.string "When a hero is too strong... he's always\n"
	.string "killed by the very people he saved.$"

Surgebattle_Text_8:
# 137 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What are you talking about?! My father\n"
	.string "was a hero... What does any of this have\l"
	.string "to do with you?!$"

Surgebattle_Text_9:
# 140 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You still don't know, huh? Your father...\n"
	.string "Aurther, was once the leader of Origin.\l"
	.string "It wasn't always like this, though.\l"
	.string "Origin wasn't a group of 18\l"
	.string "organizations back then. Under\l"
	.string "Aurther's command, they were heroes,\l"
	.string "with a clean public image, saving the\l"
	.string "world. But things changed after he\l"
	.string "retired... after he was forced to retire.$"

Surgebattle_Text_10:
# 143 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Origin?$"

Surgebattle_Text_11:
# 146 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Yeah, Origin. A group of 18\n"
	.string "organizations, each one specializing in\l"
	.string "a type. Sure, when Aurther was in\l"
	.string "charge, Origin were heroes but things\l"
	.string "have changed now. Origin's only cause is\l"
	.string "to gain power and change this world\l"
	.string "into something more perfect. Something\l"
	.string "your father would've never been able to\l"
	.string "do.$"

Surgebattle_Text_12:
# 149 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I don't give a damn about this Origin or\n"
	.string "whatever twisted mess you've created.\l"
	.string "Let me make one thing crystal clear:\p"
	.string "No matter who you are or how many of\n"
	.string "you there are, I'll destroy every single\l"
	.string "one of you. If there are 18\l"
	.string "organizations, I'll wipe every last one\l"
	.string "off the map.\p"
	.string "And if, by some sick twist of fate, you\n"
	.string "manage to create your so-called\l"
	.string "PERFECT WORLD....\p"
	.string "I'LL BURN THAT {COLOR RED}{SHADOW LIGHT_GRAY}PERFECT WORLD {COLOR BLUE}{SHADOW LIGHT_GRAY}OF YOURS.$"

Surgebattle_Text_13:
# 152 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You've got guts, kid. But don't fool\n"
	.string "yourself..nothing you do will ever be\l"
	.string "enough to break us. We're more than\l"
	.string "just a few organizations; we're a force\l"
	.string "that's reshaping the world. And if you\l"
	.string "think you can stand in our way, you're in\l"
	.string "for a world of hurt.$"

Surgebattle_Text_14:
# 155 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You can keep your delusions of\n"
	.string "grandeur. I've lost everything that\l"
	.string "mattered to me because of your kind.\l"
	.string "Every threat you make just fuels my\l"
	.string "rage.\p"
	.string "If you think you're unstoppable, then\n"
	.string "good. I want you to understand the full\l"
	.string "depth of what you've created...\p"
	.string "starting with you. I'll make sure you\n"
	.string "feel every bit of my pain and anger. It's\l"
	.string "time to settle this once and for all.$"

Surgebattle_Text_15:
# 159 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You were lucky since Aurther injured my\n"
	.string "pokemon, they were not in the condition\l"
	.string "to fight but I'll defeat you next time\l"
	.string "since I'm stronger than you.$"

Surgebattle_Text_16:
# 162 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Let me tell you one thing, you see...\p"
	.string "I once heard someone saying that....\p"
	.string "Even the strongest can fall if you kill\n"
	.string "them.$"

Surgebattle_Text_17:
# 167 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}What the ...$"

Surgebattle_Text_18:
# 170 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Mewtwo!$"

Surgebattle_Text_19:
# 175 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Use FireBlast!$"

Surgebattle_Text_20:
# 201 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Surge, you were just the start. This\n"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Crimson Requiem {COLOR BLUE}{SHADOW LIGHT_GRAY}I've begun will be a\l"
	.string "symphony of retribution. Your death\l"
	.string "marks the first note in a melody of\l"
	.string "vengeance that will echo until everyone\l"
	.string "who wronged me has met their end. This\l"
	.string "is only the beginning.$"

Surgebattle_Text_21:
# 207 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}I'm sorry, Mother... I failed you. I failed\n"
	.string "Father. But this… this isn't the end. I\l"
	.string "swear, they'll pay with everything they\l"
	.string "have. They stole you from me, and now…\l"
	.string "they'll face my wrath.\p"
	.string "They think they can reshape this world,\n"
	.string "make it perfect by taking everything I\l"
	.string "hold dear. But I'll show them what true\l"
	.string "destruction is. I'll bring them the blood\l"
	.string "and ruin they deserve.\p"
	.string "This is just the beginning... the {COLOR RED}{SHADOW LIGHT_GRAY}Crimson\n"
	.string "Requiem{COLOR BLUE}{SHADOW LIGHT_GRAY} will echo through their perfect\l"
	.string "world until it all crumbles into dust.\l"
	.string "They'll wish they'd never taken you\l"
	.string "away. I'll end them all... one by one.\p"
	.string "Let's go Mom.$"

Surgebattle_Text_22:
# 212 "data/maps/Sparkbase/scripts.pory"
	.string "Hey there, Trainer! This is where Beta 1\n"
	.string "of our journey comes to an end. I hope\l"
	.string "you've enjoyed the adventure so far.\l"
	.string "We're working hard to bring you the next\l"
	.string "chapter, and your support means\l"
	.string "everything to us.$"

Surgebattle_Text_23:
# 213 "data/maps/Sparkbase/scripts.pory"
	.string "If you liked what you've seen, please\n"
	.string "consider sharing your thoughts and\l"
	.string "spreading the word. Your feedback will\l"
	.string "help make this game even better. Until\l"
	.string "next time...stay strong, and thanks for\l"
	.string "playing!$"

surgeb_Text_0:
# 246 "data/maps/Sparkbase/scripts.pory"
	.string "...$"

Grunt2_Intro::
# 14 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You think you can outrun a lightning\n"
	.string "bolt? Think again!$"

Grunt2_Outro::
# 17 "data/maps/Sparkbase/scripts.pory"
	.string "Wha..?! You're tougher than I thought...\n"
	.string "but this isn't over!$"

Grunt3_Intro::
# 27 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}One zap, and you're done! Let's see if\n"
	.string "you can survive it!$"

Grunt3_Outro::
# 30 "data/maps/Sparkbase/scripts.pory"
	.string "Ugh, I can't believe this! You're just\n"
	.string "lucky. Next time, you won't be so\l"
	.string "fortunate!\p"
	.string "Xylar: There won't e any next time.$"

Grunt4_Intro::
# 40 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}I love the smell of static in the air…\n"
	.string "Time to shock you into submission!$"

Grunt4_Outro::
# 43 "data/maps/Sparkbase/scripts.pory"
	.string "Enjoy your victory... it won't last long.\p"
	.string "Xylar:This isn't about victory\n"
	.string "anymore... It's about making sure you\l"
	.string "never take another breath.$"

PostBattle_Grunt4::
# 46 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

PostBattle_Grunt3::
# 49 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

PostBattle_Grunt2::
# 52 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

Grunt5_Intro::
# 62 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}You think you can stop us? Let's see\n"
	.string "how you handle the thunder!$"

Grunt5_Outro::
# 65 "data/maps/Sparkbase/scripts.pory"
	.string "Tch, enjoy your victory while you can.\n"
	.string "Spark always strikes again.$"

PostBattle_Grunt5::
# 68 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

Grunt6_Intro::
# 79 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}You're in over your head, kid. Spark's\n"
	.string "about to send you packing!$"

Grunt6_Outro::
# 82 "data/maps/Sparkbase/scripts.pory"
	.string "Impossible! How did you overpower us?!$"

PostBattle_Grunt6::
# 85 "data/maps/Sparkbase/scripts.pory"
	.string "{COLOR BLUE}{SHADOW LIGHT_GRAY}Our general will defeat you.$"

surgelose::
# 220 "data/maps/Sparkbase/scripts.pory"
	.string "I was stronger than you, How could I\n"
	.string "lose?$"
