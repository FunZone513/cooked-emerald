Route3_DiggersHut_MapScripts::
# 2 "data/maps/Route3_DiggersHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_DiggersHut_OnLoad
	.byte 0


Route3_DiggersHut_OnLoad::
# 6 "data/maps/Route3_DiggersHut/scripts.pory"
	goto_if_unset FLAG_OPEN_DIGGERS_HUT, Route3_DiggersHut_OnLoad_1
	return

Route3_DiggersHut_OnLoad_1:
# 7 "data/maps/Route3_DiggersHut/scripts.pory"
	setobjectxy LOCALID_BLOCKER, 7, 2
# 8 "data/maps/Route3_DiggersHut/scripts.pory"
	setobjectmovementtype LOCALID_BLOCKER, MOVEMENT_TYPE_FACE_UP
	return


Route3_DiggersHut_Blocker::
# 13 "data/maps/Route3_DiggersHut/scripts.pory"
	goto_if_unset FLAG_OPEN_DIGGERS_HUT, Route3_DiggersHut_Blocker_1
# 37 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Blocker_Text_1, MSGBOX_NPC
	return

Route3_DiggersHut_Blocker_1:
# 14 "data/maps/Route3_DiggersHut/scripts.pory"
	lockall
# 15 "data/maps/Route3_DiggersHut/scripts.pory"
	applymovement LOCALID_BLOCKER, Route3_DiggersHut_Blocker_Movement_0
# 16 "data/maps/Route3_DiggersHut/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Blocker_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/Route3_DiggersHut/scripts.pory"
	closemessage
# 29 "data/maps/Route3_DiggersHut/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 30 "data/maps/Route3_DiggersHut/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route3_DiggersHut_Blocker_6
Route3_DiggersHut_Blocker_4:
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	applymovement LOCALID_BLOCKER, Route3_DiggersHut_Blocker_Movement_2
# 34 "data/maps/Route3_DiggersHut/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route3_DiggersHut/scripts.pory"
	releaseall
	return

Route3_DiggersHut_Blocker_5:
# 31 "data/maps/Route3_DiggersHut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_DiggersHut_Blocker_Movement_1
	goto Route3_DiggersHut_Blocker_4

Route3_DiggersHut_Blocker_6:
# 30 "data/maps/Route3_DiggersHut/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Route3_DiggersHut_Blocker_5
	goto Route3_DiggersHut_Blocker_4


Route3_DiggersHut_Woman::
# 42 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Woman_Text_0, MSGBOX_NPC
	return


Route3_DiggersHut_Man::
# 46 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Man_Text_0, MSGBOX_NPC
	return


Route3_DiggersHut_OldMan::
# 50 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_OldMan_Text_0, MSGBOX_AUTOCLOSE
	return


# 15 "data/maps/Route3_DiggersHut/scripts.pory"
Route3_DiggersHut_Blocker_Movement_0:
# 15 "data/maps/Route3_DiggersHut/scripts.pory"
	face_down
# 15 "data/maps/Route3_DiggersHut/scripts.pory"
	delay_4
# 15 "data/maps/Route3_DiggersHut/scripts.pory"
	emote_question_mark
	step_end

# 31 "data/maps/Route3_DiggersHut/scripts.pory"
Route3_DiggersHut_Blocker_Movement_1:
# 31 "data/maps/Route3_DiggersHut/scripts.pory"
	lock_facing_direction
# 31 "data/maps/Route3_DiggersHut/scripts.pory"
	walk_down
# 31 "data/maps/Route3_DiggersHut/scripts.pory"
	unlock_facing_direction
	step_end

# 33 "data/maps/Route3_DiggersHut/scripts.pory"
Route3_DiggersHut_Blocker_Movement_2:
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	delay_8
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	walk_left
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	face_down
	step_end

Route3_DiggersHut_Blocker_Text_0:
# 18 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "Hm? Another one?\p"
	.string "Some other guy came through here just\nbefore, wasn't overly polite about it.\p"
	.string "So what's your deal then?\p"
	.string "...\pOh I see, well you're welcome to go\nout the back as well.\p"
	.string "Careful though, the Owner is a bit...\nEccentric.\p"
	.string "The other guy seemed pretty eccentric\nin his own way too...\p"
	.string "Actually, I don't think he's left yet.\p"
	.string "No matter, go on in and check it out for\nyourself.\p"
	.string "As odd as the Owner may be, you might\njust end up learning useful.$"

Route3_DiggersHut_Blocker_Text_1:
# 37 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "Go see him for yourself.$"

Route3_DiggersHut_Woman_Text_0:
# 42 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "I tend to let my Herdier do the digging\n"
	.string "for me, the sand roughs up my skin.$"

Route3_DiggersHut_Man_Text_0:
# 46 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "My brother is obssessed with digging. I\n"
	.string "don't know where he got it from.$"

Route3_DiggersHut_OldMan_Text_0:
# 50 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "Digging this... Digging that... Why not\n"
	.string "dig up a spouse and finally move out...$"
