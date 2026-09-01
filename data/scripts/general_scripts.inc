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
	msgbox EventScript_ClosedShrubDoor_Text_0, MSGBOX_SIGN
	return


Generic_POKEMART::
# 174 "data/scripts/general_scripts.pory"
	lock
# 175 "data/scripts/general_scripts.pory"
	faceplayer
# 176 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 177 "data/scripts/general_scripts.pory"
	waitmessage
# 178 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 179 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 180 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 184 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 188 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 192 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 196 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 197 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 198 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 199 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 200 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 202 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 204 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 205 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 181 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 185 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 189 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 193 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 208 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 209 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 214 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 215 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 218 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 219 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 227 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 228 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 231 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 232 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 238 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 239 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 240 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 247 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 248 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 251 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 252 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 253 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
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
	.2byte ITEM_MAX_REVIVE
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 272 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 273 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 276 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 292 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 293 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 294 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 299 "data/scripts/general_scripts.pory"
	lock
# 300 "data/scripts/general_scripts.pory"
	faceplayer
# 301 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 302 "data/scripts/general_scripts.pory"
	waitmessage
# 303 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 304 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 305 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 306 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 307 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 311 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 312 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 313 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 314 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 315 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 319 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 321 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 324 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 325 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 308 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 316 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 328 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 329 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 330 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 335 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 336 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 339 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 340 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 341 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 366 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 367 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 370 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 371 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 389 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 390 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 391 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 392 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 393 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 394 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 395 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 396 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 397 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 398 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 399 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 404 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_AUTOCLOSE
	return


RestArea_Indoor_BedHeal::
# 408 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 409 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 413 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 410 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_AUTOCLOSE
# 411 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 419 "data/scripts/general_scripts.pory"
	lockall
# 423 "data/scripts/general_scripts.pory"
	random 10
# 424 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 435 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 438 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 448 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 451 "data/scripts/general_scripts.pory"
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
# 440 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 442 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 443 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 438 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 435 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 427 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 428 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 429 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 430 "data/scripts/general_scripts.pory"
	waitmessage
# 431 "data/scripts/general_scripts.pory"
	waitfanfare
# 432 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 455 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 460 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 461 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 462 "data/scripts/general_scripts.pory"
	waitmovement 0
# 463 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 464 "data/scripts/general_scripts.pory"
	waitmessage
# 465 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 466 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 470 "data/scripts/general_scripts.pory"
	random 100
# 471 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 476 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 481 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 486 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 491 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 472 "data/scripts/general_scripts.pory"
	random 10
# 473 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 474 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 475 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 477 "data/scripts/general_scripts.pory"
	random 10
# 478 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 479 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 480 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 482 "data/scripts/general_scripts.pory"
	random 10
# 483 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 484 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 485 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 487 "data/scripts/general_scripts.pory"
	random 4
# 488 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 489 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 490 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 492 "data/scripts/general_scripts.pory"
	random 4
# 493 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 494 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 495 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 486 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 481 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 476 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 501 "data/scripts/general_scripts.pory"
	random 10
# 502 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 503 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 504 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 505 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 506 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 507 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 508 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 509 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 510 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 511 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 512 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 503 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 504 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 505 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 506 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 507 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 508 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 509 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 510 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 511 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 518 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 519 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 520 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 521 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 522 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 525 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 528 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 531 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 536 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 537 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 523 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 526 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 529 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 532 "data/scripts/general_scripts.pory"
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

Generic_GYM_LEVEL_GUIDE_Text_0:
# 57 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

EventScript_SpecialWildEncounter_Text_0:
# 103 "data/scripts/general_scripts.pory"
	.string "It looks like there might be something\nburied here...$"

EventScript_ClosedShrubDoor_Text_0:
# 168 "data/scripts/general_scripts.pory"
	.string "It's a rather large shrub.$"

Generic_POKEMART_Text_0:
# 176 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 204 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 301 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 404 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 408 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 410 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 429 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 455 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 463 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
