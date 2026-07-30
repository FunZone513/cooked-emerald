Generic_InfoNPC::
# 3 "data/scripts/general_scripts.pory"
	msgbox Generic_InfoNPC_Text_0, MSGBOX_NPC
	return


Generic_DefaultSettings::
# 10 "data/scripts/general_scripts.pory"
	setflag FLAG_SYS_B_DASH
# 11 "data/scripts/general_scripts.pory"
	setflag FLAG_SHARED_EXP
# 12 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 13 "data/scripts/general_scripts.pory"
	call Generic_IncreaseExpGain
# 16 "data/scripts/general_scripts.pory"
	givemon SPECIES_BALTOY, 5
# 17 "data/scripts/general_scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 19 "data/scripts/general_scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 20 "data/scripts/general_scripts.pory"
	special SetUnlockedPokedexFlags
# 26 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 28 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_IncreaseExpGain::
# 33 "data/scripts/general_scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 100
	return


Generic_GetBadgeCount::
# 41 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 42 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 43 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 44 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 45 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 46 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 47 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 48 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 49 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_23
Generic_GetBadgeCount_22:
	return

Generic_GetBadgeCount_2:
# 42 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 43 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 44 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 45 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 46 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 47 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 48 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_23:
# 49 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_22


Generic_UPDATE_LEVELCAP::
# 54 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 57 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 58 "data/scripts/general_scripts.pory"
	case 0, Generic_UPDATE_LEVELCAP_3
# 59 "data/scripts/general_scripts.pory"
	case 1, Generic_UPDATE_LEVELCAP_4
# 60 "data/scripts/general_scripts.pory"
	case 2, Generic_UPDATE_LEVELCAP_5
# 61 "data/scripts/general_scripts.pory"
	case 3, Generic_UPDATE_LEVELCAP_6
# 62 "data/scripts/general_scripts.pory"
	case 4, Generic_UPDATE_LEVELCAP_7
# 63 "data/scripts/general_scripts.pory"
	case 5, Generic_UPDATE_LEVELCAP_8
# 64 "data/scripts/general_scripts.pory"
	case 6, Generic_UPDATE_LEVELCAP_9
# 65 "data/scripts/general_scripts.pory"
	case 7, Generic_UPDATE_LEVELCAP_10
# 66 "data/scripts/general_scripts.pory"
	case 8, Generic_UPDATE_LEVELCAP_11
Generic_UPDATE_LEVELCAP_1:
	return

Generic_UPDATE_LEVELCAP_3:
# 58 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_4:
# 59 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 22
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 60 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 30
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_6:
# 61 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_7:
# 62 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_8:
# 63 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_9:
# 64 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_10:
# 65 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_11:
# 66 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1


Generic_GYM_LEVEL_GUIDE::
# 72 "data/scripts/general_scripts.pory"
	lockall
# 73 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 77 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 78 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 79 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 80 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 82 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 74 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 75 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 88 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 89 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 90 "data/scripts/general_scripts.pory"
	case DIR_NORTH, Generic_POKEMON_INTERACT_3
# 91 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, Generic_POKEMON_INTERACT_4
# 92 "data/scripts/general_scripts.pory"
	case DIR_EAST, Generic_POKEMON_INTERACT_5
# 93 "data/scripts/general_scripts.pory"
	case DIR_WEST, Generic_POKEMON_INTERACT_6
Generic_POKEMON_INTERACT_1:
# 96 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 97 "data/scripts/general_scripts.pory"
	waitse
# 98 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_8
Generic_POKEMON_INTERACT_7:
# 99 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 101 "data/scripts/general_scripts.pory"
	random 6
# 102 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 103 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_12
# 104 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_13
# 105 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_14
# 106 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_15
# 107 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_16
# 108 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_17
Generic_POKEMON_INTERACT_10:
# 110 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 111 "data/scripts/general_scripts.pory"
	waitmoncry
# 112 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_3:
# 90 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_4:
# 91 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_5:
# 92 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 93 "data/scripts/general_scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_8:
# 98 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_7

Generic_POKEMON_INTERACT_12:
# 103 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_13:
# 104 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_14:
# 105 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_15:
# 106 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_16:
# 107 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_10

Generic_POKEMON_INTERACT_17:
# 108 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_10


EventScript_SpecialWildEncounter::
# 119 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 121 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_1
# 144 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_1:
# 122 "data/scripts/general_scripts.pory"
	waitse
# 123 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 124 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Generic_POKEMON_INTERACT_Movement_1
# 125 "data/scripts/general_scripts.pory"
	waitmovement 0
# 126 "data/scripts/general_scripts.pory"
	waitse
# 127 "data/scripts/general_scripts.pory"
	addobject LOCALID_SPECIAL_ENCOUNTER_MON
# 128 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 129 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 130 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounter_6
# 131 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_7
# 132 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_8
# 133 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_9
EventScript_SpecialWildEncounter_4:
# 135 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 136 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 137 "data/scripts/general_scripts.pory"
	waitmovement 0
# 138 "data/scripts/general_scripts.pory"
	waitse
# 139 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 140 "data/scripts/general_scripts.pory"
	waitmoncry
# 141 "data/scripts/general_scripts.pory"
	special DoSpecialWildEncounter
# 142 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SPECIAL_ENCOUNTER_MON
	return

EventScript_SpecialWildEncounter_6:
# 130 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_7:
# 131 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_8:
# 132 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_9:
# 133 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_4


Common_EventScript_FindItemSand::
# 150 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 151 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 152 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 153 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 154 "data/scripts/general_scripts.pory"
	waitmovement 0
# 155 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 156 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Common_EventScript_FindItemAsh::
# 160 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 161 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 162 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 163 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 164 "data/scripts/general_scripts.pory"
	waitmovement 0
# 165 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 166 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Generic_POKEMART::
# 172 "data/scripts/general_scripts.pory"
	lock
# 173 "data/scripts/general_scripts.pory"
	faceplayer
# 174 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 175 "data/scripts/general_scripts.pory"
	waitmessage
# 176 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 177 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 178 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 182 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 186 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 190 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 194 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 195 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 196 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 197 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 198 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 200 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 202 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 203 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 179 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 183 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 187 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 191 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 206 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 207 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 208 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 209 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 216 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 217 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 218 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 219 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 229 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 230 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 231 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 232 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 238 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 239 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 240 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 249 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 250 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 251 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 252 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 253 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 274 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 276 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 292 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 297 "data/scripts/general_scripts.pory"
	lock
# 298 "data/scripts/general_scripts.pory"
	faceplayer
# 299 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 300 "data/scripts/general_scripts.pory"
	waitmessage
# 301 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 302 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 303 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 304 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 305 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 309 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 310 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 311 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 312 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 313 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 317 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 319 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 322 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 323 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 306 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 314 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 326 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 327 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 328 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 329 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 330 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 337 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 338 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 339 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 340 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 341 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 368 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 369 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 370 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 371 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 388 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 389 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 390 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 391 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 392 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 393 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 394 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 395 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 396 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 397 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 402 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_DEFAULT
	return


RestArea_Indoor_BedHeal::
# 406 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 407 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 411 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 408 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_DEFAULT
# 409 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 417 "data/scripts/general_scripts.pory"
	lockall
# 421 "data/scripts/general_scripts.pory"
	random 10
# 422 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 433 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 436 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 446 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 449 "data/scripts/general_scripts.pory"
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
# 438 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 440 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 441 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 436 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 433 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 425 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 426 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 427 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 428 "data/scripts/general_scripts.pory"
	waitmessage
# 429 "data/scripts/general_scripts.pory"
	waitfanfare
# 430 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 453 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 458 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 459 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 460 "data/scripts/general_scripts.pory"
	waitmovement 0
# 461 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 462 "data/scripts/general_scripts.pory"
	waitmessage
# 463 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 464 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 468 "data/scripts/general_scripts.pory"
	random 100
# 469 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 474 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 479 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 484 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 489 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 470 "data/scripts/general_scripts.pory"
	random 10
# 471 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 472 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 473 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 475 "data/scripts/general_scripts.pory"
	random 10
# 476 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 477 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 478 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 480 "data/scripts/general_scripts.pory"
	random 10
# 481 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 482 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 483 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 485 "data/scripts/general_scripts.pory"
	random 4
# 486 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 487 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 488 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 490 "data/scripts/general_scripts.pory"
	random 4
# 491 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 492 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 493 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 484 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 479 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 474 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 499 "data/scripts/general_scripts.pory"
	random 10
# 500 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 501 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 502 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 503 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 504 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 505 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 506 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 507 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 508 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 509 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 510 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 501 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 502 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 503 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 504 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 505 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 506 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 507 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 508 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 509 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 516 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 517 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 518 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 519 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 520 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 523 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 526 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 529 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 534 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 535 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 521 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 524 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 527 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 530 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 103 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 103 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 106 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 106 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 108 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 108 "data/scripts/general_scripts.pory"
	emote_double_exclamation_mark
	step_end

# 130 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_0:
# 130 "data/scripts/general_scripts.pory"
	set_visible
# 130 "data/scripts/general_scripts.pory"
	jump_in_place_down
	step_end

# 131 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_1:
# 131 "data/scripts/general_scripts.pory"
	set_visible
# 131 "data/scripts/general_scripts.pory"
	jump_in_place_up
	step_end

# 132 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_2:
# 132 "data/scripts/general_scripts.pory"
	set_visible
# 132 "data/scripts/general_scripts.pory"
	jump_in_place_left
	step_end

# 133 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_3:
# 133 "data/scripts/general_scripts.pory"
	set_visible
# 133 "data/scripts/general_scripts.pory"
	jump_in_place_right
	step_end

# 153 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 153 "data/scripts/general_scripts.pory"
	set_visible
# 153 "data/scripts/general_scripts.pory"
	delay_16
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 75 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMART_Text_0:
# 174 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 202 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 299 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 402 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 406 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 408 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 427 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 453 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 461 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
