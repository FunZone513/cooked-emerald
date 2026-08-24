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
	setvar VAR_TEMP_A, 0
# 20 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 21 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	compare VAR_TEMP_1, 4
	goto_if_eq Route3_DiggersHut_Back_RichardFight_2
Route3_DiggersHut_Back_RichardFight_1:
# 25 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_1
# 26 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
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
	playse SE_WALL_HIT
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_3
# 39 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_4
# 40 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement LOCALID_RICHARD_DIGGERSHUT
# 41 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 42 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 20
# 43 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_5
# 44 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_RichardFight_Text_2
# 45 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 30
# 46 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_6
# 47 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 48 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_RichardFight_Text_3
# 49 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmessage
# 50 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitbuttonpress
# 51 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	closemessage
# 52 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_7
# 53 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	savebgm MUS_RG_RIVAL_EXIT
# 55 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 58 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_RICHARD
	goto_if 1, Route3_DiggersHut_Back_RichardFight_5
# 83 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_earlyrival TRAINER_DIGGERS_HUT_RICHARD, 0, Route3_DiggersHut_Back_RichardFight_Text_8, Route3_DiggersHut_Back_RichardFight_Text_9
# 91 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, Route3_DiggersHut_Back_RichardFight_14
# 99 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_11, MSGBOX_DEFAULT
Route3_DiggersHut_Back_RichardFight_4:
# 105 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_12, MSGBOX_AUTOCLOSE
# 111 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 112 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	fadedefaultbgm
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_RICHARD_DIGGERSHUT, Route3_DiggersHut_Back_RichardFight_Movement_8
# 114 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 115 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 0, Route3_DiggersHut_Back_RichardFight_9
Route3_DiggersHut_Back_RichardFight_8:
# 116 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_9
# 117 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 118 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_FOUGHT_DIGGERS_HUT_RICHARD
# 119 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_13, MSGBOX_DEFAULT
# 125 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto Route3_DiggersHut_Back_Digger
	return

Route3_DiggersHut_Back_RichardFight_2:
# 22 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_PLAYER, Route3_DiggersHut_Back_RichardFight_Movement_0
# 23 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
	goto Route3_DiggersHut_Back_RichardFight_1

Route3_DiggersHut_Back_RichardFight_5:
# 59 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_earlyrival TRAINER_DIGGERS_HUT_RICHARD, 0, Route3_DiggersHut_Back_RichardFight_Text_4, Route3_DiggersHut_Back_RichardFight_Text_5
# 67 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, Route3_DiggersHut_Back_RichardFight_11
# 75 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_7, MSGBOX_DEFAULT
	goto Route3_DiggersHut_Back_RichardFight_4

Route3_DiggersHut_Back_RichardFight_9:
# 115 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto EventScript_FieldWhiteOut
	goto Route3_DiggersHut_Back_RichardFight_8

Route3_DiggersHut_Back_RichardFight_11:
# 68 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_6, MSGBOX_DEFAULT
	goto Route3_DiggersHut_Back_RichardFight_4

Route3_DiggersHut_Back_RichardFight_14:
# 92 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_RichardFight_Text_10, MSGBOX_DEFAULT
	goto Route3_DiggersHut_Back_RichardFight_4


Route3_DiggersHut_Back_Digger::
# 129 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	goto_if_unset FLAG_CAN_DIG_PILE, Route3_DiggersHut_Back_Digger_2
Route3_DiggersHut_Back_Digger_1:
# 167 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Digger_Text_3, MSGBOX_NPC
	return

Route3_DiggersHut_Back_Digger_2:
# 130 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	lock
# 131 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_DIGGER, Route3_DiggersHut_Back_Digger_Movement_0
# 132 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Digger_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 2
# 141 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 30
# 142 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 143 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 144 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 145 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 146 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 30
# 147 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 148 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 149 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 150 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 151 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 20
# 152 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse SE_M_DIG
# 153 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 154 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 40
# 155 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	playse MUS_OBTAIN_ITEM
# 156 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	setflag FLAG_CAN_DIG_PILE
# 157 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	delay 10
# 158 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	message Route3_DiggersHut_Back_Digger_Text_1
# 160 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitse
# 161 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmessage
# 162 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Digger_Text_2, MSGBOX_AUTOCLOSE
# 163 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	applymovement LOCALID_DIGGER, Route3_DiggersHut_Back_RichardFight_Movement_6
# 164 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	waitmovement 0
# 165 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	releaseall
	goto Route3_DiggersHut_Back_Digger_1


Route3_DiggersHut_Back_Hiker::
# 171 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_HIKER, Route3_DiggersHut_Back_Hiker_Text_0, Route3_DiggersHut_Back_Hiker_Text_1
# 176 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Hiker_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_Maniac::
# 180 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_MANIAC, Route3_DiggersHut_Back_Maniac_Text_0, Route3_DiggersHut_Back_Maniac_Text_1
# 185 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_Maniac_Text_2, MSGBOX_NPC
	return


Route3_DiggersHut_Back_BlackBelt::
# 189 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	trainerbattle_single TRAINER_DIGGERS_HUT_BLACKBELT, Route3_DiggersHut_Back_BlackBelt_Text_0, Route3_DiggersHut_Back_BlackBelt_Text_1
# 194 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	msgbox Route3_DiggersHut_Back_BlackBelt_Text_2, MSGBOX_NPC
	return


# 22 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_0:
# 22 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_right
	step_end

# 25 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_1:
# 25 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_2:
# 34 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
	step_end

# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_3:
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_right
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	lock_facing_direction
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_left
# 38 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	unlock_facing_direction
	step_end

# 39 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_4:
# 39 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 39 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 39 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_5:
# 43 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_down
	step_end

# 46 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_6:
# 46 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	face_up
	step_end

# 52 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_7:
# 52 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_fast_left
# 52 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_fast_up
	step_end

# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_8:
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_down
# 113 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	set_invisible
	step_end

# 116 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_RichardFight_Movement_9:
# 116 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_right
# 116 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_up
# 116 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	walk_up
	step_end

# 131 "data/maps/Route3_DiggersHut_Back/scripts.pory"
Route3_DiggersHut_Back_Digger_Movement_0:
# 131 "data/maps/Route3_DiggersHut_Back/scripts.pory"
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
# 44 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "...$"

Route3_DiggersHut_Back_RichardFight_Text_3:
# 48 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Wait a minute...\pIt's you! The one from Horizon Port!\pHaha it's my lucky day!\nI'll take this frustration out on you!$"

Route3_DiggersHut_Back_RichardFight_Text_4:
# 62 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "What? Not again!\nHow are you doing that!?$"

Route3_DiggersHut_Back_RichardFight_Text_5:
# 63 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Looks like your luck ran out.$"

Route3_DiggersHut_Back_RichardFight_Text_6:
# 69 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I bet you think you're all that,\ndefeating me again.\p"
	.string "Next time I'll get some better Pokemon,\nthen we'll see who's stronger.$"

Route3_DiggersHut_Back_RichardFight_Text_7:
# 76 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Last time was just a fluke, this time\nwas the real deal.\p"
	.string "Polish your skills for next time, it'll\nmake winning much more satisfying.$"

Route3_DiggersHut_Back_RichardFight_Text_8:
# 86 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "What? That's not how it goes!$"

Route3_DiggersHut_Back_RichardFight_Text_9:
# 87 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Man, you suck at this.$"

Route3_DiggersHut_Back_RichardFight_Text_10:
# 93 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Well, you've found some good Pokemon\nsince Horizon Port.\p"
	.string "Next time I'll get some better Pokemon,\nthen we'll see who's stronger.\p$"

Route3_DiggersHut_Back_RichardFight_Text_11:
# 100 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You spent all that time exploring for\nthat team?\p"
	.string "At this rate you don't even make a\ngood stepping stone.$"

Route3_DiggersHut_Back_RichardFight_Text_12:
# 106 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Tell me your name, that way I'll at least\nknow what to carve on your gravestone\lafter you die of shame.\p"
	.string "...\p"
	.string "{PLAYER}? Pfft.\nStupid name for a stupid person.\p"
	.string "I'll see you again, '{PLAYER}'.$"

Route3_DiggersHut_Back_RichardFight_Text_13:
# 120 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Well, that was certainly an experience.\p"
	.string "Trainers aren't normally as...\nspirited as he is, thankfully.\p"
	.string "Thanks for putting him in his place, I'd\nhate to think he can act like that and\lget away with it.\p"
	.string "Oh right, digging!\p$"

Route3_DiggersHut_Back_Digger_Text_0:
# 134 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You look like someone who would love\nto get their hands dirty!\p"
	.string "That's probably why you came here in\nthe first place right?\p"
	.string "I'd be happy to give you a few pointers\non how to dig up things!\p"
	.string "It's real easy, and you might get some\ncool goodies from it too!\p"
	.string "Here, grab this shovel and we can get\nstarted....$"

Route3_DiggersHut_Back_Digger_Text_1:
# 159 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Whew! That was fun!\p$"

Route3_DiggersHut_Back_Digger_Text_2:
# 162 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I hope these skills help you out on your\nPokemon Adventure!$"

Route3_DiggersHut_Back_Digger_Text_3:
# 167 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Lairon makes for a great helper!\nHe does tend to eat a lot though...$"

Route3_DiggersHut_Back_Hiker_Text_0:
# 173 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I've got sand in my boots!$"

Route3_DiggersHut_Back_Hiker_Text_1:
# 174 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "No! The sand is in my socks now!$"

Route3_DiggersHut_Back_Hiker_Text_2:
# 176 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I thought big boots would be a good\n"
	.string "idea, but not if they fill up with sand...$"

Route3_DiggersHut_Back_Maniac_Text_0:
# 182 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "You ever wondered what sand tastes\nlike?$"

Route3_DiggersHut_Back_Maniac_Text_1:
# 183 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "crunch... crunch...$"

Route3_DiggersHut_Back_Maniac_Text_2:
# 185 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "Turns out, sand is not great to eat.$"

Route3_DiggersHut_Back_BlackBelt_Text_0:
# 191 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "AH! DON'T SCARE ME LIKE THAT!$"

Route3_DiggersHut_Back_BlackBelt_Text_1:
# 192 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "JUMPSTARTS AREN'T GOOD FOR MY HEART!$"

Route3_DiggersHut_Back_BlackBelt_Text_2:
# 194 "data/maps/Route3_DiggersHut_Back/scripts.pory"
	.string "I'm using my bare hands to dig through\n"
	.string "these rocks, but I think rock might be\l"
	.string "super-effective on bone.$"
