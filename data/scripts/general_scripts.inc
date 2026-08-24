Generic_InfoNPC::
# 3 "data/scripts/general_scripts.pory"
	msgbox Generic_InfoNPC_Text_0, MSGBOX_NPC
	return


Generic_DefaultSettings::
# 10 "data/scripts/general_scripts.pory"
	setflag FLAG_SHARED_EXP
# 11 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 14 "data/scripts/general_scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 20
# 17 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 19 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_GetBadgeCount::
# 25 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 26 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 27 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 28 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 29 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 30 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 31 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 32 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 33 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_23
Generic_GetBadgeCount_22:
	return

Generic_GetBadgeCount_2:
# 26 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 27 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 28 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 29 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 30 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 31 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 32 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_23:
# 33 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_22


Generic_UPDATE_LEVELCAP::
# 40 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 5
# 43 "data/scripts/general_scripts.pory"
	compare VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED
	goto_if_ge Generic_UPDATE_LEVELCAP_2
Generic_UPDATE_LEVELCAP_1:
# 48 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_UPDATE_LEVELCAP_5
Generic_UPDATE_LEVELCAP_4:
# 53 "data/scripts/general_scripts.pory"
	compare VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
	goto_if_ge Generic_UPDATE_LEVELCAP_8
Generic_UPDATE_LEVELCAP_7:
	return

Generic_UPDATE_LEVELCAP_2:
# 44 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 49 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 18
	goto Generic_UPDATE_LEVELCAP_4

Generic_UPDATE_LEVELCAP_8:
# 54 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_7


Generic_GYM_LEVEL_GUIDE::
# 61 "data/scripts/general_scripts.pory"
	lockall
# 62 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 66 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 67 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 68 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 69 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 71 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 63 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 64 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 76 "data/scripts/general_scripts.pory"
	lock
# 78 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 79 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 80 "data/scripts/general_scripts.pory"
	case DIR_NORTH, Generic_POKEMON_INTERACT_3
# 81 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, Generic_POKEMON_INTERACT_4
# 82 "data/scripts/general_scripts.pory"
	case DIR_EAST, Generic_POKEMON_INTERACT_5
# 83 "data/scripts/general_scripts.pory"
	case DIR_WEST, Generic_POKEMON_INTERACT_6
Generic_POKEMON_INTERACT_1:
# 86 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 87 "data/scripts/general_scripts.pory"
	waitse
# 88 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_8
Generic_POKEMON_INTERACT_7:
# 89 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 91 "data/scripts/general_scripts.pory"
	random 6
# 92 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 93 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_12
# 94 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_13
# 95 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_14
# 96 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_15
# 97 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_16
# 98 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_17
Generic_POKEMON_INTERACT_10:
# 100 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 101 "data/scripts/general_scripts.pory"
	waitmoncry
# 102 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_3:
# 80 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_4:
# 81 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_5:
# 82 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 83 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_8:
# 88 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_7

Generic_POKEMON_INTERACT_12:
# 93 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_13:
# 94 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_14:
# 95 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_15:
# 96 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_16:
# 97 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_17:
# 98 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_10


EventScript_SpecialWildEncounter::
# 109 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, EventScript_SpecialWildEncounter_2
# 114 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 116 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_4
# 138 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_2:
# 110 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end

EventScript_SpecialWildEncounter_4:
# 117 "data/scripts/general_scripts.pory"
	waitse
# 118 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 119 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Generic_POKEMON_INTERACT_Movement_1
# 120 "data/scripts/general_scripts.pory"
	waitmovement 0
# 121 "data/scripts/general_scripts.pory"
	waitse
# 122 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 123 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 124 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounter_9
# 125 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_10
# 126 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_11
# 127 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_12
EventScript_SpecialWildEncounter_7:
# 129 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 130 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 131 "data/scripts/general_scripts.pory"
	waitmovement 0
# 132 "data/scripts/general_scripts.pory"
	waitse
# 133 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 134 "data/scripts/general_scripts.pory"
	waitmoncry
# 135 "data/scripts/general_scripts.pory"
	special DoSpecialWildEncounter
# 136 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SPECIAL_ENCOUNTER_MON
	return

EventScript_SpecialWildEncounter_9:
# 124 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_10:
# 125 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_11:
# 126 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_12:
# 127 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_7


Common_EventScript_FindItemSand::
# 144 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemSand_2
# 149 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 150 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 151 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 152 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 153 "data/scripts/general_scripts.pory"
	waitmovement 0
# 154 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 155 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemSand_2:
# 145 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


Common_EventScript_FindItemAsh::
# 159 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemAsh_2
# 164 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 165 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 166 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 167 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 168 "data/scripts/general_scripts.pory"
	waitmovement 0
# 169 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 170 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemAsh_2:
# 160 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


Generic_POKEMART::
# 176 "data/scripts/general_scripts.pory"
	lock
# 177 "data/scripts/general_scripts.pory"
	faceplayer
# 178 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 179 "data/scripts/general_scripts.pory"
	waitmessage
# 180 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 181 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 182 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 186 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 190 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 194 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 198 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 199 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 200 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 201 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 202 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 204 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 206 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 207 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 183 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 187 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 191 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 195 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 210 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 214 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 215 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 216 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 217 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 220 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 227 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 228 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 229 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 230 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 233 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 238 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 239 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 240 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 247 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 248 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 249 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 250 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 253 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
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
	.2byte ITEM_MAX_POTION
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 272 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 273 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 274 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 278 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 292 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 293 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 294 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 295 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 296 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 301 "data/scripts/general_scripts.pory"
	lock
# 302 "data/scripts/general_scripts.pory"
	faceplayer
# 303 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 304 "data/scripts/general_scripts.pory"
	waitmessage
# 305 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 306 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 307 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 308 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 309 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 313 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 314 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 315 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 316 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 317 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 321 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 323 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 326 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 327 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 310 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 318 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 330 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 335 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 336 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 337 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 338 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 341 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 366 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 367 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 368 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 369 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 372 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 389 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 390 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 391 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 392 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 393 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 394 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 395 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 396 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 397 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 398 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 399 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 400 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 401 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 406 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_AUTOCLOSE
	return


RestArea_Indoor_BedHeal::
# 410 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 411 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 415 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 412 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_AUTOCLOSE
# 413 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 421 "data/scripts/general_scripts.pory"
	lockall
# 425 "data/scripts/general_scripts.pory"
	random 10
# 426 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 437 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 440 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 450 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 453 "data/scripts/general_scripts.pory"
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
# 442 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 444 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 445 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 440 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 437 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 429 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 430 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 431 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 432 "data/scripts/general_scripts.pory"
	waitmessage
# 433 "data/scripts/general_scripts.pory"
	waitfanfare
# 434 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 457 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 462 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 463 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 464 "data/scripts/general_scripts.pory"
	waitmovement 0
# 465 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 466 "data/scripts/general_scripts.pory"
	waitmessage
# 467 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 468 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 472 "data/scripts/general_scripts.pory"
	random 100
# 473 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 478 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 483 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 488 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 493 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 474 "data/scripts/general_scripts.pory"
	random 10
# 475 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 476 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 477 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 479 "data/scripts/general_scripts.pory"
	random 10
# 480 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 481 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 482 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 484 "data/scripts/general_scripts.pory"
	random 10
# 485 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 486 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 487 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 489 "data/scripts/general_scripts.pory"
	random 4
# 490 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 491 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 492 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 494 "data/scripts/general_scripts.pory"
	random 4
# 495 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 496 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 497 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 488 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 483 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 478 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 503 "data/scripts/general_scripts.pory"
	random 10
# 504 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 505 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 506 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 507 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 508 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 509 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 510 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 511 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 512 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 513 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 514 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 505 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 506 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 507 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 508 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 509 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 510 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 511 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 512 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 513 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 520 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 521 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 522 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 523 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 524 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 527 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 530 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 533 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 538 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 539 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 525 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 528 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 531 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 534 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 93 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 93 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 96 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 96 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 98 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 98 "data/scripts/general_scripts.pory"
	emote_double_exclamation_mark
	step_end

# 124 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_0:
# 124 "data/scripts/general_scripts.pory"
	set_visible
# 124 "data/scripts/general_scripts.pory"
	jump_in_place_down
	step_end

# 125 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_1:
# 125 "data/scripts/general_scripts.pory"
	set_visible
# 125 "data/scripts/general_scripts.pory"
	jump_in_place_up
	step_end

# 126 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_2:
# 126 "data/scripts/general_scripts.pory"
	set_visible
# 126 "data/scripts/general_scripts.pory"
	jump_in_place_left
	step_end

# 127 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_3:
# 127 "data/scripts/general_scripts.pory"
	set_visible
# 127 "data/scripts/general_scripts.pory"
	jump_in_place_right
	step_end

# 152 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 152 "data/scripts/general_scripts.pory"
	set_visible
# 152 "data/scripts/general_scripts.pory"
	jump_in_place_down
# 152 "data/scripts/general_scripts.pory"
	delay_8
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 64 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

EventScript_SpecialWildEncounter_Text_0:
# 110 "data/scripts/general_scripts.pory"
	.string "It looks like there might be something\nburied here...$"

Generic_POKEMART_Text_0:
# 178 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 206 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 303 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 406 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 410 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 412 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 431 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 457 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 465 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
