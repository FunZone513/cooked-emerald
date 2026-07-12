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
	givemon SPECIES_METAGROSS, 69
# 17 "data/scripts/general_scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 18 "data/scripts/general_scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 19 "data/scripts/general_scripts.pory"
	special SetUnlockedPokedexFlags
# 25 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 27 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_IncreaseExpGain::
# 32 "data/scripts/general_scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 100
	return


Generic_GetBadgeCount::
# 40 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 41 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 42 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 43 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 44 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 45 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 46 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 47 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 48 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_23
Generic_GetBadgeCount_22:
	return

Generic_GetBadgeCount_2:
# 41 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 42 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 43 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 44 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 45 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 46 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 47 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_23:
# 48 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_22


Generic_UPDATE_LEVELCAP::
# 53 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 56 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 57 "data/scripts/general_scripts.pory"
	case 0, Generic_UPDATE_LEVELCAP_3
# 58 "data/scripts/general_scripts.pory"
	case 1, Generic_UPDATE_LEVELCAP_4
# 59 "data/scripts/general_scripts.pory"
	case 2, Generic_UPDATE_LEVELCAP_5
# 60 "data/scripts/general_scripts.pory"
	case 3, Generic_UPDATE_LEVELCAP_6
# 61 "data/scripts/general_scripts.pory"
	case 4, Generic_UPDATE_LEVELCAP_7
# 62 "data/scripts/general_scripts.pory"
	case 5, Generic_UPDATE_LEVELCAP_8
# 63 "data/scripts/general_scripts.pory"
	case 6, Generic_UPDATE_LEVELCAP_9
# 64 "data/scripts/general_scripts.pory"
	case 7, Generic_UPDATE_LEVELCAP_10
# 65 "data/scripts/general_scripts.pory"
	case 8, Generic_UPDATE_LEVELCAP_11
Generic_UPDATE_LEVELCAP_1:
	return

Generic_UPDATE_LEVELCAP_3:
# 57 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_4:
# 58 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 22
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 59 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 30
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_6:
# 60 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_7:
# 61 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_8:
# 62 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_9:
# 63 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_10:
# 64 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_11:
# 65 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1


Generic_GYM_LEVEL_GUIDE::
# 71 "data/scripts/general_scripts.pory"
	lockall
# 72 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 76 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 77 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 78 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 79 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 81 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 73 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 74 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 86 "data/scripts/general_scripts.pory"
	lockall
# 87 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
# 88 "data/scripts/general_scripts.pory"
	waitmovement 0
# 89 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 90 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 91 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 93 "data/scripts/general_scripts.pory"
	random 5
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
	message Generic_POKEMON_INTERACT_Text_0
Generic_POKEMON_INTERACT_4:
# 103 "data/scripts/general_scripts.pory"
	waitmessage
# 105 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 106 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_POKEMON_INTERACT_2:
# 90 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 95 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 96 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 97 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 98 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_2
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 99 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_3
	goto Generic_POKEMON_INTERACT_4


Generic_POKEMART::
# 111 "data/scripts/general_scripts.pory"
	lock
# 112 "data/scripts/general_scripts.pory"
	faceplayer
# 113 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 114 "data/scripts/general_scripts.pory"
	waitmessage
# 115 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 116 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 117 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 118 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_3
# 122 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_4
# 123 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_4
# 127 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_5
# 128 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_5
# 132 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_6
# 133 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_6
# 137 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 139 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 141 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 142 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 119 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 124 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 129 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 134 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 145 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 146 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 147 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 148 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 149 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 150 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 151 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 154 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 155 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 156 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 157 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 158 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 159 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 160 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 161 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 162 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 163 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 166 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 167 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 168 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 169 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 170 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 171 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 172 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 173 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 174 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 175 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 176 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 177 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 178 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 179 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 180 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 181 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 182 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 183 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 186 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 187 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 188 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 189 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 190 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 191 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 192 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 193 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 194 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 195 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 196 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 197 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 198 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 199 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 200 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 201 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 202 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 203 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 204 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 205 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 206 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 207 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 208 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 211 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 214 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 215 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 216 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 217 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 218 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 219 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 224 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 225 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 226 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 227 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 228 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 229 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 234 "data/scripts/general_scripts.pory"
	lock
# 235 "data/scripts/general_scripts.pory"
	faceplayer
# 236 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 237 "data/scripts/general_scripts.pory"
	waitmessage
# 238 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 239 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 240 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 241 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 242 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 246 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 247 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 248 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 249 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 250 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 254 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 256 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 259 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 260 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 243 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 251 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 263 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 266 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 267 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 268 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 274 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 276 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 292 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 293 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 294 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 295 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 296 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 297 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 298 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 299 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 300 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 301 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 302 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 305 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 306 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 307 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 308 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 309 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 310 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 311 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 312 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 313 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 314 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 315 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 316 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 317 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 318 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 319 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 320 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 321 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 322 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 323 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 324 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 325 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 326 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 327 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 328 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 329 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 330 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 331 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 332 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 333 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 334 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

ThicketBrushInteract::
# 340 "data/scripts/general_scripts.pory"
	lockall
# 344 "data/scripts/general_scripts.pory"
	random 10
# 345 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 356 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 359 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 369 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
ThicketBrushInteract_1:
# 372 "data/scripts/general_scripts.pory"
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
# 361 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 363 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 364 "data/scripts/general_scripts.pory"
	setwilddoubleflag
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 359 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 356 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 348 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 349 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 350 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 351 "data/scripts/general_scripts.pory"
	waitmessage
# 352 "data/scripts/general_scripts.pory"
	waitfanfare
# 353 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 376 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 381 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 382 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 383 "data/scripts/general_scripts.pory"
	waitmovement 0
# 384 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 385 "data/scripts/general_scripts.pory"
	waitmessage
# 386 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 387 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 391 "data/scripts/general_scripts.pory"
	random 100
# 392 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 397 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 402 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 407 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 412 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 393 "data/scripts/general_scripts.pory"
	random 10
# 394 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 395 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 396 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 398 "data/scripts/general_scripts.pory"
	random 10
# 399 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 400 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 401 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 403 "data/scripts/general_scripts.pory"
	random 10
# 404 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 405 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 406 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 408 "data/scripts/general_scripts.pory"
	random 4
# 409 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 410 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 411 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 413 "data/scripts/general_scripts.pory"
	random 4
# 414 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 415 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 416 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 407 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 402 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 397 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 422 "data/scripts/general_scripts.pory"
	random 10
# 423 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 424 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 425 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 426 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 427 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 428 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 429 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 430 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 431 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 432 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 433 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 424 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 425 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 426 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 427 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 428 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 429 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 430 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 431 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 432 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 439 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 440 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 441 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 442 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 443 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 446 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 449 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 452 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 457 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 458 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 444 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 447 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 450 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 453 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 87 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 87 "data/scripts/general_scripts.pory"
	face_player
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 74 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMON_INTERACT_Text_0:
# 95 "data/scripts/general_scripts.pory"
	.string "?$"

Generic_POKEMON_INTERACT_Text_1:
# 97 "data/scripts/general_scripts.pory"
	.string "!$"

Generic_POKEMON_INTERACT_Text_2:
# 98 "data/scripts/general_scripts.pory"
	.string "...$"

Generic_POKEMON_INTERACT_Text_3:
# 99 "data/scripts/general_scripts.pory"
	.string "!?$"

Generic_POKEMART_Text_0:
# 113 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 141 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 236 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

ThicketBrushInteract_Text_0:
# 350 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 376 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 384 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
