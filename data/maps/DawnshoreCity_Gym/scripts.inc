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
# 24 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_set FLAG_PLUCKED_DAWNSHORE_FLOWER_LEFT, DawnshoreCity_Gym_UpdateTiles_5
DawnshoreCity_Gym_UpdateTiles_4:
# 57 "data/maps/DawnshoreCity_Gym/scripts.pory"
	special DrawWholeMapView
	return

DawnshoreCity_Gym_UpdateTiles_2:
# 12 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 9, METATILE_PewterGym_Boardwalk_Left, FALSE
# 13 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 14 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 15 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 16 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_PewterGym_Boardwalk_Right, FALSE
# 17 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_PewterGym_Boardwalk_Centre, FALSE
# 20 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_PewterGym_JumpingSand, TRUE
# 21 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 10, METATILE_PewterGym_JumpingSandEdge, TRUE
	goto DawnshoreCity_Gym_UpdateTiles_1

DawnshoreCity_Gym_UpdateTiles_5:
# 26 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 9, 7, METATILE_PewterGym_Boardwalk_Centre, FALSE
# 27 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 8, 5, METATILE_PewterGym_Boardwalk_Left, FALSE
# 28 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 9, 5, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 29 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 10, 5, METATILE_PewterGym_Boardwalk_Right, FALSE
# 32 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 13, METATILE_PewterGym_Boardwalk_Left, FALSE
# 33 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 34 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_PewterGym_Boardwalk_Middle, FALSE
# 35 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_PewterGym_Boardwalk_Right, FALSE
# 36 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_PewterGym_Boardwalk_Centre, FALSE
# 39 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_PewterGym_JumpingSandEdge, TRUE
# 40 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 6, 14, METATILE_PewterGym_JumpingSand, TRUE
# 41 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 9, 8, METATILE_PewterGym_JumpingSandEdge, TRUE
# 44 "data/maps/DawnshoreCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GYM_LEADER_NAMI
	goto_if 0, DawnshoreCity_Gym_UpdateTiles_7
	goto DawnshoreCity_Gym_UpdateTiles_4

DawnshoreCity_Gym_UpdateTiles_7:
# 45 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 9, METATILE_PewterGym_Boardwalk_Left_Off, FALSE
# 46 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_PewterGym_Boardwalk_Middle_Off, FALSE
# 47 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_PewterGym_Boardwalk_Middle_Off, FALSE
# 48 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_PewterGym_Boardwalk_Middle_Off, FALSE
# 49 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_PewterGym_Boardwalk_Right_Off, FALSE
# 50 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_PewterGym_Boardwalk_Centre_Off, FALSE
# 52 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_PewterGym_Sand, TRUE
# 53 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 3, 10, METATILE_PewterGym_SandEdge, TRUE
	goto DawnshoreCity_Gym_UpdateTiles_4


DawnshoreCity_Gym_RightFlower::
# 61 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_unset FLAG_PLUCKED_DAWNSHORE_FLOWER_RIGHT, DawnshoreCity_Gym_RightFlower_1
	return

DawnshoreCity_Gym_RightFlower_1:
# 62 "data/maps/DawnshoreCity_Gym/scripts.pory"
	lockall
# 63 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setflag FLAG_PLUCKED_DAWNSHORE_FLOWER_RIGHT
# 64 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 16, 12, METATILE_PewterGym_Flowerless_Left, TRUE
# 65 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 11, 6, METATILE_PewterGym_Flower_in_pot_Left, TRUE
# 66 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_RightFlower_Text_0, MSGBOX_SIGN
# 67 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_UpdateTiles
# 68 "data/maps/DawnshoreCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 69 "data/maps/DawnshoreCity_Gym/scripts.pory"
	waitse
# 70 "data/maps/DawnshoreCity_Gym/scripts.pory"
	releaseall
	return


DawnshoreCity_Gym_LeftFlower::
# 75 "data/maps/DawnshoreCity_Gym/scripts.pory"
	goto_if_unset FLAG_PLUCKED_DAWNSHORE_FLOWER_LEFT, DawnshoreCity_Gym_LeftFlower_1
	return

DawnshoreCity_Gym_LeftFlower_1:
# 76 "data/maps/DawnshoreCity_Gym/scripts.pory"
	lockall
# 77 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setflag FLAG_PLUCKED_DAWNSHORE_FLOWER_LEFT
# 78 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_PewterGym_Flowerless_Right, TRUE
# 79 "data/maps/DawnshoreCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_PewterGym_Flower_in_pot_Right, TRUE
# 80 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_RightFlower_Text_0, MSGBOX_SIGN
# 81 "data/maps/DawnshoreCity_Gym/scripts.pory"
	call DawnshoreCity_Gym_UpdateTiles
# 82 "data/maps/DawnshoreCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 83 "data/maps/DawnshoreCity_Gym/scripts.pory"
	waitse
# 84 "data/maps/DawnshoreCity_Gym/scripts.pory"
	releaseall
	return


DawnshoreCity_Gym_Guide::
# 89 "data/maps/DawnshoreCity_Gym/scripts.pory"
	msgbox DawnshoreCity_Gym_Guide_Text_0, MSGBOX_NPC
	return


DawnshoreCity_Gym_RightFlower_Text_0:
# 66 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "You grabbed the Flower!$"

DawnshoreCity_Gym_Guide_Text_0:
# 90 "data/maps/DawnshoreCity_Gym/scripts.pory"
	.string "How's it going prospective challenger?\nWelcome to the Dawnshore Gym!\p"
	.string "This Gym is a reflection of the life\nof those that live here on the beach!\p"
	.string "You ever tried walking on hot sand?\nIt's just not doable!\p"
	.string "So jump across the boardwalks to keep\nyourself safe from the sand!\p"
	.string "Pick up the flowers as tribute to our\nbeautiful Gym Leader, and open up the\lpath to battle her!\p"
	.string "Good luck out there!$"
