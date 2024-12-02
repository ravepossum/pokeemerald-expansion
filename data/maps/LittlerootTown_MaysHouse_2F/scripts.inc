# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts::
# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition:
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 4, PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos::
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos::
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret::
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay::
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay::
# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp:
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special SpawnCameraObject
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mymove
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, move1
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
mymove:
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
move1:
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_left
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor::
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SecretBase_EventScript_InitDecorations
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall::
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay::
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth::
# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth::
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest::
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast::
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters:
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth:
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth:
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth:
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth:
# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth:
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth:
# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest:
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest:
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest:
# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast:
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast:
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast:
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_faster_right
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival::
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_May
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_Brendan
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May::
# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan::
# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove::
# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, RivalsHouse_2F_EventScript_MayPostLilycove
# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, RivalsHouse_2F_EventScript_BrendanPostLilycove
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove::
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove::
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext::
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext::
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC::
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC::
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC::
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC::
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_MAYS_HOUSE
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou:
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who… Who are you?\p"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\n"
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So your move was today.\p"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Glad to meet you!\p"
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I…\n"
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eheheh…\p"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON!\p"
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady:
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored!\n"
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou:
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a POKéMON?\p"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild POKéMON.\p"
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady:
# 399 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "POKéMON fully restored…\n"
# 400 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 401 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 402 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall:
# 403 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s POKé BALL!\p"
# 404 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 405 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 406 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex:
# 407 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my POKéDEX.\p"
# 409 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of POKéMON that\n"
# 410 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 411 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 412 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 413 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 414 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?$"
# 415 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 416 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext:
# 417 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "MAY: I wonder where I should go catch\n"
# 418 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some POKéMON next?\p"
# 419 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 420 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 421 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 422 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex:
# 423 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: Hey, it's {PLAYER}.\p"
# 424 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my POKéDEX.\p"
# 425 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many POKéMON that\n"
# 426 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 427 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 428 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this POKéDEX out gives me\n"
# 429 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 430 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 431 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext:
# 432 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "BRENDAN: I'm having a hard time deciding\n"
# 433 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch POKéMON next.\p"
# 434 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 435 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching POKéMON, I can pitch you a\l"
# 436 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
