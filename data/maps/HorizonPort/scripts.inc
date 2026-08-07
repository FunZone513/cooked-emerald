HorizonPort_MapScripts::
# 2 "data/maps/HorizonPort/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HorizonPort_OnLoad
	.byte 0


HorizonPort_OnLoad::
# 6 "data/maps/HorizonPort/scripts.pory"
	goto_if_set FLAG_ITEM_HORIZON_PORT_4, HorizonPort_OnLoad_2
HorizonPort_OnLoad_1:
# 10 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_HIDE_HORIZON_PORT_RICHARD, HorizonPort_OnLoad_4
# 13 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_TEMP_A
	return

HorizonPort_OnLoad_2:
# 7 "data/maps/HorizonPort/scripts.pory"
	setmetatile 32, 11, METATILE_General_SandPit_Center, FALSE
	goto HorizonPort_OnLoad_1

HorizonPort_OnLoad_4:
# 11 "data/maps/HorizonPort/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


HorizonPort_RichardBattle::
# 18 "data/maps/HorizonPort/scripts.pory"
	setvar VAR_TEMP_A, 0
# 19 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_HIDE_HORIZON_PORT_RICHARD
# 20 "data/maps/HorizonPort/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 21 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_lt HorizonPort_RichardBattle_2
# 27 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1 > 22, 0
	goto_if_ne HorizonPort_RichardBattle_3
HorizonPort_RichardBattle_1:
# 34 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_2
# 35 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 36 "data/maps/HorizonPort/scripts.pory"
	special SpawnCameraObject
# 37 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_CAMERA, HorizonPort_RichardBattle_Movement_3
# 38 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 39 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_0, MSGBOX_DEFAULT
# 40 "data/maps/HorizonPort/scripts.pory"
	playmoncry SPECIES_DEINO, CRY_MODE_ENCOUNTER
# 41 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_DEINO, HorizonPort_RichardBattle_Movement_4
# 42 "data/maps/HorizonPort/scripts.pory"
	waitmoncry
# 43 "data/maps/HorizonPort/scripts.pory"
	playse SE_M_FLAME_WHEEL
# 44 "data/maps/HorizonPort/scripts.pory"
	waitse
# 45 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_DEINO
# 46 "data/maps/HorizonPort/scripts.pory"
	setobjectmovementtype LOCALID_HORIZONPORT_DEINO, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
# 47 "data/maps/HorizonPort/scripts.pory"
	message HorizonPort_RichardBattle_Text_1
# 48 "data/maps/HorizonPort/scripts.pory"
	waitmessage
# 49 "data/maps/HorizonPort/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_FAINT
# 50 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RALTS, HorizonPort_RichardBattle_Movement_5
# 51 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 52 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RALTS, HorizonPort_RichardBattle_Movement_6
# 53 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 54 "data/maps/HorizonPort/scripts.pory"
	waitmoncry
# 55 "data/maps/HorizonPort/scripts.pory"
	waitbuttonpress
# 56 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_2, MSGBOX_DEFAULT
# 57 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_3, MSGBOX_AUTOCLOSE
# 58 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_7
# 59 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_CAMERA, HorizonPort_RichardBattle_Movement_8
# 60 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_CRUSHGIRL
# 61 "data/maps/HorizonPort/scripts.pory"
	special RemoveCameraObject
# 62 "data/maps/HorizonPort/scripts.pory"
	playse SE_PIN
# 63 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_9
# 64 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_10
# 65 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 66 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_4, MSGBOX_AUTOCLOSE
# 67 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_11
# 68 "data/maps/HorizonPort/scripts.pory"
	delay 20
# 69 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_DEINO, HorizonPort_RichardBattle_Movement_12
# 70 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_CRUSHGIRL
# 71 "data/maps/HorizonPort/scripts.pory"
	opendoor 20, 28
# 72 "data/maps/HorizonPort/scripts.pory"
	playse SE_SLIDING_DOOR
# 73 "data/maps/HorizonPort/scripts.pory"
	waitdooranim
# 74 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_CRUSHGIRL, HorizonPort_RichardBattle_Movement_13
# 75 "data/maps/HorizonPort/scripts.pory"
	waitmovement LOCALID_HORIZONPORT_CRUSHGIRL
# 76 "data/maps/HorizonPort/scripts.pory"
	closedoor 20, 28
# 77 "data/maps/HorizonPort/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 78 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_2
# 79 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RICHARD, HorizonPort_RichardBattle_Movement_14
# 80 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 81 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_5, MSGBOX_DEFAULT
# 82 "data/maps/HorizonPort/scripts.pory"
	savebgm MUS_RG_RIVAL_EXIT
# 83 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_no_intro TRAINER_HORIZON_PORT_RICHARD, HorizonPort_RichardBattle_Text_6
# 84 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_RichardBattle_Text_7, MSGBOX_AUTOCLOSE
# 89 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_RICHARD, HorizonPort_RichardBattle_Movement_15
# 90 "data/maps/HorizonPort/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 92 "data/maps/HorizonPort/scripts.pory"
	releaseall
	return

HorizonPort_RichardBattle_2:
HorizonPort_RichardBattle_6:
# 22 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_lt HorizonPort_RichardBattle_7
	goto HorizonPort_RichardBattle_1

HorizonPort_RichardBattle_3:
HorizonPort_RichardBattle_9:
# 28 "data/maps/HorizonPort/scripts.pory"
	compare VAR_TEMP_1, 22
	goto_if_gt HorizonPort_RichardBattle_10
	goto HorizonPort_RichardBattle_1

HorizonPort_RichardBattle_7:
# 23 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_0
# 24 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 25 "data/maps/HorizonPort/scripts.pory"
	addvar VAR_TEMP_1, 1
	goto HorizonPort_RichardBattle_6

HorizonPort_RichardBattle_10:
# 29 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_RichardBattle_Movement_1
# 30 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 31 "data/maps/HorizonPort/scripts.pory"
	subvar VAR_TEMP_1, 1
	goto HorizonPort_RichardBattle_9


HorizonPort_Sign_Yard::
# 96 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Yard_Text_0, MSGBOX_SIGN
	return


HorizonPort_Sign_Market::
# 100 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Market_Text_0, MSGBOX_SIGN
	return


HorizonPort_Kid_Fire::
# 104 "data/maps/HorizonPort/scripts.pory"
	lock
# 105 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 106 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 0, HorizonPort_Kid_Fire_1
# 116 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Fire_1:
# 107 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_0, MSGBOX_YESNO
# 108 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Fire_4
# 114 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Fire_4:
# 109 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_FIRE, HorizonPort_Kid_Fire_Text_1, HorizonPort_Kid_Fire_Text_2
	return


HorizonPort_Kid_Water::
# 121 "data/maps/HorizonPort/scripts.pory"
	lock
# 122 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 123 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 0, HorizonPort_Kid_Water_1
# 132 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Water_1:
# 124 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_0, MSGBOX_YESNO
# 125 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Water_4
# 131 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Water_4:
# 126 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_WATER, HorizonPort_Kid_Water_Text_1, HorizonPort_Kid_Water_Text_2
	return


HorizonPort_Kid_Grass::
# 136 "data/maps/HorizonPort/scripts.pory"
	lock
# 137 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 138 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 0, HorizonPort_Kid_Grass_1
# 147 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Grass_1:
# 139 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_0, MSGBOX_YESNO
# 140 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Grass_4
# 146 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Grass_4:
# 141 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_GRASS, HorizonPort_Kid_Grass_Text_1, HorizonPort_Kid_Grass_Text_2
	return


HorizonPort_Father::
# 151 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 1, HorizonPort_Father_4
HorizonPort_Father_2:
# 166 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_3, MSGBOX_NPC
	return

HorizonPort_Father_1:
# 152 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_BEAT_HORIZON_PORT_KIDS, HorizonPort_Father_8
# 163 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_2, MSGBOX_NPC
	return

HorizonPort_Father_3:
# 151 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 1, HorizonPort_Father_1
	goto HorizonPort_Father_2

HorizonPort_Father_4:
# 151 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 1, HorizonPort_Father_3
	goto HorizonPort_Father_2

HorizonPort_Father_8:
# 153 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_0, MSGBOX_NPC
# 159 "data/maps/HorizonPort/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 1
# 160 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_BEAT_HORIZON_PORT_KIDS
# 161 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_1, MSGBOX_NPC
	return


HorizonPort_OldMan::
# 171 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan_Text_0, MSGBOX_NPC
	return


HorizonPort_OldMan2::
# 175 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan2_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor::
# 179 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor2::
# 183 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor2_Text_0, MSGBOX_NPC
	return


HorizonPort_Boy::
# 187 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Boy_Text_0, MSGBOX_NPC
	return


HorizonPort_OldWoman::
# 191 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldWoman_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson::
# 195 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson_Text_0, MSGBOX_NPC
# 196 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 197 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 200 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop:
# 201 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POKE_BALL
# 202 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 203 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POTION
# 204 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 205 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

HorizonPort_MarketPerson2::
# 209 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson2_Text_0, MSGBOX_NPC
# 210 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop2
# 211 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 214 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop2:
# 215 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 216 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_AWAKENING
# 217 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 218 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 219 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

HorizonPort_MarketPerson3::
# 247 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson3_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson4::
# 251 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson4_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson5::
# 255 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson5_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson6::
# 260 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson6_Text_0, MSGBOX_NPC
	return


HorizonPort_Mother::
# 264 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Mother_Text_0, MSGBOX_NPC
	return


HorizonPort_Fisherman::
# 268 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Fisherman_Text_0, MSGBOX_NPC
	return


# 23 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_0:
# 23 "data/maps/HorizonPort/scripts.pory"
	walk_right
	step_end

# 29 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_1:
# 29 "data/maps/HorizonPort/scripts.pory"
	walk_left
	step_end

# 34 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_2:
# 34 "data/maps/HorizonPort/scripts.pory"
	face_down
	step_end

# 37 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_3:
# 37 "data/maps/HorizonPort/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_4:
# 41 "data/maps/HorizonPort/scripts.pory"
	jump_in_place_left
# 41 "data/maps/HorizonPort/scripts.pory"
	jump_in_place_left
	step_end

# 50 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_5:
# 50 "data/maps/HorizonPort/scripts.pory"
	face_up
# 50 "data/maps/HorizonPort/scripts.pory"
	face_left
# 50 "data/maps/HorizonPort/scripts.pory"
	face_down
# 50 "data/maps/HorizonPort/scripts.pory"
	face_right
	step_end

# 52 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_6:
# 52 "data/maps/HorizonPort/scripts.pory"
	lock_facing_direction
# 52 "data/maps/HorizonPort/scripts.pory"
	jump_left
# 52 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

# 58 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_7:
# 58 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 58 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 59 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_8:
# 59 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 63 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_9:
# 63 "data/maps/HorizonPort/scripts.pory"
	face_left
	step_end

# 64 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_10:
# 64 "data/maps/HorizonPort/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/HorizonPort/scripts.pory"
	delay_16
# 64 "data/maps/HorizonPort/scripts.pory"
	face_right
	step_end

# 67 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_11:
# 67 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 67 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 67 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 67 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 67 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_12:
# 69 "data/maps/HorizonPort/scripts.pory"
	face_right
# 69 "data/maps/HorizonPort/scripts.pory"
	delay_16
# 69 "data/maps/HorizonPort/scripts.pory"
	delay_16
# 69 "data/maps/HorizonPort/scripts.pory"
	jump_right
# 69 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

# 74 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_13:
# 74 "data/maps/HorizonPort/scripts.pory"
	walk_up
# 74 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

# 79 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_14:
# 79 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 79 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 79 "data/maps/HorizonPort/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/HorizonPort/scripts.pory"
HorizonPort_RichardBattle_Movement_15:
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	walk_down
# 89 "data/maps/HorizonPort/scripts.pory"
	set_invisible
	step_end

HorizonPort_RichardBattle_Text_0:
# 39 "data/maps/HorizonPort/scripts.pory"
	.string "You should've known better than to try\nand battle me while being so pathetic!\pGo Deino, finish her off!$"

HorizonPort_RichardBattle_Text_1:
# 47 "data/maps/HorizonPort/scripts.pory"
	.string "No! Ralts!$"

HorizonPort_RichardBattle_Text_2:
# 56 "data/maps/HorizonPort/scripts.pory"
	.string "You jerk!\pThat was so unnecessary!$"

HorizonPort_RichardBattle_Text_3:
# 57 "data/maps/HorizonPort/scripts.pory"
	.string "I beg to differ, people need to know\ntheir place.$"

HorizonPort_RichardBattle_Text_4:
# 66 "data/maps/HorizonPort/scripts.pory"
	.string "Oh it's you, sorry you had to see that...\pI have to go to the Pokemon Centre,\nI hope we can catch up later...$"

HorizonPort_RichardBattle_Text_5:
# 81 "data/maps/HorizonPort/scripts.pory"
	.string "And who are you supposed to be?\pNo, wait.\nI don't care.\pYou're just another NPC for me to win\nagainst.$"

HorizonPort_RichardBattle_Text_6:
# 83 "data/maps/HorizonPort/scripts.pory"
	.string "Wait what?$"

HorizonPort_RichardBattle_Text_7:
# 85 "data/maps/HorizonPort/scripts.pory"
	.string "That isn't how it was supposed to go.\p"
	.string "I must've been distracted after the\nfree win from before.\p"
	.string "It won't happen again, see you never.$"

HorizonPort_Sign_Yard_Text_0:
# 96 "data/maps/HorizonPort/scripts.pory"
	.string "Boats,\nA bouyant masterpiece$"

HorizonPort_Sign_Market_Text_0:
# 100 "data/maps/HorizonPort/scripts.pory"
	.string "Markets are now open!\nWe have wares if you have coin!$"

HorizonPort_Kid_Fire_Text_0:
# 107 "data/maps/HorizonPort/scripts.pory"
	.string "He he he! You look like someone\nwho's up for a battle!$"

HorizonPort_Kid_Fire_Text_1:
# 111 "data/maps/HorizonPort/scripts.pory"
	.string "Yah!\nTake that!$"

HorizonPort_Kid_Fire_Text_2:
# 112 "data/maps/HorizonPort/scripts.pory"
	.string "Wha- no!\nThat's not how it works!$"

HorizonPort_Kid_Fire_Text_3:
# 114 "data/maps/HorizonPort/scripts.pory"
	.string "Chicken!$"

HorizonPort_Kid_Fire_Text_4:
# 116 "data/maps/HorizonPort/scripts.pory"
	.string "I like being at the beach when the sun\n"
	.string "is out!$"

HorizonPort_Kid_Water_Text_0:
# 124 "data/maps/HorizonPort/scripts.pory"
	.string "A challenger!\nDo you wish to do battle?$"

HorizonPort_Kid_Water_Text_1:
# 128 "data/maps/HorizonPort/scripts.pory"
	.string "Being at the beach gives me power!$"

HorizonPort_Kid_Water_Text_2:
# 129 "data/maps/HorizonPort/scripts.pory"
	.string "I got sand in my eye!\nThat didn't count!$"

HorizonPort_Kid_Water_Text_3:
# 131 "data/maps/HorizonPort/scripts.pory"
	.string "Come back later then!$"

HorizonPort_Kid_Water_Text_4:
# 132 "data/maps/HorizonPort/scripts.pory"
	.string "I love playing in the waves until I get\n"
	.string "all wrinkly!$"

HorizonPort_Kid_Grass_Text_0:
# 139 "data/maps/HorizonPort/scripts.pory"
	.string "You wanna have a battle?$"

HorizonPort_Kid_Grass_Text_1:
# 143 "data/maps/HorizonPort/scripts.pory"
	.string "I hope I win.$"

HorizonPort_Kid_Grass_Text_2:
# 144 "data/maps/HorizonPort/scripts.pory"
	.string "Aw man.$"

HorizonPort_Kid_Grass_Text_3:
# 146 "data/maps/HorizonPort/scripts.pory"
	.string "All good.$"

HorizonPort_Kid_Grass_Text_4:
# 147 "data/maps/HorizonPort/scripts.pory"
	.string "I just wanna play my game, I'm hoping it\n"
	.string "doesn't get sand in it.$"

HorizonPort_Father_Text_0:
# 154 "data/maps/HorizonPort/scripts.pory"
	.string "I saw you battling with the little ones,\nI appreciate you playing with them.\p"
	.string "It gave me some time to relax for once,\nit's getting harder these days.\p"
	.string "And who knows when another one might\nbe on the way...\p"
	.string "Oh right,\nI have something for you as thanks.$"

HorizonPort_Father_Text_1:
# 161 "data/maps/HorizonPort/scripts.pory"
	.string "I have an abundance of these\nlaying around...$"

HorizonPort_Father_Text_2:
# 163 "data/maps/HorizonPort/scripts.pory"
	.string "Thanks for keeping the kids company.$"

HorizonPort_Father_Text_3:
# 166 "data/maps/HorizonPort/scripts.pory"
	.string "These little rascals really like\n"
	.string "battling, could you please keep them\l"
	.string "entertained so I can get some peace\l"
	.string "and quiet?$"

HorizonPort_OldMan_Text_0:
# 171 "data/maps/HorizonPort/scripts.pory"
	.string "This lighthouse was put in to make it\n"
	.string "safer for people to come to the island.$"

HorizonPort_OldMan2_Text_0:
# 175 "data/maps/HorizonPort/scripts.pory"
	.string "I sometimes come here and gaze out at\n"
	.string "the sea, thinking about what could have\l"
	.string "been.$"

HorizonPort_Sailor_Text_0:
# 179 "data/maps/HorizonPort/scripts.pory"
	.string "We get a lot of travellers coming and\n"
	.string "going on boats 'round these parts.$"

HorizonPort_Sailor2_Text_0:
# 183 "data/maps/HorizonPort/scripts.pory"
	.string "Boats are pretty important for this\n"
	.string "city, so there are displays all over.$"

HorizonPort_Boy_Text_0:
# 187 "data/maps/HorizonPort/scripts.pory"
	.string "The salt spray from the ocean makes my\n"
	.string "eyes crusty!$"

HorizonPort_OldWoman_Text_0:
# 191 "data/maps/HorizonPort/scripts.pory"
	.string "Huh? What do you want? Why don't you\n"
	.string "get back on your boat and go home!$"

HorizonPort_MarketPerson_Text_0:
# 195 "data/maps/HorizonPort/scripts.pory"
	.string "Items an aspiring trainer like you might\n"
	.string "need!$"

HorizonPort_MarketPerson2_Text_0:
# 209 "data/maps/HorizonPort/scripts.pory"
	.string "Got problems? I've got solutions!$"

HorizonPort_MarketPerson3_Text_0:
# 247 "data/maps/HorizonPort/scripts.pory"
	.string "Welcome!\nAre you interested in some...\pOh, you're a trainer?\nI don't have any items for trainers.$"

HorizonPort_MarketPerson4_Text_0:
# 251 "data/maps/HorizonPort/scripts.pory"
	.string "There's always something of interest to\n"
	.string "be found at markets like these.$"

HorizonPort_MarketPerson5_Text_0:
# 255 "data/maps/HorizonPort/scripts.pory"
	.string "I'm just... huff... taking a break... hoo...$"

HorizonPort_MarketPerson6_Text_0:
# 260 "data/maps/HorizonPort/scripts.pory"
	.string "Come back when you're a little more\n"
	.string "cool.$"

HorizonPort_Mother_Text_0:
# 264 "data/maps/HorizonPort/scripts.pory"
	.string "After three childred my husband has\nstarted having reservations...\pbut I can be very convincing.$"

HorizonPort_Fisherman_Text_0:
# 268 "data/maps/HorizonPort/scripts.pory"
	.string "Imagine all the fishing that could be\n"
	.string "done in a boat like that...$"
