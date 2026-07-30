blankmap_MapScripts::
	.byte 0


blankmap_NPC_TEST::
# 4 "data/maps/blankmap/scripts.pory"
	msgbox blankmap_NPC_TEST_Text_0, MSGBOX_NPC
	return


blankmap_NPC_TEST2::
# 8 "data/maps/blankmap/scripts.pory"
	getobjectfacingdirection OBJ_EVENT_ID_PLAYER, VAR_TEMP_A
# 9 "data/maps/blankmap/scripts.pory"
	switch VAR_TEMP_A
# 10 "data/maps/blankmap/scripts.pory"
	case DIR_NORTH, blankmap_NPC_TEST2_3
# 11 "data/maps/blankmap/scripts.pory"
	case DIR_SOUTH, blankmap_NPC_TEST2_4
# 12 "data/maps/blankmap/scripts.pory"
	case DIR_EAST, blankmap_NPC_TEST2_5
# 13 "data/maps/blankmap/scripts.pory"
	case DIR_WEST, blankmap_NPC_TEST2_6
blankmap_NPC_TEST2_1:
# 15 "data/maps/blankmap/scripts.pory"
	msgbox blankmap_NPC_TEST2_Text_0, MSGBOX_AUTOCLOSE
	return

blankmap_NPC_TEST2_3:
# 10 "data/maps/blankmap/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_SOUTH
	goto blankmap_NPC_TEST2_1

blankmap_NPC_TEST2_4:
# 11 "data/maps/blankmap/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_NORTH
	goto blankmap_NPC_TEST2_1

blankmap_NPC_TEST2_5:
# 12 "data/maps/blankmap/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_WEST
	goto blankmap_NPC_TEST2_1

blankmap_NPC_TEST2_6:
# 13 "data/maps/blankmap/scripts.pory"
	turnobject VAR_LAST_TALKED, DIR_EAST
	goto blankmap_NPC_TEST2_1


blankmap_NPC_TEST_Text_0:
# 4 "data/maps/blankmap/scripts.pory"
	.string "sym$"

blankmap_NPC_TEST2_Text_0:
# 15 "data/maps/blankmap/scripts.pory"
	.string "asym$"
