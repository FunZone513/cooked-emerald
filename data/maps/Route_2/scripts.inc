Route_2_MapScripts::
# 2 "data/maps/Route_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_2_OnLoad
	.byte 0


Route_2_OnLoad::
# 6 "data/maps/Route_2/scripts.pory"
	goto_if_set FLAG_ITEM_ROUTE2_2, Route_2_OnLoad_2
Route_2_OnLoad_1:
# 9 "data/maps/Route_2/scripts.pory"
	random 6
# 10 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route_2_OnLoad_5
Route_2_OnLoad_4:
# 11 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne Route_2_OnLoad_8
Route_2_OnLoad_7:
# 12 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ne Route_2_OnLoad_11
Route_2_OnLoad_10:
# 13 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_ne Route_2_OnLoad_14
Route_2_OnLoad_13:
# 14 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_ne Route_2_OnLoad_17
Route_2_OnLoad_16:
# 15 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_ne Route_2_OnLoad_19
	return

Route_2_OnLoad_2:
# 6 "data/maps/Route_2/scripts.pory"
	setmetatile 21, 20, METATILE_General_SandPit_Center, FALSE
	goto Route_2_OnLoad_1

Route_2_OnLoad_5:
# 10 "data/maps/Route_2/scripts.pory"
	setmetatile 14, 11, METATILE_General_SandPit_Center, FALSE
	goto Route_2_OnLoad_4

Route_2_OnLoad_8:
# 11 "data/maps/Route_2/scripts.pory"
	setmetatile 19, 14, METATILE_General_SandPit_Center, FALSE
	goto Route_2_OnLoad_7

Route_2_OnLoad_11:
# 12 "data/maps/Route_2/scripts.pory"
	setmetatile 18, 18, METATILE_General_SandPit_Center, FALSE
	goto Route_2_OnLoad_10

Route_2_OnLoad_14:
# 13 "data/maps/Route_2/scripts.pory"
	setmetatile 13, 21, METATILE_General_SandPit_Center, FALSE
	goto Route_2_OnLoad_13

Route_2_OnLoad_17:
# 14 "data/maps/Route_2/scripts.pory"
	setmetatile 17, 23, METATILE_General_SandPit_Center, FALSE
	goto Route_2_OnLoad_16

Route_2_OnLoad_19:
# 15 "data/maps/Route_2/scripts.pory"
	setmetatile 11, 25, METATILE_General_SandPit_Center, FALSE
	return


Route_2_Youngster::
# 19 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_YOUNGSTER, Route_2_Youngster_Text_0, Route_2_Youngster_Text_1
# 24 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Youngster_Text_2, MSGBOX_NPC
	return


Route_2_Beauty::
# 28 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_BEAUTY, Route_2_Beauty_Text_0, Route_2_Beauty_Text_1
# 33 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Beauty_Text_2, MSGBOX_NPC
	return


Route_2_Tuber::
# 37 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TUBER, Route_2_Tuber_Text_0, Route_2_Tuber_Text_1
# 42 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Tuber_Text_2, MSGBOX_NPC
	return


Route_2_Runner::
# 46 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_RUNNER, Route_2_Runner_Text_0, Route_2_Runner_Text_1
# 51 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Runner_Text_2, MSGBOX_NPC
	return


Route_2_Fisherman::
# 55 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_FISHERMAN, Route_2_Fisherman_Text_0, Route_2_Fisherman_Text_1
# 60 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_2, MSGBOX_NPC
	return


Route_2_Hiker::
# 64 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_HIKER, Route_2_Hiker_Text_0, Route_2_Hiker_Text_1
# 69 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Hiker_Text_2, MSGBOX_NPC
	return


Route_2_Youngster_Text_0:
# 21 "data/maps/Route_2/scripts.pory"
	.string "I'm going to beat you to show off\nhow cool I am!$"

Route_2_Youngster_Text_1:
# 22 "data/maps/Route_2/scripts.pory"
	.string "No! You're embarrassing me!$"

Route_2_Youngster_Text_2:
# 24 "data/maps/Route_2/scripts.pory"
	.string "I'm trying to look good in front of\nthis girl, but my Pokemon are too weak...$"

Route_2_Beauty_Text_0:
# 30 "data/maps/Route_2/scripts.pory"
	.string "This kid follows me around like a\nLillipup.$"

Route_2_Beauty_Text_1:
# 31 "data/maps/Route_2/scripts.pory"
	.string "Haha,\nit's kinda cute how hard he's trying.$"

Route_2_Beauty_Text_2:
# 33 "data/maps/Route_2/scripts.pory"
	.string "Maybe when he gets a little older...$"

Route_2_Tuber_Text_0:
# 39 "data/maps/Route_2/scripts.pory"
	.string "Splish Splash!$"

Route_2_Tuber_Text_1:
# 40 "data/maps/Route_2/scripts.pory"
	.string "Sploosh...$"

Route_2_Tuber_Text_2:
# 42 "data/maps/Route_2/scripts.pory"
	.string "The waves tickle my toes!$"

Route_2_Runner_Text_0:
# 48 "data/maps/Route_2/scripts.pory"
	.string "Oh yeah!$"

Route_2_Runner_Text_1:
# 49 "data/maps/Route_2/scripts.pory"
	.string "Oh no!$"

Route_2_Runner_Text_2:
# 51 "data/maps/Route_2/scripts.pory"
	.string "Running with my 'Mons makes for a\ngood workout!$"

Route_2_Fisherman_Text_0:
# 57 "data/maps/Route_2/scripts.pory"
	.string "I was fishing for Pokemon,\nbut I've caught a trainer instead!$"

Route_2_Fisherman_Text_1:
# 58 "data/maps/Route_2/scripts.pory"
	.string "Throw me back!$"

Route_2_Fisherman_Text_2:
# 60 "data/maps/Route_2/scripts.pory"
	.string "My friend has a secret fishing spot\n"
	.string "over on Route 3 that he likes to chill\l"
	.string "at.$"

Route_2_Hiker_Text_0:
# 66 "data/maps/Route_2/scripts.pory"
	.string "Whew, climbing up here really winded me.$"

Route_2_Hiker_Text_1:
# 67 "data/maps/Route_2/scripts.pory"
	.string "Wait! I hadn't caught my breath yet!$"

Route_2_Hiker_Text_2:
# 69 "data/maps/Route_2/scripts.pory"
	.string "After my surgery I can't hike like I\nused to, but at least I can relive some\lof the joy of it up here.$"
