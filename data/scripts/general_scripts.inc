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
	faceplayer
# 89 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 90 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 91 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 93 "data/scripts/general_scripts.pory"
	random 6
# 94 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 95 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_6
# 96 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_7
# 97 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_8
# 98 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_9
# 99 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_10
# 100 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMON_INTERACT_11
Generic_POKEMON_INTERACT_4:
# 102 "data/scripts/general_scripts.pory"
	waitmovement VAR_LAST_TALKED
# 103 "data/scripts/general_scripts.pory"
	waitmoncry
# 104 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMON_INTERACT_2:
# 90 "data/scripts/general_scripts.pory"
	setseenmon VAR_RESULT
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 95 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 96 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 97 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 98 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 99 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_11:
# 100 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_2
	goto Generic_POKEMON_INTERACT_4


EventScript_SpecialWildEncounter::
# 111 "data/scripts/general_scripts.pory"
	special SetupSpecialWildEncounter
# 113 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, SPECIES_NONE
	goto_if_ne EventScript_SpecialWildEncounter_1
# 136 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
	return

EventScript_SpecialWildEncounter_1:
# 114 "data/scripts/general_scripts.pory"
	waitse
# 115 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 116 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Generic_POKEMON_INTERACT_Movement_1
# 117 "data/scripts/general_scripts.pory"
	waitmovement 0
# 118 "data/scripts/general_scripts.pory"
	waitse
# 119 "data/scripts/general_scripts.pory"
	addobject LOCALID_SPECIAL_ENCOUNTER_MON
# 120 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 121 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_A
# 122 "data/scripts/general_scripts.pory"
	case DIR_NORTH, EventScript_SpecialWildEncounter_6
# 123 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, EventScript_SpecialWildEncounter_7
# 124 "data/scripts/general_scripts.pory"
	case DIR_EAST, EventScript_SpecialWildEncounter_8
# 125 "data/scripts/general_scripts.pory"
	case DIR_WEST, EventScript_SpecialWildEncounter_9
EventScript_SpecialWildEncounter_4:
# 127 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 128 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 129 "data/scripts/general_scripts.pory"
	waitmovement 0
# 130 "data/scripts/general_scripts.pory"
	waitse
# 131 "data/scripts/general_scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_ENCOUNTER
# 132 "data/scripts/general_scripts.pory"
	waitmoncry
# 133 "data/scripts/general_scripts.pory"
	special DoSpecialWildEncounter
# 134 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SPECIAL_ENCOUNTER_MON
	return

EventScript_SpecialWildEncounter_6:
# 122 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_0
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_7:
# 123 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_1
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_8:
# 124 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_2
	goto EventScript_SpecialWildEncounter_4

EventScript_SpecialWildEncounter_9:
# 125 "data/scripts/general_scripts.pory"
	applymovement LOCALID_SPECIAL_ENCOUNTER_MON, EventScript_SpecialWildEncounter_Movement_3
	goto EventScript_SpecialWildEncounter_4


Common_EventScript_FindItemSand::
# 142 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 143 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 144 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 145 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 146 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 147 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Common_EventScript_FindItemAsh::
# 151 "data/scripts/general_scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 152 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_Fallarbor_AshField, FALSE
# 153 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 154 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Common_EventScript_FindItemSand_Movement_0
# 155 "data/scripts/general_scripts.pory"
	callnative GetItemBallIdAndAmountFromTemplate
# 156 "data/scripts/general_scripts.pory"
	finditem VAR_RESULT, VAR_0x8009
	return


Generic_POKEMART::
# 162 "data/scripts/general_scripts.pory"
	lock
# 163 "data/scripts/general_scripts.pory"
	faceplayer
# 164 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 165 "data/scripts/general_scripts.pory"
	waitmessage
# 166 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 167 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 168 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 172 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_4
# 176 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_5
# 180 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_6
# 184 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_7
# 185 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_7
# 186 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_7
# 187 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_7
# 188 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 190 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 192 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 193 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 169 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 173 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 177 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 181 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 196 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 197 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 198 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 199 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 200 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 201 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 202 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 203 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 206 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 207 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 208 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 209 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
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
GenericPokeMart_3:
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 227 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 228 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 229 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 230 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 231 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 232 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 233 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 234 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 235 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 236 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 239 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 240 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 241 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 242 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 243 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 244 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 245 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 246 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 247 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 248 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 249 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 250 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 251 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 252 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 253 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 254 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 255 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 256 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 257 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 264 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 272 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 273 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 274 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 276 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 287 "data/scripts/general_scripts.pory"
	lock
# 288 "data/scripts/general_scripts.pory"
	faceplayer
# 289 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 290 "data/scripts/general_scripts.pory"
	waitmessage
# 291 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 292 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 293 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 294 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 295 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 299 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 300 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 301 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 302 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 303 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 307 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 309 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 312 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 313 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 296 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 304 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 316 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 317 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 318 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 319 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 320 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 321 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 322 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 323 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 324 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 327 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 328 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 329 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
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
	.2byte ITEM_LUM_BERRY
# 336 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 337 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 338 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 339 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 340 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 341 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 342 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 343 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 344 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 345 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 346 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 347 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 348 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 349 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 350 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 351 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 352 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 353 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 354 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 355 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 358 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 359 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 360 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 361 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 362 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 363 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 364 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 365 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 366 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 367 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 368 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 369 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 370 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 371 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 372 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 373 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 374 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 375 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 376 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 377 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 378 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 379 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 380 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 381 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 382 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 383 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 384 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 385 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 386 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 387 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

RestArea_Indoor_BedTaken::
# 392 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedTaken_Text_0, MSGBOX_DEFAULT
	return


RestArea_Indoor_BedHeal::
# 396 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_0, MSGBOX_YESNO
# 397 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RestArea_Indoor_BedHeal_2
RestArea_Indoor_BedHeal_1:
# 401 "data/scripts/general_scripts.pory"
	releaseall
	return

RestArea_Indoor_BedHeal_2:
# 398 "data/scripts/general_scripts.pory"
	msgbox RestArea_Indoor_BedHeal_Text_1, MSGBOX_DEFAULT
# 399 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto RestArea_Indoor_BedHeal_1


ThicketBrushInteract::
# 407 "data/scripts/general_scripts.pory"
	lockall
# 411 "data/scripts/general_scripts.pory"
	random 10
# 412 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 423 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 426 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 436 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 439 "data/scripts/general_scripts.pory"
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
# 428 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 430 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 431 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 426 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 423 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 415 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 416 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 417 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 418 "data/scripts/general_scripts.pory"
	waitmessage
# 419 "data/scripts/general_scripts.pory"
	waitfanfare
# 420 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 443 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 448 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 449 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 450 "data/scripts/general_scripts.pory"
	waitmovement 0
# 451 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 452 "data/scripts/general_scripts.pory"
	waitmessage
# 453 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 454 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 458 "data/scripts/general_scripts.pory"
	random 100
# 459 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 464 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 469 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 474 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 479 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 460 "data/scripts/general_scripts.pory"
	random 10
# 461 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 462 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 463 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 465 "data/scripts/general_scripts.pory"
	random 10
# 466 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 467 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 468 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 470 "data/scripts/general_scripts.pory"
	random 10
# 471 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 472 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 473 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 475 "data/scripts/general_scripts.pory"
	random 4
# 476 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 477 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 478 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 480 "data/scripts/general_scripts.pory"
	random 4
# 481 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 482 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 483 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 474 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 469 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 464 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 489 "data/scripts/general_scripts.pory"
	random 10
# 490 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 491 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 492 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 493 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 494 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 495 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 496 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 497 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 498 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 499 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 500 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 491 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 492 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 493 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 494 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 495 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 496 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 497 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 498 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 499 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 506 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 507 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 508 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 509 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 510 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 513 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 516 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 519 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 524 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 525 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 511 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 514 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 517 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 520 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 95 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 95 "data/scripts/general_scripts.pory"
	emote_question_mark
	step_end

# 98 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_1:
# 98 "data/scripts/general_scripts.pory"
	emote_exclamation_mark
	step_end

# 100 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_2:
# 100 "data/scripts/general_scripts.pory"
	emote_double_exclamation_mark
	step_end

# 122 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_0:
# 122 "data/scripts/general_scripts.pory"
	set_visible
# 122 "data/scripts/general_scripts.pory"
	jump_in_place_down
	step_end

# 123 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_1:
# 123 "data/scripts/general_scripts.pory"
	set_visible
# 123 "data/scripts/general_scripts.pory"
	jump_in_place_up
	step_end

# 124 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_2:
# 124 "data/scripts/general_scripts.pory"
	set_visible
# 124 "data/scripts/general_scripts.pory"
	jump_in_place_left
	step_end

# 125 "data/scripts/general_scripts.pory"
EventScript_SpecialWildEncounter_Movement_3:
# 125 "data/scripts/general_scripts.pory"
	set_visible
# 125 "data/scripts/general_scripts.pory"
	jump_in_place_right
	step_end

# 145 "data/scripts/general_scripts.pory"
Common_EventScript_FindItemSand_Movement_0:
# 145 "data/scripts/general_scripts.pory"
	set_visible
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 75 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMART_Text_0:
# 164 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 192 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 289 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

RestArea_Indoor_BedTaken_Text_0:
# 392 "data/scripts/general_scripts.pory"
	.string "It looks like this bed is taken.$"

RestArea_Indoor_BedHeal_Text_0:
# 396 "data/scripts/general_scripts.pory"
	.string "Looks like this bed is free.\nTake a rest?$"

RestArea_Indoor_BedHeal_Text_1:
# 398 "data/scripts/general_scripts.pory"
	.string "You take a short rest.$"

ThicketBrushInteract_Text_0:
# 417 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 443 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 451 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
