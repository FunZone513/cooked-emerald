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
	goto_if_set FLAG_ITEM_DAWNSHORE_CITY_3, DawnshoreCity_OnLoad_7
	return

DawnshoreCity_OnLoad_2:
# 7 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 15, 2, METATILE_General_SandPit_Center, FALSE
	goto DawnshoreCity_OnLoad_1

DawnshoreCity_OnLoad_5:
# 11 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 21, 17, METATILE_General_SandPit_Center, FALSE
	goto DawnshoreCity_OnLoad_4

DawnshoreCity_OnLoad_7:
# 15 "data/maps/DawnshoreCity/scripts.pory"
	setmetatile 8, 21, METATILE_General_SandPit_Center, FALSE
	return


DawnshoreCity_GymSign::
# 20 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_GymSign_Text_0, MSGBOX_SIGN
	return


DawnshoreCity_CutterTree::
# 24 "data/maps/DawnshoreCity/scripts.pory"
	goto_if_set FLAG_CAN_USE_CUT, DawnshoreCity_CutterTree_1
# 27 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_CutterTree_Text_1, MSGBOX_SIGN
	return

DawnshoreCity_CutterTree_1:
# 25 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_CutterTree_Text_0, MSGBOX_SIGN
	return


DawnshoreCity_CutterSign::
# 32 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_CutterSign_Text_0, MSGBOX_SIGN
	return


DawnshoreCity_Man::
# 36 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_Man_Text_0, MSGBOX_NPC
	return


DawnshoreCity_Man2::
# 40 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_Man2_Text_0, MSGBOX_NPC
	return


DawnshoreCity_FatMan::
# 44 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_FatMan_Text_0, MSGBOX_NPC
	return


DawnshoreCity_SwimmerM::
# 48 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_SwimmerM_Text_0, MSGBOX_NPC
	return


DawnshoreCity_SwimmerF::
# 52 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_SwimmerF_Text_0, MSGBOX_NPC
	return


DawnshoreCity_LittleGirl::
# 56 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_LittleGirl_Text_0, MSGBOX_NPC
	return


DawnshoreCity_Woman::
# 60 "data/maps/DawnshoreCity/scripts.pory"
	msgbox DawnshoreCity_Woman_Text_0, MSGBOX_NPC
	return


DawnshoreCity_GymSign_Text_0:
# 20 "data/maps/DawnshoreCity/scripts.pory"
	.string "Dawnshore Gym:\nSun-kissed and Beach ready!$"

DawnshoreCity_CutterTree_Text_0:
# 25 "data/maps/DawnshoreCity/scripts.pory"
	.string "You probably shouldn't start cutting up\ntheir garden!$"

DawnshoreCity_CutterTree_Text_1:
# 27 "data/maps/DawnshoreCity/scripts.pory"
	.string "This tree looks like it can be\nCUT down!$"

DawnshoreCity_CutterSign_Text_0:
# 32 "data/maps/DawnshoreCity/scripts.pory"
	.string "Home of Mr. Auburn,\nTree cutting extraordinaire.$"

DawnshoreCity_Man_Text_0:
# 36 "data/maps/DawnshoreCity/scripts.pory"
	.string "My Loudred has been with me since I was\n"
	.string "a kid, it used to be so cute and quiet...$"

DawnshoreCity_Man2_Text_0:
# 40 "data/maps/DawnshoreCity/scripts.pory"
	.string "They raised the Gym's spot onto a mound\n"
	.string "for some reason.$"

DawnshoreCity_FatMan_Text_0:
# 44 "data/maps/DawnshoreCity/scripts.pory"
	.string "...do you hear a creaking sound?$"

DawnshoreCity_SwimmerM_Text_0:
# 48 "data/maps/DawnshoreCity/scripts.pory"
	.string "I would get up, but I think I've melted\n"
	.string "into the chair.$"

DawnshoreCity_SwimmerF_Text_0:
# 52 "data/maps/DawnshoreCity/scripts.pory"
	.string "The sun here is great, I love getting my\n"
	.string "tan on!$"

DawnshoreCity_LittleGirl_Text_0:
# 56 "data/maps/DawnshoreCity/scripts.pory"
	.string "The sand makes little squeaky sounds\n"
	.string "when I walk around!$"

DawnshoreCity_Woman_Text_0:
# 60 "data/maps/DawnshoreCity/scripts.pory"
	.string "Sand makes for a good leg workout, too\n"
	.string "bad it gets all up in everywhere.$"
