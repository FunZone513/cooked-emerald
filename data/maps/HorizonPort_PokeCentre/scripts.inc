HorizonPort_PokeCentre_MapScripts::
# 2 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HorizonPort_PokeCentre_OnTransition
	.byte 0


HorizonPort_PokeCentre_OnTransition::
# 6 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	setrespawn HEAL_LOCATION_HORIZON_PORT
	return


HorizonPort_PokeCentre_Nurse::
# 10 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	setvar VAR_0x800B, HP_NURSE
# 11 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	releaseall
	return


HorizonPort_PokeCentre_Man::
# 16 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	msgbox HorizonPort_PokeCentre_Man_Text_0, MSGBOX_NPC
	return


HorizonPort_PokeCentre_Woman::
# 20 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	msgbox HorizonPort_PokeCentre_Woman_Text_0, MSGBOX_NPC
	return


HorizonPort_PokeCentre_Woman2::
# 24 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	msgbox HorizonPort_PokeCentre_Woman2_Text_0, MSGBOX_NPC
	return


HorizonPort_PokeCentre_Hiker::
# 28 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	msgbox HorizonPort_PokeCentre_Hiker_Text_0, MSGBOX_NPC
	return


HorizonPort_PokeCentre_Man_Text_0:
# 16 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	.string "It's really nice of them to heal your\n"
	.string "Pokemon for free!$"

HorizonPort_PokeCentre_Woman_Text_0:
# 20 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	.string "My little baby is all excited to see all\n"
	.string "the newcomers!$"

HorizonPort_PokeCentre_Woman2_Text_0:
# 24 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	.string "You just got off the boat too?\nI'm having a rest before heading out.$"

HorizonPort_PokeCentre_Hiker_Text_0:
# 28 "data/maps/HorizonPort_PokeCentre/scripts.pory"
	.string "I'm geared up and ready for adventure!$"
