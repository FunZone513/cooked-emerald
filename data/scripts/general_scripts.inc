Generic_DefaultSettings::
# 3 "data/scripts/general_scripts.pory"
	setflag FLAG_SHARED_EXP
# 4 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 7 "data/scripts/general_scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 20
# 10 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 12 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_GetBadgeCount::
# 18 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 19 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 20 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 21 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 22 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 23 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 24 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 25 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 26 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_23
Generic_GetBadgeCount_22:
	return

Generic_GetBadgeCount_2:
# 19 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 20 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 21 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 22 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 23 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 24 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 25 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_23:
# 26 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_22


Generic_UPDATE_LEVELCAP::
# 33 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 5
# 36 "data/scripts/general_scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_ge Generic_UPDATE_LEVELCAP_2
Generic_UPDATE_LEVELCAP_1:
# 41 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_UPDATE_LEVELCAP_5
Generic_UPDATE_LEVELCAP_4:
# 46 "data/scripts/general_scripts.pory"
	compare VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
	goto_if_ge Generic_UPDATE_LEVELCAP_8
Generic_UPDATE_LEVELCAP_7:
	return

Generic_UPDATE_LEVELCAP_2:
# 37 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 42 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
	goto Generic_UPDATE_LEVELCAP_4

Generic_UPDATE_LEVELCAP_8:
# 47 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_7


Generic_GYM_LEVEL_GUIDE::
# 54 "data/scripts/general_scripts.pory"
	lockall
# 55 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 59 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 60 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 61 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 62 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 64 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 56 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 57 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 69 "data/scripts/general_scripts.pory"
	lock
# 71 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 72 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 73 "data/scripts/general_scripts.pory"
	case DIR_NORTH, Generic_POKEMON_INTERACT_3
# 74 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, Generic_POKEMON_INTERACT_4
# 75 "data/scripts/general_scripts.pory"
	case DIR_EAST, Generic_POKEMON_INTERACT_5
# 76 "data/scripts/general_scripts.pory"
	case DIR_WEST, Generic_POKEMON_INTERACT_6
Generic_POKEMON_INTERACT_1:
# 79 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 80 "data/scripts/general_scripts.pory"
	waitse
# 81 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_8
Generic_POKEMON_INTERACT_7:
# 82 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 84 "data/scripts/general_scripts.pory"
	random 6
# 85 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 86 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_12
# 87 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_13
# 88 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_14
# 89 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_15
# 90 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_16
# 91 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_17
Generic_POKEMON_INTERACT_10:
# 93 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 94 "data/scripts/general_scripts.pory"
	waitmoncry
# 95 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_3:
# 73 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_4:
# 74 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_5:
# 75 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 76 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_8:
# 81 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_7

Generic_POKEMON_INTERACT_12:
# 86 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_13:
# 87 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_14:
# 88 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_15:
# 89 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_16:
# 90 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_17:
# 91 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_10


EventScript_SpecialWildEncounter::
# 102 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, EventScript_SpecialWildEncounter_2
# 107 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 109 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_4
# 131 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_2:
# 103 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end

EventScript_SpecialWildEncounter_4:
# 110 "data/scripts/general_scripts.pory"
	waitse
# 111 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 112 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Generic_POKEMON_INTERACT_Movement_1
# 113 "data/scripts/general_scripts.pory"
	waitmovement 0
# 114 "data/scripts/general_scripts.pory"
	waitse
# 115 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 116 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 117 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounter_9
# 118 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_10
# 119 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_11
# 120 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_12
EventScript_SpecialWildEncounter_7:
# 122 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 123 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 124 "data/scripts/general_scripts.pory"
	waitmovement 0
# 125 "data/scripts/general_scripts.pory"
	waitse
# 126 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 127 "data/scripts/general_scripts.pory"
	waitmoncry
# 128 "data/scripts/general_scripts.pory"
	special DoSpecialWildEncounter
# 129 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SPECIAL_ENCOUNTER_MON
	return

EventScript_SpecialWildEncounter_9:
# 117 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_10:
# 118 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_11:
# 119 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_12:
# 120 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_7


EventScript_SpecialWildEncounterShrub::
# 136 "data/scripts/general_scripts.pory"
	randompercentage 25
# 137 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_SpecialWildEncounterShrub_1
# 199 "data/scripts/general_scripts.pory"
	goto EventScript_SpecialWildEncounter
	return

EventScript_SpecialWildEncounterShrub_1:
# 138 "data/scripts/general_scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 139 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 140 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 141 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounterShrub_6
# 142 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounterShrub_7
# 143 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounterShrub_8
# 144 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounterShrub_9
EventScript_SpecialWildEncounterShrub_4:
# 146 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_SecretBaseShrub_Ground, FALSE
# 147 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 149 "data/scripts/general_scripts.pory"
	random 20
# 151 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ge EventScript_SpecialWildEncounterShrub_21
EventScript_SpecialWildEncounterShrub_19:
# 159 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 10
	goto_if_ge EventScript_SpecialWildEncounterShrub_18
EventScript_SpecialWildEncounterShrub_16:
# 170 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 16
	goto_if_ge EventScript_SpecialWildEncounterShrub_15
EventScript_SpecialWildEncounterShrub_14:
# 180 "data/scripts/general_scripts.pory"
	randomelement ITEM_RARE_CANDY
EventScript_SpecialWildEncounterShrub_10:
	checkitemspace VAR_RESULT
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne EventScript_SpecialWildEncounterShrub_24
	return

EventScript_SpecialWildEncounterShrub_6:
# 141 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_2, 1
	goto EventScript_SpecialWildEncounterShrub_4

EventScript_SpecialWildEncounterShrub_7:
# 142 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_2, 1
	goto EventScript_SpecialWildEncounterShrub_4

EventScript_SpecialWildEncounterShrub_8:
# 143 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 1
	goto EventScript_SpecialWildEncounterShrub_4

EventScript_SpecialWildEncounterShrub_9:
# 144 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_1, 1
	goto EventScript_SpecialWildEncounterShrub_4

EventScript_SpecialWildEncounterShrub_11:
# 152 "data/scripts/general_scripts.pory"
	randomelement ITEM_TINY_MUSHROOM, ITEM_TINY_MUSHROOM, ITEM_BIG_MUSHROOM
	goto EventScript_SpecialWildEncounterShrub_10

EventScript_SpecialWildEncounterShrub_12:
# 160 "data/scripts/general_scripts.pory"
	randomelement ITEM_ORAN_BERRY, ITEM_PECHA_BERRY, ITEM_RAWST_BERRY, ITEM_CHERI_BERRY, ITEM_LEPPA_BERRY, ITEM_CHESTO_BERRY
	goto EventScript_SpecialWildEncounterShrub_10

EventScript_SpecialWildEncounterShrub_13:
# 171 "data/scripts/general_scripts.pory"
	randomelement ITEM_POKE_BALL, ITEM_POKE_BALL, ITEM_GREAT_BALL, ITEM_NET_BALL
	goto EventScript_SpecialWildEncounterShrub_10

EventScript_SpecialWildEncounterShrub_15:
# 170 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 19
	goto_if_lt EventScript_SpecialWildEncounterShrub_13
	goto EventScript_SpecialWildEncounterShrub_14

EventScript_SpecialWildEncounterShrub_18:
# 159 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 16
	goto_if_lt EventScript_SpecialWildEncounterShrub_12
	goto EventScript_SpecialWildEncounterShrub_16

EventScript_SpecialWildEncounterShrub_21:
# 151 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 10
	goto_if_lt EventScript_SpecialWildEncounterShrub_11
	goto EventScript_SpecialWildEncounterShrub_19

EventScript_SpecialWildEncounterShrub_24:
# 186 "data/scripts/general_scripts.pory"
	additem VAR_RESULT
# 187 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 188 "data/scripts/general_scripts.pory"
	message EventScript_SpecialWildEncounterShrub_Text_0
# 189 "data/scripts/general_scripts.pory"
	delay 10
# 190 "data/scripts/general_scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 191 "data/scripts/general_scripts.pory"
	showitemdescription
# 192 "data/scripts/general_scripts.pory"
	waitmessage
# 193 "data/scripts/general_scripts.pory"
	waitfanfare
# 194 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 195 "data/scripts/general_scripts.pory"
	hideitemdescription
# 196 "data/scripts/general_scripts.pory"
	releaseall
	return


Common_EventScript_FindItemSand::
# 204 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemSand_2
# 209 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 210 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 211 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 212 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 213 "data/scripts/general_scripts.pory"
	waitmovement 0
# 214 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 215 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemSand_2:
# 205 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


Common_EventScript_FindItemAsh::
# 219 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemAsh_2
# 224 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 225 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 226 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 227 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 228 "data/scripts/general_scripts.pory"
	waitmovement 0
# 229 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 230 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemAsh_2:
# 220 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


EventScript_ClosedShrubDoor::
# 235 "data/scripts/general_scripts.pory"
	msgbox EventScript_ClosedShrubDoor_Text_0, MSGBOX_DEFAULT
# 236 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_CAN_OPEN_SHRUB, EventScript_ClosedShrubDoor_2
EventScript_ClosedShrubDoor_1:
# 253 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_ClosedShrubDoor_2:
# 237 "data/scripts/general_scripts.pory"
	msgbox EventScript_ClosedShrubDoor_Text_1, MSGBOX_YESNO
# 238 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_ClosedShrubDoor_4
	goto EventScript_ClosedShrubDoor_1

EventScript_ClosedShrubDoor_4:
# 239 "data/scripts/general_scripts.pory"
	closemessage
# 240 "data/scripts/general_scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 241 "data/scripts/general_scripts.pory"
	waitse
# 242 "data/scripts/general_scripts.pory"
	playse SE_BREAKABLE_DOOR
# 243 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, EventScript_ClosedShrubDoor_Movement_0
# 244 "data/scripts/general_scripts.pory"
	waitmovement
# 245 "data/scripts/general_scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 246 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_2, 1
# 247 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fortree_SecretBase_ShrubOpen, FALSE
# 248 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 249 "data/scripts/general_scripts.pory"
	waitse
# 250 "data/scripts/general_scripts.pory"
	msgbox EventScript_ClosedShrubDoor_Text_2, MSGBOX_AUTOCLOSE
	goto EventScript_ClosedShrubDoor_1


EventScript_BigShrub::
# 257 "data/scripts/general_scripts.pory"
	msgbox EventScript_BigShrub_Text_0, MSGBOX_SIGN
	return


Generic_POKEMART::
# 263 "data/scripts/general_scripts.pory"
	lock
# 264 "data/scripts/general_scripts.pory"
	faceplayer
# 265 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 266 "data/scripts/general_scripts.pory"
	waitmessage
# 267 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 268 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 269 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 273 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 277 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 281 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 285 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 286 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 287 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 288 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 289 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 291 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 293 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 294 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 270 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 274 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 278 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 282 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 297 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 298 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 299 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 300 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 301 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 302 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 303 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 304 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 305 "data/scripts/general_scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 308 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 309 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 310 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 311 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 312 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 313 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 314 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 315 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 316 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 317 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 318 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 319 "data/scripts/general_scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 322 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 323 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 324 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 325 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 326 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 327 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 328 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 329 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 330 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 335 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 336 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 337 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 338 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 339 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 340 "data/scripts/general_scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 343 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 366 "data/scripts/general_scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 369 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 370 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 371 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 393 "data/scripts/general_scripts.pory"
	lock
# 394 "data/scripts/general_scripts.pory"
	faceplayer
# 395 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 396 "data/scripts/general_scripts.pory"
	waitmessage
# 397 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 398 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 399 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 400 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 401 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 405 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 406 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 407 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 408 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 409 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 413 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 415 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 418 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 419 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 402 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 410 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 422 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 423 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 424 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 425 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 426 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 427 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 428 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 429 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 430 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 433 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 434 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 435 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 436 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 437 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 438 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 439 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 440 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 441 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 442 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 443 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 444 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 445 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 446 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 447 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 448 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 449 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 450 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 451 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 452 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 453 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 454 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 455 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 456 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 457 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 458 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 459 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 460 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 461 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 464 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 465 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 466 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 467 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 468 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 469 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 470 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 471 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 472 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 473 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 474 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 475 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 476 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 477 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 478 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 479 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 480 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 481 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 482 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 483 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 484 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 485 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 486 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 487 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 488 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 489 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 490 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 491 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 492 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 493 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 498 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_AUTOCLOSE
	return


RestArea_Indoor_BedHeal::
# 502 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 503 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 507 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 504 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_AUTOCLOSE
# 505 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


# 86 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 86 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 89 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 89 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 91 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 91 "data/scripts/general_scripts.pory"
	emote_double_exclamation_mark
	step_end

# 117 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_0:
# 117 "data/scripts/general_scripts.pory"
	set_visible
# 117 "data/scripts/general_scripts.pory"
	jump_in_place_down
	step_end

# 118 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_1:
# 118 "data/scripts/general_scripts.pory"
	set_visible
# 118 "data/scripts/general_scripts.pory"
	jump_in_place_up
	step_end

# 119 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_2:
# 119 "data/scripts/general_scripts.pory"
	set_visible
# 119 "data/scripts/general_scripts.pory"
	jump_in_place_left
	step_end

# 120 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_3:
# 120 "data/scripts/general_scripts.pory"
	set_visible
# 120 "data/scripts/general_scripts.pory"
	jump_in_place_right
	step_end

# 212 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 212 "data/scripts/general_scripts.pory"
	set_visible
# 212 "data/scripts/general_scripts.pory"
	jump_in_place_down
# 212 "data/scripts/general_scripts.pory"
	delay_8
	step_end

# 243 "data/scripts/general_scripts.pory"
EventScript_ClosedShrubDoor_Movement_0:
# 243 "data/scripts/general_scripts.pory"
	delay_16
	step_end

Generic_GYM_LEVEL_GUIDE_Text_0:
# 57 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

EventScript_SpecialWildEncounter_Text_0:
# 103 "data/scripts/general_scripts.pory"
	.string "It looks like there might be something\nburied here...$"

EventScript_SpecialWildEncounterShrub_Text_0:
# 188 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

EventScript_ClosedShrubDoor_Text_0:
# 235 "data/scripts/general_scripts.pory"
	.string "It's a large shrub.\nIt looks big enough to fit inside.$"

EventScript_ClosedShrubDoor_Text_1:
# 237 "data/scripts/general_scripts.pory"
	.string "Do you want to pry it open?$"

EventScript_ClosedShrubDoor_Text_2:
# 250 "data/scripts/general_scripts.pory"
	.string "The shrub was opened!$"

EventScript_BigShrub_Text_0:
# 257 "data/scripts/general_scripts.pory"
	.string "It's a large shrub.$"

Generic_POKEMART_Text_0:
# 265 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 293 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 395 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 498 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 502 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 504 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"
