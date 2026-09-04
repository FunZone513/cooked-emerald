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


Common_EventScript_FindItemSand::
# 137 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemSand_2
# 142 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 143 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 144 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 145 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 146 "data/scripts/general_scripts.pory"
	waitmovement 0
# 147 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 148 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemSand_2:
# 138 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


Common_EventScript_FindItemAsh::
# 152 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemAsh_2
# 157 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 158 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 159 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 160 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 161 "data/scripts/general_scripts.pory"
	waitmovement 0
# 162 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 163 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemAsh_2:
# 153 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


EventScript_ClosedShrubDoor::
# 168 "data/scripts/general_scripts.pory"
	msgbox EventScript_ClosedShrubDoor_Text_0, MSGBOX_DEFAULT
# 169 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_CAN_OPEN_SHRUB, EventScript_ClosedShrubDoor_2
EventScript_ClosedShrubDoor_1:
# 186 "data/scripts/general_scripts.pory"
	releaseall
	return

EventScript_ClosedShrubDoor_2:
# 170 "data/scripts/general_scripts.pory"
	msgbox EventScript_ClosedShrubDoor_Text_1, MSGBOX_YESNO
# 171 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_ClosedShrubDoor_4
	goto EventScript_ClosedShrubDoor_1

EventScript_ClosedShrubDoor_4:
# 172 "data/scripts/general_scripts.pory"
	closemessage
# 173 "data/scripts/general_scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 174 "data/scripts/general_scripts.pory"
	waitse
# 175 "data/scripts/general_scripts.pory"
	playse SE_BREAKABLE_DOOR
# 176 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, EventScript_ClosedShrubDoor_Movement_0
# 177 "data/scripts/general_scripts.pory"
	waitmovement
# 178 "data/scripts/general_scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 179 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_2, 1
# 180 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fortree_SecretBase_ShrubOpen, FALSE
# 181 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 182 "data/scripts/general_scripts.pory"
	waitse
# 183 "data/scripts/general_scripts.pory"
	msgbox EventScript_ClosedShrubDoor_Text_2, MSGBOX_AUTOCLOSE
	goto EventScript_ClosedShrubDoor_1


EventScript_BigShrub::
# 190 "data/scripts/general_scripts.pory"
	msgbox EventScript_BigShrub_Text_0, MSGBOX_SIGN
	return


Generic_POKEMART::
# 196 "data/scripts/general_scripts.pory"
	lock
# 197 "data/scripts/general_scripts.pory"
	faceplayer
# 198 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 199 "data/scripts/general_scripts.pory"
	waitmessage
# 200 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 201 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 202 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 206 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 210 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 214 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 218 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 219 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 220 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 221 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 222 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 224 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 226 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 227 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 203 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 207 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 211 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 215 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 230 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 231 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 232 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 240 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 247 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 248 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 249 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 250 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 253 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 273 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 274 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 276 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 292 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 293 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 294 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 295 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 298 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 299 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 300 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 301 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 302 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 303 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 304 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 305 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 306 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 307 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 308 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 309 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 310 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 311 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 312 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 313 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 314 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 315 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 316 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 321 "data/scripts/general_scripts.pory"
	lock
# 322 "data/scripts/general_scripts.pory"
	faceplayer
# 323 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 324 "data/scripts/general_scripts.pory"
	waitmessage
# 325 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 326 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 327 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 328 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 329 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 333 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 334 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 335 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 336 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 337 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 341 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 343 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 346 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 347 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 330 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 338 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 350 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 361 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 366 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 367 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 368 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 369 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 370 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 371 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 389 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 392 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 393 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 394 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 395 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 396 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 397 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 398 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 399 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 400 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 401 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 402 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 403 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 404 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 405 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 406 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 407 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 408 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 409 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 410 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 411 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 412 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 413 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 414 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 415 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 416 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 417 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 418 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 419 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 420 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 421 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 426 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_AUTOCLOSE
	return


RestArea_Indoor_BedHeal::
# 430 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 431 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 435 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 432 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_AUTOCLOSE
# 433 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 441 "data/scripts/general_scripts.pory"
	lockall
# 445 "data/scripts/general_scripts.pory"
	random 10
# 446 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 457 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 460 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 470 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 473 "data/scripts/general_scripts.pory"
	release
	return

ThicketBrushInteract_2:
	checkitemspace VAR_TEMP_0
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ThicketBrushInteract_13
	goto ThicketBrushInteract_1

ThicketBrushInteract_3:
	goto ThicketBrushInteract_1

ThicketBrushInteract_4:
# 462 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 464 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 465 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 460 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 457 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 449 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 450 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 451 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 452 "data/scripts/general_scripts.pory"
	waitmessage
# 453 "data/scripts/general_scripts.pory"
	waitfanfare
# 454 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 477 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 482 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 483 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 484 "data/scripts/general_scripts.pory"
	waitmovement 0
# 485 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 486 "data/scripts/general_scripts.pory"
	waitmessage
# 487 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 488 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 492 "data/scripts/general_scripts.pory"
	random 100
# 493 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 498 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 503 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 508 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 513 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 494 "data/scripts/general_scripts.pory"
	random 10
# 495 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 496 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 497 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 499 "data/scripts/general_scripts.pory"
	random 10
# 500 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 501 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 502 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 504 "data/scripts/general_scripts.pory"
	random 10
# 505 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 506 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 507 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 509 "data/scripts/general_scripts.pory"
	random 4
# 510 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 511 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 512 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 514 "data/scripts/general_scripts.pory"
	random 4
# 515 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 516 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 517 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 508 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 503 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 498 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 523 "data/scripts/general_scripts.pory"
	random 10
# 524 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 525 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 526 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 527 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 528 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 529 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 530 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 531 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 532 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 533 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 534 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 525 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 526 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 527 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 528 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 529 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 530 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 531 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 532 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 533 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 540 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 541 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 542 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 543 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 544 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 547 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 550 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 553 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 558 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 559 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 545 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 548 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 551 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 554 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


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

# 145 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 145 "data/scripts/general_scripts.pory"
	set_visible
# 145 "data/scripts/general_scripts.pory"
	jump_in_place_down
# 145 "data/scripts/general_scripts.pory"
	delay_8
	step_end

# 176 "data/scripts/general_scripts.pory"
EventScript_ClosedShrubDoor_Movement_0:
# 176 "data/scripts/general_scripts.pory"
	delay_16
	step_end

Generic_GYM_LEVEL_GUIDE_Text_0:
# 57 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

EventScript_SpecialWildEncounter_Text_0:
# 103 "data/scripts/general_scripts.pory"
	.string "It looks like there might be something\nburied here...$"

EventScript_ClosedShrubDoor_Text_0:
# 168 "data/scripts/general_scripts.pory"
	.string "It's a large shrub.\nIt looks big enough to fit inside.$"

EventScript_ClosedShrubDoor_Text_1:
# 170 "data/scripts/general_scripts.pory"
	.string "Do you want to pry it open?$"

EventScript_ClosedShrubDoor_Text_2:
# 183 "data/scripts/general_scripts.pory"
	.string "The shrub was opened!$"

EventScript_BigShrub_Text_0:
# 190 "data/scripts/general_scripts.pory"
	.string "It's a large shrub.$"

Generic_POKEMART_Text_0:
# 198 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 226 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 323 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 426 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 430 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 432 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 451 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 477 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 485 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
