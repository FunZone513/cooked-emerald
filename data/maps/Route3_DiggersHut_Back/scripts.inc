Route3_DiggersHut_Back_MapScripts::
# 2 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route3_DiggersHut_Back_OnLoad
	.byte 0


Route3_DiggersHut_Back_OnLoad::
# 7 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	callnative SetRoute3DiggersTunnelEncounters
# 9 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto_if_unset FLAG_FOUGHT_DIGGERS_HUT_RICHARD, Route3_DiggersHut_Back_OnLoad_1
# 13 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setobjectmovementtype LOCALID_DIGGER, MOVEMENT_TYPE_FACE_UP
	return

Route3_DiggersHut_Back_OnLoad_1:
# 10 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setvar VAR_TEMP_A, 1
# 11 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setobjectmovementtype LOCALID_DIGGER, MOVEMENT_TYPE_FACE_DOWN
	return


Route3_DiggersHut_Back_RichardFight::
# 18 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	lock
# 19 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 20 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setvar VAR_TEMP_A, 0
# 21 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 22 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq Route3_DiggersHut_Back_RichardFight_2
Route3_DiggersHut_Back_RichardFight_1:
# 26 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_1
# 27 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_2
# 35 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_RichardFight_Text_1
# 37 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_3
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_4
# 39 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement LOCALID_RICHARD_DIGGERSHUT
# 40 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 20
# 41 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_5
# 42 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_RichardFight_Text_2
# 43 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 30
# 44 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_6
# 45 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_RichardFight_Text_3
# 47 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmessage
# 48 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitbuttonpress
# 49 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	closemessage
# 50 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_7
# 51 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	savebgm MUS_RG_RIVAL_EXIT
# 53 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 56 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_RICHARD
	goto_if 1, Route3_DiggersHut_Back_RichardFight_5
# 81 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_earlyrival TRAINER_DIGGERS_HUT_RICHARD, 0, Route3_DiggersHut_Back_RichardFight_Text_8, Route3_DiggersHut_Back_RichardFight_Text_9
# 89 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, Route3_DiggersHut_Back_RichardFight_11
# 97 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_11, MSGBOX_DEFAULT
Route3_DiggersHut_Back_RichardFight_4:
# 103 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_12, MSGBOX_AUTOCLOSE
# 109 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 110 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	fadedefaultbgm
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_8
# 112 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_9
# 114 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_FOUGHT_DIGGERS_HUT_RICHARD
# 116 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_13, MSGBOX_DEFAULT
# 122 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto Route3_DiggersHut_Back_Digger
	return

Route3_DiggersHut_Back_RichardFight_2:
# 23 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_0
# 24 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
	goto Route3_DiggersHut_Back_RichardFight_1

Route3_DiggersHut_Back_RichardFight_5:
# 57 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_earlyrival TRAINER_DIGGERS_HUT_RICHARD, 0, Route3_DiggersHut_Back_RichardFight_Text_4, Route3_DiggersHut_Back_RichardFight_Text_5
# 65 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, Route3_DiggersHut_Back_RichardFight_8
# 73 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_7, MSGBOX_DEFAULT
	goto Route3_DiggersHut_Back_RichardFight_4

Route3_DiggersHut_Back_RichardFight_8:
# 66 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_6, MSGBOX_DEFAULT
	goto Route3_DiggersHut_Back_RichardFight_4

Route3_DiggersHut_Back_RichardFight_11:
# 90 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_10, MSGBOX_DEFAULT
	goto Route3_DiggersHut_Back_RichardFight_4


Route3_DiggersHut_Back_Digger::
# 126 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Route3_DiggersHut_Back_Digger_2
Route3_DiggersHut_Back_Digger_1:
# 164 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Digger_Text_3, MSGBOX_NPC
	return

Route3_DiggersHut_Back_Digger_2:
# 127 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	lock
# 128 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_DIGGER, Route3_DiggersHut_Back_Digger_Movement_0
# 129 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Digger_Text_0, MSGBOX_AUTOCLOSE
# 137 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 138 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 30
# 139 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 140 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 141 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 142 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 143 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 30
# 144 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 145 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 146 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 147 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 148 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 20
# 149 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 150 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 151 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 40
# 152 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 153 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_CAN_DIG_PILE
# 154 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 10
# 155 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 156 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_Digger_Text_1
# 157 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 158 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmessage
# 159 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Digger_Text_2, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_DIGGER, Route3_DiggersHut_Back_RichardFight_Movement_6
# 161 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 162 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	releaseall
	goto Route3_DiggersHut_Back_Digger_1


Route3_DiggersHut_Back_Hiker::
# 168 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_HIKER, Route3_DiggersHut_Back_Hiker_Text_0, Route3_DiggersHut_Back_Hiker_Text_1
# 173 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Hiker_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_Maniac::
# 177 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_MANIAC, Route3_DiggersHut_Back_Maniac_Text_0, Route3_DiggersHut_Back_Maniac_Text_1
# 182 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Maniac_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_BlackBelt::
# 186 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_BLACKBELT, Route3_DiggersHut_Back_BlackBelt_Text_0, Route3_DiggersHut_Back_BlackBelt_Text_1
# 191 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_BlackBelt_Text_2, MSGBOX_NPC
	return


# 23 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_0:
# 23 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_right
	step_end

# 26 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_1:
# 26 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_2:
# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_3:
# 37 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_right
# 37 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	lock_facing_direction
# 37 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_left
# 37 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	unlock_facing_direction
	step_end

# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_4:
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
	step_end

# 41 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_5:
# 41 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_down
	step_end

# 44 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_6:
# 44 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_up
	step_end

# 50 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_7:
# 50 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_fast_left
# 50 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_fast_up
	step_end

# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_8:
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	set_invisible
	step_end

# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_9:
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_right
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_up
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_up
	step_end

# 128 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_Digger_Movement_0:
# 128 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_player
	step_end

Route3_DiggersHut_Back_RichardFight_Text_0:
# 29 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I heard that there would be treasure,\nbut you want me to dig around in sand\lfor what, random items and Pokemon?\p"
	.string "Who do you think you are to tell me to\nrummage around in the dirt?\p"
	.string "I've got much better things to do than\nget my hands dirty!\p"
	.string "That's what Pokemon are for!$"

Route3_DiggersHut_Back_RichardFight_Text_1:
# 36 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Get out of my way!$"

Route3_DiggersHut_Back_RichardFight_Text_2:
# 42 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "...$"

Route3_DiggersHut_Back_RichardFight_Text_3:
# 46 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Wait a minute...\pIt's you! The one from Horizon Port!\pHaha it's my lucky day!\nI'll take this frustration out on you!$"

Route3_DiggersHut_Back_RichardFight_Text_4:
# 60 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "What? Not again!\nHow are you doing that!?$"

Route3_DiggersHut_Back_RichardFight_Text_5:
# 61 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Looks like your luck ran out.$"

Route3_DiggersHut_Back_RichardFight_Text_6:
# 67 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I bet you think you're all that,\ndefeating me again.\p"
	.string "Next time I'll get some better Pokemon,\nthen we'll see who's stronger.$"

Route3_DiggersHut_Back_RichardFight_Text_7:
# 74 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Last time was just a fluke, this time\nwas the real deal.\p"
	.string "Polish your skills for next time, it'll\nmake winning much more satisfying.$"

Route3_DiggersHut_Back_RichardFight_Text_8:
# 84 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "What? That's not how it goes!$"

Route3_DiggersHut_Back_RichardFight_Text_9:
# 85 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Man, you suck at this.$"

Route3_DiggersHut_Back_RichardFight_Text_10:
# 91 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Well, you've found some good Pokemon\nsince Horizon Port.\p"
	.string "Next time I'll get some better Pokemon,\nthen we'll see who's stronger.\p$"

Route3_DiggersHut_Back_RichardFight_Text_11:
# 98 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You spent all that time exploring for\nthat team?\p"
	.string "At this rate you don't even make a\ngood stepping stone.$"

Route3_DiggersHut_Back_RichardFight_Text_12:
# 104 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Tell me your name, that way I'll at least\nknow what to carve on your gravestone\lafter you die of shame.\p"
	.string "...\p"
	.string "{PLAYER}? Pfft.\nStupid name for a stupid person.\p"
	.string "I'll see you again, '{PLAYER}'.$"

Route3_DiggersHut_Back_RichardFight_Text_13:
# 117 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Well, that was certainly an experience.\p"
	.string "Trainers aren't normally as...\nspirited as he is, thankfully.\p"
	.string "Thanks for putting him in his place, I'd\nhate to think he can act like that and\lget away with it.\p"
	.string "Oh right, digging!\p$"

Route3_DiggersHut_Back_Digger_Text_0:
# 131 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You look like someone who would love\nto get their hands dirty!\p"
	.string "That's probably why you came here in\nthe first place right?\p"
	.string "I'd be happy to give you a few pointers\non how to dig up things!\p"
	.string "It's real easy, and you might get some\ncool goodies from it too!\p"
	.string "Here, grab this shovel and we can get\nstarted....$"

Route3_DiggersHut_Back_Digger_Text_1:
# 156 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Whew! That was fun!\p$"

Route3_DiggersHut_Back_Digger_Text_2:
# 159 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I hope these skills help you out on your\nPokemon Adventure!$"

Route3_DiggersHut_Back_Digger_Text_3:
# 164 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Lairon makes for a great helper!\nHe does tend to eat a lot though...$"

Route3_DiggersHut_Back_Hiker_Text_0:
# 170 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I've got sand in my boots!$"

Route3_DiggersHut_Back_Hiker_Text_1:
# 171 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "No! The sand is in my socks now!$"

Route3_DiggersHut_Back_Hiker_Text_2:
# 173 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I thought big boots would be a good\n"
	.string "idea, but not if they fill up with sand...$"

Route3_DiggersHut_Back_Maniac_Text_0:
# 179 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You ever wondered what sand tastes\nlike?$"

Route3_DiggersHut_Back_Maniac_Text_1:
# 180 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Blegh, sand everywhere.$"

Route3_DiggersHut_Back_Maniac_Text_2:
# 182 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I'm not one to get my hands dirty,\nso I normally hire people to dig for me.$"

Route3_DiggersHut_Back_BlackBelt_Text_0:
# 188 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "AH! DON'T SCARE ME LIKE THAT!$"

Route3_DiggersHut_Back_BlackBelt_Text_1:
# 189 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "JUMPSTARTS AREN'T GOOD FOR MY HEART!$"

Route3_DiggersHut_Back_BlackBelt_Text_2:
# 191 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I'm using my bare hands to dig through\n"
	.string "these rocks, but I think rock might be\l"
	.string "super-effective on bone.$"
