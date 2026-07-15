Route_1_MapScripts::
	.byte 0


Route_1_OW_Mon::
# 4 "data/maps/Route_1/scripts.pory"
	message Route_1_OW_Mon_Text_0
# 5 "data/maps/Route_1/scripts.pory"
	waitmessage
# 6 "data/maps/Route_1/scripts.pory"
	waitbuttonpress
# 7 "data/maps/Route_1/scripts.pory"
	playse SE_PIN
# 8 "data/maps/Route_1/scripts.pory"
	applymovement OW_MON, Route_1_OW_Mon_Movement_0
# 9 "data/maps/Route_1/scripts.pory"
	waitse
# 10 "data/maps/Route_1/scripts.pory"
	playmoncry SPECIES_PARAS, CRY_MODE_ENCOUNTER
# 11 "data/maps/Route_1/scripts.pory"
	waitmovement 0
# 12 "data/maps/Route_1/scripts.pory"
	applymovement OW_MON, Route_1_OW_Mon_Movement_1
# 13 "data/maps/Route_1/scripts.pory"
	waitmoncry
# 14 "data/maps/Route_1/scripts.pory"
	waitmovement 0
# 15 "data/maps/Route_1/scripts.pory"
	msgbox Route_1_OW_Mon_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/Route_1/scripts.pory"
	setwildbattle SPECIES_PARAS, 5
# 17 "data/maps/Route_1/scripts.pory"
	dowildbattle
# 18 "data/maps/Route_1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/Route_1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Route_1_OW_Mon_2
# 19 "data/maps/Route_1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Route_1_OW_Mon_2
# 19 "data/maps/Route_1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq Route_1_OW_Mon_2
# 23 "data/maps/Route_1/scripts.pory"
	applymovement OW_MON, Route_1_OW_Mon_Movement_2
# 24 "data/maps/Route_1/scripts.pory"
	waitmovement 0
Route_1_OW_Mon_1:
# 26 "data/maps/Route_1/scripts.pory"
	releaseall
	return

Route_1_OW_Mon_2:
# 20 "data/maps/Route_1/scripts.pory"
	setflag FLAG_BEAT_ROUTE1_OW_MON
# 21 "data/maps/Route_1/scripts.pory"
	removeobject OW_MON
	goto Route_1_OW_Mon_1


Route_1_Fisherman::
# 30 "data/maps/Route_1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_FISHERMAN, Route_1_Fisherman_Text_0, Route_1_Fisherman_Text_1
# 35 "data/maps/Route_1/scripts.pory"
	msgbox Route_1_Fisherman_Text_2, MSGBOX_NPC
	return


Route_1_SchoolKid::
# 39 "data/maps/Route_1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_SCHOOLKID, Route_1_SchoolKid_Text_0, Route_1_SchoolKid_Text_1
# 44 "data/maps/Route_1/scripts.pory"
	msgbox Route_1_SchoolKid_Text_2, MSGBOX_NPC
	return


Route_1_BugCatcher::
# 48 "data/maps/Route_1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_BUG_CATCHER, Route_1_BugCatcher_Text_0, Route_1_BugCatcher_Text_1
# 53 "data/maps/Route_1/scripts.pory"
	msgbox Route_1_BugCatcher_Text_2, MSGBOX_NPC
	return


Route_1_Picnicker::
# 57 "data/maps/Route_1/scripts.pory"
	trainerbattle_single TRAINER_ROUTE1_PICNICKER, Route_1_Picnicker_Text_0, Route_1_Picnicker_Text_1
# 62 "data/maps/Route_1/scripts.pory"
	msgbox Route_1_Picnicker_Text_2, MSGBOX_NPC
	return


# 8 "data/maps/Route_1/scripts.pory"
Route_1_OW_Mon_Movement_0:
# 8 "data/maps/Route_1/scripts.pory"
	emote_exclamation_mark
# 8 "data/maps/Route_1/scripts.pory"
	delay_8
# 8 "data/maps/Route_1/scripts.pory"
	face_down
	step_end

# 12 "data/maps/Route_1/scripts.pory"
Route_1_OW_Mon_Movement_1:
# 12 "data/maps/Route_1/scripts.pory"
	walk_in_place_slow_down
	step_end

# 23 "data/maps/Route_1/scripts.pory"
Route_1_OW_Mon_Movement_2:
# 23 "data/maps/Route_1/scripts.pory"
	walk_in_place_up
	step_end

Route_1_OW_Mon_Text_0:
# 4 "data/maps/Route_1/scripts.pory"
	.string "It looks like a Pokemon is playing\nwith an item...$"

Route_1_OW_Mon_Text_1:
# 15 "data/maps/Route_1/scripts.pory"
	.string "Oh no! The Pokemon attacked!$"

Route_1_Fisherman_Text_0:
# 32 "data/maps/Route_1/scripts.pory"
	.string "I'm trying to catch some Pokemon here!$"

Route_1_Fisherman_Text_1:
# 33 "data/maps/Route_1/scripts.pory"
	.string "If only I'd caught another one...$"

Route_1_Fisherman_Text_2:
# 35 "data/maps/Route_1/scripts.pory"
	.string "It looks like there's something in the\n"
	.string "middle of the lake.$"

Route_1_SchoolKid_Text_0:
# 41 "data/maps/Route_1/scripts.pory"
	.string "Hey you're new here right?\nThat means you're weak!$"

Route_1_SchoolKid_Text_1:
# 42 "data/maps/Route_1/scripts.pory"
	.string "Woah you're not weak at all!$"

Route_1_SchoolKid_Text_2:
# 44 "data/maps/Route_1/scripts.pory"
	.string "Man you're no joke!$"

Route_1_BugCatcher_Text_0:
# 50 "data/maps/Route_1/scripts.pory"
	.string "Go!$"

Route_1_BugCatcher_Text_1:
# 51 "data/maps/Route_1/scripts.pory"
	.string "Bweh!$"

Route_1_BugCatcher_Text_2:
# 53 "data/maps/Route_1/scripts.pory"
	.string "My sister is scared of my Pokemon, but I\n"
	.string "think it's pretty cute.$"

Route_1_Picnicker_Text_0:
# 59 "data/maps/Route_1/scripts.pory"
	.string "Going for a stroll?$"

Route_1_Picnicker_Text_1:
# 60 "data/maps/Route_1/scripts.pory"
	.string "Hey, you're not too shabby!$"

Route_1_Picnicker_Text_2:
# 62 "data/maps/Route_1/scripts.pory"
	.string "The water in this lake is nice and cool,\n"
	.string "so it makes for a great camping spot.$"
