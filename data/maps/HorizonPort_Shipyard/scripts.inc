HorizonPort_Shipyard_MapScripts::
	.byte 0


HorizonPort_Shipyard_Sailor::
# 4 "data/maps/HorizonPort_Shipyard/scripts.pory"
	msgbox HorizonPort_Shipyard_Sailor_Text_0, MSGBOX_NPC
# 5 "data/maps/HorizonPort_Shipyard/scripts.pory"
	applymovement LOCALID_PLAYER, HorizonPort_Shipyard_Sailor_Movement_0
# 6 "data/maps/HorizonPort_Shipyard/scripts.pory"
	waitmovement 0
# 7 "data/maps/HorizonPort_Shipyard/scripts.pory"
	releaseall
	return


HorizonPort_Shipyard_Man::
# 11 "data/maps/HorizonPort_Shipyard/scripts.pory"
	msgbox HorizonPort_Shipyard_Man_Text_0, MSGBOX_NPC
	return


HorizonPort_Shipyard_Man2::
# 15 "data/maps/HorizonPort_Shipyard/scripts.pory"
	msgbox HorizonPort_Shipyard_Man2_Text_0, MSGBOX_NPC
	return


HorizonPort_Shipyard_Woman::
# 19 "data/maps/HorizonPort_Shipyard/scripts.pory"
	msgbox HorizonPort_Shipyard_Woman_Text_0, MSGBOX_NPC
	return


HorizonPort_Shipyard_Schoolkid::
# 23 "data/maps/HorizonPort_Shipyard/scripts.pory"
	msgbox HorizonPort_Shipyard_Schoolkid_Text_0, MSGBOX_NPC
	return


# 5 "data/maps/HorizonPort_Shipyard/scripts.pory"
HorizonPort_Shipyard_Sailor_Movement_0:
# 5 "data/maps/HorizonPort_Shipyard/scripts.pory"
	face_down
	step_end

HorizonPort_Shipyard_Sailor_Text_0:
# 4 "data/maps/HorizonPort_Shipyard/scripts.pory"
	.string "Your ticket was one-way.\nPlease enjoy your stay.$"

HorizonPort_Shipyard_Man_Text_0:
# 11 "data/maps/HorizonPort_Shipyard/scripts.pory"
	.string "It looked a lot bigger on the inside...$"

HorizonPort_Shipyard_Man2_Text_0:
# 15 "data/maps/HorizonPort_Shipyard/scripts.pory"
	.string "As a new trainer, I should be allowed to\n"
	.string "check in there for any useful items!$"

HorizonPort_Shipyard_Woman_Text_0:
# 19 "data/maps/HorizonPort_Shipyard/scripts.pory"
	.string "I was excited to start my journey, but\n"
	.string "Buneary is too cute to send into\l"
	.string "battle...$"

HorizonPort_Shipyard_Schoolkid_Text_0:
# 23 "data/maps/HorizonPort_Shipyard/scripts.pory"
	.string "I'm starting to have second thoughts...$"
