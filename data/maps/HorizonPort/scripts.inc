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
	savebgm MUS_LILYCOVE
# 100 "data/maps/HorizonPort/scripts.pory"
	fadedefaultbgm
# 101 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 102 "data/maps/HorizonPort/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 103 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_TEMP_A
# 104 "data/maps/HorizonPort/scripts.pory"
	setobjectxyperm LOCALID_HORIZONPORT_RICHARD, 0, 0
# 105 "data/maps/HorizonPort/scripts.pory"
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
# 109 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Yard_Text_0, MSGBOX_SIGN
	return


HorizonPort_Sign_Market::
# 113 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Market_Text_0, MSGBOX_SIGN
	return


HorizonPort_Kid_Fire::
# 117 "data/maps/HorizonPort/scripts.pory"
	lock
# 118 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 119 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 0, HorizonPort_Kid_Fire_3
HorizonPort_Kid_Fire_2:
# 129 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Fire_1:
# 120 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_0, MSGBOX_YESNO
# 121 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Fire_6
# 127 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Fire_3:
# 119 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_ge HorizonPort_Kid_Fire_1
	goto HorizonPort_Kid_Fire_2

HorizonPort_Kid_Fire_6:
# 122 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_FIRE, HorizonPort_Kid_Fire_Text_1, HorizonPort_Kid_Fire_Text_2
	return


HorizonPort_Kid_Water::
# 134 "data/maps/HorizonPort/scripts.pory"
	lock
# 135 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 136 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 0, HorizonPort_Kid_Water_3
HorizonPort_Kid_Water_2:
# 145 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Water_1:
# 137 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_0, MSGBOX_YESNO
# 138 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Water_6
# 144 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Water_3:
# 136 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_ge HorizonPort_Kid_Water_1
	goto HorizonPort_Kid_Water_2

HorizonPort_Kid_Water_6:
# 139 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_WATER, HorizonPort_Kid_Water_Text_1, HorizonPort_Kid_Water_Text_2
	return


HorizonPort_Kid_Grass::
# 149 "data/maps/HorizonPort/scripts.pory"
	lock
# 150 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 151 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 0, HorizonPort_Kid_Grass_3
HorizonPort_Kid_Grass_2:
# 160 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Grass_1:
# 152 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_0, MSGBOX_YESNO
# 153 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Grass_6
# 159 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Grass_3:
# 151 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_ge HorizonPort_Kid_Grass_1
	goto HorizonPort_Kid_Grass_2

HorizonPort_Kid_Grass_6:
# 154 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_GRASS, HorizonPort_Kid_Grass_Text_1, HorizonPort_Kid_Grass_Text_2
	return


HorizonPort_Father::
# 164 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 1, HorizonPort_Father_4
HorizonPort_Father_2:
# 179 "data/maps/HorizonPort/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_lt HorizonPort_Father_11
# 182 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_4, MSGBOX_NPC
	return

HorizonPort_Father_1:
# 165 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_BEAT_HORIZON_PORT_KIDS, HorizonPort_Father_8
# 176 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_2, MSGBOX_NPC
	return

HorizonPort_Father_3:
# 164 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 1, HorizonPort_Father_1
	goto HorizonPort_Father_2

HorizonPort_Father_4:
# 164 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 1, HorizonPort_Father_3
	goto HorizonPort_Father_2

HorizonPort_Father_8:
# 166 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_0, MSGBOX_NPC
# 172 "data/maps/HorizonPort/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 1
# 173 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_BEAT_HORIZON_PORT_KIDS
# 174 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_1, MSGBOX_NPC
	return

HorizonPort_Father_11:
# 180 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_3, MSGBOX_NPC
	return


HorizonPort_OldMan::
# 188 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan_Text_0, MSGBOX_NPC
	return


HorizonPort_OldMan2::
# 192 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan2_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor::
# 196 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor2::
# 200 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor2_Text_0, MSGBOX_NPC
	return


HorizonPort_Boy::
# 204 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Boy_Text_0, MSGBOX_NPC
	return


HorizonPort_OldWoman::
# 208 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldWoman_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson::
# 212 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson_Text_0, MSGBOX_NPC
# 213 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 214 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 217 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop:
# 218 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POKE_BALL
# 219 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 220 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POTION
# 221 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 222 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

HorizonPort_MarketPerson2::
# 226 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson2_Text_0, MSGBOX_NPC
# 227 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop2
# 228 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 231 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop2:
# 232 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 233 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_AWAKENING
# 234 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 235 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 236 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

HorizonPort_Gambler::
# 265 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_HORIZON_PORT_GAMBLER_SPOKEN, HorizonPort_Gambler_1
# 289 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Gambler_Text_2, MSGBOX_SIGN
	return

HorizonPort_Gambler_1:
# 266 "data/maps/HorizonPort/scripts.pory"
	setobjectxy LOCALID_HORIZONPORT_GAMBLER, 24, 25
# 267 "data/maps/HorizonPort/scripts.pory"
	lock
# 268 "data/maps/HorizonPort/scripts.pory"
	playse SE_WALL_HIT
# 269 "data/maps/HorizonPort/scripts.pory"
	playbgm MUS_TRICK_HOUSE, FALSE
# 270 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_Gambler_Movement_0
# 271 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_GAMBLER, HorizonPort_Gambler_Movement_1
# 272 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 273 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Gambler_Text_0, MSGBOX_DEFAULT
# 280 "data/maps/HorizonPort/scripts.pory"
	giveitem ITEM_FULL_HEAL
# 281 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Gambler_Text_1, MSGBOX_AUTOCLOSE
# 282 "data/maps/HorizonPort/scripts.pory"
	playse SE_WARP_OUT
# 283 "data/maps/HorizonPort/scripts.pory"
	applymovement LOCALID_HORIZONPORT_GAMBLER, HorizonPort_Gambler_Movement_2
# 284 "data/maps/HorizonPort/scripts.pory"
	waitmovement 0
# 285 "data/maps/HorizonPort/scripts.pory"
	fadedefaultbgm
# 286 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_HORIZON_PORT_GAMBLER_SPOKEN
# 287 "data/maps/HorizonPort/scripts.pory"
	releaseall
	return


HorizonPort_Man::
# 294 "data/maps/HorizonPort/scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_lt HorizonPort_Man_1
# 297 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Man_Text_1, MSGBOX_NPC
	return

HorizonPort_Man_1:
# 295 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Man_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson3::
# 302 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson3_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson4::
# 306 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson4_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson5::
# 310 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson5_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson6::
# 315 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson6_Text_0, MSGBOX_NPC
	return


HorizonPort_Mother::
# 319 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Mother_Text_0, MSGBOX_NPC
	return


HorizonPort_Fisherman::
# 323 "data/maps/HorizonPort/scripts.pory"
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

# 270 "data/maps/HorizonPort/scripts.pory"
HorizonPort_Gambler_Movement_0:
# 270 "data/maps/HorizonPort/scripts.pory"
	lock_facing_direction
# 270 "data/maps/HorizonPort/scripts.pory"
	walk_left
# 270 "data/maps/HorizonPort/scripts.pory"
	unlock_facing_direction
	step_end

# 271 "data/maps/HorizonPort/scripts.pory"
HorizonPort_Gambler_Movement_1:
# 271 "data/maps/HorizonPort/scripts.pory"
	set_visible
# 271 "data/maps/HorizonPort/scripts.pory"
	walk_left
	step_end

# 283 "data/maps/HorizonPort/scripts.pory"
HorizonPort_Gambler_Movement_2:
# 283 "data/maps/HorizonPort/scripts.pory"
	face_down
# 283 "data/maps/HorizonPort/scripts.pory"
	disable_anim
# 283 "data/maps/HorizonPort/scripts.pory"
	slide_up
# 283 "data/maps/HorizonPort/scripts.pory"
	slide_up
# 283 "data/maps/HorizonPort/scripts.pory"
	slide_up
# 283 "data/maps/HorizonPort/scripts.pory"
	slide_up
# 283 "data/maps/HorizonPort/scripts.pory"
	slide_up
# 283 "data/maps/HorizonPort/scripts.pory"
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
# 109 "data/maps/HorizonPort/scripts.pory"
	.string "Boats,\nA bouyant masterpiece$"

HorizonPort_Sign_Market_Text_0:
# 113 "data/maps/HorizonPort/scripts.pory"
	.string "Markets are now open!\nWe have wares if you have coin!$"

HorizonPort_Kid_Fire_Text_0:
# 120 "data/maps/HorizonPort/scripts.pory"
	.string "He he he! You look like someone\nwho's up for a battle!$"

HorizonPort_Kid_Fire_Text_1:
# 124 "data/maps/HorizonPort/scripts.pory"
	.string "Yah!\nTake that!$"

HorizonPort_Kid_Fire_Text_2:
# 125 "data/maps/HorizonPort/scripts.pory"
	.string "Wha- no!\nThat's not how it works!$"

HorizonPort_Kid_Fire_Text_3:
# 127 "data/maps/HorizonPort/scripts.pory"
	.string "Chicken!$"

HorizonPort_Kid_Fire_Text_4:
# 129 "data/maps/HorizonPort/scripts.pory"
	.string "I like being at the beach when the sun\n"
	.string "is out!$"

HorizonPort_Kid_Water_Text_0:
# 137 "data/maps/HorizonPort/scripts.pory"
	.string "A challenger!\nDo you wish to do battle?$"

HorizonPort_Kid_Water_Text_1:
# 141 "data/maps/HorizonPort/scripts.pory"
	.string "Being at the beach gives me power!$"

HorizonPort_Kid_Water_Text_2:
# 142 "data/maps/HorizonPort/scripts.pory"
	.string "I got sand in my eye!\nThat didn't count!$"

HorizonPort_Kid_Water_Text_3:
# 144 "data/maps/HorizonPort/scripts.pory"
	.string "Come back later then!$"

HorizonPort_Kid_Water_Text_4:
# 145 "data/maps/HorizonPort/scripts.pory"
	.string "I love playing in the waves until I get\n"
	.string "all wrinkly!$"

HorizonPort_Kid_Grass_Text_0:
# 152 "data/maps/HorizonPort/scripts.pory"
	.string "Huh?\nYou wanna have a battle?$"

HorizonPort_Kid_Grass_Text_1:
# 156 "data/maps/HorizonPort/scripts.pory"
	.string "I hope I win.$"

HorizonPort_Kid_Grass_Text_2:
# 157 "data/maps/HorizonPort/scripts.pory"
	.string "Aw man.$"

HorizonPort_Kid_Grass_Text_3:
# 159 "data/maps/HorizonPort/scripts.pory"
	.string "All good.$"

HorizonPort_Kid_Grass_Text_4:
# 160 "data/maps/HorizonPort/scripts.pory"
	.string "I just wanna play my game, I'm hoping it\n"
	.string "doesn't get sand in it.$"

HorizonPort_Father_Text_0:
# 167 "data/maps/HorizonPort/scripts.pory"
	.string "I saw you battling with the little ones,\nI appreciate you playing with them.\p"
	.string "It gave me some time to relax for once,\nit's getting harder these days.\p"
	.string "And who knows when another one might\nbe on the way...\p"
	.string "Oh right,\nI have something for you as thanks.$"

HorizonPort_Father_Text_1:
# 174 "data/maps/HorizonPort/scripts.pory"
	.string "I have an abundance of these\nlaying around...$"

HorizonPort_Father_Text_2:
# 176 "data/maps/HorizonPort/scripts.pory"
	.string "Thanks for keeping the kids company.$"

HorizonPort_Father_Text_3:
# 180 "data/maps/HorizonPort/scripts.pory"
	.string "I'm hoping one of the new trainers would\n"
	.string "play with my kids.$"

HorizonPort_Father_Text_4:
# 182 "data/maps/HorizonPort/scripts.pory"
	.string "Say, you're a new trainer right?\pCould you battle with my kids so I\ncan get some peace and quiet?$"

HorizonPort_OldMan_Text_0:
# 188 "data/maps/HorizonPort/scripts.pory"
	.string "This lighthouse was put in to make it\n"
	.string "safer for people to come to the island.$"

HorizonPort_OldMan2_Text_0:
# 192 "data/maps/HorizonPort/scripts.pory"
	.string "I sometimes come here and gaze out at\n"
	.string "the sea, thinking about what could have\l"
	.string "been.$"

HorizonPort_Sailor_Text_0:
# 196 "data/maps/HorizonPort/scripts.pory"
	.string "We get a lot of travellers coming and\n"
	.string "going on boats 'round these parts.$"

HorizonPort_Sailor2_Text_0:
# 200 "data/maps/HorizonPort/scripts.pory"
	.string "Boats are pretty important for this\n"
	.string "city, so there are displays all over.$"

HorizonPort_Boy_Text_0:
# 204 "data/maps/HorizonPort/scripts.pory"
	.string "The salt spray from the ocean makes my\n"
	.string "eyes crusty!$"

HorizonPort_OldWoman_Text_0:
# 208 "data/maps/HorizonPort/scripts.pory"
	.string "Huh? What do you want? Why don't you\n"
	.string "get back on your boat and go home!$"

HorizonPort_MarketPerson_Text_0:
# 212 "data/maps/HorizonPort/scripts.pory"
	.string "Items an aspiring trainer like you might\n"
	.string "need!$"

HorizonPort_MarketPerson2_Text_0:
# 226 "data/maps/HorizonPort/scripts.pory"
	.string "Got problems? I've got solutions!$"

HorizonPort_Gambler_Text_0:
# 274 "data/maps/HorizonPort/scripts.pory"
	.string "Hello Hello!\p"
	.string "I bet you weren't expecting to see a\ndashing man such as myself back here!\p"
	.string "I like to hide around and give gifts to\nanyone who can find me!\p"
	.string "Since you've just started out on your\nadventure, how about I give you a\lnice and simple gift!\p"
	.string "Next time, we can even play a little\ngame for it!$"

HorizonPort_Gambler_Text_1:
# 281 "data/maps/HorizonPort/scripts.pory"
	.string "Well then, I shall hide once more and\nwait for you with bated breath!$"

HorizonPort_Gambler_Text_2:
# 289 "data/maps/HorizonPort/scripts.pory"
	.string "He's gone...$"

HorizonPort_Man_Text_0:
# 295 "data/maps/HorizonPort/scripts.pory"
	.string "The Trainer Card is a neat bit of gear\ngiven by the adventure initiative.\pDid you know it tracks your current\nLevel Cap?$"

HorizonPort_Man_Text_1:
# 297 "data/maps/HorizonPort/scripts.pory"
	.string "The Trainer Card is a neat bit of gear\ngiven by the adventure initiative.$"

HorizonPort_MarketPerson3_Text_0:
# 302 "data/maps/HorizonPort/scripts.pory"
	.string "Welcome!\nAre you interested in some...\pOh, you're a trainer?\nI don't have any items for trainers.$"

HorizonPort_MarketPerson4_Text_0:
# 306 "data/maps/HorizonPort/scripts.pory"
	.string "There's always something of interest to\n"
	.string "be found at markets like these.$"

HorizonPort_MarketPerson5_Text_0:
# 310 "data/maps/HorizonPort/scripts.pory"
	.string "I'm just... huff... taking a break... hoo...$"

HorizonPort_MarketPerson6_Text_0:
# 315 "data/maps/HorizonPort/scripts.pory"
	.string "Come back when you're a little more\n"
	.string "cool.$"

HorizonPort_Mother_Text_0:
# 319 "data/maps/HorizonPort/scripts.pory"
	.string "After three childred my husband has\nstarted having reservations...\pbut I can be very convincing.$"

HorizonPort_Fisherman_Text_0:
# 323 "data/maps/HorizonPort/scripts.pory"
	.string "Imagine all the fishing that could be\n"
	.string "done in a boat like that...$"
