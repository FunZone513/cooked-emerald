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
	setflag FLAG_SYS_QUEST_MENU_GET
# 14 "data/scripts/general_scripts.pory"
	setvar VAR_STARTED_GAME, 1
# 15 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 16 "data/scripts/general_scripts.pory"
	call Generic_IncreaseExpGain
# 19 "data/scripts/general_scripts.pory"
	setvar VAR_WILD_BATTLE_CHANCE, 15
# 21 "data/scripts/general_scripts.pory"
	releaseall
	return


Generic_IncreaseExpGain::
# 26 "data/scripts/general_scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 100
	return


Generic_GetBadgeCount::
# 34 "data/scripts/general_scripts.pory"
	setvar VAR_RESULT, 0
# 35 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Generic_GetBadgeCount_2
Generic_GetBadgeCount_1:
# 36 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Generic_GetBadgeCount_5
Generic_GetBadgeCount_4:
# 37 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Generic_GetBadgeCount_8
Generic_GetBadgeCount_7:
# 38 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Generic_GetBadgeCount_11
Generic_GetBadgeCount_10:
# 39 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Generic_GetBadgeCount_14
Generic_GetBadgeCount_13:
# 40 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Generic_GetBadgeCount_17
Generic_GetBadgeCount_16:
# 41 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Generic_GetBadgeCount_20
Generic_GetBadgeCount_19:
# 42 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Generic_GetBadgeCount_23
Generic_GetBadgeCount_22:
	return

Generic_GetBadgeCount_2:
# 35 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_1

Generic_GetBadgeCount_5:
# 36 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_4

Generic_GetBadgeCount_8:
# 37 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_7

Generic_GetBadgeCount_11:
# 38 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_10

Generic_GetBadgeCount_14:
# 39 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_13

Generic_GetBadgeCount_17:
# 40 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_16

Generic_GetBadgeCount_20:
# 41 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_19

Generic_GetBadgeCount_23:
# 42 "data/scripts/general_scripts.pory"
	addvar VAR_RESULT, 1
	goto Generic_GetBadgeCount_22


Generic_UPDATE_LEVELCAP::
# 47 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 50 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 51 "data/scripts/general_scripts.pory"
	case 0, Generic_UPDATE_LEVELCAP_3
# 52 "data/scripts/general_scripts.pory"
	case 1, Generic_UPDATE_LEVELCAP_4
# 53 "data/scripts/general_scripts.pory"
	case 2, Generic_UPDATE_LEVELCAP_5
# 54 "data/scripts/general_scripts.pory"
	case 3, Generic_UPDATE_LEVELCAP_6
# 55 "data/scripts/general_scripts.pory"
	case 4, Generic_UPDATE_LEVELCAP_7
# 56 "data/scripts/general_scripts.pory"
	case 5, Generic_UPDATE_LEVELCAP_8
# 57 "data/scripts/general_scripts.pory"
	case 6, Generic_UPDATE_LEVELCAP_9
# 58 "data/scripts/general_scripts.pory"
	case 7, Generic_UPDATE_LEVELCAP_10
# 59 "data/scripts/general_scripts.pory"
	case 8, Generic_UPDATE_LEVELCAP_11
Generic_UPDATE_LEVELCAP_1:
	return

Generic_UPDATE_LEVELCAP_3:
# 51 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 15
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_4:
# 52 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 22
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_5:
# 53 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 30
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_6:
# 54 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_7:
# 55 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_8:
# 56 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_9:
# 57 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_10:
# 58 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1

Generic_UPDATE_LEVELCAP_11:
# 59 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
	goto Generic_UPDATE_LEVELCAP_1


Generic_GYM_LEVEL_GUIDE::
# 65 "data/scripts/general_scripts.pory"
	lockall
# 66 "data/scripts/general_scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_ne Generic_GYM_LEVEL_GUIDE_2
# 70 "data/scripts/general_scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 71 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 72 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
# 73 "data/scripts/general_scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
Generic_GYM_LEVEL_GUIDE_1:
# 75 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_GYM_LEVEL_GUIDE_2:
# 67 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CURRENT_LEVEL_CAP
# 68 "data/scripts/general_scripts.pory"
	msgbox Generic_GYM_LEVEL_GUIDE_Text_0, MSGBOX_SIGN
	goto Generic_GYM_LEVEL_GUIDE_1


Generic_POKEMON_INTERACT::
# 80 "data/scripts/general_scripts.pory"
	lockall
# 81 "data/scripts/general_scripts.pory"
	applymovement VAR_LAST_TALKED, Generic_POKEMON_INTERACT_Movement_0
# 82 "data/scripts/general_scripts.pory"
	waitmovement 0
# 83 "data/scripts/general_scripts.pory"
	callnative GetInteractedPokemon
# 84 "data/scripts/general_scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Generic_POKEMON_INTERACT_2
Generic_POKEMON_INTERACT_1:
# 85 "data/scripts/general_scripts.pory"
	playmoncry VAR_0x8004, CRY_MODE_NORMAL
# 87 "data/scripts/general_scripts.pory"
	random 5
# 88 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 89 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMON_INTERACT_6
# 90 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMON_INTERACT_7
# 91 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMON_INTERACT_8
# 92 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMON_INTERACT_9
# 93 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMON_INTERACT_10
# 94 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
Generic_POKEMON_INTERACT_4:
# 97 "data/scripts/general_scripts.pory"
	waitmessage
# 99 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 100 "data/scripts/general_scripts.pory"
	releaseall
	return

Generic_POKEMON_INTERACT_2:
# 84 "data/scripts/general_scripts.pory"
	setseenmon VAR_0x8004
	goto Generic_POKEMON_INTERACT_1

Generic_POKEMON_INTERACT_6:
# 89 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_7:
# 90 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_0
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_8:
# 91 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_1
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_9:
# 92 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_2
	goto Generic_POKEMON_INTERACT_4

Generic_POKEMON_INTERACT_10:
# 93 "data/scripts/general_scripts.pory"
	message Generic_POKEMON_INTERACT_Text_3
	goto Generic_POKEMON_INTERACT_4


Generic_POKEMART::
# 105 "data/scripts/general_scripts.pory"
	lock
# 106 "data/scripts/general_scripts.pory"
	faceplayer
# 107 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_Text_0
# 108 "data/scripts/general_scripts.pory"
	waitmessage
# 109 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 110 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 111 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_3
# 112 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_3
# 116 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_4
# 117 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_4
# 121 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_5
# 122 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_5
# 126 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_6
# 127 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_6
# 131 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_7
Generic_POKEMART_7:
# 133 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_5
Generic_POKEMART_1:
# 135 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 136 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_3:
# 113 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_1
	goto Generic_POKEMART_1

Generic_POKEMART_4:
# 118 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_2
	goto Generic_POKEMART_1

Generic_POKEMART_5:
# 123 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_3
	goto Generic_POKEMART_1

Generic_POKEMART_6:
# 128 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_4
	goto Generic_POKEMART_1


	.align 2
# 139 "data/scripts/general_scripts.pory"
GenericPokeMart_1:
# 140 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 141 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 142 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 143 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 144 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 145 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 148 "data/scripts/general_scripts.pory"
GenericPokeMart_2:
# 149 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 150 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 151 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 152 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 153 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 154 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 155 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 156 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 157 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_NONE

	.align 2
# 160 "data/scripts/general_scripts.pory"
GenericPokeMart_3:
# 161 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 162 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 163 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 164 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 165 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 166 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 167 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 168 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 169 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 170 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 171 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 172 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 173 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 174 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 175 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 176 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 177 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 180 "data/scripts/general_scripts.pory"
GenericPokeMart_4:
# 181 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 182 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 183 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 184 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 185 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 186 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 187 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 188 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 189 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 190 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 191 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 192 "data/scripts/general_scripts.pory"
	.2byte ITEM_ANTIDOTE
# 193 "data/scripts/general_scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 194 "data/scripts/general_scripts.pory"
	.2byte ITEM_AWAKENING
# 195 "data/scripts/general_scripts.pory"
	.2byte ITEM_BURN_HEAL
# 196 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 197 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 198 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 199 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 200 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 201 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 202 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

	.align 2
# 205 "data/scripts/general_scripts.pory"
GenericPokeMart_5:
# 206 "data/scripts/general_scripts.pory"
	.2byte ITEM_POKE_BALL
# 207 "data/scripts/general_scripts.pory"
	.2byte ITEM_GREAT_BALL
# 208 "data/scripts/general_scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 209 "data/scripts/general_scripts.pory"
	.2byte ITEM_POTION
# 210 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_POTION
# 211 "data/scripts/general_scripts.pory"
	.2byte ITEM_HYPER_POTION
# 212 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_POTION
# 213 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 214 "data/scripts/general_scripts.pory"
	.2byte ITEM_REPEL
# 215 "data/scripts/general_scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 216 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REPEL
# 217 "data/scripts/general_scripts.pory"
	.2byte ITEM_FULL_HEAL
# 218 "data/scripts/general_scripts.pory"
	.2byte ITEM_REVIVE
# 219 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 220 "data/scripts/general_scripts.pory"
	.2byte ITEM_ETHER
# 221 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ETHER
# 222 "data/scripts/general_scripts.pory"
	.2byte ITEM_ELIXIR
# 223 "data/scripts/general_scripts.pory"
	.2byte ITEM_MAX_ELIXIR
	.2byte ITEM_NONE

Generic_POKEMART_BERRY::
# 228 "data/scripts/general_scripts.pory"
	lock
# 229 "data/scripts/general_scripts.pory"
	faceplayer
# 230 "data/scripts/general_scripts.pory"
	message Generic_POKEMART_BERRY_Text_0
# 231 "data/scripts/general_scripts.pory"
	waitmessage
# 232 "data/scripts/general_scripts.pory"
	call Generic_GetBadgeCount
# 233 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 234 "data/scripts/general_scripts.pory"
	case 0, Generic_POKEMART_BERRY_3
# 235 "data/scripts/general_scripts.pory"
	case 1, Generic_POKEMART_BERRY_3
# 236 "data/scripts/general_scripts.pory"
	case 2, Generic_POKEMART_BERRY_3
# 240 "data/scripts/general_scripts.pory"
	case 3, Generic_POKEMART_BERRY_4
# 241 "data/scripts/general_scripts.pory"
	case 4, Generic_POKEMART_BERRY_4
# 242 "data/scripts/general_scripts.pory"
	case 5, Generic_POKEMART_BERRY_4
# 243 "data/scripts/general_scripts.pory"
	case 6, Generic_POKEMART_BERRY_4
# 244 "data/scripts/general_scripts.pory"
	case 7, Generic_POKEMART_BERRY_4
# 248 "data/scripts/general_scripts.pory"
	case 8, Generic_POKEMART_BERRY_5
Generic_POKEMART_BERRY_5:
# 250 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry3
Generic_POKEMART_BERRY_1:
# 253 "data/scripts/general_scripts.pory"
	msgbox Generic_POKEMART_Text_1, MSGBOX_DEFAULT
# 254 "data/scripts/general_scripts.pory"
	release
	return

Generic_POKEMART_BERRY_3:
# 237 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry1
	goto Generic_POKEMART_BERRY_1

Generic_POKEMART_BERRY_4:
# 245 "data/scripts/general_scripts.pory"
	pokemart GenericPokeMart_Berry2
	goto Generic_POKEMART_BERRY_1


	.align 2
# 257 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry1:
# 258 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 259 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 260 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 261 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 262 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 263 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 264 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 265 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE

	.align 2
# 268 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry2:
# 269 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 270 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 271 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 272 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 273 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 274 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 275 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 276 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 277 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 278 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 279 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 280 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 281 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 282 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 283 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 284 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 285 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 286 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 287 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 288 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 289 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 290 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 291 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 292 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 293 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 294 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 295 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 296 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_NONE

	.align 2
# 299 "data/scripts/general_scripts.pory"
GenericPokeMart_Berry3:
# 300 "data/scripts/general_scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 301 "data/scripts/general_scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 302 "data/scripts/general_scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 303 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 304 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 305 "data/scripts/general_scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 306 "data/scripts/general_scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 307 "data/scripts/general_scripts.pory"
	.2byte ITEM_LUM_BERRY
# 308 "data/scripts/general_scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 309 "data/scripts/general_scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 310 "data/scripts/general_scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 311 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 312 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHILAN_BERRY
# 313 "data/scripts/general_scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 314 "data/scripts/general_scripts.pory"
	.2byte ITEM_COBA_BERRY
# 315 "data/scripts/general_scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 316 "data/scripts/general_scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 317 "data/scripts/general_scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 318 "data/scripts/general_scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 319 "data/scripts/general_scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 320 "data/scripts/general_scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 321 "data/scripts/general_scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 322 "data/scripts/general_scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 323 "data/scripts/general_scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 324 "data/scripts/general_scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 325 "data/scripts/general_scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 326 "data/scripts/general_scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 327 "data/scripts/general_scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 328 "data/scripts/general_scripts.pory"
	.2byte ITEM_ENIGMA_BERRY
	.2byte ITEM_NONE

ThicketBrushInteract::
# 334 "data/scripts/general_scripts.pory"
	lockall
# 335 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_ClearTile
# 338 "data/scripts/general_scripts.pory"
	random 10
# 339 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_lt ThicketBrushInteract_2
# 350 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ge ThicketBrushInteract_9
ThicketBrushInteract_7:
# 353 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ge ThicketBrushInteract_6
ThicketBrushInteract_5:
# 362 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 363 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 364 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
ThicketBrushInteract_1:
# 366 "data/scripts/general_scripts.pory"
	release
	return

ThicketBrushInteract_2:
# 340 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetItem
	checkitemspace VAR_TEMP_0
# 0 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ThicketBrushInteract_13
	goto ThicketBrushInteract_1

ThicketBrushInteract_3:
# 351 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_Nothing
	goto ThicketBrushInteract_1

ThicketBrushInteract_4:
# 354 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 355 "data/scripts/general_scripts.pory"
	createmon 1, 0, VAR_TEMP_0, VAR_TEMP_1
# 356 "data/scripts/general_scripts.pory"
	call ThicketBrushInteract_GetPokemon
# 357 "data/scripts/general_scripts.pory"
	createmon 1, 1, VAR_TEMP_0, VAR_TEMP_1
# 358 "data/scripts/general_scripts.pory"
	setwilddoubleflag
# 359 "data/scripts/general_scripts.pory"
	call ThicketBrush_WildEncounter
	goto ThicketBrushInteract_1

ThicketBrushInteract_6:
# 353 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 5
	goto_if_lt ThicketBrushInteract_4
	goto ThicketBrushInteract_5

ThicketBrushInteract_9:
# 350 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 3
	goto_if_lt ThicketBrushInteract_3
	goto ThicketBrushInteract_7

ThicketBrushInteract_13:
# 342 "data/scripts/general_scripts.pory"
	additem VAR_TEMP_0
# 343 "data/scripts/general_scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 344 "data/scripts/general_scripts.pory"
	message ThicketBrushInteract_Text_0
# 345 "data/scripts/general_scripts.pory"
	waitmessage
# 346 "data/scripts/general_scripts.pory"
	waitfanfare
# 347 "data/scripts/general_scripts.pory"
	waitbuttonpress
	goto ThicketBrushInteract_1


ThicketBrushInteract_Nothing::
# 370 "data/scripts/general_scripts.pory"
	msgbox ThicketBrushInteract_Nothing_Text_0, MSGBOX_SIGN
	return


ThicketBrush_WildEncounter::
# 375 "data/scripts/general_scripts.pory"
	playse SE_PIN
# 376 "data/scripts/general_scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 377 "data/scripts/general_scripts.pory"
	waitmovement 0
# 378 "data/scripts/general_scripts.pory"
	message ThicketBrush_WildEncounter_Text_0
# 379 "data/scripts/general_scripts.pory"
	waitmessage
# 380 "data/scripts/general_scripts.pory"
	waitbuttonpress
# 381 "data/scripts/general_scripts.pory"
	dowildbattle
	return


ThicketBrushInteract_GetPokemon::
# 385 "data/scripts/general_scripts.pory"
	random 100
# 386 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_lt ThicketBrushInteract_GetPokemon_2
# 391 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ge ThicketBrushInteract_GetPokemon_14
ThicketBrushInteract_GetPokemon_12:
# 396 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_ge ThicketBrushInteract_GetPokemon_11
ThicketBrushInteract_GetPokemon_9:
# 401 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_ge ThicketBrushInteract_GetPokemon_8
ThicketBrushInteract_GetPokemon_7:
# 406 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_ge ThicketBrushInteract_GetPokemon_6
ThicketBrushInteract_GetPokemon_1:
	return

ThicketBrushInteract_GetPokemon_2:
# 387 "data/scripts/general_scripts.pory"
	random 10
# 388 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 389 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 390 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_LARVESTA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_3:
# 392 "data/scripts/general_scripts.pory"
	random 10
# 393 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 394 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 395 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_SPINARAK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_4:
# 397 "data/scripts/general_scripts.pory"
	random 10
# 398 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 399 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 13
# 400 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_JOLTIK
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_5:
# 402 "data/scripts/general_scripts.pory"
	random 4
# 403 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 404 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 405 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARIADOS
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_6:
# 407 "data/scripts/general_scripts.pory"
	random 4
# 408 "data/scripts/general_scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 409 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_1, 24
# 410 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, SPECIES_GALVANTULA
	goto ThicketBrushInteract_GetPokemon_1

ThicketBrushInteract_GetPokemon_8:
# 401 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 85
	goto_if_lt ThicketBrushInteract_GetPokemon_5
	goto ThicketBrushInteract_GetPokemon_7

ThicketBrushInteract_GetPokemon_11:
# 396 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 70
	goto_if_lt ThicketBrushInteract_GetPokemon_4
	goto ThicketBrushInteract_GetPokemon_9

ThicketBrushInteract_GetPokemon_14:
# 391 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, 37
	goto_if_lt ThicketBrushInteract_GetPokemon_3
	goto ThicketBrushInteract_GetPokemon_12


ThicketBrushInteract_GetItem::
# 416 "data/scripts/general_scripts.pory"
	random 10
# 417 "data/scripts/general_scripts.pory"
	switch VAR_RESULT
# 418 "data/scripts/general_scripts.pory"
	case 1, ThicketBrushInteract_GetItem_3
# 419 "data/scripts/general_scripts.pory"
	case 2, ThicketBrushInteract_GetItem_4
# 420 "data/scripts/general_scripts.pory"
	case 3, ThicketBrushInteract_GetItem_5
# 421 "data/scripts/general_scripts.pory"
	case 4, ThicketBrushInteract_GetItem_6
# 422 "data/scripts/general_scripts.pory"
	case 5, ThicketBrushInteract_GetItem_7
# 423 "data/scripts/general_scripts.pory"
	case 6, ThicketBrushInteract_GetItem_8
# 424 "data/scripts/general_scripts.pory"
	case 7, ThicketBrushInteract_GetItem_9
# 425 "data/scripts/general_scripts.pory"
	case 8, ThicketBrushInteract_GetItem_10
# 426 "data/scripts/general_scripts.pory"
	case 9, ThicketBrushInteract_GetItem_11
# 427 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_RARE_CANDY
ThicketBrushInteract_GetItem_1:
	return

ThicketBrushInteract_GetItem_3:
# 418 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_4:
# 419 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BALM_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_5:
# 420 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_6:
# 421 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_7:
# 422 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_8:
# 423 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_9:
# 424 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_BIG_MUSHROOM
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_10:
# 425 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_POKE_BALL
	goto ThicketBrushInteract_GetItem_1

ThicketBrushInteract_GetItem_11:
# 426 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_0, ITEM_TINY_MUSHROOM
	goto ThicketBrushInteract_GetItem_1


ThicketBrushInteract_ClearTile::
# 433 "data/scripts/general_scripts.pory"
	playse SE_FU_ZAKU
# 434 "data/scripts/general_scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_C
# 435 "data/scripts/general_scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_A, VAR_TEMP_B
# 436 "data/scripts/general_scripts.pory"
	switch VAR_TEMP_C
# 437 "data/scripts/general_scripts.pory"
	case DIR_NORTH, ThicketBrushInteract_ClearTile_3
# 440 "data/scripts/general_scripts.pory"
	case DIR_SOUTH, ThicketBrushInteract_ClearTile_4
# 443 "data/scripts/general_scripts.pory"
	case DIR_EAST, ThicketBrushInteract_ClearTile_5
# 446 "data/scripts/general_scripts.pory"
	case DIR_WEST, ThicketBrushInteract_ClearTile_6
ThicketBrushInteract_ClearTile_1:
# 450 "data/scripts/general_scripts.pory"
	setmetatile VAR_TEMP_A, VAR_TEMP_B, METATILE_SecretBaseShrub_Debris, FALSE
# 451 "data/scripts/general_scripts.pory"
	special DrawWholeMapView
# 452 "data/scripts/general_scripts.pory"
	waitse
	return

ThicketBrushInteract_ClearTile_3:
# 438 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_4:
# 441 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_B, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_5:
# 444 "data/scripts/general_scripts.pory"
	addvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1

ThicketBrushInteract_ClearTile_6:
# 447 "data/scripts/general_scripts.pory"
	subvar VAR_TEMP_A, 1
	goto ThicketBrushInteract_ClearTile_1


# 81 "data/scripts/general_scripts.pory"
Generic_POKEMON_INTERACT_Movement_0:
# 81 "data/scripts/general_scripts.pory"
	face_player
	step_end

Generic_InfoNPC_Text_0:
# 3 "data/scripts/general_scripts.pory"
	.string "Current Game Version is:\n- 0.0.1 -$"

Generic_GYM_LEVEL_GUIDE_Text_0:
# 68 "data/scripts/general_scripts.pory"
	.string "Current Level Cap:\n{STR_VAR_1}$"

Generic_POKEMON_INTERACT_Text_0:
# 89 "data/scripts/general_scripts.pory"
	.string "?$"

Generic_POKEMON_INTERACT_Text_1:
# 91 "data/scripts/general_scripts.pory"
	.string "!$"

Generic_POKEMON_INTERACT_Text_2:
# 92 "data/scripts/general_scripts.pory"
	.string "...$"

Generic_POKEMON_INTERACT_Text_3:
# 93 "data/scripts/general_scripts.pory"
	.string "!?$"

Generic_POKEMART_Text_0:
# 107 "data/scripts/general_scripts.pory"
	.string "Welcome!\pHow may I serve you?$"

Generic_POKEMART_Text_1:
# 135 "data/scripts/general_scripts.pory"
	.string "Please come again!$"

Generic_POKEMART_BERRY_Text_0:
# 230 "data/scripts/general_scripts.pory"
	.string "Welcome!\pAre you interested in some berries?$"

ThicketBrushInteract_Text_0:
# 344 "data/scripts/general_scripts.pory"
	.string "You found an item!$"

ThicketBrushInteract_Nothing_Text_0:
# 370 "data/scripts/general_scripts.pory"
	.string "You didn't find anything...$"

ThicketBrush_WildEncounter_Text_0:
# 378 "data/scripts/general_scripts.pory"
	.string "You were attacked!$"
