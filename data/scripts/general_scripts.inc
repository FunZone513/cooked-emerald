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
	setvar VAR_INCREASE_EXP_GAIN, 100
# 17 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 27 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_GetBadgeCount::
# 33 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 34 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 35 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 36 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 37 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 38 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 39 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 40 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 41 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_23
Generic_GetBadgeCount_22:
	return

Generic_GetBadgeCount_2:
# 34 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 35 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 36 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 37 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 38 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 39 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 40 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_23:
# 41 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_22


Generic_UPDATE_LEVELCAP::
# 46 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 49 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 50 "data/scripts/general_scripts.pory"
	case 0, Generic_UPDATE_LEVELCAP_3
# 51 "data/scripts/general_scripts.pory"
	case 1, Generic_UPDATE_LEVELCAP_4
# 52 "data/scripts/general_scripts.pory"
	case 2, Generic_UPDATE_LEVELCAP_5
# 53 "data/scripts/general_scripts.pory"
	case 3, Generic_UPDATE_LEVELCAP_6
# 54 "data/scripts/general_scripts.pory"
	case 4, Generic_UPDATE_LEVELCAP_7
# 55 "data/scripts/general_scripts.pory"
	case 5, Generic_UPDATE_LEVELCAP_8
# 56 "data/scripts/general_scripts.pory"
	case 6, Generic_UPDATE_LEVELCAP_9
# 57 "data/scripts/general_scripts.pory"
	case 7, Generic_UPDATE_LEVELCAP_10
# 58 "data/scripts/general_scripts.pory"
	case 8, Generic_UPDATE_LEVELCAP_11
Generic_UPDATE_LEVELCAP_1:
	return

Generic_UPDATE_LEVELCAP_3:
# 50 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_4:
# 51 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 22
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 52 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 30
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_6:
# 53 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_7:
# 54 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_8:
# 55 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_9:
# 56 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_10:
# 57 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_11:
# 58 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1


Generic_GYM_LEVEL_GUIDE::
# 64 "data/scripts/general_scripts.pory"
	lockall
# 65 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 69 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 70 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 71 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 72 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 74 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 66 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 67 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 79 "data/scripts/general_scripts.pory"
	lock
# 81 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 82 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 83 "data/scripts/general_scripts.pory"
	case DIR_NORTH, Generic_POKEMON_INTERACT_3
# 84 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, Generic_POKEMON_INTERACT_4
# 85 "data/scripts/general_scripts.pory"
	case DIR_EAST, Generic_POKEMON_INTERACT_5
# 86 "data/scripts/general_scripts.pory"
	case DIR_WEST, Generic_POKEMON_INTERACT_6
Generic_POKEMON_INTERACT_1:
# 89 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 90 "data/scripts/general_scripts.pory"
	waitse
# 91 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_8
Generic_POKEMON_INTERACT_7:
# 92 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 94 "data/scripts/general_scripts.pory"
	random 6
# 95 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 96 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_12
# 97 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_13
# 98 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_14
# 99 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_15
# 100 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_16
# 101 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_17
Generic_POKEMON_INTERACT_10:
# 103 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 104 "data/scripts/general_scripts.pory"
	waitmoncry
# 105 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_3:
# 83 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_4:
# 84 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_5:
# 85 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 86 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_8:
# 91 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_7

Generic_POKEMON_INTERACT_12:
# 96 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_13:
# 97 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_14:
# 98 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_15:
# 99 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_16:
# 100 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_17:
# 101 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_10


EventScript_SpecialWildEncounter::
# 112 "data/scripts/general_scripts.pory"
	call Generic_CheckCanDigPile
# 114 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 116 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_1
# 138 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_1:
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
	case DIR_NORTH, EventScript_SpecialWildEncounter_6
# 125 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_7
# 126 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_8
# 127 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_9
EventScript_SpecialWildEncounter_4:
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

EventScript_SpecialWildEncounter_6:
# 124 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_7:
# 125 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_8:
# 126 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_9:
# 127 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_4


Common_EventScript_FindItemSand::
# 144 "data/scripts/general_scripts.pory"
	call Generic_CheckCanDigPile
# 145 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 146 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 147 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 148 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 149 "data/scripts/general_scripts.pory"
	waitmovement 0
# 150 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 151 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Common_EventScript_FindItemAsh::
# 155 "data/scripts/general_scripts.pory"
	call Generic_CheckCanDigPile
# 156 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 157 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 158 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 159 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 160 "data/scripts/general_scripts.pory"
	waitmovement 0
# 161 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 162 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Generic_CheckCanDigPile::
# 166 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Generic_CheckCanDigPile_1
	return

Generic_CheckCanDigPile_1:
# 167 "data/scripts/general_scripts.pory"
	msgbox Generic_CheckCanDigPile_Text_0, MSGBOX_AUTOCLOSE
	end


Generic_POKEMART::
# 175 "data/scripts/general_scripts.pory"
	lock
# 176 "data/scripts/general_scripts.pory"
	faceplayer
# 177 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 178 "data/scripts/general_scripts.pory"
	waitmessage
# 179 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 180 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 181 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 185 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 189 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 193 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 197 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 198 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 199 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 200 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 201 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 203 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 205 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 206 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 182 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 186 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 190 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 194 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 209 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 214 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 215 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 216 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 219 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 227 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 228 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 229 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 232 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 238 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 239 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 240 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 247 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 248 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 249 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 252 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 253 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 272 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 273 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 274 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 277 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
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

Generic_POKEMART_BERRY::
# 300 "data/scripts/general_scripts.pory"
	lock
# 301 "data/scripts/general_scripts.pory"
	faceplayer
# 302 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 303 "data/scripts/general_scripts.pory"
	waitmessage
# 304 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 305 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 306 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 307 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 308 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 312 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 313 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 314 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 315 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 316 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 320 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 322 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 325 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 326 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 309 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 317 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 329 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 330 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 335 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 336 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 337 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 340 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 341 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 366 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 367 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 368 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 371 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 389 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 390 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 391 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 392 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 393 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 394 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 395 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 396 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 397 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 398 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 399 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 400 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 405 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_DEFAULT
	return


RestArea_Indoor_BedHeal::
# 409 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 410 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 414 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 411 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_DEFAULT
# 412 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 420 "data/scripts/general_scripts.pory"
	lockall
# 424 "data/scripts/general_scripts.pory"
	random 10
# 425 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 436 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 439 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 449 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 452 "data/scripts/general_scripts.pory"
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
# 441 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 443 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 444 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 439 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 436 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 428 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 429 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 430 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 431 "data/scripts/general_scripts.pory"
	waitmessage
# 432 "data/scripts/general_scripts.pory"
	waitfanfare
# 433 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 456 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 461 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 462 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 463 "data/scripts/general_scripts.pory"
	waitmovement 0
# 464 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 465 "data/scripts/general_scripts.pory"
	waitmessage
# 466 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 467 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 471 "data/scripts/general_scripts.pory"
	random 100
# 472 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 477 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 482 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 487 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 492 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 473 "data/scripts/general_scripts.pory"
	random 10
# 474 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 475 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 476 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 478 "data/scripts/general_scripts.pory"
	random 10
# 479 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 480 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 481 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 483 "data/scripts/general_scripts.pory"
	random 10
# 484 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 485 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 486 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 488 "data/scripts/general_scripts.pory"
	random 4
# 489 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 490 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 491 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 493 "data/scripts/general_scripts.pory"
	random 4
# 494 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 495 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 496 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 487 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 482 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 477 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 502 "data/scripts/general_scripts.pory"
	random 10
# 503 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 504 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 505 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 506 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 507 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 508 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 509 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 510 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 511 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 512 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 513 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 504 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 505 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 506 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 507 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 508 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 509 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 510 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 511 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 512 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 519 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 520 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 521 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 522 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 523 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 526 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 529 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 532 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 537 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 538 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 524 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 527 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 530 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 533 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 96 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 96 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 99 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 99 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 101 "data/scripts/general_scripts.pory"
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

# 148 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 148 "data/scripts/general_scripts.pory"
	set_visible
# 148 "data/scripts/general_scripts.pory"
	jump_in_place_down
# 148 "data/scripts/general_scripts.pory"
	delay_8
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 67 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_CheckCanDigPile_Text_0:
# 167 "data/scripts/general_scripts.pory"
	.string "It looks like there might be something\nburied here...$"

Generic_POKEMART_Text_0:
# 177 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 205 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 302 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 405 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 409 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 411 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 430 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 456 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 464 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
