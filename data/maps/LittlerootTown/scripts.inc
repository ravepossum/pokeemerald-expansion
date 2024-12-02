# 1 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 7 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 10 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown/scripts.pory"

# 12 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 13 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 17 "data/maps/LittlerootTown/scripts.pory"

# 18 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 26 "data/maps/LittlerootTown/scripts.pory"

# 27 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 28 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 34 "data/maps/LittlerootTown/scripts.pory"

# 35 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 40 "data/maps/LittlerootTown/scripts.pory"

# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 43 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 44 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 54 "data/maps/LittlerootTown/scripts.pory"
	end
# 55 "data/maps/LittlerootTown/scripts.pory"

# 56 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 57 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 58 "data/maps/LittlerootTown/scripts.pory"
	return
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/LittlerootTown/scripts.pory"
	return
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 65 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 66 "data/maps/LittlerootTown/scripts.pory"
	return
# 67 "data/maps/LittlerootTown/scripts.pory"

# 68 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 69 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 70 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 71 "data/maps/LittlerootTown/scripts.pory"
	return
# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 74 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 76 "data/maps/LittlerootTown/scripts.pory"
	return
# 77 "data/maps/LittlerootTown/scripts.pory"

# 78 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 79 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 80 "data/maps/LittlerootTown/scripts.pory"
	return
# 81 "data/maps/LittlerootTown/scripts.pory"

# 82 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 83 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 84 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 86 "data/maps/LittlerootTown/scripts.pory"
	return
# 87 "data/maps/LittlerootTown/scripts.pory"

# 88 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 89 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 91 "data/maps/LittlerootTown/scripts.pory"
	return
# 92 "data/maps/LittlerootTown/scripts.pory"

# 93 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 94 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 95 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 96 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 97 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 98 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 102 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 103 "data/maps/LittlerootTown/scripts.pory"
	return
# 104 "data/maps/LittlerootTown/scripts.pory"

# 105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 106 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 110 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 111 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 113 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 114 "data/maps/LittlerootTown/scripts.pory"

# 115 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 116 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 117 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 118 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 119 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 120 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 121 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 122 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 123 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 124 "data/maps/LittlerootTown/scripts.pory"
	end
# 125 "data/maps/LittlerootTown/scripts.pory"

# 126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 127 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 128 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 129 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 130 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 131 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 132 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 133 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 134 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 135 "data/maps/LittlerootTown/scripts.pory"
	end
# 136 "data/maps/LittlerootTown/scripts.pory"

# 137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 138 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 139 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 140 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 141 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 143 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 144 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 145 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 149 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 150 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 151 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 153 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 154 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 163 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 164 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 165 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 167 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 168 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 169 "data/maps/LittlerootTown/scripts.pory"
	return
# 170 "data/maps/LittlerootTown/scripts.pory"

# 171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 172 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 176 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 177 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 181 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown/scripts.pory"

# 186 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 189 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 192 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 204 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 205 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 211 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 212 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 213 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 214 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 216 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 217 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 218 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 219 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 220 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 221 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 222 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 223 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 224 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 225 "data/maps/LittlerootTown/scripts.pory"
	end
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 228 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 229 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 232 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 233 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 234 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 235 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 236 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 237 "data/maps/LittlerootTown/scripts.pory"
	end
# 238 "data/maps/LittlerootTown/scripts.pory"

# 239 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 240 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 242 "data/maps/LittlerootTown/scripts.pory"
	end
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 245 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 250 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 254 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 258 "data/maps/LittlerootTown/scripts.pory"
	lock
# 259 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 260 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 261 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 262 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 263 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 264 "data/maps/LittlerootTown/scripts.pory"
	release
# 265 "data/maps/LittlerootTown/scripts.pory"
	end
# 266 "data/maps/LittlerootTown/scripts.pory"

# 267 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 268 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 269 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 270 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 271 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 272 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 273 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 274 "data/maps/LittlerootTown/scripts.pory"
	release
# 275 "data/maps/LittlerootTown/scripts.pory"
	end
# 276 "data/maps/LittlerootTown/scripts.pory"

# 277 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 278 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 279 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 280 "data/maps/LittlerootTown/scripts.pory"
	release
# 281 "data/maps/LittlerootTown/scripts.pory"
	end
# 282 "data/maps/LittlerootTown/scripts.pory"

# 283 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 284 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 285 "data/maps/LittlerootTown/scripts.pory"
	release
# 286 "data/maps/LittlerootTown/scripts.pory"
	end
# 287 "data/maps/LittlerootTown/scripts.pory"

# 288 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 289 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 290 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 291 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 292 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 293 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 294 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 295 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 296 "data/maps/LittlerootTown/scripts.pory"
	end
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 299 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 300 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 301 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 302 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 303 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 305 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 306 "data/maps/LittlerootTown/scripts.pory"
	return
# 307 "data/maps/LittlerootTown/scripts.pory"

# 308 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 309 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 310 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 311 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 312 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 313 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 320 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 321 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 322 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 323 "data/maps/LittlerootTown/scripts.pory"

# 324 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 325 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 326 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 327 "data/maps/LittlerootTown/scripts.pory"

# 328 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 337 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 338 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 339 "data/maps/LittlerootTown/scripts.pory"

# 340 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 341 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 342 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 343 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 344 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown/scripts.pory"

# 346 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 347 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 348 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 349 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 351 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 352 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 353 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 354 "data/maps/LittlerootTown/scripts.pory"
	end
# 355 "data/maps/LittlerootTown/scripts.pory"

# 356 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 357 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 358 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 360 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 361 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 367 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 368 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 369 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown/scripts.pory"

# 371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 378 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 379 "data/maps/LittlerootTown/scripts.pory"

# 380 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 381 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 382 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 383 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 385 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 387 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 388 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 389 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 390 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 392 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 393 "data/maps/LittlerootTown/scripts.pory"
	end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 396 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 397 "data/maps/LittlerootTown/scripts.pory"
	end
# 398 "data/maps/LittlerootTown/scripts.pory"

# 399 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 400 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 401 "data/maps/LittlerootTown/scripts.pory"
	end
# 402 "data/maps/LittlerootTown/scripts.pory"

# 403 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 404 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 405 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 406 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 407 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 408 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 409 "data/maps/LittlerootTown/scripts.pory"
	end
# 410 "data/maps/LittlerootTown/scripts.pory"

# 411 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 412 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 413 "data/maps/LittlerootTown/scripts.pory"
	return
# 414 "data/maps/LittlerootTown/scripts.pory"

# 415 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 416 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 417 "data/maps/LittlerootTown/scripts.pory"
	return
# 418 "data/maps/LittlerootTown/scripts.pory"

# 419 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 420 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 421 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 422 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 423 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 424 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 425 "data/maps/LittlerootTown/scripts.pory"
	end
# 426 "data/maps/LittlerootTown/scripts.pory"

# 427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 428 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 432 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 436 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 437 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 438 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 439 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 440 "data/maps/LittlerootTown/scripts.pory"
	end
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 443 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 444 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 445 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 446 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 447 "data/maps/LittlerootTown/scripts.pory"
	end
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 450 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 451 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 452 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 453 "data/maps/LittlerootTown/scripts.pory"
	end
# 454 "data/maps/LittlerootTown/scripts.pory"

# 455 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 456 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 457 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 458 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 459 "data/maps/LittlerootTown/scripts.pory"
	end
# 460 "data/maps/LittlerootTown/scripts.pory"

# 461 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 462 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 463 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 474 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 475 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 476 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 477 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 478 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 479 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 480 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 481 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 482 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 484 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 485 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 486 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 488 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 489 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 490 "data/maps/LittlerootTown/scripts.pory"
	end
# 491 "data/maps/LittlerootTown/scripts.pory"

# 492 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 493 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 494 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 495 "data/maps/LittlerootTown/scripts.pory"
	return
# 496 "data/maps/LittlerootTown/scripts.pory"

# 497 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 498 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 499 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 500 "data/maps/LittlerootTown/scripts.pory"
	return
# 501 "data/maps/LittlerootTown/scripts.pory"

# 502 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 503 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 504 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 505 "data/maps/LittlerootTown/scripts.pory"
	return
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 508 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 509 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 513 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 514 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 515 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 516 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 518 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 519 "data/maps/LittlerootTown/scripts.pory"
	return
# 520 "data/maps/LittlerootTown/scripts.pory"

# 521 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 527 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 528 "data/maps/LittlerootTown/scripts.pory"
	return
# 529 "data/maps/LittlerootTown/scripts.pory"

# 530 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 531 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 532 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 534 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 535 "data/maps/LittlerootTown/scripts.pory"
	return
# 536 "data/maps/LittlerootTown/scripts.pory"

# 537 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 538 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 539 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 541 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 542 "data/maps/LittlerootTown/scripts.pory"
	return
# 543 "data/maps/LittlerootTown/scripts.pory"

# 544 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 545 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 546 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 548 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/LittlerootTown/scripts.pory"
	return
# 550 "data/maps/LittlerootTown/scripts.pory"

# 551 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 552 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 553 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 555 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/LittlerootTown/scripts.pory"
	return
# 557 "data/maps/LittlerootTown/scripts.pory"

# 558 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 559 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 560 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 562 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 563 "data/maps/LittlerootTown/scripts.pory"
	return
# 564 "data/maps/LittlerootTown/scripts.pory"

# 565 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 566 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 567 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 569 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/LittlerootTown/scripts.pory"
	return
# 571 "data/maps/LittlerootTown/scripts.pory"

# 572 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 573 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 574 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 576 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 577 "data/maps/LittlerootTown/scripts.pory"
	return
# 578 "data/maps/LittlerootTown/scripts.pory"

# 579 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 580 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 581 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 583 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/LittlerootTown/scripts.pory"
	return
# 585 "data/maps/LittlerootTown/scripts.pory"

# 586 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 587 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 588 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 590 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/LittlerootTown/scripts.pory"
	return
# 592 "data/maps/LittlerootTown/scripts.pory"

# 593 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 594 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 595 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 597 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 598 "data/maps/LittlerootTown/scripts.pory"
	return
# 599 "data/maps/LittlerootTown/scripts.pory"

# 600 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 601 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 603 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 604 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 606 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 607 "data/maps/LittlerootTown/scripts.pory"
	return
# 608 "data/maps/LittlerootTown/scripts.pory"

# 609 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 615 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 616 "data/maps/LittlerootTown/scripts.pory"
	return
# 617 "data/maps/LittlerootTown/scripts.pory"

# 618 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 619 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 620 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 621 "data/maps/LittlerootTown/scripts.pory"
	return
# 622 "data/maps/LittlerootTown/scripts.pory"

# 623 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 624 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 625 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 626 "data/maps/LittlerootTown/scripts.pory"
	return
# 627 "data/maps/LittlerootTown/scripts.pory"

# 628 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 629 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 630 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 632 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 633 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 634 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 635 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 636 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 637 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 638 "data/maps/LittlerootTown/scripts.pory"
	return
# 639 "data/maps/LittlerootTown/scripts.pory"

# 640 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 641 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 642 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 643 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 644 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 645 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 646 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 648 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 650 "data/maps/LittlerootTown/scripts.pory"
	return
# 651 "data/maps/LittlerootTown/scripts.pory"

# 652 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 653 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 654 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 656 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 657 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 658 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 659 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 660 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 662 "data/maps/LittlerootTown/scripts.pory"
	return
# 663 "data/maps/LittlerootTown/scripts.pory"

# 664 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 665 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 666 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 668 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 672 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 674 "data/maps/LittlerootTown/scripts.pory"
	return
# 675 "data/maps/LittlerootTown/scripts.pory"

# 676 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 677 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 678 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 679 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 681 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 683 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 684 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 686 "data/maps/LittlerootTown/scripts.pory"
	return
# 687 "data/maps/LittlerootTown/scripts.pory"

# 688 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 689 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 690 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 691 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 693 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 695 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 696 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 698 "data/maps/LittlerootTown/scripts.pory"
	return
# 699 "data/maps/LittlerootTown/scripts.pory"

# 700 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 701 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 702 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 703 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 705 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 708 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 710 "data/maps/LittlerootTown/scripts.pory"
	return
# 711 "data/maps/LittlerootTown/scripts.pory"

# 712 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 713 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 714 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 717 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 720 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 722 "data/maps/LittlerootTown/scripts.pory"
	return
# 723 "data/maps/LittlerootTown/scripts.pory"

# 724 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 725 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 730 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 731 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 732 "data/maps/LittlerootTown/scripts.pory"

# 733 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 739 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 740 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 741 "data/maps/LittlerootTown/scripts.pory"

# 742 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 747 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 748 "data/maps/LittlerootTown/scripts.pory"

# 749 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 755 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 756 "data/maps/LittlerootTown/scripts.pory"

# 757 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 767 "data/maps/LittlerootTown/scripts.pory"

# 768 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 771 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 772 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 773 "data/maps/LittlerootTown/scripts.pory"

# 774 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 777 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 778 "data/maps/LittlerootTown/scripts.pory"

# 779 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 785 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 786 "data/maps/LittlerootTown/scripts.pory"

# 787 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 792 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 793 "data/maps/LittlerootTown/scripts.pory"

# 794 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 800 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 807 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 808 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 809 "data/maps/LittlerootTown/scripts.pory"

# 810 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 816 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 824 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 825 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 826 "data/maps/LittlerootTown/scripts.pory"

# 827 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 831 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 832 "data/maps/LittlerootTown/scripts.pory"

# 833 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 838 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 839 "data/maps/LittlerootTown/scripts.pory"

# 840 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 845 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 846 "data/maps/LittlerootTown/scripts.pory"

# 847 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 851 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 852 "data/maps/LittlerootTown/scripts.pory"

# 853 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 860 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 867 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 868 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 869 "data/maps/LittlerootTown/scripts.pory"

# 870 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 872 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 873 "data/maps/LittlerootTown/scripts.pory"

# 874 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 875 "data/maps/LittlerootTown/scripts.pory"
	lock
# 876 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 877 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 878 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 879 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 880 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 881 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 882 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 883 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 884 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 885 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 886 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 887 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 888 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 889 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 890 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 891 "data/maps/LittlerootTown/scripts.pory"
	end
# 892 "data/maps/LittlerootTown/scripts.pory"

# 893 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 894 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 895 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 896 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 897 "data/maps/LittlerootTown/scripts.pory"
	release
# 898 "data/maps/LittlerootTown/scripts.pory"
	end
# 899 "data/maps/LittlerootTown/scripts.pory"

# 900 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 901 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 902 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 903 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 904 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 905 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 906 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 907 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 908 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 909 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 910 "data/maps/LittlerootTown/scripts.pory"
	return
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 922 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 923 "data/maps/LittlerootTown/scripts.pory"

# 924 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 925 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 937 "data/maps/LittlerootTown/scripts.pory"

# 938 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 941 "data/maps/LittlerootTown/scripts.pory"

# 942 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 949 "data/maps/LittlerootTown/scripts.pory"

# 950 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 959 "data/maps/LittlerootTown/scripts.pory"

# 960 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 964 "data/maps/LittlerootTown/scripts.pory"

# 965 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 971 "data/maps/LittlerootTown/scripts.pory"

# 972 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 975 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 976 "data/maps/LittlerootTown/scripts.pory"

# 977 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 980 "data/maps/LittlerootTown/scripts.pory"

# 981 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 989 "data/maps/LittlerootTown/scripts.pory"

# 990 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 992 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 993 "data/maps/LittlerootTown/scripts.pory"

# 994 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 997 "data/maps/LittlerootTown/scripts.pory"

# 998 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1001 "data/maps/LittlerootTown/scripts.pory"

# 1002 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1004 "data/maps/LittlerootTown/scripts.pory"

# 1005 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1007 "data/maps/LittlerootTown/scripts.pory"

# 1008 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1009 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1010 "data/maps/LittlerootTown/scripts.pory"

# 1011 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

MyScript::
# 1023 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1024 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, hello
# 1025 "data/maps/LittlerootTown/scripts.pory"
	msgbox MyScript_Text_0
# 1026 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_UNUSED_0x265
# 1027 "data/maps/LittlerootTown/scripts.pory"
	removeobject 1
# 1028 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


# 1031 "data/maps/LittlerootTown/scripts.pory"
hello:
# 1032 "data/maps/LittlerootTown/scripts.pory"
	face_right
	step_end

MyScript_Text_0:
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "Hahaha I am a ghost \nhahahahahaahahahahaahahahahaaaa\laaaaa$"
