CrownForestNorth_MapScripts::
# 2 "data/maps/CrownForestNorth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CrownForestNorth_OnLoad
	.byte 0


CrownForestNorth_OnLoad::
# 6 "data/maps/CrownForestNorth/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
	goto_if_lt CrownForestNorth_OnLoad_2
# 9 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_TEMP_A
CrownForestNorth_OnLoad_1:
# 12 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_OPENED_SHRUB_1, CrownForestNorth_OnLoad_5
	return

CrownForestNorth_OnLoad_2:
# 7 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_TEMP_A, 1
	goto CrownForestNorth_OnLoad_1

CrownForestNorth_OnLoad_5:
# 13 "data/maps/CrownForestNorth/scripts.pory"
	setmetatile 13, 7, METATILE_Fortree_SecretBase_ShrubOpen, FALSE
	return


CrownForestNorth_JosieEncounter::
# 18 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_TEMP_A, 0
# 19 "data/maps/CrownForestNorth/scripts.pory"
	waitse
# 20 "data/maps/CrownForestNorth/scripts.pory"
	playse SE_PIN
# 21 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_0
# 22 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement LOCALID_CROWN_NORTH_JOSIE
# 23 "data/maps/CrownForestNorth/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 24 "data/maps/CrownForestNorth/scripts.pory"
	switch VAR_TEMP_2
# 25 "data/maps/CrownForestNorth/scripts.pory"
	case 8, CrownForestNorth_JosieEncounter_3
# 26 "data/maps/CrownForestNorth/scripts.pory"
	case 9, CrownForestNorth_JosieEncounter_4
# 27 "data/maps/CrownForestNorth/scripts.pory"
	case 10, CrownForestNorth_JosieEncounter_5
# 28 "data/maps/CrownForestNorth/scripts.pory"
	case 11, CrownForestNorth_JosieEncounter_6
CrownForestNorth_JosieEncounter_1:
# 30 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement LOCALID_CROWN_NORTH_JOSIE
# 31 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_JOSIE_KNOWS_PLAYER, CrownForestNorth_JosieEncounter_8
# 38 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_1, MSGBOX_DEFAULT
CrownForestNorth_JosieEncounter_7:
# 47 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_2, MSGBOX_DEFAULT
# 48 "data/maps/CrownForestNorth/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, CrownForestNorth_JosieEncounter_12
# 55 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_4, MSGBOX_DEFAULT
CrownForestNorth_JosieEncounter_11:
# 62 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_JOSIE_KNOWS_PLAYER, CrownForestNorth_JosieEncounter_16
CrownForestNorth_JosieEncounter_15:
# 63 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_JOSIE_KNOWS_PLAYER
# 64 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_6, MSGBOX_AUTOCLOSE
# 68 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_no_intro TRAINER_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Text_7
# 72 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_8, MSGBOX_AUTOCLOSE
# 77 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 78 "data/maps/CrownForestNorth/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq CrownForestNorth_JosieEncounter_19
# 80 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_6
CrownForestNorth_JosieEncounter_18:
# 81 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement LOCALID_CROWN_NORTH_JOSIE
# 82 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_7
# 83 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement 0
# 84 "data/maps/CrownForestNorth/scripts.pory"
	setobjectxyperm LOCALID_CROWN_NORTH_JOSIE, 0, 0
# 85 "data/maps/CrownForestNorth/scripts.pory"
	playse SE_EXIT
# 86 "data/maps/CrownForestNorth/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 87 "data/maps/CrownForestNorth/scripts.pory"
	waitse
# 88 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_TEMP_A
# 89 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
# 90 "data/maps/CrownForestNorth/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 91 "data/maps/CrownForestNorth/scripts.pory"
	releaseall
	return

CrownForestNorth_JosieEncounter_3:
# 25 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_1
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_4:
# 26 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_2
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_5:
# 27 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_3
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_6:
# 28 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_4
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_8:
# 32 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_0, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_7

CrownForestNorth_JosieEncounter_12:
# 49 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_3, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_11

CrownForestNorth_JosieEncounter_16:
# 62 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_5, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_15

CrownForestNorth_JosieEncounter_19:
# 79 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_5
	goto CrownForestNorth_JosieEncounter_18


CrownForestNorth_BugManiac::
# 95 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BUG_MANIAC, CrownForestNorth_BugManiac_Text_0, CrownForestNorth_BugManiac_Text_1
# 100 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BugManiac_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Hiker::
# 104 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_HIKER, CrownForestNorth_Hiker_Text_0, CrownForestNorth_Hiker_Text_1
# 109 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Hiker_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BlackBelt::
# 113 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BLACKBELT, CrownForestNorth_BlackBelt_Text_0, CrownForestNorth_BlackBelt_Text_1
# 118 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BlackBelt_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BattleGirl::
# 122 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BATTLEGIRL, CrownForestNorth_BattleGirl_Text_0, CrownForestNorth_BattleGirl_Text_1
# 127 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BattleGirl_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Parasol::
# 131 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_PARASOL, CrownForestNorth_Parasol_Text_0, CrownForestNorth_Parasol_Text_1
# 136 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Parasol_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BirdKeeper::
# 140 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BIRD_KEEPER, CrownForestNorth_BirdKeeper_Text_0, CrownForestNorth_BirdKeeper_Text_1
# 145 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BirdKeeper_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Breeder::
# 149 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BREEDER, CrownForestNorth_Breeder_Text_0, CrownForestNorth_Breeder_Text_1
# 154 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Breeder_Text_2, MSGBOX_NPC
	return


CrownForestNorth_AromaLady::
# 158 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_AROMA_LADY, CrownForestNorth_AromaLady_Text_0, CrownForestNorth_AromaLady_Text_1
# 163 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_AromaLady_Text_2, MSGBOX_NPC
	return


# 21 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_0:
# 21 "data/maps/CrownForestNorth/scripts.pory"
	emote_exclamation_mark
# 21 "data/maps/CrownForestNorth/scripts.pory"
	delay_16
# 21 "data/maps/CrownForestNorth/scripts.pory"
	delay_16
	step_end

# 25 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_1:
# 25 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 25 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 25 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 25 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 26 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_2:
# 26 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 26 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 26 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 27 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_3:
# 27 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 27 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 28 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_4:
# 28 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 28 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
# 28 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_5:
# 79 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
	step_end

# 80 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_6:
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_7:
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 82 "data/maps/CrownForestNorth/scripts.pory"
	set_invisible
	step_end

CrownForestNorth_JosieEncounter_Text_0:
# 33 "data/maps/CrownForestNorth/scripts.pory"
	.string "{PLAYER}!\p"
	.string "I see you've made it past the trees on\nRoute 3!\p"
	.string "How did you go with the Gym battle?\nI hope it was fun for you too!$"

CrownForestNorth_JosieEncounter_Text_1:
# 39 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh hey!\p"
	.string "You made it through the Gym too!\nI hope Nami wasn't too harsh on you!\p"
	.string "Hey wait, I never caught your name!\nFellow trainers out on an adventure,\land I don't even know what to call you!\p"
	.string "My name is Josie!\nWhat about you?\p"
	.string "{PLAYER}!\nAlright!$"

CrownForestNorth_JosieEncounter_Text_2:
# 47 "data/maps/CrownForestNorth/scripts.pory"
	.string "Say, I heard that Richard was hanging\naround the Digger's Hut on Route 3.\pDid you run into him?$"

CrownForestNorth_JosieEncounter_Text_3:
# 50 "data/maps/CrownForestNorth/scripts.pory"
	.string "You beat him in a battle?\nNice!\p"
	.string "Man I wish I could've seen it!\p"
	.string "That means you must be pretty good\nat battling right?$"

CrownForestNorth_JosieEncounter_Text_4:
# 56 "data/maps/CrownForestNorth/scripts.pory"
	.string "Didn't go too well huh?\nThat's unfortunate.\p"
	.string "I'm sure you'll get him next time though,\nyou'll probably run into him again.\p"
	.string "Oh! Tell you what!$"

CrownForestNorth_JosieEncounter_Text_5:
# 62 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm pretty sure I owe you a battle too!$"

CrownForestNorth_JosieEncounter_Text_6:
# 65 "data/maps/CrownForestNorth/scripts.pory"
	.string "We've met out on a route, that means\nwe're rival trainers!\p"
	.string "I hope you're ready to battle, cause\nI know I am!$"

CrownForestNorth_JosieEncounter_Text_7:
# 70 "data/maps/CrownForestNorth/scripts.pory"
	.string "Wow! You're pretty good!\nI'll have to train harder for next time!$"

CrownForestNorth_JosieEncounter_Text_8:
# 73 "data/maps/CrownForestNorth/scripts.pory"
	.string "Well you sure know how to battle!\p"
	.string "Keep up this momentum, and don't let\nRichard pull ahead of you.\p"
	.string "I'll be off to heal now, we should\ndo this again!$"

CrownForestNorth_BugManiac_Text_0:
# 97 "data/maps/CrownForestNorth/scripts.pory"
	.string "Shh...\nDo you hear that?$"

CrownForestNorth_BugManiac_Text_1:
# 98 "data/maps/CrownForestNorth/scripts.pory"
	.string "I was trying to listen!$"

CrownForestNorth_BugManiac_Text_2:
# 100 "data/maps/CrownForestNorth/scripts.pory"
	.string "I can hear something rustling about in\n"
	.string "the grass...$"

CrownForestNorth_Hiker_Text_0:
# 106 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm getting soaked!$"

CrownForestNorth_Hiker_Text_1:
# 107 "data/maps/CrownForestNorth/scripts.pory"
	.string "No! My socks got wet!$"

CrownForestNorth_Hiker_Text_2:
# 109 "data/maps/CrownForestNorth/scripts.pory"
	.string "I should've packed an umbrella...$"

CrownForestNorth_BlackBelt_Text_0:
# 115 "data/maps/CrownForestNorth/scripts.pory"
	.string "LET US COMMENCE BATTLE!$"

CrownForestNorth_BlackBelt_Text_1:
# 116 "data/maps/CrownForestNorth/scripts.pory"
	.string "THE BATTLE DIDN'T GO AS PLANNED!$"

CrownForestNorth_BlackBelt_Text_2:
# 118 "data/maps/CrownForestNorth/scripts.pory"
	.string "How's it going?$"

CrownForestNorth_BattleGirl_Text_0:
# 124 "data/maps/CrownForestNorth/scripts.pory"
	.string "If I win you have to drop and give\nme 20!$"

CrownForestNorth_BattleGirl_Text_1:
# 125 "data/maps/CrownForestNorth/scripts.pory"
	.string "Suit yourself, more pushups for me!$"

CrownForestNorth_BattleGirl_Text_2:
# 127 "data/maps/CrownForestNorth/scripts.pory"
	.string "Get a load of these guns!$"

CrownForestNorth_Parasol_Text_0:
# 133 "data/maps/CrownForestNorth/scripts.pory"
	.string "Am I the only person prepared?$"

CrownForestNorth_Parasol_Text_1:
# 134 "data/maps/CrownForestNorth/scripts.pory"
	.string "You may have won, but I'm still dry.\nSo who's the real winner?$"

CrownForestNorth_Parasol_Text_2:
# 136 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'd heard that it rains a lot in here, but\n"
	.string "it really does.$"

CrownForestNorth_BirdKeeper_Text_0:
# 142 "data/maps/CrownForestNorth/scripts.pory"
	.string "Wet wings can still fly!$"

CrownForestNorth_BirdKeeper_Text_1:
# 143 "data/maps/CrownForestNorth/scripts.pory"
	.string "Help! Feathers full of water!$"

CrownForestNorth_BirdKeeper_Text_2:
# 145 "data/maps/CrownForestNorth/scripts.pory"
	.string "Flying types are good against all the\n"
	.string "bugs here.$"

CrownForestNorth_Breeder_Text_0:
# 151 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm just out for a stroll, care to have\nsome fun?$"

CrownForestNorth_Breeder_Text_1:
# 152 "data/maps/CrownForestNorth/scripts.pory"
	.string "My babies need to expend their energy\nsomehow after all.$"

CrownForestNorth_Breeder_Text_2:
# 154 "data/maps/CrownForestNorth/scripts.pory"
	.string "Even if I lose, battling trainers is a\n"
	.string "good way to exercise.$"

CrownForestNorth_AromaLady_Text_0:
# 160 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm not really a fan of standing around\nin the rain.$"

CrownForestNorth_AromaLady_Text_1:
# 161 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh dear...$"

CrownForestNorth_AromaLady_Text_2:
# 163 "data/maps/CrownForestNorth/scripts.pory"
	.string "At least the Rest Area stays dry.$"
