DawnshoreCity_MapScripts::
# 2 "data/maps/DawnshoreCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DawnshoreCity_OnLoad
	.byte 0


DawnshoreCity_OnLoad::
# 6 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_ITEM_DAWNSHORE_CITY, DawnshoreCity_OnLoad_2
DawnshoreCity_OnLoad_1:
# 10 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_ITEM_DAWNSHORE_CITY_2, DawnshoreCity_OnLoad_5
DawnshoreCity_OnLoad_4:
# 14 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_ITEM_DAWNSHORE_CITY_3, DawnshoreCity_OnLoad_8
DawnshoreCity_OnLoad_7:
# 18 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_ITEM_DAWNSHORE_CITY_4, DawnshoreCity_OnLoad_11
DawnshoreCity_OnLoad_10:
# 22 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_CLEARED_DAWNSHORE_GYM, DawnshoreCity_OnLoad_13
	return

DawnshoreCity_OnLoad_2:
# 7 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 15, 2, METATILE_General_SandPit_Center, FALSE
	goto DawnshoreCity_OnLoad_1

DawnshoreCity_OnLoad_5:
# 11 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 21, 17, METATILE_General_SandPit_Center, FALSE
	goto DawnshoreCity_OnLoad_4

DawnshoreCity_OnLoad_8:
# 15 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 8, 21, METATILE_General_SandPit_Center, FALSE
	goto DawnshoreCity_OnLoad_7

DawnshoreCity_OnLoad_11:
# 19 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 42, 31, METATILE_General_SandPit_Center, FALSE
	goto DawnshoreCity_OnLoad_10

DawnshoreCity_OnLoad_13:
# 23 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 41, 14, METATILE_General_SandPit_Center, FALSE
	return


DawnshoreCity_GymBlocker_Guy::
# 28 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_GymBlocker_Guy_Text_0, MSGBOX_NPC
	return


DawnshoreCity_GymBlocker_Sand::
# 38 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, DawnshoreCity_GymBlocker_Sand_2
# 43 "data/maps/DawnshoreCity/scripts.pory"
	getobjectxy VAR_LAST_TALKED, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 44 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPit_Center, FALSE
# 45 "data/maps/DawnshoreCity/scripts.pory"
	special DrawWholeMapView
# 46 "data/maps/DawnshoreCity/scripts.pory"
	waitse
# 47 "data/maps/DawnshoreCity/scripts.pory"
	playse SE_PIN
# 48 "data/maps/DawnshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DawnshoreCity_GymBlocker_Sand_Movement_0
# 49 "data/maps/DawnshoreCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/DawnshoreCity/scripts.pory"
	waitse
# 51 "data/maps/DawnshoreCity/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 52 "data/maps/DawnshoreCity/scripts.pory"
	switch VAR_TEMP_A
# 53 "data/maps/DawnshoreCity/scripts.pory"
	case DIR_NORTH, DawnshoreCity_GymBlocker_Sand_6
# 54 "data/maps/DawnshoreCity/scripts.pory"
	case DIR_SOUTH, DawnshoreCity_GymBlocker_Sand_7
# 55 "data/maps/DawnshoreCity/scripts.pory"
	case DIR_EAST, DawnshoreCity_GymBlocker_Sand_8
# 56 "data/maps/DawnshoreCity/scripts.pory"
	case DIR_WEST, DawnshoreCity_GymBlocker_Sand_9
DawnshoreCity_GymBlocker_Sand_4:
# 58 "data/maps/DawnshoreCity/scripts.pory"
	special DrawWholeMapView
# 59 "data/maps/DawnshoreCity/scripts.pory"
	playse SE_LEDGE
# 60 "data/maps/DawnshoreCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/DawnshoreCity/scripts.pory"
	waitse
# 62 "data/maps/DawnshoreCity/scripts.pory"
	playmoncry SPECIES_SANDYGAST, CRY_MODE_ENCOUNTER
# 63 "data/maps/DawnshoreCity/scripts.pory"
	waitmoncry
# 64 "data/maps/DawnshoreCity/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 12, ITEM_NONE, SPECIES_SANDYGAST, 12, ITEM_NONE
# 65 "data/maps/DawnshoreCity/scripts.pory"
	dowildbattle
# 66 "data/maps/DawnshoreCity/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 67 "data/maps/DawnshoreCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq DawnshoreCity_GymBlocker_Sand_11
# 67 "data/maps/DawnshoreCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq DawnshoreCity_GymBlocker_Sand_11
# 67 "data/maps/DawnshoreCity/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_DREW
	goto_if_eq DawnshoreCity_GymBlocker_Sand_11
# 71 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile VAR_TEMP_1, VAR_TEMP_2, METATILE_General_SandPile, TRUE
# 72 "data/maps/DawnshoreCity/scripts.pory"
	special DrawWholeMapView
# 73 "data/maps/DawnshoreCity/scripts.pory"
	applymovement LOCALID_DAWNSHORE_SANDMON, DawnshoreCity_GymBlocker_Sand_Movement_5
# 74 "data/maps/DawnshoreCity/scripts.pory"
	waitmovement 0
DawnshoreCity_GymBlocker_Sand_10:
# 76 "data/maps/DawnshoreCity/scripts.pory"
	releaseall
	return

DawnshoreCity_GymBlocker_Sand_2:
# 39 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_GymBlocker_Sand_Text_0, MSGBOX_AUTOCLOSE
	end

DawnshoreCity_GymBlocker_Sand_6:
# 53 "data/maps/DawnshoreCity/scripts.pory"
	applymovement LOCALID_DAWNSHORE_SANDMON, DawnshoreCity_GymBlocker_Sand_Movement_1
	goto DawnshoreCity_GymBlocker_Sand_4

DawnshoreCity_GymBlocker_Sand_7:
# 54 "data/maps/DawnshoreCity/scripts.pory"
	applymovement LOCALID_DAWNSHORE_SANDMON, DawnshoreCity_GymBlocker_Sand_Movement_2
	goto DawnshoreCity_GymBlocker_Sand_4

DawnshoreCity_GymBlocker_Sand_8:
# 55 "data/maps/DawnshoreCity/scripts.pory"
	applymovement LOCALID_DAWNSHORE_SANDMON, DawnshoreCity_GymBlocker_Sand_Movement_3
	goto DawnshoreCity_GymBlocker_Sand_4

DawnshoreCity_GymBlocker_Sand_9:
# 56 "data/maps/DawnshoreCity/scripts.pory"
	applymovement LOCALID_DAWNSHORE_SANDMON, DawnshoreCity_GymBlocker_Sand_Movement_4
	goto DawnshoreCity_GymBlocker_Sand_4

DawnshoreCity_GymBlocker_Sand_11:
# 68 "data/maps/DawnshoreCity/scripts.pory"
	setflag FLAG_CLEARED_DAWNSHORE_GYM
# 69 "data/maps/DawnshoreCity/scripts.pory"
	removeobject LOCALID_DAWNSHORE_SANDMON
	goto DawnshoreCity_GymBlocker_Sand_10


DawnshoreCity_GymSign::
# 80 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_GymSign_Text_0, MSGBOX_SIGN
	return


DawnshoreCity_CutterTree::
# 84 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_CAN_USE_CUT, DawnshoreCity_CutterTree_1
# 87 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_CutterTree_Text_1, MSGBOX_SIGN
	return

DawnshoreCity_CutterTree_1:
# 85 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_CutterTree_Text_0, MSGBOX_SIGN
	return


DawnshoreCity_CutterSign::
# 92 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_CutterSign_Text_0, MSGBOX_SIGN
	return


DawnshoreCity_Man::
# 96 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_Man_Text_0, MSGBOX_NPC
	return


DawnshoreCity_Man2::
# 100 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_Man2_Text_0, MSGBOX_NPC
	return


DawnshoreCity_FatMan::
# 104 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_FatMan_Text_0, MSGBOX_NPC
	return


DawnshoreCity_SwimmerM::
# 108 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_SwimmerM_Text_0, MSGBOX_NPC
	return


DawnshoreCity_SwimmerF::
# 112 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_SwimmerF_Text_0, MSGBOX_NPC
	return


DawnshoreCity_LittleGirl::
# 116 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_LittleGirl_Text_0, MSGBOX_NPC
	return


DawnshoreCity_Woman::
# 120 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_Woman_Text_0, MSGBOX_NPC
	return


# 48 "data/maps/DawnshoreCity/scripts.pory"
DawnshoreCity_GymBlocker_Sand_Movement_0:
# 48 "data/maps/DawnshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 53 "data/maps/DawnshoreCity/scripts.pory"
DawnshoreCity_GymBlocker_Sand_Movement_1:
# 53 "data/maps/DawnshoreCity/scripts.pory"
	set_visible
# 53 "data/maps/DawnshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 54 "data/maps/DawnshoreCity/scripts.pory"
DawnshoreCity_GymBlocker_Sand_Movement_2:
# 54 "data/maps/DawnshoreCity/scripts.pory"
	set_visible
# 54 "data/maps/DawnshoreCity/scripts.pory"
	jump_in_place_up
	step_end

# 55 "data/maps/DawnshoreCity/scripts.pory"
DawnshoreCity_GymBlocker_Sand_Movement_3:
# 55 "data/maps/DawnshoreCity/scripts.pory"
	set_visible
# 55 "data/maps/DawnshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 56 "data/maps/DawnshoreCity/scripts.pory"
DawnshoreCity_GymBlocker_Sand_Movement_4:
# 56 "data/maps/DawnshoreCity/scripts.pory"
	set_visible
# 56 "data/maps/DawnshoreCity/scripts.pory"
	jump_in_place_right
	step_end

# 73 "data/maps/DawnshoreCity/scripts.pory"
DawnshoreCity_GymBlocker_Sand_Movement_5:
# 73 "data/maps/DawnshoreCity/scripts.pory"
	set_invisible
	step_end

DawnshoreCity_GymBlocker_Guy_Text_0:
# 29 "data/maps/DawnshoreCity/scripts.pory"
	.string "You trying to get to the Gym?\nSorry about this.\p"
	.string "I've come over from the Digger's Hut\non Route 3 to clear the way,\p"
	.string "but I think there's something hiding\nin the sand.\p"
	.string "I'm not a trainer, so I can't really do\nmuch about it...\p"
	.string "If you knew how to clear the sand then\nyou'd be able to get through no problem.$"

DawnshoreCity_GymBlocker_Sand_Text_0:
# 39 "data/maps/DawnshoreCity/scripts.pory"
	.string "It looks like there might be something\nburied here...$"

DawnshoreCity_GymSign_Text_0:
# 80 "data/maps/DawnshoreCity/scripts.pory"
	.string "Dawnshore Gym:\nSun-kissed and Beach ready!$"

DawnshoreCity_CutterTree_Text_0:
# 85 "data/maps/DawnshoreCity/scripts.pory"
	.string "You probably shouldn't start cutting up\ntheir garden!$"

DawnshoreCity_CutterTree_Text_1:
# 87 "data/maps/DawnshoreCity/scripts.pory"
	.string "This tree looks like it can be\nCUT down!$"

DawnshoreCity_CutterSign_Text_0:
# 92 "data/maps/DawnshoreCity/scripts.pory"
	.string "Home of Mr. Auburn,\nTree cutting extraordinaire.$"

DawnshoreCity_Man_Text_0:
# 96 "data/maps/DawnshoreCity/scripts.pory"
	.string "My Loudred has been with me since I was\n"
	.string "a kid, it used to be so cute and quiet...$"

DawnshoreCity_Man2_Text_0:
# 100 "data/maps/DawnshoreCity/scripts.pory"
	.string "They raised the Gym's spot onto a mound\n"
	.string "for some reason.$"

DawnshoreCity_FatMan_Text_0:
# 104 "data/maps/DawnshoreCity/scripts.pory"
	.string "...do you hear a creaking sound?$"

DawnshoreCity_SwimmerM_Text_0:
# 108 "data/maps/DawnshoreCity/scripts.pory"
	.string "I would get up, but I think I've melted\n"
	.string "into the chair.$"

DawnshoreCity_SwimmerF_Text_0:
# 112 "data/maps/DawnshoreCity/scripts.pory"
	.string "The sun here is great, I love getting my\n"
	.string "tan on!$"

DawnshoreCity_LittleGirl_Text_0:
# 116 "data/maps/DawnshoreCity/scripts.pory"
	.string "The sand makes little squeaky sounds\n"
	.string "when I walk around!$"

DawnshoreCity_Woman_Text_0:
# 120 "data/maps/DawnshoreCity/scripts.pory"
	.string "Sand makes for a good leg workout, too\n"
	.string "bad it gets all up in everywhere.$"
