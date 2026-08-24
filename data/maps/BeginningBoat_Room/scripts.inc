BeginningBoat_Room_MapScripts::
# 2 "data/maps/BeginningBoat_Room/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BeginningBoat_Room_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BeginningBoat_Room_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BeginningBoat_Room/scripts.pory"
	map_script_2 VAR_GAME_PROGRESS, GP_NOT_STARTED, BeginningBoat_Room_JumpOutOfBed
	.2byte 0


BeginningBoat_Room_Bag::
# 8 "data/maps/BeginningBoat_Room/scripts.pory"
	lock
# 9 "data/maps/BeginningBoat_Room/scripts.pory"
	message BeginningBoat_Room_Bag_Text_0
# 10 "data/maps/BeginningBoat_Room/scripts.pory"
	multichoice 25, 5, MULTI_STARTER_SETTINGS, 0
# 11 "data/maps/BeginningBoat_Room/scripts.pory"
	closemessage
# 12 "data/maps/BeginningBoat_Room/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/BeginningBoat_Room/scripts.pory"
	case 0, BeginningBoat_Room_Bag_3
# 14 "data/maps/BeginningBoat_Room/scripts.pory"
	case 1, BeginningBoat_Room_Bag_4
# 15 "data/maps/BeginningBoat_Room/scripts.pory"
	case 2, BeginningBoat_Room_Bag_5
BeginningBoat_Room_Bag_1:
# 17 "data/maps/BeginningBoat_Room/scripts.pory"
	releaseall
	return

BeginningBoat_Room_Bag_3:
# 13 "data/maps/BeginningBoat_Room/scripts.pory"
	goto StarterSettings_LEVELCAP
	goto BeginningBoat_Room_Bag_1

BeginningBoat_Room_Bag_4:
# 14 "data/maps/BeginningBoat_Room/scripts.pory"
	goto StarterSettings_EXPSHARE
	goto BeginningBoat_Room_Bag_1

BeginningBoat_Room_Bag_5:
# 15 "data/maps/BeginningBoat_Room/scripts.pory"
	goto StarterSettings_EXPBOOST
	goto BeginningBoat_Room_Bag_1


StarterSettings_LEVELCAP::
# 21 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_CURRENT_LEVEL_CAP, 100
	goto_if_lt StarterSettings_LEVELCAP_2
# 30 "data/maps/BeginningBoat_Room/scripts.pory"
	message StarterSettings_LEVELCAP_Text_2
# 31 "data/maps/BeginningBoat_Room/scripts.pory"
	multichoice 25, 5, MULTI_ONOFF, 0
# 32 "data/maps/BeginningBoat_Room/scripts.pory"
	closemessage
# 33 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq StarterSettings_LEVELCAP_7
StarterSettings_LEVELCAP_1:
# 38 "data/maps/BeginningBoat_Room/scripts.pory"
	goto BeginningBoat_Room_Bag
	return

StarterSettings_LEVELCAP_2:
# 22 "data/maps/BeginningBoat_Room/scripts.pory"
	message StarterSettings_LEVELCAP_Text_0
# 23 "data/maps/BeginningBoat_Room/scripts.pory"
	multichoice 25, 5, MULTI_ONOFF, 0
# 24 "data/maps/BeginningBoat_Room/scripts.pory"
	closemessage
# 25 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq StarterSettings_LEVELCAP_5
	goto StarterSettings_LEVELCAP_1

StarterSettings_LEVELCAP_5:
# 26 "data/maps/BeginningBoat_Room/scripts.pory"
	setvar VAR_CURRENT_LEVEL_CAP, 100
# 27 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_LEVELCAP_Text_1, MSGBOX_DEFAULT
	goto StarterSettings_LEVELCAP_1

StarterSettings_LEVELCAP_7:
# 34 "data/maps/BeginningBoat_Room/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 35 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_LEVELCAP_Text_3, MSGBOX_DEFAULT
	goto StarterSettings_LEVELCAP_1


StarterSettings_EXPSHARE::
# 42 "data/maps/BeginningBoat_Room/scripts.pory"
	goto_if_set FLAG_SHARED_EXP, StarterSettings_EXPSHARE_2
# 51 "data/maps/BeginningBoat_Room/scripts.pory"
	message StarterSettings_EXPSHARE_Text_2
# 52 "data/maps/BeginningBoat_Room/scripts.pory"
	multichoice 25, 5, MULTI_ONOFF, 0
# 53 "data/maps/BeginningBoat_Room/scripts.pory"
	closemessage
# 54 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq StarterSettings_EXPSHARE_7
StarterSettings_EXPSHARE_1:
# 59 "data/maps/BeginningBoat_Room/scripts.pory"
	goto BeginningBoat_Room_Bag
	return

StarterSettings_EXPSHARE_2:
# 43 "data/maps/BeginningBoat_Room/scripts.pory"
	message StarterSettings_EXPSHARE_Text_0
# 44 "data/maps/BeginningBoat_Room/scripts.pory"
	multichoice 25, 5, MULTI_ONOFF, 0
# 45 "data/maps/BeginningBoat_Room/scripts.pory"
	closemessage
# 46 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq StarterSettings_EXPSHARE_5
	goto StarterSettings_EXPSHARE_1

StarterSettings_EXPSHARE_5:
# 47 "data/maps/BeginningBoat_Room/scripts.pory"
	clearflag FLAG_SHARED_EXP
# 48 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_EXPSHARE_Text_1, MSGBOX_DEFAULT
	goto StarterSettings_EXPSHARE_1

StarterSettings_EXPSHARE_7:
# 55 "data/maps/BeginningBoat_Room/scripts.pory"
	setflag FLAG_SHARED_EXP
# 56 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_EXPSHARE_Text_3, MSGBOX_DEFAULT
	goto StarterSettings_EXPSHARE_1


StarterSettings_EXPBOOST::
# 63 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_EXPBOOST_Text_0, MSGBOX_YESNO
# 64 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq StarterSettings_EXPBOOST_2
# 68 "data/maps/BeginningBoat_Room/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 20
# 69 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_EXPBOOST_Text_2, MSGBOX_DEFAULT
StarterSettings_EXPBOOST_1:
# 71 "data/maps/BeginningBoat_Room/scripts.pory"
	goto BeginningBoat_Room_Bag
	return

StarterSettings_EXPBOOST_2:
# 65 "data/maps/BeginningBoat_Room/scripts.pory"
	setvar VAR_INCREASE_EXP_GAIN, 50
# 66 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox StarterSettings_EXPBOOST_Text_1, MSGBOX_DEFAULT
	goto StarterSettings_EXPBOOST_1


BeginningBoat_Room_WarpTrigger::
# 75 "data/maps/BeginningBoat_Room/scripts.pory"
	msgbox BeginningBoat_Room_WarpTrigger_Text_0, MSGBOX_YESNO
# 76 "data/maps/BeginningBoat_Room/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BeginningBoat_Room_WarpTrigger_2
# 79 "data/maps/BeginningBoat_Room/scripts.pory"
	applymovement LOCALID_PLAYER, BeginningBoat_Room_WarpTrigger_Movement_0
# 80 "data/maps/BeginningBoat_Room/scripts.pory"
	waitmovement 0
BeginningBoat_Room_WarpTrigger_1:
# 82 "data/maps/BeginningBoat_Room/scripts.pory"
	releaseall
	return

BeginningBoat_Room_WarpTrigger_2:
# 77 "data/maps/BeginningBoat_Room/scripts.pory"
	warp MAP_BEGINNING_BOAT, 0
	goto BeginningBoat_Room_WarpTrigger_1


BeginningBoat_Room_JumpOutOfBed::
# 86 "data/maps/BeginningBoat_Room/scripts.pory"
	lock
# 87 "data/maps/BeginningBoat_Room/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_BOAT_ROOM
# 88 "data/maps/BeginningBoat_Room/scripts.pory"
	playse SE_LEDGE
# 89 "data/maps/BeginningBoat_Room/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BeginningBoat_Room_JumpOutOfBed_Movement_0
# 90 "data/maps/BeginningBoat_Room/scripts.pory"
	waitmovement 0
# 91 "data/maps/BeginningBoat_Room/scripts.pory"
	call Generic_DefaultSettings
# 92 "data/maps/BeginningBoat_Room/scripts.pory"
	release
	return


# 79 "data/maps/BeginningBoat_Room/scripts.pory"
BeginningBoat_Room_WarpTrigger_Movement_0:
# 79 "data/maps/BeginningBoat_Room/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/BeginningBoat_Room/scripts.pory"
BeginningBoat_Room_JumpOutOfBed_Movement_0:
# 89 "data/maps/BeginningBoat_Room/scripts.pory"
	set_visible
# 89 "data/maps/BeginningBoat_Room/scripts.pory"
	jump_left
# 89 "data/maps/BeginningBoat_Room/scripts.pory"
	delay_16
	step_end

BeginningBoat_Room_Bag_Text_0:
# 9 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Gameplay settings.\nThese can't be changed later.$"

StarterSettings_LEVELCAP_Text_0:
# 22 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Levelcaps stop you from over levelling.\nCurrently ON.$"

StarterSettings_LEVELCAP_Text_1:
# 27 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Levelcaps have been disabled.$"

StarterSettings_LEVELCAP_Text_2:
# 30 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Levelcaps stop you from over levelling.\nCurrently OFF.$"

StarterSettings_LEVELCAP_Text_3:
# 35 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Levelcaps have been enabled.$"

StarterSettings_EXPSHARE_Text_0:
# 43 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Party-wide exp is currently ON.$"

StarterSettings_EXPSHARE_Text_1:
# 48 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Party-wide exp has been disabled.$"

StarterSettings_EXPSHARE_Text_2:
# 51 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Party-wide exp is currently OFF.$"

StarterSettings_EXPSHARE_Text_3:
# 56 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Party-wide exp has been enabled.$"

StarterSettings_EXPBOOST_Text_0:
# 63 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Exp gain is always increased compared\nto vanilla to reduce grind.\pDo you wish to increase it further?\n( +20% -> +50% )$"

StarterSettings_EXPBOOST_Text_1:
# 66 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Exp gain is increased further.$"

StarterSettings_EXPBOOST_Text_2:
# 69 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Exp gain has normal increase.$"

BeginningBoat_Room_WarpTrigger_Text_0:
# 75 "data/maps/BeginningBoat_Room/scripts.pory"
	.string "Are you finished in here?$"
