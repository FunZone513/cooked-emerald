BeginningBoat_Ocean_MapScripts::
# 2 "data/maps/BeginningBoat_Ocean/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BeginningBoat_Ocean_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BeginningBoat_Ocean_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/BeginningBoat_Ocean/scripts.pory"
	map_script_2 VAR_GAME_PROGRESS, GP_NOT_STARTED, BeginningBoat_Ocean_BoatMove
	.2byte 0


BeginningBoat_Ocean_BoatMove::
# 8 "data/maps/BeginningBoat_Ocean/scripts.pory"
	lock
# 9 "data/maps/BeginningBoat_Ocean/scripts.pory"
	special SpawnCameraObject
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	applymovement LOCALID_BOAT, BeginningBoat_Ocean_BoatMove_Movement_0
# 11 "data/maps/BeginningBoat_Ocean/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_Ocean_BoatMove_Movement_0
# 12 "data/maps/BeginningBoat_Ocean/scripts.pory"
	delay 60
# 13 "data/maps/BeginningBoat_Ocean/scripts.pory"
	playse SE_DING_DONG
# 14 "data/maps/BeginningBoat_Ocean/scripts.pory"
	delay 20
# 15 "data/maps/BeginningBoat_Ocean/scripts.pory"
	message BeginningBoat_Ocean_BoatMove_Text_0
# 16 "data/maps/BeginningBoat_Ocean/scripts.pory"
	waitmovement 0
# 17 "data/maps/BeginningBoat_Ocean/scripts.pory"
	closemessage
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	applymovement LOCALID_BOAT, BeginningBoat_Ocean_BoatMove_Movement_1
# 19 "data/maps/BeginningBoat_Ocean/scripts.pory"
	applymovement LOCALID_CAMERA, BeginningBoat_Ocean_BoatMove_Movement_1
# 20 "data/maps/BeginningBoat_Ocean/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 21 "data/maps/BeginningBoat_Ocean/scripts.pory"
	waitmovement 0
# 22 "data/maps/BeginningBoat_Ocean/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 23 "data/maps/BeginningBoat_Ocean/scripts.pory"
	special RemoveCameraObject
# 24 "data/maps/BeginningBoat_Ocean/scripts.pory"
	warpsilent MAP_BEGINNING_BOAT_ROOM, 5, 10
	return


# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
BeginningBoat_Ocean_BoatMove_Movement_0:
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 10 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
	step_end

# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
BeginningBoat_Ocean_BoatMove_Movement_1:
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
# 18 "data/maps/BeginningBoat_Ocean/scripts.pory"
	walk_fast_left
	step_end

BeginningBoat_Ocean_BoatMove_Text_0:
# 15 "data/maps/BeginningBoat_Ocean/scripts.pory"
	.string "We're getting close to our destination,\nplease ensure you've gotten ready.$"
