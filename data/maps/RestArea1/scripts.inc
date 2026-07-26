RestArea1_MapScripts::
	.byte 0


RestArea1_Sign::
# 4 "data/maps/RestArea1/scripts.pory"
	msgbox RestArea1_Sign_Text_0, MSGBOX_SIGN
	return


RestArea1_Camper::
# 8 "data/maps/RestArea1/scripts.pory"
	msgbox RestArea1_Camper_Text_0, MSGBOX_NPC
	return


RestArea1_Sign_Text_0:
# 4 "data/maps/RestArea1/scripts.pory"
	.string "Rest Area$"

RestArea1_Camper_Text_0:
# 8 "data/maps/RestArea1/scripts.pory"
	.string "The Woods' Pokemon are real sensitive,\nso I'd recommend being super quiet.$"
