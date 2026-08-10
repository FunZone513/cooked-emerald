HorizonPort_MapScripts::
# 2 "data/maps/HorizonPort/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HorizonPort_OnLoad
	.byte 0


HorizonPort_OnLoad::
# 6 "data/maps/HorizonPort/scripts.pory"
	goto_if_set FLAG_ITEM_HORIZON_PORT_4, HorizonPort_OnLoad_2
HorizonPort_OnLoad_1:
# 10 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_ge HorizonPort_OnLoad_4
	return

HorizonPort_OnLoad_2:
# 7 "data/maps/HorizonPort/scripts.pory"
	setmetatile 32, 11, METATILE_General_SandPit_Center, FALSE
	goto HorizonPort_OnLoad_1

HorizonPort_OnLoad_4:
# 11 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_TEMP_A
	return


HorizonPort_RichardBattle::
# 16 "data/maps/HorizonPort/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
# 17 "data/maps/HorizonPort/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 18 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_lt HorizonPort_RichardBattle_2
# 24 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1 > 22, 0
	goto_if_ne HorizonPort_RichardBattle_3
HorizonPort_RichardBattle_1:
# 31 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_2
# 32 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 33 "data/maps/HorizonPort/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_CAMERA, HorizonPort_RichardBattle_Movement_3
# 35 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 36 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_0, MSGBOX_DEFAULT
# 37 "data/maps/HorizonPort/scripts.pory"
	playmoncry SPECIES_DEINO, CRY_MODE_ENCOUNTER
# 38 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_DEINO, HorizonPort_RichardBattle_Movement_4
# 39 "data/maps/HorizonPort/scripts.pory"
	waitmoncry
# 40 "data/maps/HorizonPort/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 41 "data/maps/HorizonPort/scripts.pory"
	waitse
# 42 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_DEINO
# 43 "data/maps/HorizonPort/scripts.pory"
	setobjectmovementtype LOCALID_HORIZONPORT_DEINO, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
# 44 "data/maps/HorizonPort/scripts.pory"
	message HorizonPort_RichardBattle_Text_1
# 45 "data/maps/HorizonPort/scripts.pory"
	waitmessage
# 46 "data/maps/HorizonPort/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_FAINT
# 47 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RALTS, HorizonPort_RichardBattle_Movement_5
# 48 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 49 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RALTS, HorizonPort_RichardBattle_Movement_6
# 50 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 51 "data/maps/HorizonPort/scripts.pory"
	waitmoncry
# 52 "data/maps/HorizonPort/scripts.pory"
	waitbuttonpress
# 53 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_2, MSGBOX_DEFAULT
# 54 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_3, MSGBOX_AUTOCLOSE
# 55 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_7
# 56 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_CAMERA, HorizonPort_RichardBattle_Movement_8
# 57 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_CRUSHGIRL
# 58 "data/maps/HorizonPort/scripts.pory"
	special RemoveCameraObject
# 59 "data/maps/HorizonPort/scripts.pory"
	playse SE_PIN
# 60 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_9
# 61 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_10
# 62 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 63 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_4, MSGBOX_AUTOCLOSE
# 64 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_11
# 65 "data/maps/HorizonPort/scripts.pory"
	delay 20
# 66 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_DEINO, HorizonPort_RichardBattle_Movement_12
# 67 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_CRUSHGIRL
# 68 "data/maps/HorizonPort/scripts.pory"
	opendoor 20, 28
# 69 "data/maps/HorizonPort/scripts.pory"
	playse SE_SLIDING_DOOR
# 70 "data/maps/HorizonPort/scripts.pory"
	waitdooranim
# 71 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_13
# 72 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_CRUSHGIRL
# 73 "data/maps/HorizonPort/scripts.pory"
	closedoor 20, 28
# 74 "data/maps/HorizonPort/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 75 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_2
# 76 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RICHARD, HorizonPort_RichardBattle_Movement_14
# 77 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 78 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_5, MSGBOX_DEFAULT
# 79 "data/maps/HorizonPort/scripts.pory"
	savebgm MUS_RG_RIVAL_EXIT
# 80 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 81 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_earlyrival TRAINER_HORIZON_PORT_RICHARD, 0, HorizonPort_RichardBattle_Text_6, HorizonPort_RichardBattle_Text_7
# 82 "data/maps/HorizonPort/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 83 "data/maps/HorizonPort/scripts.pory"
	special HealPlayerParty
# 84 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_RICHARD
	goto_if 1, HorizonPort_RichardBattle_7
# 91 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_9, MSGBOX_AUTOCLOSE
HorizonPort_RichardBattle_6:
# 98 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RICHARD, HorizonPort_RichardBattle_Movement_15
# 99 "data/maps/HorizonPort/scripts.pory"
	fadedefaultbgm
# 100 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 101 "data/maps/HorizonPort/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 102 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_TEMP_A
# 103 "data/maps/HorizonPort/scripts.pory"
	releaseall
	return

HorizonPort_RichardBattle_2:
HorizonPort_RichardBattle_10:
# 19 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_lt HorizonPort_RichardBattle_11
	goto HorizonPort_RichardBattle_1

HorizonPort_RichardBattle_3:
HorizonPort_RichardBattle_13:
# 25 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_gt HorizonPort_RichardBattle_14
	goto HorizonPort_RichardBattle_1

HorizonPort_RichardBattle_7:
# 85 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_8, MSGBOX_AUTOCLOSE
	goto HorizonPort_RichardBattle_6

HorizonPort_RichardBattle_11:
# 20 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_0
# 21 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 22 "data/maps/HorizonPort/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto HorizonPort_RichardBattle_10

HorizonPort_RichardBattle_14:
# 26 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_1
# 27 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 28 "data/maps/HorizonPort/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto HorizonPort_RichardBattle_13


HorizonPort_Sign_Yard::
# 107 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Yard_Text_0, MSGBOX_SIGN
	return


HorizonPort_Sign_Market::
# 111 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Market_Text_0, MSGBOX_SIGN
	return


HorizonPort_Kid_Fire::
# 115 "data/maps/HorizonPort/scripts.pory"
	lock
# 116 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 117 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 0, HorizonPort_Kid_Fire_1
# 117 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_lt HorizonPort_Kid_Fire_1
# 127 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Fire_1:
# 118 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_0, MSGBOX_YESNO
# 119 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Fire_6
# 125 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Fire_6:
# 120 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_FIRE, HorizonPort_Kid_Fire_Text_1, HorizonPort_Kid_Fire_Text_2
	return


HorizonPort_Kid_Water::
# 132 "data/maps/HorizonPort/scripts.pory"
	lock
# 133 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 134 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 0, HorizonPort_Kid_Water_1
# 134 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_lt HorizonPort_Kid_Water_1
# 143 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Water_1:
# 135 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_0, MSGBOX_YESNO
# 136 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Water_6
# 142 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Water_6:
# 137 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_WATER, HorizonPort_Kid_Water_Text_1, HorizonPort_Kid_Water_Text_2
	return


HorizonPort_Kid_Grass::
# 147 "data/maps/HorizonPort/scripts.pory"
	lock
# 148 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 149 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 0, HorizonPort_Kid_Grass_1
# 149 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_lt HorizonPort_Kid_Grass_1
# 158 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Grass_1:
# 150 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_0, MSGBOX_YESNO
# 151 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Grass_6
# 157 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Grass_6:
# 152 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_GRASS, HorizonPort_Kid_Grass_Text_1, HorizonPort_Kid_Grass_Text_2
	return


HorizonPort_Father::
# 162 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 1, HorizonPort_Father_4
HorizonPort_Father_2:
# 177 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_lt HorizonPort_Father_11
# 180 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_4, MSGBOX_NPC
	return

HorizonPort_Father_1:
# 163 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_BEAT_HORIZON_PORT_KIDS, HorizonPort_Father_8
# 174 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_2, MSGBOX_NPC
	return

HorizonPort_Father_3:
# 162 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 1, HorizonPort_Father_1
	goto HorizonPort_Father_2

HorizonPort_Father_4:
# 162 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 1, HorizonPort_Father_3
	goto HorizonPort_Father_2

HorizonPort_Father_8:
# 164 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_0, MSGBOX_NPC
# 170 "data/maps/HorizonPort/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 1
# 171 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_BEAT_HORIZON_PORT_KIDS
# 172 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_1, MSGBOX_NPC
	return

HorizonPort_Father_11:
# 178 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_3
	return


HorizonPort_OldMan::
# 186 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan_Text_0, MSGBOX_NPC
	return


HorizonPort_OldMan2::
# 190 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan2_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor::
# 194 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor2::
# 198 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor2_Text_0, MSGBOX_NPC
	return


HorizonPort_Boy::
# 202 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Boy_Text_0, MSGBOX_NPC
	return


HorizonPort_OldWoman::
# 206 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldWoman_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson::
# 210 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson_Text_0, MSGBOX_NPC
# 211 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 212 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 215 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop:
# 216 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POKE_BALL
# 217 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 218 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POTION
# 219 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 220 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

HorizonPort_MarketPerson2::
# 224 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson2_Text_0, MSGBOX_NPC
# 225 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop2
# 226 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 229 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop2:
# 230 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 231 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_AWAKENING
# 232 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 233 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 234 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

HorizonPort_MarketPerson3::
# 262 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson3_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson4::
# 266 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson4_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson5::
# 270 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson5_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson6::
# 275 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson6_Text_0, MSGBOX_NPC
	return


HorizonPort_Mother::
# 279 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Mother_Text_0, MSGBOX_NPC
	return


HorizonPort_Fisherman::
# 283 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Fisherman_Text_0, MSGBOX_NPC
	return


# 20 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_0:
# 20 "data/maps/HorizonPort/scripts.pory"
	walk_right
	step_end

# 26 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_1:
# 26 "data/maps/HorizonPort/scripts.pory"
	walk_left
	step_end

# 31 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_2:
# 31 "data/maps/HorizonPort/scripts.pory"
	face_down
	step_end

# 34 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_3:
# 34 "data/maps/HorizonPort/scripts.pory"
	walk_down
	step_end

# 38 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_4:
# 38 "data/maps/HorizonPort/scripts.pory"
	jump_in_place_left
# 38 "data/maps/HorizonPort/scripts.pory"
	jump_in_place_left
	step_end

# 47 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_5:
# 47 "data/maps/HorizonPort/scripts.pory"
	face_up
# 47 "data/maps/HorizonPort/scripts.pory"
	delay_1
# 47 "data/maps/HorizonPort/scripts.pory"
	face_left
# 47 "data/maps/HorizonPort/scripts.pory"
	delay_1
# 47 "data/maps/HorizonPort/scripts.pory"
	face_down
# 47 "data/maps/HorizonPort/scripts.pory"
	delay_1
# 47 "data/maps/HorizonPort/scripts.pory"
	face_right
	step_end

# 49 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_6:
# 49 "data/maps/HorizonPort/scripts.pory"
	lock_facing_direction
# 49 "data/maps/HorizonPort/scripts.pory"
	jump_left
# 49 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

# 55 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_7:
# 55 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 55 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_8:
# 56 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_9:
# 60 "data/maps/HorizonPort/scripts.pory"
	face_left
	step_end

# 61 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_10:
# 61 "data/maps/HorizonPort/scripts.pory"
	emote_exclamation_mark
# 61 "data/maps/HorizonPort/scripts.pory"
	delay_16
# 61 "data/maps/HorizonPort/scripts.pory"
	face_right
	step_end

# 64 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_11:
# 64 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 64 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 64 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 64 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 64 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_12:
# 66 "data/maps/HorizonPort/scripts.pory"
	face_right
# 66 "data/maps/HorizonPort/scripts.pory"
	delay_16
# 66 "data/maps/HorizonPort/scripts.pory"
	delay_16
# 66 "data/maps/HorizonPort/scripts.pory"
	jump_right
# 66 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

# 71 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_13:
# 71 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 71 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

# 76 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_14:
# 76 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 76 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 76 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 98 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_15:
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 98 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

HorizonPort_RichardBattle_Text_0:
# 36 "data/maps/HorizonPort/scripts.pory"
	.string "You should've known better than to try\nand battle me while being so pathetic!\pGo Deino, finish her off!$"

HorizonPort_RichardBattle_Text_1:
# 44 "data/maps/HorizonPort/scripts.pory"
	.string "No! Ralts!$"

HorizonPort_RichardBattle_Text_2:
# 53 "data/maps/HorizonPort/scripts.pory"
	.string "You jerk!\pThat was so unnecessary!$"

HorizonPort_RichardBattle_Text_3:
# 54 "data/maps/HorizonPort/scripts.pory"
	.string "Sorry, I don't listen to losers.$"

HorizonPort_RichardBattle_Text_4:
# 63 "data/maps/HorizonPort/scripts.pory"
	.string "Oh it's you, sorry you had to see that...\pI have to go to the Pokemon Centre,\nI hope we can catch up later...$"

HorizonPort_RichardBattle_Text_5:
# 78 "data/maps/HorizonPort/scripts.pory"
	.string "And who are you supposed to be?\pNo, wait.\nI don't care.\pYou're just another NPC for me to win\nagainst.$"

HorizonPort_RichardBattle_Text_6:
# 81 "data/maps/HorizonPort/scripts.pory"
	.string "Wait what?$"

HorizonPort_RichardBattle_Text_7:
# 81 "data/maps/HorizonPort/scripts.pory"
	.string "Ahahaha!$"

HorizonPort_RichardBattle_Text_8:
# 86 "data/maps/HorizonPort/scripts.pory"
	.string "That isn't how it was supposed to go.\p"
	.string "I must've been distracted after the\nfree win from before.\p"
	.string "It won't happen again, see you never.$"

HorizonPort_RichardBattle_Text_9:
# 92 "data/maps/HorizonPort/scripts.pory"
	.string "And another one down.\p"
	.string "Man, this Pokemon stuff is easy.\p"
	.string "Just get the best ones and there's no\ncontest.\p"
	.string "Well, thanks for the free exp I guess,\nI'll see you later to get some more.$"

HorizonPort_Sign_Yard_Text_0:
# 107 "data/maps/HorizonPort/scripts.pory"
	.string "Boats,\nA bouyant masterpiece$"

HorizonPort_Sign_Market_Text_0:
# 111 "data/maps/HorizonPort/scripts.pory"
	.string "Markets are now open!\nWe have wares if you have coin!$"

HorizonPort_Kid_Fire_Text_0:
# 118 "data/maps/HorizonPort/scripts.pory"
	.string "He he he! You look like someone\nwho's up for a battle!$"

HorizonPort_Kid_Fire_Text_1:
# 122 "data/maps/HorizonPort/scripts.pory"
	.string "Yah!\nTake that!$"

HorizonPort_Kid_Fire_Text_2:
# 123 "data/maps/HorizonPort/scripts.pory"
	.string "Wha- no!\nThat's not how it works!$"

HorizonPort_Kid_Fire_Text_3:
# 125 "data/maps/HorizonPort/scripts.pory"
	.string "Chicken!$"

HorizonPort_Kid_Fire_Text_4:
# 127 "data/maps/HorizonPort/scripts.pory"
	.string "I like being at the beach when the sun\n"
	.string "is out!$"

HorizonPort_Kid_Water_Text_0:
# 135 "data/maps/HorizonPort/scripts.pory"
	.string "A challenger!\nDo you wish to do battle?$"

HorizonPort_Kid_Water_Text_1:
# 139 "data/maps/HorizonPort/scripts.pory"
	.string "Being at the beach gives me power!$"

HorizonPort_Kid_Water_Text_2:
# 140 "data/maps/HorizonPort/scripts.pory"
	.string "I got sand in my eye!\nThat didn't count!$"

HorizonPort_Kid_Water_Text_3:
# 142 "data/maps/HorizonPort/scripts.pory"
	.string "Come back later then!$"

HorizonPort_Kid_Water_Text_4:
# 143 "data/maps/HorizonPort/scripts.pory"
	.string "I love playing in the waves until I get\n"
	.string "all wrinkly!$"

HorizonPort_Kid_Grass_Text_0:
# 150 "data/maps/HorizonPort/scripts.pory"
	.string "Huh?\nYou wanna have a battle?$"

HorizonPort_Kid_Grass_Text_1:
# 154 "data/maps/HorizonPort/scripts.pory"
	.string "I hope I win.$"

HorizonPort_Kid_Grass_Text_2:
# 155 "data/maps/HorizonPort/scripts.pory"
	.string "Aw man.$"

HorizonPort_Kid_Grass_Text_3:
# 157 "data/maps/HorizonPort/scripts.pory"
	.string "All good.$"

HorizonPort_Kid_Grass_Text_4:
# 158 "data/maps/HorizonPort/scripts.pory"
	.string "I just wanna play my game, I'm hoping it\n"
	.string "doesn't get sand in it.$"

HorizonPort_Father_Text_0:
# 165 "data/maps/HorizonPort/scripts.pory"
	.string "I saw you battling with the little ones,\nI appreciate you playing with them.\p"
	.string "It gave me some time to relax for once,\nit's getting harder these days.\p"
	.string "And who knows when another one might\nbe on the way...\p"
	.string "Oh right,\nI have something for you as thanks.$"

HorizonPort_Father_Text_1:
# 172 "data/maps/HorizonPort/scripts.pory"
	.string "I have an abundance of these\nlaying around...$"

HorizonPort_Father_Text_2:
# 174 "data/maps/HorizonPort/scripts.pory"
	.string "Thanks for keeping the kids company.$"

HorizonPort_Father_Text_3:
# 178 "data/maps/HorizonPort/scripts.pory"
	.string "I'm hoping one of the new trainers would\n"
	.string "play with my kids.$"

HorizonPort_Father_Text_4:
# 180 "data/maps/HorizonPort/scripts.pory"
	.string "Say, you're a new trainer right?\pCould you battle with my kids so I\ncan get some peace and quiet?$"

HorizonPort_OldMan_Text_0:
# 186 "data/maps/HorizonPort/scripts.pory"
	.string "This lighthouse was put in to make it\n"
	.string "safer for people to come to the island.$"

HorizonPort_OldMan2_Text_0:
# 190 "data/maps/HorizonPort/scripts.pory"
	.string "I sometimes come here and gaze out at\n"
	.string "the sea, thinking about what could have\l"
	.string "been.$"

HorizonPort_Sailor_Text_0:
# 194 "data/maps/HorizonPort/scripts.pory"
	.string "We get a lot of travellers coming and\n"
	.string "going on boats 'round these parts.$"

HorizonPort_Sailor2_Text_0:
# 198 "data/maps/HorizonPort/scripts.pory"
	.string "Boats are pretty important for this\n"
	.string "city, so there are displays all over.$"

HorizonPort_Boy_Text_0:
# 202 "data/maps/HorizonPort/scripts.pory"
	.string "The salt spray from the ocean makes my\n"
	.string "eyes crusty!$"

HorizonPort_OldWoman_Text_0:
# 206 "data/maps/HorizonPort/scripts.pory"
	.string "Huh? What do you want? Why don't you\n"
	.string "get back on your boat and go home!$"

HorizonPort_MarketPerson_Text_0:
# 210 "data/maps/HorizonPort/scripts.pory"
	.string "Items an aspiring trainer like you might\n"
	.string "need!$"

HorizonPort_MarketPerson2_Text_0:
# 224 "data/maps/HorizonPort/scripts.pory"
	.string "Got problems? I've got solutions!$"

HorizonPort_MarketPerson3_Text_0:
# 262 "data/maps/HorizonPort/scripts.pory"
	.string "Welcome!\nAre you interested in some...\pOh, you're a trainer?\nI don't have any items for trainers.$"

HorizonPort_MarketPerson4_Text_0:
# 266 "data/maps/HorizonPort/scripts.pory"
	.string "There's always something of interest to\n"
	.string "be found at markets like these.$"

HorizonPort_MarketPerson5_Text_0:
# 270 "data/maps/HorizonPort/scripts.pory"
	.string "I'm just... huff... taking a break... hoo...$"

HorizonPort_MarketPerson6_Text_0:
# 275 "data/maps/HorizonPort/scripts.pory"
	.string "Come back when you're a little more\n"
	.string "cool.$"

HorizonPort_Mother_Text_0:
# 279 "data/maps/HorizonPort/scripts.pory"
	.string "After three childred my husband has\nstarted having reservations...\pbut I can be very convincing.$"

HorizonPort_Fisherman_Text_0:
# 283 "data/maps/HorizonPort/scripts.pory"
	.string "Imagine all the fishing that could be\n"
	.string "done in a boat like that...$"
