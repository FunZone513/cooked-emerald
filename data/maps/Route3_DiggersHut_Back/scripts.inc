Route3_DiggersHut_Back_MapScripts::
# 2 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_DiggersHut_Back_OnLoad
	.byte 0


Route3_DiggersHut_Back_OnLoad::
# 7 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	callnative SetRoute3DiggersTunnelEncounters
# 9 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto_if_unset FLAG_BEAT_DIGGERS_HUT_RICHARD, Route3_DiggersHut_Back_OnLoad_1
	return

Route3_DiggersHut_Back_OnLoad_1:
# 10 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


Route3_DiggersHut_Back_RichardFight::
# 15 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setvar VAR_TEMP_A, 0
# 16 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_BEAT_DIGGERS_HUT_RICHARD
	return


Route3_DiggersHut_Back_Hiker::
# 20 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_HIKER, Route3_DiggersHut_Back_Hiker_Text_0, Route3_DiggersHut_Back_Hiker_Text_1
# 25 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Hiker_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_Maniac::
# 29 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_MANIAC, Route3_DiggersHut_Back_Maniac_Text_0, Route3_DiggersHut_Back_Maniac_Text_1
# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Maniac_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_BlackBelt::
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_BLACKBELT, Route3_DiggersHut_Back_BlackBelt_Text_0, Route3_DiggersHut_Back_BlackBelt_Text_1
# 43 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_BlackBelt_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_Hiker_Text_0:
# 22 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I've got sand in my boots!$"

Route3_DiggersHut_Back_Hiker_Text_1:
# 23 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "No! The sand is in my socks now!$"

Route3_DiggersHut_Back_Hiker_Text_2:
# 25 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I thought big boots would be a good\n"
	.string "idea, but not if they fill up with sand...$"

Route3_DiggersHut_Back_Maniac_Text_0:
# 31 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You ever wondered what sand tastes\nlike?$"

Route3_DiggersHut_Back_Maniac_Text_1:
# 32 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Blegh, sand everywhere.$"

Route3_DiggersHut_Back_Maniac_Text_2:
# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I'm not one to get my hands dirty,\nso I normally hire people to dig for me.$"

Route3_DiggersHut_Back_BlackBelt_Text_0:
# 40 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "AH! DON'T SCARE ME LIKE THAT!$"

Route3_DiggersHut_Back_BlackBelt_Text_1:
# 41 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "JUMPSTARTS AREN'T GOOD FOR MY HEART!$"

Route3_DiggersHut_Back_BlackBelt_Text_2:
# 43 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I'm using my bare hands to dig through\n"
	.string "these rocks, but I think rock might be\l"
	.string "super-effective on bone.$"
