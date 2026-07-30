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
# 87 "data/scripts/general_scripts.pory"
	lock
# 88 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
# 89 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 90 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 91 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 92 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 94 "data/scripts/general_scripts.pory"
	random 6
# 95 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 96 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_6
# 97 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_7
# 98 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_8
# 99 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_9
# 100 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_10
# 101 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_11
Generic_POKEMON_INTERACT_4:
# 103 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 104 "data/scripts/general_scripts.pory"
	waitmoncry
# 105 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_2:
# 91 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 96 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 97 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 98 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 99 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 100 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_11:
# 101 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_3
	goto Generic_POKEMON_INTERACT_4


EventScript_SpecialWildEncounter::
# 112 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 114 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_1
# 137 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_1:
# 115 "data/scripts/general_scripts.pory"
	waitse
# 116 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 117 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Generic_POKEMON_INTERACT_Movement_2
# 118 "data/scripts/general_scripts.pory"
	waitmovement 0
# 119 "data/scripts/general_scripts.pory"
	waitse
# 120 "data/scripts/general_scripts.pory"
	addobject LOCALID_SPECIAL_ENCOUNTER_MON
# 121 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 122 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 123 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounter_6
# 124 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_7
# 125 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_8
# 126 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_9
EventScript_SpecialWildEncounter_4:
# 128 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 129 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 130 "data/scripts/general_scripts.pory"
	waitmovement 0
# 131 "data/scripts/general_scripts.pory"
	waitse
# 132 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 133 "data/scripts/general_scripts.pory"
	waitmoncry
# 134 "data/scripts/general_scripts.pory"
	special DoSpecialWildEncounter
# 135 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SPECIAL_ENCOUNTER_MON
	return

EventScript_SpecialWildEncounter_6:
# 123 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_7:
# 124 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_8:
# 125 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_9:
# 126 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_4


Common_EventScript_FindItemSand::
# 143 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 144 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 145 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 146 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 147 "data/scripts/general_scripts.pory"
	waitmovement 0
# 148 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 149 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Common_EventScript_FindItemAsh::
# 153 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 154 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 155 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 156 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 157 "data/scripts/general_scripts.pory"
	waitmovement 0
# 158 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 159 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Generic_POKEMART::
# 165 "data/scripts/general_scripts.pory"
	lock
# 166 "data/scripts/general_scripts.pory"
	faceplayer
# 167 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 168 "data/scripts/general_scripts.pory"
	waitmessage
# 169 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 170 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 171 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 175 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 179 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 183 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 187 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 188 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 189 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 190 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 191 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 193 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 195 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 196 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 172 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 176 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 180 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 184 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 199 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 200 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 201 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 202 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 203 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 204 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 205 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 206 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 209 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 214 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 215 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 216 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 217 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 218 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 219 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 222 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 227 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 228 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 229 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 230 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 231 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 232 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 237 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 238 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 239 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 242 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 247 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 248 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 249 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 250 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 251 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 252 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 253 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 267 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 272 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 273 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 274 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 276 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 290 "data/scripts/general_scripts.pory"
	lock
# 291 "data/scripts/general_scripts.pory"
	faceplayer
# 292 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 293 "data/scripts/general_scripts.pory"
	waitmessage
# 294 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 295 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 296 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 297 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 298 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 302 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 303 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 304 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 305 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 306 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 310 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 312 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 315 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 316 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 299 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 307 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 319 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 320 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 321 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 322 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 323 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 324 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 325 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 326 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 327 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 330 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 335 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 336 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 337 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 338 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 339 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 340 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 341 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 356 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 357 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 358 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 361 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
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
# 390 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 395 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_DEFAULT
	return


RestArea_Indoor_BedHeal::
# 399 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 400 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 404 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 401 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_DEFAULT
# 402 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 410 "data/scripts/general_scripts.pory"
	lockall
# 414 "data/scripts/general_scripts.pory"
	random 10
# 415 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 426 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 429 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 439 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 442 "data/scripts/general_scripts.pory"
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
# 431 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 433 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 434 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 429 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 426 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 418 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 419 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 420 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 421 "data/scripts/general_scripts.pory"
	waitmessage
# 422 "data/scripts/general_scripts.pory"
	waitfanfare
# 423 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 446 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 451 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 452 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 453 "data/scripts/general_scripts.pory"
	waitmovement 0
# 454 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 455 "data/scripts/general_scripts.pory"
	waitmessage
# 456 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 457 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 461 "data/scripts/general_scripts.pory"
	random 100
# 462 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 467 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 472 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 477 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 482 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 463 "data/scripts/general_scripts.pory"
	random 10
# 464 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 465 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 466 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 468 "data/scripts/general_scripts.pory"
	random 10
# 469 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 470 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 471 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 473 "data/scripts/general_scripts.pory"
	random 10
# 474 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 475 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 476 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 478 "data/scripts/general_scripts.pory"
	random 4
# 479 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 480 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 481 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 483 "data/scripts/general_scripts.pory"
	random 4
# 484 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 485 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 486 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 477 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 472 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 467 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 492 "data/scripts/general_scripts.pory"
	random 10
# 493 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 494 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 495 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 496 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 497 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 498 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 499 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 500 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 501 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 502 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 503 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 494 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 495 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 496 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 497 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 498 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 499 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 500 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 501 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 502 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 509 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 510 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 511 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 512 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 513 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 516 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 519 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 522 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 527 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 528 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 514 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 517 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 520 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 523 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 88 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 88 "data/scripts/general_scripts.pory"
	face_player
	step_end

# 96 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 96 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 99 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 99 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_3:
# 101 "data/scripts/general_scripts.pory"
	emote_double_exclamation_mark
	step_end

# 123 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_0:
# 123 "data/scripts/general_scripts.pory"
	set_visible
# 123 "data/scripts/general_scripts.pory"
	jump_in_place_down
	step_end

# 124 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_1:
# 124 "data/scripts/general_scripts.pory"
	set_visible
# 124 "data/scripts/general_scripts.pory"
	jump_in_place_up
	step_end

# 125 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_2:
# 125 "data/scripts/general_scripts.pory"
	set_visible
# 125 "data/scripts/general_scripts.pory"
	jump_in_place_left
	step_end

# 126 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_3:
# 126 "data/scripts/general_scripts.pory"
	set_visible
# 126 "data/scripts/general_scripts.pory"
	jump_in_place_right
	step_end

# 146 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 146 "data/scripts/general_scripts.pory"
	set_visible
# 146 "data/scripts/general_scripts.pory"
	delay_16
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 75 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMART_Text_0:
# 167 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 195 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 292 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 395 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 399 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 401 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 420 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 446 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 454 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
