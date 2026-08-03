HorizonPort_House2_MapScripts::
	.byte 0


HorizonPort_House2_PicLunatone::
# 4 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_PicLunatone_Text_0, MSGBOX_SIGN
	return


HorizonPort_House2_PicSolrock::
# 8 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_PicSolrock_Text_0, MSGBOX_SIGN
	return


HorizonPort_House2_PicCarbink::
# 12 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_PicCarbink_Text_0, MSGBOX_SIGN
	return


HorizonPort_House2_PicGuy::
# 16 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_PicGuy_Text_0, MSGBOX_SIGN
	return


HorizonPort_House2_Channeler::
# 20 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_Channeler_Text_0, MSGBOX_NPC
	return


HorizonPort_House2_OldWoman::
# 24 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_OldWoman_Text_0, MSGBOX_NPC
	return


HorizonPort_House2_Dude::
# 28 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_Dude_Text_0, MSGBOX_NPC
	return


HorizonPort_House2_Chrysia::
# 33 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_Chrysia_Text_0, MSGBOX_NPC
	return


HorizonPort_House2_Blackbelt::
# 37 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_Blackbelt_Text_0, MSGBOX_NPC
	return


HorizonPort_House2_Scientist::
# 41 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_Scientist_Text_0, MSGBOX_NPC
	return


HorizonPort_House2_FanDuoM::
# 45 "data/maps/HorizonPort_House2/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FAN_DUO
	goto_if 0, HorizonPort_House2_FanDuoM_1
# 58 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoM_Text_5
	return

HorizonPort_House2_FanDuoM_1:
# 46 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoM_Text_0, MSGBOX_YESNO
# 47 "data/maps/HorizonPort_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_House2_FanDuoM_4
# 55 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoM_Text_4, MSGBOX_AUTOCLOSE
	return

HorizonPort_House2_FanDuoM_4:
# 48 "data/maps/HorizonPort_House2/scripts.pory"
	trainerbattle_double TRAINER_HORIZON_PORT_FAN_DUO, HorizonPort_House2_FanDuoM_Text_1, HorizonPort_House2_FanDuoM_Text_2, HorizonPort_House2_FanDuoM_Text_3
	return


HorizonPort_House2_FanDuoF::
# 63 "data/maps/HorizonPort_House2/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FAN_DUO
	goto_if 0, HorizonPort_House2_FanDuoF_1
# 77 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoF_Text_6
	return

HorizonPort_House2_FanDuoF_1:
# 64 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoF_Text_0, MSGBOX_NPC
# 65 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoF_Text_1, MSGBOX_YESNO
# 66 "data/maps/HorizonPort_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_House2_FanDuoF_4
# 74 "data/maps/HorizonPort_House2/scripts.pory"
	msgbox HorizonPort_House2_FanDuoF_Text_5, MSGBOX_AUTOCLOSE
	return

HorizonPort_House2_FanDuoF_4:
# 67 "data/maps/HorizonPort_House2/scripts.pory"
	trainerbattle_double TRAINER_HORIZON_PORT_FAN_DUO, HorizonPort_House2_FanDuoF_Text_2, HorizonPort_House2_FanDuoF_Text_3, HorizonPort_House2_FanDuoF_Text_4
	return


HorizonPort_House2_PicLunatone_Text_0:
# 4 "data/maps/HorizonPort_House2/scripts.pory"
	.string "A mysterious red eye...$"

HorizonPort_House2_PicSolrock_Text_0:
# 8 "data/maps/HorizonPort_House2/scripts.pory"
	.string "It's almost warm to the touch...$"

HorizonPort_House2_PicCarbink_Text_0:
# 12 "data/maps/HorizonPort_House2/scripts.pory"
	.string "An adorable rendition of a Carbink.$"

HorizonPort_House2_PicGuy_Text_0:
# 16 "data/maps/HorizonPort_House2/scripts.pory"
	.string "I wonder who this is supposed to be?$"

HorizonPort_House2_Channeler_Text_0:
# 20 "data/maps/HorizonPort_House2/scripts.pory"
	.string "Do you feel it?$"

HorizonPort_House2_OldWoman_Text_0:
# 24 "data/maps/HorizonPort_House2/scripts.pory"
	.string "This little guy helps me out now that\n"
	.string "I'm well past my prime.$"

HorizonPort_House2_Dude_Text_0:
# 28 "data/maps/HorizonPort_House2/scripts.pory"
	.string "My wife loves jewels, so when I was\nyounger I tried to woo her with all\lkinds of gemstones.\pTurns out she just wanted Carbinks.$"

HorizonPort_House2_Chrysia_Text_0:
# 33 "data/maps/HorizonPort_House2/scripts.pory"
	.string "Look at these little guys!\n"
	.string "Aren't they just the cutest?$"

HorizonPort_House2_Blackbelt_Text_0:
# 37 "data/maps/HorizonPort_House2/scripts.pory"
	.string "LETS GO! PUMP IT!$"

HorizonPort_House2_Scientist_Text_0:
# 41 "data/maps/HorizonPort_House2/scripts.pory"
	.string "I got in trouble once for trying to\n"
	.string "extract one of the Carbink's gems...$"

HorizonPort_House2_FanDuoM_Text_0:
# 46 "data/maps/HorizonPort_House2/scripts.pory"
	.string "We like to battle newcomers to see if\nthey're up to the journey!\pCare to give it a go?$"

HorizonPort_House2_FanDuoM_Text_1:
# 50 "data/maps/HorizonPort_House2/scripts.pory"
	.string "That's what I like to hear!$"

HorizonPort_House2_FanDuoM_Text_2:
# 51 "data/maps/HorizonPort_House2/scripts.pory"
	.string "You have promise!$"

HorizonPort_House2_FanDuoM_Text_3:
# 52 "data/maps/HorizonPort_House2/scripts.pory"
	.string "It's only fair if you also have 2\n"
	.string "Pokemon, we'll wait.$"

HorizonPort_House2_FanDuoM_Text_4:
# 55 "data/maps/HorizonPort_House2/scripts.pory"
	.string "No worries, we'll be here if you change\n"
	.string "your mind.$"

HorizonPort_House2_FanDuoM_Text_5:
# 58 "data/maps/HorizonPort_House2/scripts.pory"
	.string "I hope your Pokemon are treating you\n"
	.string "well!$"

HorizonPort_House2_FanDuoF_Text_0:
# 64 "data/maps/HorizonPort_House2/scripts.pory"
	.string "Hey there! You're new here right?$"

HorizonPort_House2_FanDuoF_Text_1:
# 65 "data/maps/HorizonPort_House2/scripts.pory"
	.string "We battle newbies to help train them,\nyou wanna go at it?$"

HorizonPort_House2_FanDuoF_Text_2:
# 69 "data/maps/HorizonPort_House2/scripts.pory"
	.string "Let's get this party started!$"

HorizonPort_House2_FanDuoF_Text_3:
# 70 "data/maps/HorizonPort_House2/scripts.pory"
	.string "What a rush!$"

HorizonPort_House2_FanDuoF_Text_4:
# 71 "data/maps/HorizonPort_House2/scripts.pory"
	.string "Hey hey, you need at least 2 Pokemon to\n"
	.string "play!$"

HorizonPort_House2_FanDuoF_Text_5:
# 74 "data/maps/HorizonPort_House2/scripts.pory"
	.string "Next time then.$"

HorizonPort_House2_FanDuoF_Text_6:
# 77 "data/maps/HorizonPort_House2/scripts.pory"
	.string "You sure know how to go at it!$"
