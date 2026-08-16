DawnshoreCity_CuttersHouse_MapScripts::
	.byte 0


DawnshoreCity_CuttersHouse_Man::
# 9 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_CUTTER, DawnshoreCity_CuttersHouse_Man_2
DawnshoreCity_CuttersHouse_Man_1:
# 22 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, DawnshoreCity_CuttersHouse_Man_4
# 30 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_CAN_USE_CUT, DawnshoreCity_CuttersHouse_Man_7
# 45 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_5, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Man_2:
# 10 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_0, MSGBOX_NPC
# 19 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_SPOKEN_TO_CUTTER
	goto DawnshoreCity_CuttersHouse_Man_1

DawnshoreCity_CuttersHouse_Man_4:
# 23 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_1, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Man_7:
# 31 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_2, MSGBOX_NPC
# 37 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_3, MSGBOX_YESNO
# 38 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DawnshoreCity_CuttersHouse_Man_10
# 41 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_4, MSGBOX_AUTOCLOSE
	return

DawnshoreCity_CuttersHouse_Man_10:
# 39 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto DawnshoreCity_CuttersHouse_CUTScene
	return


DawnshoreCity_CuttersHouse_CUTScene::
# 55 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 58 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DawnshoreCity_CuttersHouse_CUTScene_2
# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_1
# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
DawnshoreCity_CuttersHouse_CUTScene_1:
# 65 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_2
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_3
# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	special SpawnCameraObject
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CAMERA, DawnshoreCity_CuttersHouse_CUTScene_Movement_4
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 71 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_5
# 73 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 74 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_2, MSGBOX_AUTOCLOSE
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_6
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 77 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_3, MSGBOX_AUTOCLOSE
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	getobjectxy LOCALID_CUTTERSHOUSE_CUTTER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 79 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_THROW
# 80 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_BALL, VAR_TEMP_1, VAR_TEMP_2
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_7
# 82 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement LOCALID_CUTTERSHOUSE_BALL
# 83 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	subvar VAR_TEMP_1, 2
# 84 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_MON, VAR_TEMP_1, VAR_TEMP_2
# 85 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_8
# 87 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_9
# 88 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 89 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 90 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_10
# 92 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 93 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 94 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_4, MSGBOX_AUTOCLOSE
# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_LEDGE
# 96 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_11
# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 98 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 99 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_5, MSGBOX_AUTOCLOSE
# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_12
# 101 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 102 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 103 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_M_CUT
# 104 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_TREEL, DawnshoreCity_CuttersHouse_CUTScene_Movement_13
# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 106 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_TEMP_10
# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 108 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay 60
# 109 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_LEDGE
# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_14
# 111 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 112 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 113 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_15
# 115 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 116 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_6, MSGBOX_AUTOCLOSE
# 118 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 120 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_BALL, VAR_TEMP_1, VAR_TEMP_2
# 121 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_8
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_16
# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_2
# 125 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 126 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_7, MSGBOX_AUTOCLOSE
# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_17
# 128 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CAMERA, DawnshoreCity_CuttersHouse_CUTScene_Movement_18
# 129 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement LOCALID_CUTTERSHOUSE_CUTTER
# 130 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	special RemoveCameraObject
# 131 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_CAN_USE_CUT
# 132 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	releaseall
	return

DawnshoreCity_CuttersHouse_CUTScene_2:
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_0
# 60 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
	goto DawnshoreCity_CuttersHouse_CUTScene_1


DawnshoreCity_CuttersHouse_Woman::
# 136 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_CUTTER, DawnshoreCity_CuttersHouse_Woman_1
# 139 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_CAN_USE_CUT, DawnshoreCity_CuttersHouse_Woman_4
# 142 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_2, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Woman_1:
# 137 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_0, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Woman_4:
# 140 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_1, MSGBOX_NPC
	return


# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_0:
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_left
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_right
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_right
	step_end

# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_1:
# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_2:
# 65 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
	step_end

# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_3:
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_8
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_up
	step_end

# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_4:
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_up
	step_end

# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_5:
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_up
	step_end

# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_6:
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_down
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_down
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_left
	step_end

# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_7:
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock_facing_direction
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_2_left
	step_end

# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_8:
# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_invisible
	step_end

# 87 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_9:
# 87 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_right
# 87 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
	step_end

# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_10:
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_left
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_left
	step_end

# 96 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_11:
# 96 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_left
	step_end

# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_12:
# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
	step_end

# 104 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_13:
# 104 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	cut_tree
	step_end

# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_14:
# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_right
# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_right
	step_end

# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_15:
# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_right
# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_right
	step_end

# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_16:
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_right
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_8
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_invisible
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
	step_end

# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_17:
# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_up
# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_up
# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
	step_end

# 128 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_18:
# 128 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 128 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
	step_end

DawnshoreCity_CuttersHouse_Man_Text_0:
# 11 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "You look like someone on an adventure.\p"
	.string "I remember when I used to go on\nadventures, it's how I met my wife.\p"
	.string "This island has some deliberate\nobstacles placed around it.\p"
	.string "After all, a journey is only as fun\nas the effort put into it.\p"
	.string "My job is to teach the newcomers how\nand what to do when they encounter one\lof these obstacles.\p"
	.string "There is a certain type of fast\ngrowing tree that is used as a natural\lbarrier around the place.\p"
	.string "I can teach you how to remove them\nif you would like.$"

DawnshoreCity_CuttersHouse_Man_Text_1:
# 24 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Hmm... I'm only supposed to teach\ntrainers that have proven to be\lsomewhat competent.\p"
	.string "The island gets more wild and dangerous\nthe further you progress after all.\p"
	.string "Come back once you have a badge under\nyour belt, then I'll show you.$"

DawnshoreCity_CuttersHouse_Man_Text_2:
# 32 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "It looks like you've earned yourself a\nbadge!\p"
	.string "Nicely done.\p"
	.string "With that, I can teach you the skill of\ncutting down trees.$"

DawnshoreCity_CuttersHouse_Man_Text_3:
# 37 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Would you like to learn it now?$"

DawnshoreCity_CuttersHouse_Man_Text_4:
# 41 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "I'm not sure what value there is in\nwaiting, but I'll be here all the same.$"

DawnshoreCity_CuttersHouse_Man_Text_5:
# 46 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "If you need a refresher on what\nPokemon can use Cut;\p"
	.string "Grass or Bug types, or those with\nHyper Cutter or Sharpness.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_0:
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Very well.\nLet us begin.\pTake a few steps back and I'll get\nstarted.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_1:
# 71 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Hmm... one more step.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_2:
# 74 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Looks good.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_3:
# 77 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Cutting trees isn't all that difficult,\nyou're not the one cutting it after all.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_4:
# 94 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Any Pokemon can cut down a tree,\nprovided they meet a certain criteria.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_5:
# 99 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "A Pokemon must be Grass or Bug type,\nor have an ability related to cutting.\pLike Sharpness or Hyper Cutter.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_6:
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Well done.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_7:
# 126 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "And there you have it, it's as simple\nas that.\pI hope this knowledge will treat you\nwell.$"

DawnshoreCity_CuttersHouse_Woman_Text_0:
# 137 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Well hello dear.\pIf you're looking for the Cutter,\nthat would be my husband.$"

DawnshoreCity_CuttersHouse_Woman_Text_1:
# 140 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Some trees won't grow back once cut\ndown you know.\pThey're normally the ones that fully\nblock your adventuring progress.$"

DawnshoreCity_CuttersHouse_Woman_Text_2:
# 142 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Have you learnt how to cut down trees\nyet?$"
