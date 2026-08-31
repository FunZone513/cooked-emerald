RestArea1_Indoor_MapScripts::
# 2 "data/maps/RestArea1_Indoor/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RestArea1_Indoor_OnLoad
# 3 "data/maps/RestArea1_Indoor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RestArea1_Indoor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RestArea1_Indoor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/RestArea1_Indoor/scripts.pory"
	map_script_2 VAR_GAME_PROGRESS, GP_HORIZON_PORT_RIVAL_ENCOUNTERED, RestArea1_Indoor_Josie
	.2byte 0


RestArea1_Indoor_OnLoad::
# 9 "data/maps/RestArea1_Indoor/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_REST_AREA_1_ENCOUNTERED
	goto_if_ge RestArea1_Indoor_OnLoad_1
	return

RestArea1_Indoor_OnLoad_1:
# 10 "data/maps/RestArea1_Indoor/scripts.pory"
	setflag FLAG_TEMP_A
	return


RestArea1_Indoor_Josie::
# 15 "data/maps/RestArea1_Indoor/scripts.pory"
	lock
# 16 "data/maps/RestArea1_Indoor/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_REST_AREA_1_ENCOUNTERED
# 17 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_RESTAREA1_JOSIE, RestArea1_Indoor_Josie_Movement_0
# 18 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 19 "data/maps/RestArea1_Indoor/scripts.pory"
	playse SE_PIN
# 20 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_RESTAREA1_JOSIE, RestArea1_Indoor_Josie_Movement_1
# 21 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 22 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_RESTAREA1_JOSIE, RestArea1_Indoor_Josie_Movement_2
# 23 "data/maps/RestArea1_Indoor/scripts.pory"
	waitse
# 24 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 25 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Josie_Text_0
# 30 "data/maps/RestArea1_Indoor/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_RICHARD
	goto_if 1, RestArea1_Indoor_Josie_2
# 33 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Josie_Text_2
RestArea1_Indoor_Josie_1:
# 35 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Josie_Text_3
# 43 "data/maps/RestArea1_Indoor/scripts.pory"
	setflag FLAG_JOSIE_KNOWS_PLAYER
# 44 "data/maps/RestArea1_Indoor/scripts.pory"
	closemessage
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_RESTAREA1_JOSIE, RestArea1_Indoor_Josie_Movement_3
# 46 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 47 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Josie_Text_4
# 52 "data/maps/RestArea1_Indoor/scripts.pory"
	closemessage
# 53 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_PLAYER, RestArea1_Indoor_Josie_Movement_4
# 54 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 55 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_RESTAREA1_JOSIE, RestArea1_Indoor_Josie_Movement_2
# 56 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 57 "data/maps/RestArea1_Indoor/scripts.pory"
	playse SE_EXIT
# 58 "data/maps/RestArea1_Indoor/scripts.pory"
	waitse
# 59 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement LOCALID_RESTAREA1_JOSIE, RestArea1_Indoor_Josie_Movement_5
# 60 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 61 "data/maps/RestArea1_Indoor/scripts.pory"
	releaseall
	return

RestArea1_Indoor_Josie_2:
# 31 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Josie_Text_1
	goto RestArea1_Indoor_Josie_1


RestArea1_Indoor_Nurse::
# 65 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Nurse_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Woman::
# 73 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Woman_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Hiker::
# 77 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Hiker_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Maniac::
# 81 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Maniac_Text_0, MSGBOX_NPC
# 82 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement VAR_LAST_TALKED, RestArea1_Indoor_Maniac_Movement_0
# 83 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 84 "data/maps/RestArea1_Indoor/scripts.pory"
	releaseall
	return


RestArea1_Indoor_Girl::
# 88 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Girl_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_RichBoy::
# 92 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_RichBoy_Text_0, MSGBOX_NPC
	return


RestArea1_Indoor_Man::
# 96 "data/maps/RestArea1_Indoor/scripts.pory"
	msgbox RestArea1_Indoor_Man_Text_0, MSGBOX_NPC
# 97 "data/maps/RestArea1_Indoor/scripts.pory"
	applymovement VAR_LAST_TALKED, RestArea1_Indoor_Maniac_Movement_0
# 98 "data/maps/RestArea1_Indoor/scripts.pory"
	waitmovement 0
# 99 "data/maps/RestArea1_Indoor/scripts.pory"
	releaseall
	return


# 17 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Josie_Movement_0:
# 17 "data/maps/RestArea1_Indoor/scripts.pory"
	walk_right
# 17 "data/maps/RestArea1_Indoor/scripts.pory"
	walk_right
# 17 "data/maps/RestArea1_Indoor/scripts.pory"
	walk_right
# 17 "data/maps/RestArea1_Indoor/scripts.pory"
	face_down
	step_end

# 20 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Josie_Movement_1:
# 20 "data/maps/RestArea1_Indoor/scripts.pory"
	emote_exclamation_mark
	step_end

# 22 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Josie_Movement_2:
# 22 "data/maps/RestArea1_Indoor/scripts.pory"
	walk_down
	step_end

# 45 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Josie_Movement_3:
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	face_up
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	delay_16
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	delay_16
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	delay_16
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	delay_16
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	delay_16
# 45 "data/maps/RestArea1_Indoor/scripts.pory"
	face_down
	step_end

# 53 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Josie_Movement_4:
# 53 "data/maps/RestArea1_Indoor/scripts.pory"
	walk_left
# 53 "data/maps/RestArea1_Indoor/scripts.pory"
	face_right
	step_end

# 59 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Josie_Movement_5:
# 59 "data/maps/RestArea1_Indoor/scripts.pory"
	set_invisible
	step_end

# 82 "data/maps/RestArea1_Indoor/scripts.pory"
RestArea1_Indoor_Maniac_Movement_0:
# 82 "data/maps/RestArea1_Indoor/scripts.pory"
	face_up
	step_end

RestArea1_Indoor_Josie_Text_0:
# 26 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "It's good to see you!\p"
	.string "I hope Richard didn't give you too much\ntrouble after I left.\p"
	.string "...$"

RestArea1_Indoor_Josie_Text_1:
# 31 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "You beat him?\nNice!\pI bet that really showed him!\nI wish I could've seen it.$"

RestArea1_Indoor_Josie_Text_2:
# 33 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "He got you too did he?\nThat sucks.\pI'm sure you'll get another chance,\nI'll be rooting for you when you do!$"

RestArea1_Indoor_Josie_Text_3:
# 36 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Wait, I never got your name!\p"
	.string "This needs to be fixed!\p"
	.string "...\p{PLAYER}?\p"
	.string "Well, it's good to officially meet you\n{PLAYER}!\p"
	.string "My name's Josie!\p"
	.string "We should catch up for a Pokemon Battle\nsometime soon!\pI'd offer to do one here but...$"

RestArea1_Indoor_Josie_Text_4:
# 48 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "We're not allowed to battle in the\nRest Areas, it's a safety rule.\p"
	.string "So we'll have to meet up somewhere else!\p"
	.string "I'll head out first {PLAYER},\nhope to see you soon!$"

RestArea1_Indoor_Nurse_Text_0:
# 66 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Welcome to the Rest Area!\p"
	.string "Rest Areas are spots set up between\ntowns to give trainers some respite,\land they act as a place for mingling.\p"
	.string "Feel free to take a break in an empty\nroom, or talk with your fellow trainers!$"

RestArea1_Indoor_Woman_Text_0:
# 73 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "I didn't really need to use the Rest\n"
	.string "Area, but sitting down on a chair sure is\l"
	.string "nice.$"

RestArea1_Indoor_Hiker_Text_0:
# 77 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "You takin' a break too lad?$"

RestArea1_Indoor_Maniac_Text_0:
# 81 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "I'm washing up after eating, because\n"
	.string "that's the polite thing to do.$"

RestArea1_Indoor_Girl_Text_0:
# 88 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Have you been in the small bit of forest\nnearby yet?\pIt's pretty spooky in there!$"

RestArea1_Indoor_RichBoy_Text_0:
# 92 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "I'll have you know that I could afford\n"
	.string "to sleep in a 5 star hotel, I just\l"
	.string "thought I'd see how the lower class\l"
	.string "spends their time.$"

RestArea1_Indoor_Man_Text_0:
# 96 "data/maps/RestArea1_Indoor/scripts.pory"
	.string "Do you mind?$"
