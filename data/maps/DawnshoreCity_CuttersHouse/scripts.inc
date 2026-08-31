DawnshoreCity_CuttersHouse_MapScripts::
	.byte 0


DawnshoreCity_CuttersHouse_Man::
# 4 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock
# 5 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	faceplayer
# 6 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_CUTTER, DawnshoreCity_CuttersHouse_Man_2
DawnshoreCity_CuttersHouse_Man_1:
# 19 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, DawnshoreCity_CuttersHouse_Man_4
# 27 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_CAN_USE_CUT, DawnshoreCity_CuttersHouse_Man_7
# 42 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_5, MSGBOX_AUTOCLOSE
	return

DawnshoreCity_CuttersHouse_Man_2:
# 7 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_SPOKEN_TO_CUTTER
	goto DawnshoreCity_CuttersHouse_Man_1

DawnshoreCity_CuttersHouse_Man_4:
# 20 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_1, MSGBOX_AUTOCLOSE
	return

DawnshoreCity_CuttersHouse_Man_7:
# 28 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_2, MSGBOX_DEFAULT
# 34 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_3, MSGBOX_YESNO
# 35 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DawnshoreCity_CuttersHouse_Man_10
# 38 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Man_Text_4, MSGBOX_AUTOCLOSE
	return

DawnshoreCity_CuttersHouse_Man_10:
# 36 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto DawnshoreCity_CuttersHouse_CUTScene
	return


DawnshoreCity_CuttersHouse_CUTScene::
# 52 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock
# 53 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_0, MSGBOX_AUTOCLOSE
# 54 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 55 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq DawnshoreCity_CuttersHouse_CUTScene_2
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_1
# 60 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
DawnshoreCity_CuttersHouse_CUTScene_1:
# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_2
# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_3
# 64 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 65 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CAMERA, DawnshoreCity_CuttersHouse_CUTScene_Movement_4
# 67 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 68 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_1, MSGBOX_AUTOCLOSE
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_5
# 70 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 71 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_2, MSGBOX_AUTOCLOSE
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_6
# 73 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 74 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_3, MSGBOX_AUTOCLOSE
# 75 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	getobjectxy LOCALID_CUTTERSHOUSE_CUTTER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 76 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_THROW
# 77 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_BALL, VAR_TEMP_1, VAR_TEMP_2
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_7
# 79 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement LOCALID_CUTTERSHOUSE_BALL
# 80 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	subvar VAR_TEMP_1, 2
# 81 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_MON, VAR_TEMP_1, VAR_TEMP_2
# 82 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 83 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_8
# 84 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_9
# 85 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 86 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 87 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 88 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_10
# 89 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 90 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_4, MSGBOX_AUTOCLOSE
# 92 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_LEDGE
# 93 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_11
# 94 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 95 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 96 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_5, MSGBOX_AUTOCLOSE
# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_12
# 98 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 99 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 100 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_M_CUT
# 101 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_TREEL, DawnshoreCity_CuttersHouse_CUTScene_Movement_13
# 102 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 103 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_TEMP_10
# 104 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 105 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay 60
# 106 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_LEDGE
# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_14
# 108 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 109 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitse
# 110 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 111 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_15
# 112 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmoncry
# 113 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_6, MSGBOX_AUTOCLOSE
# 115 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	playse SE_BALL_OPEN
# 116 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	addvar VAR_TEMP_1, 1
# 117 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxy LOCALID_CUTTERSHOUSE_BALL, VAR_TEMP_1, VAR_TEMP_2
# 118 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_MON, DawnshoreCity_CuttersHouse_CUTScene_Movement_8
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_BALL, DawnshoreCity_CuttersHouse_CUTScene_Movement_16
# 120 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 121 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_2
# 122 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_CUTScene_Text_7, MSGBOX_AUTOCLOSE
# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CUTTERSHOUSE_CUTTER, DawnshoreCity_CuttersHouse_CUTScene_Movement_17
# 125 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_CAMERA, DawnshoreCity_CuttersHouse_CUTScene_Movement_18
# 126 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement LOCALID_CUTTERSHOUSE_CUTTER
# 127 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxyperm LOCALID_CUTTERSHOUSE_MON, 0, 0
# 128 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setobjectxyperm LOCALID_CUTTERSHOUSE_BALL, 0, 0
# 129 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	special RemoveCameraObject
# 130 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	setflag FLAG_CAN_USE_CUT
# 131 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	releaseall
	return

DawnshoreCity_CuttersHouse_CUTScene_2:
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	applymovement LOCALID_PLAYER, DawnshoreCity_CuttersHouse_CUTScene_Movement_0
# 57 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	waitmovement 0
	goto DawnshoreCity_CuttersHouse_CUTScene_1


DawnshoreCity_CuttersHouse_Woman::
# 135 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_CUTTER, DawnshoreCity_CuttersHouse_Woman_1
# 138 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	goto_if_set FLAG_CAN_USE_CUT, DawnshoreCity_CuttersHouse_Woman_4
# 141 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_2, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Woman_1:
# 136 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_0, MSGBOX_NPC
	return

DawnshoreCity_CuttersHouse_Woman_4:
# 139 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	msgbox DawnshoreCity_CuttersHouse_Woman_Text_1, MSGBOX_NPC
	return


# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_0:
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_left
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_right
# 56 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_1:
# 59 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_2:
# 62 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
	step_end

# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_3:
# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_8
# 63 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_up
	step_end

# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_4:
# 66 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_5:
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 69 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_up
	step_end

# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_6:
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_down
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_down
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 72 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_left
	step_end

# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_7:
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	lock_facing_direction
# 78 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_2_left
	step_end

# 83 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_8:
# 83 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_invisible
	step_end

# 84 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_9:
# 84 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_right
# 84 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
	step_end

# 88 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_10:
# 88 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_left
# 88 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_left
	step_end

# 93 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_11:
# 93 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_left
	step_end

# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_12:
# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
# 97 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_faster_left
	step_end

# 101 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_13:
# 101 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	cut_tree
	step_end

# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_14:
# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_right
# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 107 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_right
	step_end

# 111 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_15:
# 111 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_right
# 111 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_in_place_right
	step_end

# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_16:
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_visible
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	disable_jump_landing_ground_effect
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	jump_right
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_8
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	set_invisible
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
# 119 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	delay_16
	step_end

# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_17:
# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_up
# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_slow_up
# 124 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	face_down
	step_end

# 125 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
DawnshoreCity_CuttersHouse_CUTScene_Movement_18:
# 125 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
# 125 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	walk_down
	step_end

DawnshoreCity_CuttersHouse_Man_Text_0:
# 8 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "You look like someone on an adventure.\p"
	.string "I remember when I used to go on\nadventures, it's how I met my wife.\p"
	.string "This island has some deliberate\nobstacles placed around it.\p"
	.string "After all, a journey is only as fun\nas the effort put into it.\p"
	.string "My job is to teach the newcomers how\nand what to do when they encounter one\lof these obstacles.\p"
	.string "There is a certain type of fast\ngrowing tree that is used as a natural\lbarrier around the place.\p"
	.string "I can teach you how to remove them\nif you would like.$"

DawnshoreCity_CuttersHouse_Man_Text_1:
# 21 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Hmm... I'm only supposed to teach\ntrainers that have proven to be\lsomewhat competent.\p"
	.string "The island gets more wild and dangerous\nthe further you progress after all.\p"
	.string "Come back once you have a badge under\nyour belt, then I'll show you.$"

DawnshoreCity_CuttersHouse_Man_Text_2:
# 29 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "It looks like you've earned yourself a\nbadge!\p"
	.string "Nicely done.\p"
	.string "With that, I can teach you the skill of\ncutting down trees.$"

DawnshoreCity_CuttersHouse_Man_Text_3:
# 34 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Would you like to learn it now?$"

DawnshoreCity_CuttersHouse_Man_Text_4:
# 38 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "I'm not sure what value there is in\nwaiting, but I'll be here all the same.$"

DawnshoreCity_CuttersHouse_Man_Text_5:
# 43 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "If you need a refresher on what\nPokemon can use Cut;\p"
	.string "Grass or Bug types, or those with\nHyper Cutter or Sharpness.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_0:
# 53 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Very well.\nLet us begin.\pTake a few steps back and I'll get\nstarted.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_1:
# 68 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Hmm... one more step.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_2:
# 71 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Looks good.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_3:
# 74 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Cutting trees isn't all that difficult,\nyou're not the one cutting it after all.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_4:
# 91 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Any Pokemon can cut down a tree,\nprovided they meet a certain criteria.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_5:
# 96 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "A Pokemon must be Grass or Bug type,\nor have an ability related to cutting.\pLike Sharpness or Hyper Cutter.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_6:
# 114 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Well done.$"

DawnshoreCity_CuttersHouse_CUTScene_Text_7:
# 123 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "And there you have it, it's as simple\nas that.\pI hope this knowledge will treat you\nwell.$"

DawnshoreCity_CuttersHouse_Woman_Text_0:
# 136 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Well hello dear.\pIf you're looking for the Cutter,\nthat would be my husband.$"

DawnshoreCity_CuttersHouse_Woman_Text_1:
# 139 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Some trees won't grow back once cut\ndown you know.\pThey're normally the ones that fully\nblock your adventuring progress.$"

DawnshoreCity_CuttersHouse_Woman_Text_2:
# 141 "data/maps/DawnshoreCity_CuttersHouse/scripts.pory"
	.string "Have you learnt how to cut down trees\nyet?$"
