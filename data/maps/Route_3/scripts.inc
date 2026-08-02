Route_3_MapScripts::
# 2 "data/maps/Route_3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_3_OnLoad
# 3 "data/maps/Route_3/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route_3_OnResume
	.byte 0


Route_3_OnLoad::
	return


Route_3_OnResume::
# 13 "data/maps/Route_3/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 14 "data/maps/Route_3/scripts.pory"
	compare VAR_TEMP_1, 8
	goto_if_eq Route_3_OnResume_2
	return

Route_3_OnResume_1:
# 15 "data/maps/Route_3/scripts.pory"
	goto_if_set FLAG_TEST_FISHING, Route_3_OnResume_5
	return

Route_3_OnResume_2:
# 14 "data/maps/Route_3/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq Route_3_OnResume_1
	return

Route_3_OnResume_5:
# 16 "data/maps/Route_3/scripts.pory"
	goto_if_set FLAG_TEST_FISHING_CAUGHT, Route_3_OnResume_7
# 18 "data/maps/Route_3/scripts.pory"
	setvar VAR_TEMP_A, 1
	return

Route_3_OnResume_7:
# 17 "data/maps/Route_3/scripts.pory"
	goto Route_3_Fisherman_Success
	return


Route_3_DisableFishingFlag::
# 24 "data/maps/Route_3/scripts.pory"
	goto_if_set FLAG_TEST_FISHING, Route_3_DisableFishingFlag_1
	return

Route_3_DisableFishingFlag_1:
# 25 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_DisableFishingFlag_Text_0, MSGBOX_YESNO
# 26 "data/maps/Route_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_3_DisableFishingFlag_3
# 31 "data/maps/Route_3/scripts.pory"
	lock
# 32 "data/maps/Route_3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route_3_DisableFishingFlag_Movement_0
# 33 "data/maps/Route_3/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route_3/scripts.pory"
	release
	return

Route_3_DisableFishingFlag_3:
# 27 "data/maps/Route_3/scripts.pory"
	clearflag FLAG_TEST_FISHING
# 28 "data/maps/Route_3/scripts.pory"
	setvar VAR_TEMP_A, 0
# 29 "data/maps/Route_3/scripts.pory"
	removeitem ITEM_OLD_ROD
	return


Route_3_Fisherman::
# 40 "data/maps/Route_3/scripts.pory"
	goto_if_set FLAG_TEST_FISHING, Route_3_Fisherman_1
# 61 "data/maps/Route_3/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, Route_3_Fisherman_7
# 65 "data/maps/Route_3/scripts.pory"
	goto_if_unset FLAG_TEST_FISHING_TALKED, Route_3_Fisherman_13
# 88 "data/maps/Route_3/scripts.pory"
	lock
# 89 "data/maps/Route_3/scripts.pory"
	faceplayer
# 90 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Text_4, MSGBOX_YESNO
# 91 "data/maps/Route_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_3_Fisherman_19
# 93 "data/maps/Route_3/scripts.pory"
	goto Route_3_Fisherman_Decline
	return

Route_3_Fisherman_1:
# 41 "data/maps/Route_3/scripts.pory"
	goto_if_unset FLAG_TEST_FISHING_CAUGHT, Route_3_Fisherman_4
# 56 "data/maps/Route_3/scripts.pory"
	goto Route_3_Fisherman_Success
	return

Route_3_Fisherman_4:
# 42 "data/maps/Route_3/scripts.pory"
	lock
# 43 "data/maps/Route_3/scripts.pory"
	faceplayer
# 44 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Text_0, MSGBOX_YESNO
# 49 "data/maps/Route_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_3_Fisherman_11
Route_3_Fisherman_10:
# 54 "data/maps/Route_3/scripts.pory"
	releaseall
	return

Route_3_Fisherman_7:
# 62 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Text_1, MSGBOX_NPC
	return

Route_3_Fisherman_11:
# 50 "data/maps/Route_3/scripts.pory"
	clearflag FLAG_TEST_FISHING
# 51 "data/maps/Route_3/scripts.pory"
	removeitem ITEM_OLD_ROD
# 52 "data/maps/Route_3/scripts.pory"
	setvar VAR_TEMP_A, 0
	goto Route_3_Fisherman_10

Route_3_Fisherman_13:
# 66 "data/maps/Route_3/scripts.pory"
	setflag FLAG_TEST_FISHING_TALKED
# 67 "data/maps/Route_3/scripts.pory"
	lock
# 68 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Text_2, MSGBOX_DEFAULT
# 69 "data/maps/Route_3/scripts.pory"
	waitmessage
# 70 "data/maps/Route_3/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Route_3/scripts.pory"
	applymovement LOCALID_FISHERMAN, Route_3_Fisherman_Movement_0
# 72 "data/maps/Route_3/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route_3/scripts.pory"
	faceplayer
# 74 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Text_3, MSGBOX_YESNO
# 83 "data/maps/Route_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route_3_Fisherman_16
# 85 "data/maps/Route_3/scripts.pory"
	goto Route_3_Fisherman_Decline
	return

Route_3_Fisherman_16:
# 84 "data/maps/Route_3/scripts.pory"
	goto Route_3_Fisherman_Explain
	return

Route_3_Fisherman_19:
# 92 "data/maps/Route_3/scripts.pory"
	goto Route_3_Fisherman_Explain
	return


Route_3_Fisherman_Decline::
# 100 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Decline_Text_0, MSGBOX_DEFAULT
# 101 "data/maps/Route_3/scripts.pory"
	applymovement LOCALID_FISHERMAN, Route_3_Fisherman_Decline_Movement_0
# 102 "data/maps/Route_3/scripts.pory"
	waitmovement 0
# 103 "data/maps/Route_3/scripts.pory"
	releaseall
	return


Route_3_Fisherman_Explain::
# 107 "data/maps/Route_3/scripts.pory"
	setflag FLAG_TEST_FISHING
# 108 "data/maps/Route_3/scripts.pory"
	setvar VAR_TEMP_A, 1
# 109 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Explain_Text_0, MSGBOX_NPC
# 114 "data/maps/Route_3/scripts.pory"
	giveitem ITEM_OLD_ROD
# 115 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Explain_Text_1, MSGBOX_AUTOCLOSE
# 116 "data/maps/Route_3/scripts.pory"
	applymovement LOCALID_FISHERMAN, Route_3_Fisherman_Decline_Movement_0
# 117 "data/maps/Route_3/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route_3/scripts.pory"
	release
	return


Route_3_Fisherman_Success::
# 122 "data/maps/Route_3/scripts.pory"
	lock
# 123 "data/maps/Route_3/scripts.pory"
	applymovement LOCALID_FISHERMAN, Route_3_Fisherman_Success_Movement_0
# 124 "data/maps/Route_3/scripts.pory"
	waitmovement 0
# 125 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Fisherman_Success_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/Route_3/scripts.pory"
	clearflag FLAG_TEST_FISHING
# 127 "data/maps/Route_3/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 128 "data/maps/Route_3/scripts.pory"
	releaseall
	return


Route_3_Picnicker::
# 132 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_PICNICKER, Route_3_Picnicker_Text_0, Route_3_Picnicker_Text_1
# 137 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Picnicker_Text_2, MSGBOX_NPC
	return


Route_3_BlackBelt::
# 141 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_BLACKBELT, Route_3_BlackBelt_Text_0, Route_3_BlackBelt_Text_1
# 146 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_BlackBelt_Text_2, MSGBOX_NPC
	return


Route_3_NinjaBoy::
# 150 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_NINJA_BOY, Route_3_NinjaBoy_Text_0, Route_3_NinjaBoy_Text_1
# 155 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_NinjaBoy_Text_2, MSGBOX_NPC
	return


Route_3_BugCatcher::
# 159 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_BUG_CATCHER, Route_3_BugCatcher_Text_0, Route_3_BugCatcher_Text_1
# 164 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_BugCatcher_Text_2, MSGBOX_NPC
	return


# 32 "data/maps/Route_3/scripts.pory"
Route_3_DisableFishingFlag_Movement_0:
# 32 "data/maps/Route_3/scripts.pory"
	walk_left
	step_end

# 71 "data/maps/Route_3/scripts.pory"
Route_3_Fisherman_Movement_0:
# 71 "data/maps/Route_3/scripts.pory"
	emote_exclamation_mark
	step_end

# 101 "data/maps/Route_3/scripts.pory"
Route_3_Fisherman_Decline_Movement_0:
# 101 "data/maps/Route_3/scripts.pory"
	face_down
	step_end

# 123 "data/maps/Route_3/scripts.pory"
Route_3_Fisherman_Success_Movement_0:
# 123 "data/maps/Route_3/scripts.pory"
	face_right
	step_end

Route_3_DisableFishingFlag_Text_0:
# 25 "data/maps/Route_3/scripts.pory"
	.string "Are you finished fishing?$"

Route_3_Fisherman_Text_0:
# 45 "data/maps/Route_3/scripts.pory"
	.string "Fishing is all about patience...\p"
	.string "But sometimes you need to know when\nto call it for the day.\p"
	.string "Are you done?$"

Route_3_Fisherman_Text_1:
# 62 "data/maps/Route_3/scripts.pory"
	.string "I hope that Ol' Rod is treating you well.$"

Route_3_Fisherman_Text_2:
# 68 "data/maps/Route_3/scripts.pory"
	.string "...What a beautiful day...\pThe smell of the sea...\nThe sun in the sky...\pFish on my rod...$"

Route_3_Fisherman_Text_3:
# 75 "data/maps/Route_3/scripts.pory"
	.string "Well hello there!\nYou're a new face around here!\p"
	.string "You must be one of the newcomers for\nthe Pokemon Adventure.\p"
	.string "I'm flattered you've come to speak to\nme, yet I have only wisdom to give.\p"
	.string "...Actually,\nI think I might have something.\p"
	.string "I have this Old Fishing Rod laying\naround I don't have a use for.\p"
	.string "Do you think you could give it a go?$"

Route_3_Fisherman_Text_4:
# 90 "data/maps/Route_3/scripts.pory"
	.string "Here to give fishing another chance?$"

Route_3_Fisherman_Decline_Text_0:
# 100 "data/maps/Route_3/scripts.pory"
	.string "I understand.\nFishing isn't for everyone after all.$"

Route_3_Fisherman_Explain_Text_0:
# 110 "data/maps/Route_3/scripts.pory"
	.string "I'll lend you my Old Rod to give it a try.\p"
	.string "The first catch might take a while since\nyou're still getting used to it,\p"
	.string "but I'm sure you'll have no troubles\nafter that.$"

Route_3_Fisherman_Explain_Text_1:
# 115 "data/maps/Route_3/scripts.pory"
	.string "Try catching something in this here\ninlet, I'll be rooting for you!$"

Route_3_Fisherman_Success_Text_0:
# 125 "data/maps/Route_3/scripts.pory"
	.string "Well done!\nI knew you had it in you!\pYou can go ahead and keep that Rod,\nI hope you catch many more with it!$"

Route_3_Picnicker_Text_0:
# 134 "data/maps/Route_3/scripts.pory"
	.string "The grass around here is dense!$"

Route_3_Picnicker_Text_1:
# 135 "data/maps/Route_3/scripts.pory"
	.string "Another loss for me...$"

Route_3_Picnicker_Text_2:
# 137 "data/maps/Route_3/scripts.pory"
	.string "If I spent more time training than\nfrolicking I would probably win more.$"

Route_3_BlackBelt_Text_0:
# 143 "data/maps/Route_3/scripts.pory"
	.string "I'M PUNCHING THIS TREE!$"

Route_3_BlackBelt_Text_1:
# 144 "data/maps/Route_3/scripts.pory"
	.string "MY KNUCKLES FAILED ME!$"

Route_3_BlackBelt_Text_2:
# 146 "data/maps/Route_3/scripts.pory"
	.string "I train alongside my Pokemon so it\ndoesn't feel forced into it.$"

Route_3_NinjaBoy_Text_0:
# 152 "data/maps/Route_3/scripts.pory"
	.string "Haha!\nBet you didn't expect this!$"

Route_3_NinjaBoy_Text_1:
# 153 "data/maps/Route_3/scripts.pory"
	.string "What? No!$"

Route_3_NinjaBoy_Text_2:
# 155 "data/maps/Route_3/scripts.pory"
	.string "How did my incredible disguise not work?$"

Route_3_BugCatcher_Text_0:
# 161 "data/maps/Route_3/scripts.pory"
	.string "...sniffle...$"

Route_3_BugCatcher_Text_1:
# 162 "data/maps/Route_3/scripts.pory"
	.string "...A-\pACHOO!$"

Route_3_BugCatcher_Text_2:
# 164 "data/maps/Route_3/scripts.pory"
	.string "Being allergic to grass makes finding\nPokemon really difficult...$"
