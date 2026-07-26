RestArea1_Indoor_MapScripts::
	.byte 0


RestArea1_Indoor_Nurse::
# 4 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Nurse_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Woman::
# 12 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Woman_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Hiker::
# 16 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Hiker_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Maniac::
# 20 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Maniac_Text_0, MSGBOX_NPC
# 21 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement VAR_LAST_TALKED, RestArea1_Indoor_Maniac_Movement_0
# 22 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 23 "data/maps/RestArea1_Indoor/scripts.pory"
	releaseall
	return


RestArea1_Indoor_Girl::
# 27 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Girl_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_RichBoy::
# 31 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_RichBoy_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Man::
# 35 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Man_Text_0, MSGBOX_NPC
# 36 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement VAR_LAST_TALKED, RestArea1_Indoor_Maniac_Movement_0
# 37 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 38 "data/maps/RestArea1_Indoor/scripts.pory"
	releaseall
	return


# 21 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Maniac_Movement_0:
# 21 "data/maps/RestArea1_Indoor/scripts.pory"
	face_up
	step_end

RestArea1_Indoor_Nurse_Text_0:
# 5 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Welcome to the Rest Area!\p"
	.string "Rest Areas are spots set up between\ntowns to give trainers some respite,\land they act as a place for mingling.\p"
	.string "Feel free to take a break in an empty\nroom, or talk with your fellow trainers!$"

RestArea1_Indoor_Woman_Text_0:
# 12 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "I didn't really need to use the Rest\n"
	.string "Area, but sitting down on a chair sure is\l"
	.string "nice.$"

RestArea1_Indoor_Hiker_Text_0:
# 16 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "You takin' a break too lad?$"

RestArea1_Indoor_Maniac_Text_0:
# 20 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "I'm washing up after eating, because\n"
	.string "that's the polite thing to do.$"

RestArea1_Indoor_Girl_Text_0:
# 27 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Have you been in the small bit of forest\nnearby yet?\pIt's pretty spooky in there!$"

RestArea1_Indoor_RichBoy_Text_0:
# 31 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "I'll have you know that I could afford\n"
	.string "to sleep in a 5 star hotel, I just\l"
	.string "thought I'd see how the lower class\l"
	.string "spends their time.$"

RestArea1_Indoor_Man_Text_0:
# 35 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Do you mind?$"
