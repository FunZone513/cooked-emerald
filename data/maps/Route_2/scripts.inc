Route_2_MapScripts::
# 2 "data/maps/Route_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_2_OnLoad
	.byte 0


Route_2_OnLoad::
# 6 "data/maps/Route_2/scripts.pory"
	random 3
# 7 "data/maps/Route_2/scripts.pory"
	switch VAR_RESULT
# 8 "data/maps/Route_2/scripts.pory"
	case 0, Route_2_OnLoad_2
Route_2_OnLoad_2:
	return


Route_2_Youngster::
# 14 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_YOUNGSTER, Route_2_Youngster_Text_0, Route_2_Youngster_Text_1
# 19 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Youngster_Text_2, MSGBOX_NPC
	return


Route_2_Beauty::
# 23 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_BEAUTY, Route_2_Beauty_Text_0, Route_2_Beauty_Text_1
# 28 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Beauty_Text_2, MSGBOX_NPC
	return


Route_2_Tuber::
# 32 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TUBER, Route_2_Tuber_Text_0, Route_2_Tuber_Text_1
# 37 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Tuber_Text_2, MSGBOX_NPC
	return


Route_2_Runner::
# 41 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_RUNNER, Route_2_Runner_Text_0, Route_2_Runner_Text_1
# 46 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Runner_Text_2, MSGBOX_NPC
	return


Route_2_Fisherman::
# 50 "data/maps/Route_2/scripts.pory"
	checktrainerflag TRAINER_ROUTE2_FISHERMAN
	goto_if 0, Route_2_Fisherman_1
# 71 "data/maps/Route_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Route_2_Fisherman_7
# 77 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_6, MSGBOX_NPC
	return

Route_2_Fisherman_1:
# 51 "data/maps/Route_2/scripts.pory"
	lock
# 52 "data/maps/Route_2/scripts.pory"
	face_player
# 53 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_0, MSGBOX_YESNO
# 54 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_2_Fisherman_4
# 68 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_5, MSGBOX_NPC
	return

Route_2_Fisherman_4:
# 55 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_FISHERMAN, Route_2_Fisherman_Text_1, Route_2_Fisherman_Text_2
# 60 "data/maps/Route_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route_2_Fisherman_10
	return

Route_2_Fisherman_7:
# 72 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_3, MSGBOX_NPC
# 73 "data/maps/Route_2/scripts.pory"
	giveitem ITEM_OLD_ROD
# 74 "data/maps/Route_2/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 75 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_4, MSGBOX_NPC
	return

Route_2_Fisherman_10:
# 62 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_3, MSGBOX_NPC
# 63 "data/maps/Route_2/scripts.pory"
	giveitem ITEM_OLD_ROD
# 64 "data/maps/Route_2/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 65 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_4, MSGBOX_NPC
	return


Route_2_Hiker::
# 84 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_HIKER, Route_2_Hiker_Text_0, Route_2_Hiker_Text_1
# 89 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Hiker_Text_2, MSGBOX_NPC
	return


Route_2_Youngster_Text_0:
# 16 "data/maps/Route_2/scripts.pory"
	.string "I'm going to beat you to show off\nhow cool I am!$"

Route_2_Youngster_Text_1:
# 17 "data/maps/Route_2/scripts.pory"
	.string "No! You're embarrassing me!$"

Route_2_Youngster_Text_2:
# 19 "data/maps/Route_2/scripts.pory"
	.string "I'm trying to look good in front of\nthis girl, but my Pokemon are too weak...$"

Route_2_Beauty_Text_0:
# 25 "data/maps/Route_2/scripts.pory"
	.string "This kid follows me around like a\nLillipup.$"

Route_2_Beauty_Text_1:
# 26 "data/maps/Route_2/scripts.pory"
	.string "Haha,\nit's kinda cute how hard he's trying.$"

Route_2_Beauty_Text_2:
# 28 "data/maps/Route_2/scripts.pory"
	.string "Maybe when he gets a little older...$"

Route_2_Tuber_Text_0:
# 34 "data/maps/Route_2/scripts.pory"
	.string "Splish Splash!$"

Route_2_Tuber_Text_1:
# 35 "data/maps/Route_2/scripts.pory"
	.string "Sploosh...$"

Route_2_Tuber_Text_2:
# 37 "data/maps/Route_2/scripts.pory"
	.string "The waves tickle my toes!$"

Route_2_Runner_Text_0:
# 43 "data/maps/Route_2/scripts.pory"
	.string "Oh yeah!$"

Route_2_Runner_Text_1:
# 44 "data/maps/Route_2/scripts.pory"
	.string "Oh no!$"

Route_2_Runner_Text_2:
# 46 "data/maps/Route_2/scripts.pory"
	.string "Running with my 'Mons makes for a\ngood workout!$"

Route_2_Fisherman_Text_0:
# 53 "data/maps/Route_2/scripts.pory"
	.string "I give out spare fishing rods to those\nthat beat me in battle.\pCare to give it a try?$"

Route_2_Fisherman_Text_1:
# 57 "data/maps/Route_2/scripts.pory"
	.string "Let's see if you have what it takes!$"

Route_2_Fisherman_Text_2:
# 58 "data/maps/Route_2/scripts.pory"
	.string "Looks like we have a freshly\ncaught fisherman over here!$"

Route_2_Fisherman_Text_3:
# 62 "data/maps/Route_2/scripts.pory"
	.string "I'm a man of my word, here you go!$"

Route_2_Fisherman_Text_4:
# 65 "data/maps/Route_2/scripts.pory"
	.string "Good luck with your fishing adventures!$"

Route_2_Fisherman_Text_5:
# 68 "data/maps/Route_2/scripts.pory"
	.string "Well if you fancy giving fishing a try,\nyou know where to find me.$"

Route_2_Fisherman_Text_6:
# 77 "data/maps/Route_2/scripts.pory"
	.string "I hope your fishing is going well!$"

Route_2_Hiker_Text_0:
# 86 "data/maps/Route_2/scripts.pory"
	.string "Whew, climbing up here really winded me.$"

Route_2_Hiker_Text_1:
# 87 "data/maps/Route_2/scripts.pory"
	.string "Wait! I hadn't caught my breath yet!$"

Route_2_Hiker_Text_2:
# 89 "data/maps/Route_2/scripts.pory"
	.string "After my surgery I can't hike like I\nused to, but at least I can relive some\lof the joy of it up here.$"
