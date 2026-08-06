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
	setvar VAR_INCREASE_EXP_GAIN, 50
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
# 38 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 41 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 42 "data/scripts/general_scripts.pory"
	case 0, Generic_UPDATE_LEVELCAP_3
# 43 "data/scripts/general_scripts.pory"
	case 1, Generic_UPDATE_LEVELCAP_4
# 44 "data/scripts/general_scripts.pory"
	case 2, Generic_UPDATE_LEVELCAP_5
# 45 "data/scripts/general_scripts.pory"
	case 3, Generic_UPDATE_LEVELCAP_6
# 46 "data/scripts/general_scripts.pory"
	case 4, Generic_UPDATE_LEVELCAP_7
# 47 "data/scripts/general_scripts.pory"
	case 5, Generic_UPDATE_LEVELCAP_8
# 48 "data/scripts/general_scripts.pory"
	case 6, Generic_UPDATE_LEVELCAP_9
# 49 "data/scripts/general_scripts.pory"
	case 7, Generic_UPDATE_LEVELCAP_10
# 50 "data/scripts/general_scripts.pory"
	case 8, Generic_UPDATE_LEVELCAP_11
Generic_UPDATE_LEVELCAP_1:
	return

Generic_UPDATE_LEVELCAP_3:
# 42 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_4:
# 43 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 22
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 44 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 30
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_6:
# 45 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_7:
# 46 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_8:
# 47 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_9:
# 48 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_10:
# 49 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_11:
# 50 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1


Generic_GYM_LEVEL_GUIDE::
# 56 "data/scripts/general_scripts.pory"
	lockall
# 57 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 61 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 62 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 63 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 64 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 66 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 58 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 59 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 71 "data/scripts/general_scripts.pory"
	lock
# 73 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 74 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 75 "data/scripts/general_scripts.pory"
	case DIR_NORTH, Generic_POKEMON_INTERACT_3
# 76 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, Generic_POKEMON_INTERACT_4
# 77 "data/scripts/general_scripts.pory"
	case DIR_EAST, Generic_POKEMON_INTERACT_5
# 78 "data/scripts/general_scripts.pory"
	case DIR_WEST, Generic_POKEMON_INTERACT_6
Generic_POKEMON_INTERACT_1:
# 81 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 82 "data/scripts/general_scripts.pory"
	waitse
# 83 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_8
Generic_POKEMON_INTERACT_7:
# 84 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 86 "data/scripts/general_scripts.pory"
	random 6
# 87 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 88 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_12
# 89 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_13
# 90 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_14
# 91 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_15
# 92 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_16
# 93 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_17
Generic_POKEMON_INTERACT_10:
# 95 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 96 "data/scripts/general_scripts.pory"
	waitmoncry
# 97 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_3:
# 75 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_4:
# 76 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_5:
# 77 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 78 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_8:
# 83 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_7

Generic_POKEMON_INTERACT_12:
# 88 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_13:
# 89 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_14:
# 90 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_15:
# 91 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_16:
# 92 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_17:
# 93 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_10


EventScript_SpecialWildEncounter::
# 104 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, EventScript_SpecialWildEncounter_2
# 109 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 111 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_4
# 133 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_2:
# 105 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end

EventScript_SpecialWildEncounter_4:
# 112 "data/scripts/general_scripts.pory"
	waitse
# 113 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 114 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Generic_POKEMON_INTERACT_Movement_1
# 115 "data/scripts/general_scripts.pory"
	waitmovement 0
# 116 "data/scripts/general_scripts.pory"
	waitse
# 117 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 118 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 119 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounter_9
# 120 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_10
# 121 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_11
# 122 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_12
EventScript_SpecialWildEncounter_7:
# 124 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 125 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 126 "data/scripts/general_scripts.pory"
	waitmovement 0
# 127 "data/scripts/general_scripts.pory"
	waitse
# 128 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 129 "data/scripts/general_scripts.pory"
	waitmoncry
# 130 "data/scripts/general_scripts.pory"
	special DoSpecialWildEncounter
# 131 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SPECIAL_ENCOUNTER_MON
	return

EventScript_SpecialWildEncounter_9:
# 119 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_10:
# 120 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_11:
# 121 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_7

EventScript_SpecialWildEncounter_12:
# 122 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_7


Common_EventScript_FindItemSand::
# 139 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemSand_2
# 144 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 145 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 146 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 147 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 148 "data/scripts/general_scripts.pory"
	waitmovement 0
# 149 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 150 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemSand_2:
# 140 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


Common_EventScript_FindItemAsh::
# 154 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Common_EventScript_FindItemAsh_2
# 159 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 160 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 161 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 162 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 163 "data/scripts/general_scripts.pory"
	waitmovement 0
# 164 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 165 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return

Common_EventScript_FindItemAsh_2:
# 155 "data/scripts/general_scripts.pory"
	msgbox EventScript_SpecialWildEncounter_Text_0, MSGBOX_AUTOCLOSE
	end


Generic_POKEMART::
# 171 "data/scripts/general_scripts.pory"
	lock
# 172 "data/scripts/general_scripts.pory"
	faceplayer
# 173 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 174 "data/scripts/general_scripts.pory"
	waitmessage
# 175 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 176 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 177 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 181 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 185 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 189 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 193 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 194 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 195 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 196 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 197 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 199 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 201 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 202 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 178 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 182 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 186 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 190 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 205 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 206 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 207 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 208 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 209 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 215 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 216 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 217 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 218 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 219 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 228 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 229 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 230 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 231 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 232 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 238 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 239 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 240 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 248 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 249 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 250 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 251 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 252 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 253 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 273 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
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
	.2byte ITEM_FULL_HEAL
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 296 "data/scripts/general_scripts.pory"
	lock
# 297 "data/scripts/general_scripts.pory"
	faceplayer
# 298 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 299 "data/scripts/general_scripts.pory"
	waitmessage
# 300 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 301 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 302 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 303 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 304 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 308 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 309 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 310 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 311 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 312 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 316 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 318 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 321 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 322 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 305 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 313 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 325 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 326 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 327 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 328 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 329 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 330 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 336 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 337 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 338 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 339 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 340 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 341 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 367 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 368 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 369 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 370 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 371 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 389 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 390 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 391 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 392 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 393 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 394 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 395 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 396 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 401 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_DEFAULT
	return


RestArea_Indoor_BedHeal::
# 405 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 406 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 410 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 407 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_DEFAULT
# 408 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 416 "data/scripts/general_scripts.pory"
	lockall
# 420 "data/scripts/general_scripts.pory"
	random 10
# 421 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 432 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 435 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 445 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 448 "data/scripts/general_scripts.pory"
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
# 437 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 439 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 440 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 435 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 432 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 424 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 425 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 426 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 427 "data/scripts/general_scripts.pory"
	waitmessage
# 428 "data/scripts/general_scripts.pory"
	waitfanfare
# 429 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 452 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 457 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 458 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 459 "data/scripts/general_scripts.pory"
	waitmovement 0
# 460 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 461 "data/scripts/general_scripts.pory"
	waitmessage
# 462 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 463 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 467 "data/scripts/general_scripts.pory"
	random 100
# 468 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 473 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 478 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 483 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 488 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 469 "data/scripts/general_scripts.pory"
	random 10
# 470 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 471 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 472 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 474 "data/scripts/general_scripts.pory"
	random 10
# 475 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 476 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 477 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 479 "data/scripts/general_scripts.pory"
	random 10
# 480 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 481 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 482 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 484 "data/scripts/general_scripts.pory"
	random 4
# 485 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 486 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 487 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 489 "data/scripts/general_scripts.pory"
	random 4
# 490 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 491 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 492 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 483 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 478 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 473 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 498 "data/scripts/general_scripts.pory"
	random 10
# 499 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 500 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 501 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 502 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 503 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 504 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 505 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 506 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 507 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 508 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 509 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 500 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 501 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 502 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 503 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 504 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 505 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 506 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 507 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 508 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 515 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 516 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 517 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 518 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 519 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 522 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 525 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 528 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 533 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 534 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 520 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 523 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 526 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 529 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 88 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 88 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 91 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 91 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 93 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 93 "data/scripts/general_scripts.pory"
	emote_double_exclamation_mark
	step_end

# 119 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_0:
# 119 "data/scripts/general_scripts.pory"
	set_visible
# 119 "data/scripts/general_scripts.pory"
	jump_in_place_down
	step_end

# 120 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_1:
# 120 "data/scripts/general_scripts.pory"
	set_visible
# 120 "data/scripts/general_scripts.pory"
	jump_in_place_up
	step_end

# 121 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_2:
# 121 "data/scripts/general_scripts.pory"
	set_visible
# 121 "data/scripts/general_scripts.pory"
	jump_in_place_left
	step_end

# 122 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_3:
# 122 "data/scripts/general_scripts.pory"
	set_visible
# 122 "data/scripts/general_scripts.pory"
	jump_in_place_right
	step_end

# 147 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 147 "data/scripts/general_scripts.pory"
	set_visible
# 147 "data/scripts/general_scripts.pory"
	jump_in_place_down
# 147 "data/scripts/general_scripts.pory"
	delay_8
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 59 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

EventScript_SpecialWildEncounter_Text_0:
# 105 "data/scripts/general_scripts.pory"
	.string "It looks like there might be something\nburied here...$"

Generic_POKEMART_Text_0:
# 173 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 201 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 298 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 401 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 405 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 407 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 426 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 452 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 460 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
