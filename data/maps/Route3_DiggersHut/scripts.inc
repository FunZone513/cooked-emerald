Route3_DiggersHut_MapScripts::
# 2 "data/maps/Route3_DiggersHut/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_DiggersHut_OnLoad
	.byte 0


Route3_DiggersHut_OnLoad::
# 6 "data/maps/Route3_DiggersHut/scripts.pory"
	goto_if_unset FLAG_OPEN_DIGGERS_HUT, Route3_DiggersHut_OnLoad_1
# 10 "data/maps/Route3_DiggersHut/scripts.pory"
	setobjectxyperm LOCALID_BLOCKER, 6, 2
	return

Route3_DiggersHut_OnLoad_1:
# 7 "data/maps/Route3_DiggersHut/scripts.pory"
	setobjectxyperm LOCALID_BLOCKER, 7, 2
# 8 "data/maps/Route3_DiggersHut/scripts.pory"
	setobjectmovementtype LOCALID_BLOCKER, MOVEMENT_TYPE_FACE_UP
	return


Route3_DiggersHut_Blocker::
# 15 "data/maps/Route3_DiggersHut/scripts.pory"
	goto_if_unset FLAG_OPEN_DIGGERS_HUT, Route3_DiggersHut_Blocker_1
# 40 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Blocker_Text_1, MSGBOX_NPC
	return

Route3_DiggersHut_Blocker_1:
# 16 "data/maps/Route3_DiggersHut/scripts.pory"
	lock
# 17 "data/maps/Route3_DiggersHut/scripts.pory"
	applymovement LOCALID_BLOCKER, Route3_DiggersHut_Blocker_Movement_0
# 18 "data/maps/Route3_DiggersHut/scripts.pory"
	waitmovement 0
# 19 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Blocker_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/Route3_DiggersHut/scripts.pory"
	closemessage
# 31 "data/maps/Route3_DiggersHut/scripts.pory"
	getobjectxy OBJ_EVENT_ID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 32 "data/maps/Route3_DiggersHut/scripts.pory"
	compare VAR_TEMP_1, 6
	goto_if_eq Route3_DiggersHut_Blocker_6
Route3_DiggersHut_Blocker_4:
# 35 "data/maps/Route3_DiggersHut/scripts.pory"
	applymovement LOCALID_BLOCKER, Route3_DiggersHut_Blocker_Movement_2
# 36 "data/maps/Route3_DiggersHut/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route3_DiggersHut/scripts.pory"
	setflag FLAG_OPEN_DIGGERS_HUT
# 38 "data/maps/Route3_DiggersHut/scripts.pory"
	releaseall
	return

Route3_DiggersHut_Blocker_5:
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route3_DiggersHut_Blocker_Movement_1
	goto Route3_DiggersHut_Blocker_4

Route3_DiggersHut_Blocker_6:
# 32 "data/maps/Route3_DiggersHut/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Route3_DiggersHut_Blocker_5
	goto Route3_DiggersHut_Blocker_4


Route3_DiggersHut_Woman::
# 45 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Woman_Text_0, MSGBOX_NPC
	return


Route3_DiggersHut_Man::
# 49 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_Man_Text_0, MSGBOX_NPC
	return


Route3_DiggersHut_OldMan::
# 53 "data/maps/Route3_DiggersHut/scripts.pory"
	msgbox Route3_DiggersHut_OldMan_Text_0, MSGBOX_AUTOCLOSE
	return


# 17 "data/maps/Route3_DiggersHut/scripts.pory"
Route3_DiggersHut_Blocker_Movement_0:
# 17 "data/maps/Route3_DiggersHut/scripts.pory"
	face_down
# 17 "data/maps/Route3_DiggersHut/scripts.pory"
	delay_4
# 17 "data/maps/Route3_DiggersHut/scripts.pory"
	emote_question_mark
	step_end

# 33 "data/maps/Route3_DiggersHut/scripts.pory"
Route3_DiggersHut_Blocker_Movement_1:
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	lock_facing_direction
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	walk_down
# 33 "data/maps/Route3_DiggersHut/scripts.pory"
	unlock_facing_direction
	step_end

# 35 "data/maps/Route3_DiggersHut/scripts.pory"
Route3_DiggersHut_Blocker_Movement_2:
# 35 "data/maps/Route3_DiggersHut/scripts.pory"
	delay_8
# 35 "data/maps/Route3_DiggersHut/scripts.pory"
	walk_left
# 35 "data/maps/Route3_DiggersHut/scripts.pory"
	face_down
	step_end

Route3_DiggersHut_Blocker_Text_0:
# 20 "data/maps/Route3_DiggersHut/scripts.pory"
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
# 40 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "Go see him for yourself.$"

Route3_DiggersHut_Woman_Text_0:
# 45 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "I tend to let my Herdier do the digging\n"
	.string "for me, the sand roughs up my skin.$"

Route3_DiggersHut_Man_Text_0:
# 49 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "My brother is obssessed with digging. I\n"
	.string "don't know where he got it from.$"

Route3_DiggersHut_OldMan_Text_0:
# 53 "data/maps/Route3_DiggersHut/scripts.pory"
	.string "Digging this... Digging that... Why not\n"
	.string "dig up a spouse and finally move out...$"
