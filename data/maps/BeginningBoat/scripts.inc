BeginningBoat_MapScripts::
	.byte 0


BeginningBoat_CrushGirl::
# 4 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_BOAT_ROOM
	goto_if_eq BeginningBoat_CrushGirl_2
# 17 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_CrushGirl_Text_2, MSGBOX_NPC
BeginningBoat_CrushGirl_1:
# 19 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return

BeginningBoat_CrushGirl_2:
# 5 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_CrushGirl_Text_0, MSGBOX_NPC
# 10 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CRUSH, BeginningBoat_CrushGirl_Movement_0
# 11 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 12 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_CrushGirl_Text_1, MSGBOX_AUTOCLOSE
# 13 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CRUSH, BeginningBoat_CrushGirl_Movement_1
# 14 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 15 "data/maps/BeginningBoat/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_BEFORE_PICK_STARTER
	goto BeginningBoat_CrushGirl_1


BeginningBoat_Trigger::
# 23 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_BEFORE_PICK_STARTER
	goto_if_eq BeginningBoat_Trigger_1
# 47 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_Trigger_Text_1
# 48 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 49 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_PLAYER, BeginningBoat_Trigger_Movement_3
# 50 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 51 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return

BeginningBoat_Trigger_1:
# 24 "data/maps/BeginningBoat/scripts.pory"
	lock
# 25 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_PLAYER, BeginningBoat_Trigger_Movement_0
# 26 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 27 "data/maps/BeginningBoat/scripts.pory"
	special SpawnCameraObject
# 28 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_PLAYER, BeginningBoat_CrushGirl_Movement_1
# 29 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_Trigger_Movement_1
# 30 "data/maps/BeginningBoat/scripts.pory"
	call BeginningBoat_CorrectPositions
# 31 "data/maps/BeginningBoat/scripts.pory"
	waitmovement LOCALID_CAMERA
# 32 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_Trigger_Text_0
# 38 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 39 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 40 "data/maps/BeginningBoat/scripts.pory"
	closemessage
# 41 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_Trigger_Movement_2
# 42 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 43 "data/maps/BeginningBoat/scripts.pory"
	special RemoveCameraObject
# 44 "data/maps/BeginningBoat/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_PICKING_STARTER
# 45 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return


BeginningBoat_PostStarter::
# 56 "data/maps/BeginningBoat/scripts.pory"
	lock
# 57 "data/maps/BeginningBoat/scripts.pory"
	special SpawnCameraObject
# 58 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_Trigger_Movement_1
# 59 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 60 "data/maps/BeginningBoat/scripts.pory"
	call BeginningBoat_CorrectPositions
# 61 "data/maps/BeginningBoat/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 62 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq BeginningBoat_PostStarter_2
# 64 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_PostStarter_Movement_0
BeginningBoat_PostStarter_1:
# 65 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 66 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_0
# 73 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 74 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 75 "data/maps/BeginningBoat/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 76 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_RICHARD_BOAT, BeginningBoat_PostStarter_Movement_1
# 77 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_1
# 78 "data/maps/BeginningBoat/scripts.pory"
	waitmovement LOCALID_RICHARD_BOAT
# 79 "data/maps/BeginningBoat/scripts.pory"
	closemessage
# 80 "data/maps/BeginningBoat/scripts.pory"
	playse SE_WALL_HIT
# 81 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAPTAIN, BeginningBoat_PostStarter_Movement_2
# 82 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_RICHARD_BOAT, BeginningBoat_PostStarter_Movement_3
# 83 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 84 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_2
# 85 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 86 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 87 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_3
# 88 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 89 "data/maps/BeginningBoat/scripts.pory"
	removeobject LOCALID_BALL_DEINO
# 90 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 91 "data/maps/BeginningBoat/scripts.pory"
	closemessage
# 92 "data/maps/BeginningBoat/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/BeginningBoat/scripts.pory"
	delay 8
# 94 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_RICHARD_BOAT, BeginningBoat_PostStarter_Movement_4
# 95 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAPTAIN, BeginningBoat_PostStarter_Movement_5
# 96 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 97 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_4
# 98 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 99 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 100 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAPTAIN, BeginningBoat_PostStarter_Movement_6
# 101 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
# 102 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_5
# 112 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 113 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 114 "data/maps/BeginningBoat/scripts.pory"
	closemessage
# 115 "data/maps/BeginningBoat/scripts.pory"
	playse SE_DING_DONG
# 116 "data/maps/BeginningBoat/scripts.pory"
	waitse
# 117 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_6
# 118 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 119 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 120 "data/maps/BeginningBoat/scripts.pory"
	closemessage
# 121 "data/maps/BeginningBoat/scripts.pory"
	message BeginningBoat_PostStarter_Text_7
# 122 "data/maps/BeginningBoat/scripts.pory"
	waitmessage
# 123 "data/maps/BeginningBoat/scripts.pory"
	waitbuttonpress
# 124 "data/maps/BeginningBoat/scripts.pory"
	closemessage
# 125 "data/maps/BeginningBoat/scripts.pory"
	delay 20
# 126 "data/maps/BeginningBoat/scripts.pory"
	playse SE_SHIP
# 127 "data/maps/BeginningBoat/scripts.pory"
	fadescreen FADE_TO_WHITE
# 128 "data/maps/BeginningBoat/scripts.pory"
	waitse
# 129 "data/maps/BeginningBoat/scripts.pory"
	delay 60
# 130 "data/maps/BeginningBoat/scripts.pory"
	playse SE_EXIT
# 131 "data/maps/BeginningBoat/scripts.pory"
	waitse
# 132 "data/maps/BeginningBoat/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 133 "data/maps/BeginningBoat/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 134 "data/maps/BeginningBoat/scripts.pory"
	special SetUnlockedPokedexFlags
# 135 "data/maps/BeginningBoat/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_LEFT_BOAT
# 136 "data/maps/BeginningBoat/scripts.pory"
	setrespawn HEAL_LOCATION_HORIZON_PORT
# 137 "data/maps/BeginningBoat/scripts.pory"
	warpsilent MAP_HORIZON_PORT, 1
# 138 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return

BeginningBoat_PostStarter_2:
# 63 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_Trigger_Movement_3
	goto BeginningBoat_PostStarter_1


BeginningBoat_TryPickPokeball::
# 142 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_PICKING_STARTER
	goto_if_ne BeginningBoat_TryPickPokeball_1
# 146 "data/maps/BeginningBoat/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 147 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_eq BeginningBoat_TryPickPokeball_5
# 151 "data/maps/BeginningBoat/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_BALTOY
# 152 "data/maps/BeginningBoat/scripts.pory"
	bufferstring STR_VAR_1, BeginningBoat_TryPickPokeball_Text_2
BeginningBoat_TryPickPokeball_4:
# 154 "data/maps/BeginningBoat/scripts.pory"
	showmonpic VAR_TEMP_A, 10, 3
# 155 "data/maps/BeginningBoat/scripts.pory"
	playmoncry VAR_TEMP_A, CRY_MODE_NORMAL
# 157 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_TryPickPokeball_Text_3, MSGBOX_YESNO
# 158 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeginningBoat_TryPickPokeball_9
BeginningBoat_TryPickPokeball_8:
# 160 "data/maps/BeginningBoat/scripts.pory"
	hidemonpic
# 161 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return

BeginningBoat_TryPickPokeball_1:
# 143 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_TryPickPokeball_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return

BeginningBoat_TryPickPokeball_5:
# 148 "data/maps/BeginningBoat/scripts.pory"
	setvar VAR_TEMP_A, SPECIES_CHINCHOU
# 149 "data/maps/BeginningBoat/scripts.pory"
	bufferstring STR_VAR_1, BeginningBoat_TryPickPokeball_Text_1
	goto BeginningBoat_TryPickPokeball_4

BeginningBoat_TryPickPokeball_9:
# 158 "data/maps/BeginningBoat/scripts.pory"
	goto BeginningBoat_GetStarter
	goto BeginningBoat_TryPickPokeball_8


BeginningBoat_GetStarter::
# 166 "data/maps/BeginningBoat/scripts.pory"
	givemon VAR_TEMP_A, 5, ITEM_NONE, ITEM_PREMIER_BALL
# 167 "data/maps/BeginningBoat/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_GetStarter_Text_0
# 169 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_TEMP_A, SPECIES_CHINCHOU
	goto_if_eq BeginningBoat_GetStarter_2
# 171 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_BALL_BALTOY, BeginningBoat_GetStarter_Movement_0
BeginningBoat_GetStarter_1:
# 172 "data/maps/BeginningBoat/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/BeginningBoat/scripts.pory"
	waitfanfare
# 174 "data/maps/BeginningBoat/scripts.pory"
	call BeginningBoat_Nickname
# 175 "data/maps/BeginningBoat/scripts.pory"
	hidemonpic
# 176 "data/maps/BeginningBoat/scripts.pory"
	goto BeginningBoat_PostStarter
	return

BeginningBoat_GetStarter_2:
# 170 "data/maps/BeginningBoat/scripts.pory"
	applymovement LOCALID_BALL_CHINCHOU, BeginningBoat_GetStarter_Movement_0
	goto BeginningBoat_GetStarter_1


BeginningBoat_Nickname::
# 180 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Nickname_Text_0, MSGBOX_YESNO
# 181 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeginningBoat_Nickname_2
BeginningBoat_Nickname_1:
	return

BeginningBoat_Nickname_2:
# 182 "data/maps/BeginningBoat/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 183 "data/maps/BeginningBoat/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto BeginningBoat_Nickname_1


BeginningBoat_TryPickDeino::
# 189 "data/maps/BeginningBoat/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_PICKING_STARTER
	goto_if_eq BeginningBoat_TryPickDeino_1
	return

BeginningBoat_TryPickDeino_1:
# 190 "data/maps/BeginningBoat/scripts.pory"
	showmonpic SPECIES_DEINO, 10, 3
# 191 "data/maps/BeginningBoat/scripts.pory"
	playmoncry SPECIES_DEINO, CRY_MODE_NORMAL
# 192 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_TryPickDeino_Text_0, MSGBOX_AUTOCLOSE
# 193 "data/maps/BeginningBoat/scripts.pory"
	hidemonpic
# 194 "data/maps/BeginningBoat/scripts.pory"
	releaseall
	return


BeginningBoat_CorrectPositions::
# 199 "data/maps/BeginningBoat/scripts.pory"
	applymovement 11, BeginningBoat_CrushGirl_Movement_1
# 200 "data/maps/BeginningBoat/scripts.pory"
	applymovement 5, BeginningBoat_CrushGirl_Movement_1
# 201 "data/maps/BeginningBoat/scripts.pory"
	applymovement 13, BeginningBoat_CrushGirl_Movement_1
# 202 "data/maps/BeginningBoat/scripts.pory"
	applymovement 12, BeginningBoat_CrushGirl_Movement_1
# 203 "data/maps/BeginningBoat/scripts.pory"
	applymovement 6, BeginningBoat_CrushGirl_Movement_1
# 204 "data/maps/BeginningBoat/scripts.pory"
	applymovement 8, BeginningBoat_CrushGirl_Movement_1
# 205 "data/maps/BeginningBoat/scripts.pory"
	applymovement 7, BeginningBoat_CrushGirl_Movement_1
# 206 "data/maps/BeginningBoat/scripts.pory"
	waitmovement 0
	return


BeginningBoat_SignRoom1::
# 209 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_SignRoom1_Text_0, MSGBOX_SIGN
	return


BeginningBoat_SignRoom2::
# 210 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_SignRoom2_Text_0, MSGBOX_SIGN
	return


BeginningBoat_SignRoom3::
# 211 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_SignRoom3_Text_0, MSGBOX_SIGN
	return


BeginningBoat_SignRoom4::
# 212 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_SignRoom4_Text_0, MSGBOX_SIGN
	return


BeginningBoat_Sailor::
# 213 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Sailor_Text_0, MSGBOX_NPC
	return


BeginningBoat_Sailor2::
# 214 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Sailor2_Text_0, MSGBOX_NPC
	return


BeginningBoat_Lass::
# 215 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Lass_Text_0, MSGBOX_NPC
	return


BeginningBoat_Gentleman::
# 216 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Gentleman_Text_0, MSGBOX_NPC
	return


BeginningBoat_Boy::
# 217 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Boy_Text_0, MSGBOX_NPC
	return


BeginningBoat_Boy2::
# 218 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Boy2_Text_0, MSGBOX_NPC
	return


BeginningBoat_Man::
# 219 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Man_Text_0, MSGBOX_NPC
	return


BeginningBoat_Woman::
# 220 "data/maps/BeginningBoat/scripts.pory"
	msgbox BeginningBoat_Woman_Text_0, MSGBOX_NPC
	return


# 10 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_CrushGirl_Movement_0:
# 10 "data/maps/BeginningBoat/scripts.pory"
	walk_up
# 10 "data/maps/BeginningBoat/scripts.pory"
	delay_16
# 10 "data/maps/BeginningBoat/scripts.pory"
	face_down
	step_end

# 13 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_CrushGirl_Movement_1:
# 13 "data/maps/BeginningBoat/scripts.pory"
	face_up
	step_end

# 25 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_Trigger_Movement_0:
# 25 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 25 "data/maps/BeginningBoat/scripts.pory"
	walk_up
# 25 "data/maps/BeginningBoat/scripts.pory"
	walk_right
	step_end

# 29 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_Trigger_Movement_1:
# 29 "data/maps/BeginningBoat/scripts.pory"
	walk_up
# 29 "data/maps/BeginningBoat/scripts.pory"
	walk_up
	step_end

# 41 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_Trigger_Movement_2:
# 41 "data/maps/BeginningBoat/scripts.pory"
	walk_down
# 41 "data/maps/BeginningBoat/scripts.pory"
	walk_down
	step_end

# 49 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_Trigger_Movement_3:
# 49 "data/maps/BeginningBoat/scripts.pory"
	walk_right
	step_end

# 64 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_0:
# 64 "data/maps/BeginningBoat/scripts.pory"
	walk_left
	step_end

# 76 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_1:
# 76 "data/maps/BeginningBoat/scripts.pory"
	set_visible
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_down
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 76 "data/maps/BeginningBoat/scripts.pory"
	walk_left
	step_end

# 81 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_2:
# 81 "data/maps/BeginningBoat/scripts.pory"
	lock_facing_direction
# 81 "data/maps/BeginningBoat/scripts.pory"
	walk_up
# 81 "data/maps/BeginningBoat/scripts.pory"
	unlock_facing_direction
	step_end

# 82 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_3:
# 82 "data/maps/BeginningBoat/scripts.pory"
	walk_left
# 82 "data/maps/BeginningBoat/scripts.pory"
	face_down
	step_end

# 94 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_4:
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	walk_right
# 94 "data/maps/BeginningBoat/scripts.pory"
	set_invisible
	step_end

# 95 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_5:
# 95 "data/maps/BeginningBoat/scripts.pory"
	delay_16
# 95 "data/maps/BeginningBoat/scripts.pory"
	delay_16
# 95 "data/maps/BeginningBoat/scripts.pory"
	face_right
# 95 "data/maps/BeginningBoat/scripts.pory"
	delay_16
# 95 "data/maps/BeginningBoat/scripts.pory"
	delay_16
	step_end

# 100 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_PostStarter_Movement_6:
# 100 "data/maps/BeginningBoat/scripts.pory"
	walk_down
	step_end

# 170 "data/maps/BeginningBoat/scripts.pory"
BeginningBoat_GetStarter_Movement_0:
# 170 "data/maps/BeginningBoat/scripts.pory"
	set_invisible
	step_end

BeginningBoat_CrushGirl_Text_0:
# 6 "data/maps/BeginningBoat/scripts.pory"
	.string "Oh hey!\nYou starting your adventure too?\p"
	.string "They're handing out Pokemon to the\nlast few people.\p"
	.string "Oh! You probably need to get through,\nhere.$"

BeginningBoat_CrushGirl_Text_1:
# 12 "data/maps/BeginningBoat/scripts.pory"
	.string "I hope your adventure goes well!\nI'll be rooting for you!$"

BeginningBoat_CrushGirl_Text_2:
# 17 "data/maps/BeginningBoat/scripts.pory"
	.string "Are you going to pick one?\nI've already got mine!$"

BeginningBoat_Trigger_Text_0:
# 33 "data/maps/BeginningBoat/scripts.pory"
	.string "Thank you all for coming!\p"
	.string "I see some returning faces here,\nremember you only get the one Pokemon!\p"
	.string "To those that haven't gotten a Pokemon\nyet, feel free to choose one!\p"
	.string "Some of you have already made your\nchoice, so once everyone has picked one\lI'll explain more about the island!$"

BeginningBoat_Trigger_Text_1:
# 47 "data/maps/BeginningBoat/scripts.pory"
	.string "You should probably pick a Pokemon!$"

BeginningBoat_PostStarter_Text_0:
# 67 "data/maps/BeginningBoat/scripts.pory"
	.string "Now that we all have our Pokemon, I'd\nlike to explain about the island!\p"
	.string "The island you'll be exploring is\nteeming with wild Pokemon, but it also\lhas permanent residents.\p"
	.string "These residents may be trainers\nthemselves, or just normal citizens.\p"
	.string "These people are not sponsored by\nthe Pokemon Adventure initiative, so\lmake sure to be mindful of that.\p"
	.string "The island region has designated\nRoutes and Towns for you to progress\lthrough, so make sure to stay within\lthe bounds while exploring!$"

BeginningBoat_PostStarter_Text_1:
# 77 "data/maps/BeginningBoat/scripts.pory"
	.string "With that all out of the way, I believe\nwe can move on to-$"

BeginningBoat_PostStarter_Text_2:
# 84 "data/maps/BeginningBoat/scripts.pory"
	.string "Now that's what I'm talking about!\nThe options upstairs were just trash.$"

BeginningBoat_PostStarter_Text_3:
# 87 "data/maps/BeginningBoat/scripts.pory"
	.string "I'm takin' this one, see you on the\nisland idiots!$"

BeginningBoat_PostStarter_Text_4:
# 97 "data/maps/BeginningBoat/scripts.pory"
	.string "What the...?$"

BeginningBoat_PostStarter_Text_5:
# 103 "data/maps/BeginningBoat/scripts.pory"
	.string "Ahem!\p"
	.string "As I was saying before being rudely\ninterrupted, I'll explain some specifics\lof the adventure.\p"
	.string "As we're about to dock, I'll make it\nbrief.\p"
	.string "There's 4 Gyms on the island, beat them\nand collect the badges to challenge the\lleague!\p"
	.string "Climb to the top and you'll be the\nwinner of your adventuring cohort!\p"
	.string "Remember, the Pokemon Adventure is\nan experience designed for enjoyment\lfirst and foremost!\p"
	.string "Outside of legally held Trainer Battles,\nno other types of interference are\lallowed!\p"
	.string "We're all here to enjoy Pokemon\ntogether!$"

BeginningBoat_PostStarter_Text_6:
# 117 "data/maps/BeginningBoat/scripts.pory"
	.string "We are arriving at HORIZON PORT.\nPlease be ready to disembark.$"

BeginningBoat_PostStarter_Text_7:
# 121 "data/maps/BeginningBoat/scripts.pory"
	.string "Woops!\pLooks like that's all the time we have!\pGood luck out there!$"

BeginningBoat_TryPickPokeball_Text_0:
# 143 "data/maps/BeginningBoat/scripts.pory"
	.string "Now's not the time for this!$"

BeginningBoat_TryPickPokeball_Text_1:
# 149 "data/maps/BeginningBoat/scripts.pory"
	.string "CHINCHOU$"

BeginningBoat_TryPickPokeball_Text_2:
# 152 "data/maps/BeginningBoat/scripts.pory"
	.string "BALTOY$"

BeginningBoat_TryPickPokeball_Text_3:
# 157 "data/maps/BeginningBoat/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

BeginningBoat_GetStarter_Text_0:
# 168 "data/maps/BeginningBoat/scripts.pory"
	.string "You recieved the {STR_VAR_1}!$"

BeginningBoat_Nickname_Text_0:
# 180 "data/maps/BeginningBoat/scripts.pory"
	.string "Do you want to give it a nickname?$"

BeginningBoat_TryPickDeino_Text_0:
# 192 "data/maps/BeginningBoat/scripts.pory"
	.string "It looks like you can't reach that!$"

BeginningBoat_SignRoom1_Text_0:
# 209 "data/maps/BeginningBoat/scripts.pory"
	.string "Room 1\nYour Room$"

BeginningBoat_SignRoom2_Text_0:
# 210 "data/maps/BeginningBoat/scripts.pory"
	.string "Room 2$"

BeginningBoat_SignRoom3_Text_0:
# 211 "data/maps/BeginningBoat/scripts.pory"
	.string "Room 3$"

BeginningBoat_SignRoom4_Text_0:
# 212 "data/maps/BeginningBoat/scripts.pory"
	.string "Room 4$"

BeginningBoat_Sailor_Text_0:
# 213 "data/maps/BeginningBoat/scripts.pory"
	.string "Don't miss out on your Pokemon!$"

BeginningBoat_Sailor2_Text_0:
# 214 "data/maps/BeginningBoat/scripts.pory"
	.string "I'm doing a final check before we dock.$"

BeginningBoat_Lass_Text_0:
# 215 "data/maps/BeginningBoat/scripts.pory"
	.string "I'm so excited!$"

BeginningBoat_Gentleman_Text_0:
# 216 "data/maps/BeginningBoat/scripts.pory"
	.string "I remember my first Pokemon\n"
	.string "Adventure...$"

BeginningBoat_Boy_Text_0:
# 217 "data/maps/BeginningBoat/scripts.pory"
	.string "I bet my Pokemon is gonna be super\n"
	.string "cool!$"

BeginningBoat_Boy2_Text_0:
# 218 "data/maps/BeginningBoat/scripts.pory"
	.string "I got mine earlier, I bet you're jealous!$"

BeginningBoat_Man_Text_0:
# 219 "data/maps/BeginningBoat/scripts.pory"
	.string "I heard all the starters are natives to\n"
	.string "the island.$"

BeginningBoat_Woman_Text_0:
# 220 "data/maps/BeginningBoat/scripts.pory"
	.string "I want a little cutie!$"
