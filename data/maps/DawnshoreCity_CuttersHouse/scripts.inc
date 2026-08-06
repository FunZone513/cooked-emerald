DawnshoreCity_CuttersHouse_MapScripts::
	.byte 0


DawnshoreCity_CuttersHouse_Man::
# 9 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, DawnshoreCity_CuttersHouse_Man_1
# 12 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_1, MSGBOX_NPC
# 13 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_CAN_USE_CUT
	return

DawnshoreCity_CuttersHouse_Man_1:
# 10 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_0, MSGBOX_NPC
	return


DawnshoreCity_CuttersHouse_Woman::
# 18 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_0
	return


DawnshoreCity_CuttersHouse_Man_Text_0:
# 10 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Come back once you beat the gym$"

DawnshoreCity_CuttersHouse_Man_Text_1:
# 12 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "congrats you can cut trees now.\nThis'll be an actual thing later$"

DawnshoreCity_CuttersHouse_Woman_Text_0:
# 18 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "placeholder text$"
