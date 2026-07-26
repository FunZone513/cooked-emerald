DawnshoreCity_PokeCentre_MapScripts::
# 2 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DawnshoreCity_PokeCentre_OnTransition
	.byte 0


DawnshoreCity_PokeCentre_OnTransition::
# 6 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_DAWNSHORE_CITY
	return


DawnshoreCity_PokeCentre_Nurse::
# 10 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	setvar VAR_0x800B, NURSE
# 11 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	releaseall
	return


DawnshoreCity_PokeCentre_OldMan::
# 16 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	msgbox DawnshoreCity_PokeCentre_OldMan_Text_0, MSGBOX_NPC
	return


DawnshoreCity_PokeCentre_Kid::
# 20 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	msgbox DawnshoreCity_PokeCentre_Kid_Text_0, MSGBOX_NPC
	return


DawnshoreCity_PokeCentre_Lass::
# 24 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	msgbox DawnshoreCity_PokeCentre_Lass_Text_0, MSGBOX_NPC
	return


DawnshoreCity_PokeCentre_Woman::
# 28 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	msgbox DawnshoreCity_PokeCentre_Woman_Text_0, MSGBOX_NPC
	return


DawnshoreCity_PokeCentre_Fisherman::
# 32 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	msgbox DawnshoreCity_PokeCentre_Fisherman_Text_0, MSGBOX_NPC
	return


DawnshoreCity_PokeCentre_OldMan_Text_0:
# 16 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	.string "The promotional material for the beach\n"
	.string "is very... provocative.$"

DawnshoreCity_PokeCentre_Kid_Text_0:
# 20 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	.string "Whenever I have a hard time with my\n"
	.string "school work I give my Whismur a big hug!$"

DawnshoreCity_PokeCentre_Lass_Text_0:
# 24 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	.string "Oh hey!\nYou were on the boat too right?\lHow's the Pokemon adventure going?$"

DawnshoreCity_PokeCentre_Woman_Text_0:
# 28 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	.string "...sand in my shoes, sand in my pockets,\n"
	.string "sand in my...$"

DawnshoreCity_PokeCentre_Fisherman_Text_0:
# 32 "data/maps/DawnshoreCity_PokeCentre/scripts.pory"
	.string "Did you know some Pokemon are only\n"
	.string "found in salt water or fresh water?$"
