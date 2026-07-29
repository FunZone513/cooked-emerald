blankmap_MapScripts::
	.byte 0


blankmap_NPC_TEST::
# 4 "data/maps/blankmap/scripts.pory"
	msgbox blankmap_NPC_TEST_Text_0, MSGBOX_NPC
	return


blankmap_NPC_TEST2::
# 8 "data/maps/blankmap/scripts.pory"
	msgbox blankmap_NPC_TEST2_Text_0, MSGBOX_NPC
	return


blankmap_NPC_TEST_Text_0:
# 4 "data/maps/blankmap/scripts.pory"
	.string "sym$"

blankmap_NPC_TEST2_Text_0:
# 8 "data/maps/blankmap/scripts.pory"
	.string "asym$"
