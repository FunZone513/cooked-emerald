DawnshoreCity_CuttersHouse_MapScripts::
	.byte 0


DawnshoreCity_CuttersHouse_Man::
# 4 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_CUTTER, DawnshoreCity_CuttersHouse_Man_2
DawnshoreCity_CuttersHouse_Man_1:
# 17 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, DawnshoreCity_CuttersHouse_Man_4
# 25 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_CAN_USE_CUT, DawnshoreCity_CuttersHouse_Man_7
# 40 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_5, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Man_2:
# 5 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_0, MSGBOX_NPC
# 14 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_SPOKEN_TO_CUTTER
	goto DawnshoreCity_CuttersHouse_Man_1

DawnshoreCity_CuttersHouse_Man_4:
# 18 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_1, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Man_7:
# 26 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_2, MSGBOX_NPC
# 32 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_3, MSGBOX_YESNO
# 33 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DawnshoreCity_CuttersHouse_Man_10
# 36 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_4, MSGBOX_AUTOCLOSE
	return

DawnshoreCity_CuttersHouse_Man_10:
# 34 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto DawnshoreCity_CuttersHouse_CUTScene
	return


DawnshoreCity_CuttersHouse_CUTScene::
# 50 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock
# 51 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 53 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DawnshoreCity_CuttersHouse_CUTScene_2
# 57 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_1
# 58 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
DawnshoreCity_CuttersHouse_CUTScene_1:
# 60 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_2
# 61 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_3
# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	special SpawnCameraObject
# 64 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CAMERA, DawnshoreCity_CuttersHouse_CUTScene_Movement_4
# 65 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_1, MSGBOX_AUTOCLOSE
# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_5
# 68 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_2, MSGBOX_AUTOCLOSE
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_6
# 71 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_3, MSGBOX_AUTOCLOSE
# 73 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	getobjectxy LOCALID_CUTTERSHOUSE_CUTTER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 74 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_THROW
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_BALL, VAR_TEMP_1, VAR_TEMP_2
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_7
# 77 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement LOCALID_CUTTERSHOUSE_BALL
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	subvar VAR_TEMP_1, 2
# 79 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_MON, VAR_TEMP_1, VAR_TEMP_2
# 80 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_8
# 82 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_9
# 83 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 84 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 85 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_10
# 87 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 89 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_4, MSGBOX_AUTOCLOSE
# 90 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_LEDGE
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_11
# 92 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 93 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 94 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_5, MSGBOX_AUTOCLOSE
# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_12
# 96 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 98 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_M_CUT
# 99 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_TREEL, DawnshoreCity_CuttersHouse_CUTScene_Movement_13
# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 101 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_TEMP_10
# 102 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 103 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay 60
# 104 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_LEDGE
# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_14
# 106 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 108 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 109 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_15
# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 111 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 112 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_6, MSGBOX_AUTOCLOSE
# 113 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 115 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_BALL, VAR_TEMP_1, VAR_TEMP_2
# 116 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_8
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_16
# 118 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_2
# 120 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 121 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_7, MSGBOX_AUTOCLOSE
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_17
# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CAMERA, DawnshoreCity_CuttersHouse_CUTScene_Movement_18
# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement LOCALID_CUTTERSHOUSE_CUTTER
# 125 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	special RemoveCameraObject
# 126 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_CAN_USE_CUT
# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	releaseall
	return

DawnshoreCity_CuttersHouse_CUTScene_2:
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_0
# 55 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
	goto DawnshoreCity_CuttersHouse_CUTScene_1


DawnshoreCity_CuttersHouse_Woman::
# 131 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_CUTTER, DawnshoreCity_CuttersHouse_Woman_1
# 134 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_CAN_USE_CUT, DawnshoreCity_CuttersHouse_Woman_4
# 137 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_2, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Woman_1:
# 132 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_0, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Woman_4:
# 135 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_1, MSGBOX_NPC
	return


# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_0:
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_left
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_right
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_right
	step_end

# 57 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_1:
# 57 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
	step_end

# 60 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_2:
# 60 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
	step_end

# 61 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_3:
# 61 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 61 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_8
# 61 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_up
	step_end

# 64 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_4:
# 64 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_up
	step_end

# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_5:
# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_up
	step_end

# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_6:
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_down
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_down
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_left
	step_end

# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_7:
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock_facing_direction
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_2_left
	step_end

# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_8:
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_invisible
	step_end

# 82 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_9:
# 82 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_right
# 82 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
	step_end

# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_10:
# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_left
# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_left
	step_end

# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_11:
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_left
	step_end

# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_12:
# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
	step_end

# 99 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_13:
# 99 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	cut_tree
	step_end

# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_14:
# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_right
# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_right
	step_end

# 109 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_15:
# 109 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_right
# 109 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_right
	step_end

# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_16:
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_right
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_8
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_invisible
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
	step_end

# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_17:
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_up
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_up
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
	step_end

# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_18:
# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
	step_end

DawnshoreCity_CuttersHouse_Man_Text_0:
# 6 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "You look like someone on an adventure.\p"
	.string "I remember when I used to go on\nadventures, it's how I met my wife.\p"
	.string "This island has some deliberate\nobstacles placed around it.\p"
	.string "After all, a journey is only as fun\nas the effort put into it.\p"
	.string "My job is to teach the newcomers how\nand what to do when they encounter one\lof these obstacles.\p"
	.string "There is a certain type of fast\ngrowing tree that is used as a natural\lbarrier around the place.\p"
	.string "I can teach you how to remove them\nif you would like.$"

DawnshoreCity_CuttersHouse_Man_Text_1:
# 19 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Hmm... I'm only supposed to teach\ntrainers that have proven to be\lsomewhat competent.\p"
	.string "The island gets more wild and dangerous\nthe further you progress after all.\p"
	.string "Come back once you have a badge under\nyour belt, then I'll show you.$"

DawnshoreCity_CuttersHouse_Man_Text_2:
# 27 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "It looks like you've earned yourself a\nbadge!\p"
	.string "Nicely done.\p"
	.string "With that, I can teach you the skill of\ncutting down trees.$"

DawnshoreCity_CuttersHouse_Man_Text_3:
# 32 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Would you like to learn it now?$"

DawnshoreCity_CuttersHouse_Man_Text_4:
# 36 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "I'm not sure what value there is in\nwaiting, but I'll be here all the same.$"

DawnshoreCity_CuttersHouse_Man_Text_5:
# 41 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "If you need a refresher on what\nPokemon can use Cut;\p"
	.string "Grass or Bug types, or those with\nHyper Cutter or Sharpness.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_0:
# 51 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Very well.\nLet us begin.\pTake a few steps back and I'll get\nstarted.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_1:
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Hmm... one more step.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_2:
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Looks good.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_3:
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Cutting trees isn't all that difficult,\nyou're not the one cutting it after all.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_4:
# 89 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Any Pokemon can cut down a tree,\nprovided they meet a certain criteria.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_5:
# 94 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "A Pokemon must be Grass or Bug type,\nor have an ability related to cutting.\pLike Sharpness or Hyper Cutter.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_6:
# 112 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Well done.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_7:
# 121 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "And there you have it, it's as simple\nas that.\pI hope this knowledge will treat you\nwell.$"

DawnshoreCity_CuttersHouse_Woman_Text_0:
# 132 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Well hello dear.\pIf you're looking for the Cutter,\nthat would be my husband.$"

DawnshoreCity_CuttersHouse_Woman_Text_1:
# 135 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Some trees won't grow back once cut\ndown you know.\pThey're normally the ones that fully\nblock your adventuring progress.$"

DawnshoreCity_CuttersHouse_Woman_Text_2:
# 137 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Have you learnt how to cut down trees\nyet?$"
