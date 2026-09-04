CrownForestNorth_MapScripts::
# 2 "data/maps/CrownForestNorth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CrownForestNorth_OnLoad
	.byte 0


CrownForestNorth_OnLoad::
# 6 "data/maps/CrownForestNorth/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
	goto_if_lt CrownForestNorth_OnLoad_1
# 9 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_TEMP_A
	return

CrownForestNorth_OnLoad_1:
# 7 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_TEMP_A, 1
	return


CrownForestNorth_JosieEncounter::
# 14 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_TEMP_A, 0
# 15 "data/maps/CrownForestNorth/scripts.pory"
	waitse
# 16 "data/maps/CrownForestNorth/scripts.pory"
	playse SE_PIN
# 17 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_0
# 18 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement LOCALID_CROWN_NORTH_JOSIE
# 19 "data/maps/CrownForestNorth/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 20 "data/maps/CrownForestNorth/scripts.pory"
	switch VAR_TEMP_2
# 21 "data/maps/CrownForestNorth/scripts.pory"
	case 8, CrownForestNorth_JosieEncounter_3
# 22 "data/maps/CrownForestNorth/scripts.pory"
	case 9, CrownForestNorth_JosieEncounter_4
# 23 "data/maps/CrownForestNorth/scripts.pory"
	case 10, CrownForestNorth_JosieEncounter_5
# 24 "data/maps/CrownForestNorth/scripts.pory"
	case 11, CrownForestNorth_JosieEncounter_6
CrownForestNorth_JosieEncounter_1:
# 26 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement LOCALID_CROWN_NORTH_JOSIE
# 27 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_JOSIE_KNOWS_PLAYER, CrownForestNorth_JosieEncounter_8
# 34 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_1, MSGBOX_DEFAULT
CrownForestNorth_JosieEncounter_7:
# 43 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_2, MSGBOX_DEFAULT
# 44 "data/maps/CrownForestNorth/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, CrownForestNorth_JosieEncounter_12
# 51 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_4, MSGBOX_DEFAULT
CrownForestNorth_JosieEncounter_11:
# 58 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_JOSIE_KNOWS_PLAYER, CrownForestNorth_JosieEncounter_16
CrownForestNorth_JosieEncounter_15:
# 59 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_JOSIE_KNOWS_PLAYER
# 60 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_6, MSGBOX_AUTOCLOSE
# 64 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_no_intro TRAINER_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Text_7
# 68 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_8, MSGBOX_AUTOCLOSE
# 73 "data/maps/CrownForestNorth/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq CrownForestNorth_JosieEncounter_19
# 75 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_6
CrownForestNorth_JosieEncounter_18:
# 76 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement LOCALID_CROWN_NORTH_JOSIE
# 77 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_7
# 78 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement 0
# 79 "data/maps/CrownForestNorth/scripts.pory"
	setobjectxyperm LOCALID_CROWN_NORTH_JOSIE, 0, 0
# 80 "data/maps/CrownForestNorth/scripts.pory"
	playse SE_EXIT
# 81 "data/maps/CrownForestNorth/scripts.pory"
	waitse
# 82 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_TEMP_A
# 83 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
# 84 "data/maps/CrownForestNorth/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 85 "data/maps/CrownForestNorth/scripts.pory"
	releaseall
	return

CrownForestNorth_JosieEncounter_3:
# 21 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_1
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_4:
# 22 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_2
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_5:
# 23 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_3
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_6:
# 24 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_4
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_8:
# 28 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_0, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_7

CrownForestNorth_JosieEncounter_12:
# 45 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_3, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_11

CrownForestNorth_JosieEncounter_16:
# 58 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_5, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_15

CrownForestNorth_JosieEncounter_19:
# 74 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_5
	goto CrownForestNorth_JosieEncounter_18


CrownForestNorth_BugManiac::
# 89 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BUG_MANIAC, CrownForestNorth_BugManiac_Text_0, CrownForestNorth_BugManiac_Text_1
# 94 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BugManiac_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Hiker::
# 98 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_HIKER, CrownForestNorth_Hiker_Text_0, CrownForestNorth_Hiker_Text_1
# 103 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Hiker_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BlackBelt::
# 107 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BLACKBELT, CrownForestNorth_BlackBelt_Text_0, CrownForestNorth_BlackBelt_Text_1
# 112 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BlackBelt_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BattleGirl::
# 116 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BATTLEGIRL, CrownForestNorth_BattleGirl_Text_0, CrownForestNorth_BattleGirl_Text_1
# 121 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BattleGirl_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Parasol::
# 125 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_PARASOL, CrownForestNorth_Parasol_Text_0, CrownForestNorth_Parasol_Text_1
# 130 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Parasol_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BirdKeeper::
# 134 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BIRD_KEEPER, CrownForestNorth_BirdKeeper_Text_0, CrownForestNorth_BirdKeeper_Text_1
# 139 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BirdKeeper_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Breeder::
# 143 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BREEDER, CrownForestNorth_Breeder_Text_0, CrownForestNorth_Breeder_Text_1
# 148 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Breeder_Text_2, MSGBOX_NPC
	return


CrownForestNorth_AromaLady::
# 152 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_AROMA_LADY, CrownForestNorth_AromaLady_Text_0, CrownForestNorth_AromaLady_Text_1
# 157 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_AromaLady_Text_2, MSGBOX_NPC
	return


# 17 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_0:
# 17 "data/maps/CrownForestNorth/scripts.pory"
	emote_exclamation_mark
	step_end

# 21 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_1:
# 21 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 21 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 21 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 21 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 22 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_2:
# 22 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 22 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 22 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 23 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_3:
# 23 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 23 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 24 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_4:
# 24 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 24 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
# 24 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 74 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_5:
# 74 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
	step_end

# 75 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_6:
# 75 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_7:
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 77 "data/maps/CrownForestNorth/scripts.pory"
	set_invisible
	step_end

CrownForestNorth_JosieEncounter_Text_0:
# 29 "data/maps/CrownForestNorth/scripts.pory"
	.string "{PLAYER}!\p"
	.string "I see you've made it past the trees on\nRoute 3!\p"
	.string "How did you go with the Gym battle?\nI hope it was fun for you too!$"

CrownForestNorth_JosieEncounter_Text_1:
# 35 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh hey!\p"
	.string "You made it through the Gym too!\nI hope Nami wasn't too harsh on you!\p"
	.string "Hey wait, I never caught your name!\nFellow trainers out on an adventure,\land I don't even know what to call you!\p"
	.string "My name is Josie!\nWhat about you?\p"
	.string "{PLAYER}!\nAlright!$"

CrownForestNorth_JosieEncounter_Text_2:
# 43 "data/maps/CrownForestNorth/scripts.pory"
	.string "Say, I heard that Richard was hanging\naround the Digger's Hut on Route 3.$"

CrownForestNorth_JosieEncounter_Text_3:
# 46 "data/maps/CrownForestNorth/scripts.pory"
	.string "You beat him in a battle?\nNice!\p"
	.string "Man I wish I could've seen it!\p"
	.string "That means you must be pretty good\nat battling right?$"

CrownForestNorth_JosieEncounter_Text_4:
# 52 "data/maps/CrownForestNorth/scripts.pory"
	.string "Didn't go too well huh?\nThat's unfortunate.\p"
	.string "I'm sure you'll get him next time though,\nyou'll probably run into him again.\p"
	.string "Oh! Tell you what!$"

CrownForestNorth_JosieEncounter_Text_5:
# 58 "data/maps/CrownForestNorth/scripts.pory"
	.string "Pretty sure I owe you a battle!$"

CrownForestNorth_JosieEncounter_Text_6:
# 61 "data/maps/CrownForestNorth/scripts.pory"
	.string "We've met out on a route, that means we\nneed to have a battle of our own!\p"
	.string "I hope you're ready, cause I know I am!$"

CrownForestNorth_JosieEncounter_Text_7:
# 66 "data/maps/CrownForestNorth/scripts.pory"
	.string "Wow! You're pretty good!\nI'll have to train harder for next time!$"

CrownForestNorth_JosieEncounter_Text_8:
# 69 "data/maps/CrownForestNorth/scripts.pory"
	.string "Well you sure know how to battle!\p"
	.string "Keep up this momentum, and don't let\nRichard pull ahead of you.\p"
	.string "I'll be off to heal now, we should\ndo this again!$"

CrownForestNorth_BugManiac_Text_0:
# 91 "data/maps/CrownForestNorth/scripts.pory"
	.string "Shh...\nDo you hear that?$"

CrownForestNorth_BugManiac_Text_1:
# 92 "data/maps/CrownForestNorth/scripts.pory"
	.string "I was trying to listen!$"

CrownForestNorth_BugManiac_Text_2:
# 94 "data/maps/CrownForestNorth/scripts.pory"
	.string "I can hear something rustling about in\n"
	.string "the grass...$"

CrownForestNorth_Hiker_Text_0:
# 100 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm getting soaked!$"

CrownForestNorth_Hiker_Text_1:
# 101 "data/maps/CrownForestNorth/scripts.pory"
	.string "No! My socks got wet!$"

CrownForestNorth_Hiker_Text_2:
# 103 "data/maps/CrownForestNorth/scripts.pory"
	.string "I should've packed an umbrella...$"

CrownForestNorth_BlackBelt_Text_0:
# 109 "data/maps/CrownForestNorth/scripts.pory"
	.string "LET US COMMENCE BATTLE!$"

CrownForestNorth_BlackBelt_Text_1:
# 110 "data/maps/CrownForestNorth/scripts.pory"
	.string "THE BATTLE DIDN'T GO AS PLANNED!$"

CrownForestNorth_BlackBelt_Text_2:
# 112 "data/maps/CrownForestNorth/scripts.pory"
	.string "How's it going?$"

CrownForestNorth_BattleGirl_Text_0:
# 118 "data/maps/CrownForestNorth/scripts.pory"
	.string "If I win you have to drop and give\nme 20!$"

CrownForestNorth_BattleGirl_Text_1:
# 119 "data/maps/CrownForestNorth/scripts.pory"
	.string "Suit yourself, more pushups for me!$"

CrownForestNorth_BattleGirl_Text_2:
# 121 "data/maps/CrownForestNorth/scripts.pory"
	.string "Get a load of these guns!$"

CrownForestNorth_Parasol_Text_0:
# 127 "data/maps/CrownForestNorth/scripts.pory"
	.string "Am I the only person prepared?$"

CrownForestNorth_Parasol_Text_1:
# 128 "data/maps/CrownForestNorth/scripts.pory"
	.string "You may have won, but I'm still dry.\nSo who's the real winner?$"

CrownForestNorth_Parasol_Text_2:
# 130 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'd heard that it rains a lot in here, but\n"
	.string "it really does.$"

CrownForestNorth_BirdKeeper_Text_0:
# 136 "data/maps/CrownForestNorth/scripts.pory"
	.string "Wet wings can still fly!$"

CrownForestNorth_BirdKeeper_Text_1:
# 137 "data/maps/CrownForestNorth/scripts.pory"
	.string "Help! Feathers full of water!$"

CrownForestNorth_BirdKeeper_Text_2:
# 139 "data/maps/CrownForestNorth/scripts.pory"
	.string "Flying types are good against all the\n"
	.string "bugs here.$"

CrownForestNorth_Breeder_Text_0:
# 145 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm just out for a stroll, care to have\nsome fun?$"

CrownForestNorth_Breeder_Text_1:
# 146 "data/maps/CrownForestNorth/scripts.pory"
	.string "My babies need to expend their energy\nsomehow after all.$"

CrownForestNorth_Breeder_Text_2:
# 148 "data/maps/CrownForestNorth/scripts.pory"
	.string "Even if I lose, battling trainers is a\n"
	.string "good way to exercise.$"

CrownForestNorth_AromaLady_Text_0:
# 154 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm not really a fan of standing around\nin the rain.$"

CrownForestNorth_AromaLady_Text_1:
# 155 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh dear...$"

CrownForestNorth_AromaLady_Text_2:
# 157 "data/maps/CrownForestNorth/scripts.pory"
	.string "At least the Rest Area stays dry.$"
