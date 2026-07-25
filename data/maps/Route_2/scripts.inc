Route_2_MapScripts::
	.byte 0


Route_2_Youngster::
# 4 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_YOUNGSTER, Route_2_Youngster_Text_0, Route_2_Youngster_Text_1
# 9 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Youngster_Text_2, MSGBOX_NPC
	return


Route_2_Beauty::
# 13 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_BEAUTY, Route_2_Beauty_Text_0, Route_2_Beauty_Text_1
# 18 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Beauty_Text_2, MSGBOX_NPC
	return


Route_2_Tuber::
# 22 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TUBER, Route_2_Tuber_Text_0, Route_2_Tuber_Text_1
# 27 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Tuber_Text_2, MSGBOX_NPC
	return


Route_2_Runner::
# 31 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_RUNNER, Route_2_Runner_Text_0, Route_2_Runner_Text_1
# 36 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Runner_Text_2, MSGBOX_NPC
	return


Route_2_Fisherman::
# 40 "data/maps/Route_2/scripts.pory"
	checktrainerflag TRAINER_ROUTE2_FISHERMAN
	goto_if 0, Route_2_Fisherman_1
# 61 "data/maps/Route_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, Route_2_Fisherman_7
# 67 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_6, MSGBOX_NPC
	return

Route_2_Fisherman_1:
# 41 "data/maps/Route_2/scripts.pory"
	lock
# 42 "data/maps/Route_2/scripts.pory"
	face_player
# 43 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_0, MSGBOX_YESNO
# 44 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_2_Fisherman_4
# 58 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_5, MSGBOX_NPC
	return

Route_2_Fisherman_4:
# 45 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_FISHERMAN, Route_2_Fisherman_Text_1, Route_2_Fisherman_Text_2
# 50 "data/maps/Route_2/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data/maps/Route_2/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route_2_Fisherman_10
	return

Route_2_Fisherman_7:
# 62 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_3, MSGBOX_NPC
# 63 "data/maps/Route_2/scripts.pory"
	giveitem ITEM_OLD_ROD
# 64 "data/maps/Route_2/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 65 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_4, MSGBOX_NPC
	return

Route_2_Fisherman_10:
# 52 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_3, MSGBOX_NPC
# 53 "data/maps/Route_2/scripts.pory"
	giveitem ITEM_OLD_ROD
# 54 "data/maps/Route_2/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 55 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Fisherman_Text_4, MSGBOX_NPC
	return


Route_2_Hiker::
# 74 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_HIKER, Route_2_Hiker_Text_0, Route_2_Hiker_Text_1
# 79 "data/maps/Route_2/scripts.pory"
	msgbox Route_2_Hiker_Text_2, MSGBOX_NPC
	return


Route_2_Youngster_Text_0:
# 6 "data/maps/Route_2/scripts.pory"
	.string "I'm going to beat you to show off\nhow cool I am!$"

Route_2_Youngster_Text_1:
# 7 "data/maps/Route_2/scripts.pory"
	.string "No! You're embarrassing me!$"

Route_2_Youngster_Text_2:
# 9 "data/maps/Route_2/scripts.pory"
	.string "I'm trying to look good in front of\nthis girl, but my Pokemon are too weak...$"

Route_2_Beauty_Text_0:
# 15 "data/maps/Route_2/scripts.pory"
	.string "This kid follows me around like a\nLillipup.$"

Route_2_Beauty_Text_1:
# 16 "data/maps/Route_2/scripts.pory"
	.string "Haha,\nit's kinda cute how hard he's trying.$"

Route_2_Beauty_Text_2:
# 18 "data/maps/Route_2/scripts.pory"
	.string "Maybe when he gets a little older...$"

Route_2_Tuber_Text_0:
# 24 "data/maps/Route_2/scripts.pory"
	.string "Splish Splash!$"

Route_2_Tuber_Text_1:
# 25 "data/maps/Route_2/scripts.pory"
	.string "Sploosh...$"

Route_2_Tuber_Text_2:
# 27 "data/maps/Route_2/scripts.pory"
	.string "The waves tickle my toes!$"

Route_2_Runner_Text_0:
# 33 "data/maps/Route_2/scripts.pory"
	.string "Oh yeah!$"

Route_2_Runner_Text_1:
# 34 "data/maps/Route_2/scripts.pory"
	.string "Oh no!$"

Route_2_Runner_Text_2:
# 36 "data/maps/Route_2/scripts.pory"
	.string "Running with my 'Mons makes for a\ngood workout!$"

Route_2_Fisherman_Text_0:
# 43 "data/maps/Route_2/scripts.pory"
	.string "I give out spare fishing rods to those\nthat beat me in battle.\pCare to give it a try?$"

Route_2_Fisherman_Text_1:
# 47 "data/maps/Route_2/scripts.pory"
	.string "Let's see if you have what it takes!$"

Route_2_Fisherman_Text_2:
# 48 "data/maps/Route_2/scripts.pory"
	.string "Looks like we have a freshly\ncaught fisherman over here!$"

Route_2_Fisherman_Text_3:
# 52 "data/maps/Route_2/scripts.pory"
	.string "I'm a man of my word, here you go!$"

Route_2_Fisherman_Text_4:
# 55 "data/maps/Route_2/scripts.pory"
	.string "Good luck with your fishing adventures!$"

Route_2_Fisherman_Text_5:
# 58 "data/maps/Route_2/scripts.pory"
	.string "Well if you fancy giving fishing a try,\nyou know where to find me.$"

Route_2_Fisherman_Text_6:
# 67 "data/maps/Route_2/scripts.pory"
	.string "I hope your fishing is going well!$"

Route_2_Hiker_Text_0:
# 76 "data/maps/Route_2/scripts.pory"
	.string "Whew, climbing up here really winded me.$"

Route_2_Hiker_Text_1:
# 77 "data/maps/Route_2/scripts.pory"
	.string "Wait! I hadn't caught my breath yet!$"

Route_2_Hiker_Text_2:
# 79 "data/maps/Route_2/scripts.pory"
	.string "After my surgery I can't hike like I\nused to, but at least I can relive some\lof the joy of it up here.$"
