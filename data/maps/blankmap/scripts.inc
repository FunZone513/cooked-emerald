blankmap_MapScripts::
	.byte 0


blankmap_NPC_TEST::
# 4 "data/maps/blankmap/scripts.pory"
	lockall
# 5 "data/maps/blankmap/scripts.pory"
	applymovement VAR_LAST_TALKED, blankmap_NPC_TEST_Movement_0
# 6 "data/maps/blankmap/scripts.pory"
	waitmovement 0
# 7 "data/maps/blankmap/scripts.pory"
	release
	return


# 5 "data/maps/blankmap/scripts.pory"
blankmap_NPC_TEST_Movement_0:
# 5 "data/maps/blankmap/scripts.pory"
	face_right
# 5 "data/maps/blankmap/scripts.pory"
	delay_16
# 5 "data/maps/blankmap/scripts.pory"
	walk_in_place_slow_right
# 5 "data/maps/blankmap/scripts.pory"
	delay_16
# 5 "data/maps/blankmap/scripts.pory"
	face_up
# 5 "data/maps/blankmap/scripts.pory"
	delay_16
# 5 "data/maps/blankmap/scripts.pory"
	walk_in_place_slow_up
# 5 "data/maps/blankmap/scripts.pory"
	delay_16
# 5 "data/maps/blankmap/scripts.pory"
	face_left
# 5 "data/maps/blankmap/scripts.pory"
	delay_16
# 5 "data/maps/blankmap/scripts.pory"
	walk_in_place_slow_left
# 5 "data/maps/blankmap/scripts.pory"
	delay_16
# 5 "data/maps/blankmap/scripts.pory"
	face_down
# 5 "data/maps/blankmap/scripts.pory"
	walk_in_place_slow_down
	step_end
