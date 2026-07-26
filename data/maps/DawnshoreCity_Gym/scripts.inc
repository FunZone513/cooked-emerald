DawnshoreCity_Gym_MapScripts::
# 2 "data/maps/DawnshoreCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DawnshoreCity_Gym_OnLoad
	.byte 0


DawnshoreCity_Gym_OnLoad::
# 6 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_UpdateTiles
	return


DawnshoreCity_Gym_UpdateTiles::
# 10 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_set FLAG_PLUCKED_DAWNSHORE_FLOWER_RIGHT, DawnshoreCity_Gym_UpdateTiles_2
DawnshoreCity_Gym_UpdateTiles_1:
# 15 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_set FLAG_PLUCKED_DAWNSHORE_FLOWER_LEFT, DawnshoreCity_Gym_UpdateTiles_5
DawnshoreCity_Gym_UpdateTiles_4:
# 25 "data/maps/DawnshoreCity_Gym/scripts.pory"
	special DrawWholeMapView
	return

DawnshoreCity_Gym_UpdateTiles_2:
# 11 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_OpenTopLeft
# 12 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_MoveRightFlower
	goto DawnshoreCity_Gym_UpdateTiles_1

DawnshoreCity_Gym_UpdateTiles_5:
# 16 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_OpenBottomLeft
# 17 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_OpenEnd
# 18 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_MoveLeftFlower
# 20 "data/maps/DawnshoreCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GYM_LEADER_NAMI
	goto_if 0, DawnshoreCity_Gym_UpdateTiles_7
	goto DawnshoreCity_Gym_UpdateTiles_4

DawnshoreCity_Gym_UpdateTiles_7:
# 21 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_CloseTopLeft
	goto DawnshoreCity_Gym_UpdateTiles_4


DawnshoreCity_Gym_RightFlower::
# 29 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_unset FLAG_PLUCKED_DAWNSHORE_FLOWER_RIGHT, DawnshoreCity_Gym_RightFlower_1
	return

DawnshoreCity_Gym_RightFlower_1:
# 30 "data/maps/DawnshoreCity_Gym/scripts.pory"
	lockall
# 31 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setflag FLAG_PLUCKED_DAWNSHORE_FLOWER_RIGHT
# 32 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_MoveRightFlower
# 33 "data/maps/DawnshoreCity_Gym/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_RightFlower_Text_0, MSGBOX_SIGN
# 35 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_UpdateTiles
# 36 "data/maps/DawnshoreCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 37 "data/maps/DawnshoreCity_Gym/scripts.pory"
	waitse
# 38 "data/maps/DawnshoreCity_Gym/scripts.pory"
	releaseall
	return


DawnshoreCity_Gym_LeftFlower::
# 43 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_unset FLAG_PLUCKED_DAWNSHORE_FLOWER_LEFT, DawnshoreCity_Gym_LeftFlower_1
	return

DawnshoreCity_Gym_LeftFlower_1:
# 44 "data/maps/DawnshoreCity_Gym/scripts.pory"
	lockall
# 45 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setflag FLAG_PLUCKED_DAWNSHORE_FLOWER_LEFT
# 46 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_MoveLeftFlower
# 47 "data/maps/DawnshoreCity_Gym/scripts.pory"
	special DrawWholeMapView
# 48 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_RightFlower_Text_0, MSGBOX_SIGN
# 49 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_UpdateTiles
# 50 "data/maps/DawnshoreCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 51 "data/maps/DawnshoreCity_Gym/scripts.pory"
	waitse
# 52 "data/maps/DawnshoreCity_Gym/scripts.pory"
	releaseall
	return


DawnshoreCity_Gym_Guide::
# 57 "data/maps/DawnshoreCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GYM_LEADER_NAMI
	goto_if 0, DawnshoreCity_Gym_Guide_1
# 67 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Guide_Text_1, MSGBOX_NPC
	return

DawnshoreCity_Gym_Guide_1:
# 58 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Guide_Text_0, MSGBOX_NPC
	return


DawnshoreCity_Gym_Nami::
# 72 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GYM_LEADER_NAMI, DawnshoreCity_Gym_Nami_Text_0, DawnshoreCity_Gym_Nami_Text_1, DawnshoreCity_Gym_Nami_Defeated, NO_MUSIC
# 82 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Nami_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_Nami_Defeated::
# 86 "data/maps/DawnshoreCity_Gym/scripts.pory"
	message DawnshoreCity_Gym_Nami_Defeated_Text_0
# 87 "data/maps/DawnshoreCity_Gym/scripts.pory"
	waitmessage
# 88 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 89 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Nami_Defeated_Text_1, MSGBOX_DEFAULT
# 98 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 99 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_SetGymTrainers
# 100 "data/maps/DawnshoreCity_Gym/scripts.pory"
	releaseall
	return


DawnshoreCity_Gym_Camper::
# 104 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAWNSHORE_CITY_GYM_CAMPER, DawnshoreCity_Gym_Camper_Text_0, DawnshoreCity_Gym_Camper_Text_1
# 109 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Camper_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_Tuber::
# 113 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAWNSHORE_CITY_GYM_TUBER, DawnshoreCity_Gym_Tuber_Text_0, DawnshoreCity_Gym_Tuber_Text_1
# 118 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Tuber_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_BattleGirl::
# 122 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAWNSHORE_CITY_GYM_BATTLE_GIRL, DawnshoreCity_Gym_BattleGirl_Text_0, DawnshoreCity_Gym_BattleGirl_Text_1
# 127 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_BattleGirl_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_Swimmer::
# 131 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAWNSHORE_CITY_GYM_SWIMMER, DawnshoreCity_Gym_Swimmer_Text_0, DawnshoreCity_Gym_Swimmer_Text_1
# 136 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Swimmer_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_TuberBuried::
# 140 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAWNSHORE_CITY_GYM_TUBER_B, DawnshoreCity_Gym_TuberBuried_Text_0, DawnshoreCity_Gym_TuberBuried_Text_1
# 145 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_TuberBuried_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_SwimmerBuried::
# 149 "data/maps/DawnshoreCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DAWNSHORE_CITY_GYM_SWIMMER_B, DawnshoreCity_Gym_SwimmerBuried_Text_0, DawnshoreCity_Gym_SwimmerBuried_Text_1
# 154 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_SwimmerBuried_Text_2, MSGBOX_NPC
	return


DawnshoreCity_Gym_SetGymTrainers::
# 158 "data/maps/DawnshoreCity_Gym/scripts.pory"
	settrainerflag TRAINER_DAWNSHORE_CITY_GYM_CAMPER
# 159 "data/maps/DawnshoreCity_Gym/scripts.pory"
	settrainerflag TRAINER_DAWNSHORE_CITY_GYM_TUBER
# 160 "data/maps/DawnshoreCity_Gym/scripts.pory"
	settrainerflag TRAINER_DAWNSHORE_CITY_GYM_BATTLE_GIRL
# 161 "data/maps/DawnshoreCity_Gym/scripts.pory"
	settrainerflag TRAINER_DAWNSHORE_CITY_GYM_SWIMMER
# 162 "data/maps/DawnshoreCity_Gym/scripts.pory"
	settrainerflag TRAINER_DAWNSHORE_CITY_GYM_TUBER_B
# 163 "data/maps/DawnshoreCity_Gym/scripts.pory"
	settrainerflag TRAINER_DAWNSHORE_CITY_GYM_SWIMMER_B
	return


DawnshoreCity_Gym_OpenTopLeft::
# 167 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 9, METATILE_PewterGym_Boardwalk_Left, FALSE
# 168 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 169 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 170 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 171 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_PewterGym_Boardwalk_Right, FALSE
# 172 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_PewterGym_Boardwalk_Centre, FALSE
# 174 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_PewterGym_JumpingSand, TRUE
# 175 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 10, METATILE_PewterGym_JumpingSandEdge, TRUE
	return


DawnshoreCity_Gym_CloseTopLeft::
# 179 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 9, METATILE_PewterGym_Boardwalk_Left_Off, FALSE
# 180 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_PewterGym_Boardwalk_Middle_Off, FALSE
# 181 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_PewterGym_Boardwalk_Middle_Off, FALSE
# 182 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_PewterGym_Boardwalk_Middle_Off, FALSE
# 183 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_PewterGym_Boardwalk_Right_Off, FALSE
# 184 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_PewterGym_Boardwalk_Centre_Off, FALSE
# 186 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_PewterGym_Sand, TRUE
# 187 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 10, METATILE_PewterGym_SandEdge, TRUE
	return


DawnshoreCity_Gym_OpenBottomLeft::
# 191 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 13, METATILE_PewterGym_Boardwalk_Left, FALSE
# 192 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 193 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 194 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_PewterGym_Boardwalk_Right, FALSE
# 195 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_PewterGym_Boardwalk_Centre, FALSE
# 197 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_PewterGym_JumpingSandEdge, TRUE
# 198 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 6, 14, METATILE_PewterGym_JumpingSand, TRUE
# 199 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 9, 8, METATILE_PewterGym_JumpingSandEdge, TRUE
	return


DawnshoreCity_Gym_OpenEnd::
# 203 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 9, 7, METATILE_PewterGym_Boardwalk_Centre, FALSE
# 204 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 8, 5, METATILE_PewterGym_Boardwalk_Left, FALSE
# 205 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 9, 5, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 206 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 10, 5, METATILE_PewterGym_Boardwalk_Right, FALSE
	return


DawnshoreCity_Gym_MoveRightFlower::
# 210 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 16, 12, METATILE_PewterGym_Flowerless_Left, TRUE
# 211 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 11, 6, METATILE_PewterGym_Flower_in_pot_Left, TRUE
	return


DawnshoreCity_Gym_MoveLeftFlower::
# 215 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_PewterGym_Flowerless_Right, TRUE
# 216 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_PewterGym_Flower_in_pot_Right, TRUE
	return


DawnshoreCity_Gym_RightFlower_Text_0:
# 34 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "You grabbed the Flower!$"

DawnshoreCity_Gym_Guide_Text_0:
# 59 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "How's it going prospective challenger?\nWelcome to the Dawnshore Gym!\p"
	.string "This Gym is a reflection of the life\nof those that live here on the beach!\p"
	.string "You ever tried walking on hot sand?\nIt's just not doable!\p"
	.string "So jump across the boardwalks to keep\nyourself safe from the sand!\p"
	.string "Pick up the flowers as tribute to our\nbeautiful Gym Leader, and open up the\lpath to battle her!\p"
	.string "Good luck out there!$"

DawnshoreCity_Gym_Guide_Text_1:
# 67 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Nicely done!\nYou really rode the wave to victory!$"

DawnshoreCity_Gym_Nami_Text_0:
# 74 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Welcome, Welcome!\p"
	.string "I've been watching you jump around and\nbattle my Gym trainers, it has been\lquite the treat to watch!\p"
	.string "Now I finally get to have a crack at\nyou too!\p"
	.string "Are you as excited as I am?$"

DawnshoreCity_Gym_Nami_Text_1:
# 78 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Wow!\nYou cracked me real good!$"

DawnshoreCity_Gym_Nami_Text_2:
# 82 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "I'm just the first step on your\nPokemon journey!\pI can't wait to see how far you go!$"

DawnshoreCity_Gym_Nami_Defeated_Text_0:
# 86 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "{PLAYER} recieved the Wave Badge!$"

DawnshoreCity_Gym_Nami_Defeated_Text_1:
# 90 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "The Wave Badge is proof of you taking\nyour first successful step on your\lPokemon Journey.\p"
	.string "It might not look like much, but just\nhaving it will earn you respect.\p"
	.string "Plus, you get some cool perks too!\p"
	.string "You get an expanded catalogue of items\nthat can be bought at the Poke' Mart!\p"
	.string "With that out of the way...\p"
	.string "Well done!\p"
	.string "I wish you luck on the rest of the Gyms,\nand I hope to see you climbing to the\ltop of the league some day!$"

DawnshoreCity_Gym_Camper_Text_0:
# 106 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "You think I'll let you just grab the\nflower for free?$"

DawnshoreCity_Gym_Camper_Text_1:
# 107 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Well darn.$"

DawnshoreCity_Gym_Camper_Text_2:
# 109 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Go ahead, it's all yours.$"

DawnshoreCity_Gym_Tuber_Text_0:
# 115 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Beating up challengers is way more fun\nthan going to school!$"

DawnshoreCity_Gym_Tuber_Text_1:
# 116 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "It's only fun if I win!$"

DawnshoreCity_Gym_Tuber_Text_2:
# 118 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Even losing a battle is more fun\nthan school...$"

DawnshoreCity_Gym_BattleGirl_Text_0:
# 124 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Let's get pumped!$"

DawnshoreCity_Gym_BattleGirl_Text_1:
# 125 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Pumped and dumped!$"

DawnshoreCity_Gym_BattleGirl_Text_2:
# 127 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "I was really looking forward to winning\nfor once.$"

DawnshoreCity_Gym_Swimmer_Text_0:
# 133 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "I feel a little out of place.$"

DawnshoreCity_Gym_Swimmer_Text_1:
# 134 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "'Beach vibe' huh...$"

DawnshoreCity_Gym_Swimmer_Text_2:
# 136 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "I'm not much of a swimmer, I'm just\nwearing this as a sort of uniform.$"

DawnshoreCity_Gym_TuberBuried_Text_0:
# 142 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Haha!\nI bet you didn't see that coming!$"

DawnshoreCity_Gym_TuberBuried_Text_1:
# 143 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "The surprise attack failed...$"

DawnshoreCity_Gym_TuberBuried_Text_2:
# 145 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "My tube is actually full of water to\nhelp me sink into the sand!$"

DawnshoreCity_Gym_SwimmerBuried_Text_0:
# 151 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Surprise!$"

DawnshoreCity_Gym_SwimmerBuried_Text_1:
# 152 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "Hiding in the sand was the kid's idea...$"

DawnshoreCity_Gym_SwimmerBuried_Text_2:
# 154 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "We thought hiding in the sand would\ngive us a tactical edge,\lbut it just gave me a tactical rash...$"
