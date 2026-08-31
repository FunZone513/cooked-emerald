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
	applymovement LOCALID_PLAYER, CrownForestNorth_JosieEncounter_Movement_0
# 16 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement 0
# 17 "data/maps/CrownForestNorth/scripts.pory"
	playse SE_PIN
# 18 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_1
# 19 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement 0
# 20 "data/maps/CrownForestNorth/scripts.pory"
	getobjectxy LOCALID_PLAYER, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 21 "data/maps/CrownForestNorth/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq CrownForestNorth_JosieEncounter_2
CrownForestNorth_JosieEncounter_1:
# 25 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_JOSIE_KNOWS_PLAYER, CrownForestNorth_JosieEncounter_5
# 32 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_1, MSGBOX_DEFAULT
CrownForestNorth_JosieEncounter_4:
# 41 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_2, MSGBOX_DEFAULT
# 42 "data/maps/CrownForestNorth/scripts.pory"
	compare VAR_GAME_PROGRESS, GP_DIGGERS_HUT_ENCOUNTERED
	goto_if_eq CrownForestNorth_JosieEncounter_9
# 58 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_6, MSGBOX_DEFAULT
CrownForestNorth_JosieEncounter_8:
# 65 "data/maps/CrownForestNorth/scripts.pory"
	goto_if_set FLAG_JOSIE_KNOWS_PLAYER, CrownForestNorth_JosieEncounter_13
CrownForestNorth_JosieEncounter_12:
# 66 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_JOSIE_KNOWS_PLAYER
# 67 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_8, MSGBOX_AUTOCLOSE
# 71 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_no_intro TRAINER_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Text_9
# 75 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_10, MSGBOX_AUTOCLOSE
# 80 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_3
# 81 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement 0
# 82 "data/maps/CrownForestNorth/scripts.pory"
	setobjectxyperm LOCALID_CROWN_NORTH_JOSIE, 0, 0
# 83 "data/maps/CrownForestNorth/scripts.pory"
	playse SE_EXIT
# 84 "data/maps/CrownForestNorth/scripts.pory"
	waitse
# 85 "data/maps/CrownForestNorth/scripts.pory"
	setflag FLAG_TEMP_A
# 86 "data/maps/CrownForestNorth/scripts.pory"
	setvar VAR_GAME_PROGRESS, GP_FOREST_JOSIE_ENCOUNTERED
# 87 "data/maps/CrownForestNorth/scripts.pory"
	call Generic_UPDATE_LEVELCAP
# 88 "data/maps/CrownForestNorth/scripts.pory"
	releaseall
	return

CrownForestNorth_JosieEncounter_2:
# 22 "data/maps/CrownForestNorth/scripts.pory"
	applymovement LOCALID_CROWN_NORTH_JOSIE, CrownForestNorth_JosieEncounter_Movement_2
# 23 "data/maps/CrownForestNorth/scripts.pory"
	waitmovement 0
	goto CrownForestNorth_JosieEncounter_1

CrownForestNorth_JosieEncounter_5:
# 26 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_0, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_4

CrownForestNorth_JosieEncounter_9:
# 43 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_3
# 44 "data/maps/CrownForestNorth/scripts.pory"
	checktrainerflag TRAINER_DIGGERS_HUT_RICHARD
	goto_if 1, CrownForestNorth_JosieEncounter_15
# 51 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_5, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_8

CrownForestNorth_JosieEncounter_13:
# 65 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_7, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_12

CrownForestNorth_JosieEncounter_15:
# 45 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_JosieEncounter_Text_4, MSGBOX_DEFAULT
	goto CrownForestNorth_JosieEncounter_8


CrownForestNorth_BugManiac::
# 92 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BUG_MANIAC, CrownForestNorth_BugManiac_Text_0, CrownForestNorth_BugManiac_Text_1
# 97 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BugManiac_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Hiker::
# 101 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_HIKER, CrownForestNorth_Hiker_Text_0, CrownForestNorth_Hiker_Text_1
# 106 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Hiker_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BlackBelt::
# 110 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BLACKBELT, CrownForestNorth_BlackBelt_Text_0, CrownForestNorth_BlackBelt_Text_1
# 115 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BlackBelt_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BattleGirl::
# 119 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BATTLEGIRL, CrownForestNorth_BattleGirl_Text_0, CrownForestNorth_BattleGirl_Text_1
# 124 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BattleGirl_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Parasol::
# 128 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_PARASOL, CrownForestNorth_Parasol_Text_0, CrownForestNorth_Parasol_Text_1
# 133 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Parasol_Text_2, MSGBOX_NPC
	return


CrownForestNorth_BirdKeeper::
# 137 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BIRD_KEEPER, CrownForestNorth_BirdKeeper_Text_0, CrownForestNorth_BirdKeeper_Text_1
# 142 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_BirdKeeper_Text_2, MSGBOX_NPC
	return


CrownForestNorth_Breeder::
# 146 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_BREEDER, CrownForestNorth_Breeder_Text_0, CrownForestNorth_Breeder_Text_1
# 151 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_Breeder_Text_2, MSGBOX_NPC
	return


CrownForestNorth_AromaLady::
# 155 "data/maps/CrownForestNorth/scripts.pory"
	trainerbattle_single TRAINER_CROWN_NORTH_AROMA_LADY, CrownForestNorth_AromaLady_Text_0, CrownForestNorth_AromaLady_Text_1
# 160 "data/maps/CrownForestNorth/scripts.pory"
	msgbox CrownForestNorth_AromaLady_Text_2, MSGBOX_NPC
	return


# 15 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_0:
# 15 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
# 15 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
# 15 "data/maps/CrownForestNorth/scripts.pory"
	walk_down
# 15 "data/maps/CrownForestNorth/scripts.pory"
	face_right
	step_end

# 18 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_1:
# 18 "data/maps/CrownForestNorth/scripts.pory"
	emote_exclamation_mark
# 18 "data/maps/CrownForestNorth/scripts.pory"
	delay_16
# 18 "data/maps/CrownForestNorth/scripts.pory"
	delay_16
# 18 "data/maps/CrownForestNorth/scripts.pory"
	face_left
	step_end

# 22 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_2:
# 22 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
	step_end

# 80 "data/maps/CrownForestNorth/scripts.pory"
CrownForestNorth_JosieEncounter_Movement_3:
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_left
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 80 "data/maps/CrownForestNorth/scripts.pory"
	walk_up
# 80 "data/maps/CrownForestNorth/scripts.pory"
	set_invisible
	step_end

CrownForestNorth_JosieEncounter_Text_0:
# 27 "data/maps/CrownForestNorth/scripts.pory"
	.string "{PLAYER}!\p"
	.string "I see you've made it past the trees on\nRoute 3!\p"
	.string "How did you go with the Gym battle?\nI hope it was fun for you too!$"

CrownForestNorth_JosieEncounter_Text_1:
# 33 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh hey!\p"
	.string "You made it through the Gym too!\nI hope Nami wasn't too harsh on you!\p"
	.string "Hey wait, I never caught your name!\nFellow trainers out on an adventure,\land I don't even know what to call you!\p"
	.string "My name is Josie!\nWhat about you?\p"
	.string "{PLAYER}!\nAlright!$"

CrownForestNorth_JosieEncounter_Text_2:
# 41 "data/maps/CrownForestNorth/scripts.pory"
	.string "Say, I heard that Richard was hanging\naround the Digger's Hut on Route 3.$"

CrownForestNorth_JosieEncounter_Text_3:
# 43 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh he was?\nHow did that go?$"

CrownForestNorth_JosieEncounter_Text_4:
# 46 "data/maps/CrownForestNorth/scripts.pory"
	.string "You beat him in a battle?\nNice!\p"
	.string "Man I wish I could've seen it!\p"
	.string "That means you must be pretty good\nat battling right?$"

CrownForestNorth_JosieEncounter_Text_5:
# 52 "data/maps/CrownForestNorth/scripts.pory"
	.string "Didn't go too well huh?\nThat's unfortunate.\p"
	.string "I'm sure you'll get him next time though,\nyou'll probably run into him again.\p"
	.string "Oh! Tell you what!$"

CrownForestNorth_JosieEncounter_Text_6:
# 59 "data/maps/CrownForestNorth/scripts.pory"
	.string "I hope he's not causing too much grief\nfor the people over there...\p"
	.string "He seems like the kinda guy that picks\nfights where ever he goes.\p"
	.string "Oh, speaking of fights!$"

CrownForestNorth_JosieEncounter_Text_7:
# 65 "data/maps/CrownForestNorth/scripts.pory"
	.string "I owe you a battle!$"

CrownForestNorth_JosieEncounter_Text_8:
# 68 "data/maps/CrownForestNorth/scripts.pory"
	.string "We've met out on a route, that means we\nneed to have a battle of our own!\p"
	.string "I hope you're ready, cause I know I am!$"

CrownForestNorth_JosieEncounter_Text_9:
# 73 "data/maps/CrownForestNorth/scripts.pory"
	.string "Wow! You're pretty good!\nI'm gonna have to train harder!$"

CrownForestNorth_JosieEncounter_Text_10:
# 76 "data/maps/CrownForestNorth/scripts.pory"
	.string "Well you sure know how to battle!\p"
	.string "Keep up this momentum, and don't let\nRichard pull ahead of you.\p"
	.string "I'll be off to heal now, we should\ndo this again some time!$"

CrownForestNorth_BugManiac_Text_0:
# 94 "data/maps/CrownForestNorth/scripts.pory"
	.string "Shh...\nDo you hear that?$"

CrownForestNorth_BugManiac_Text_1:
# 95 "data/maps/CrownForestNorth/scripts.pory"
	.string "I was trying to listen!$"

CrownForestNorth_BugManiac_Text_2:
# 97 "data/maps/CrownForestNorth/scripts.pory"
	.string "I can hear something rustling about in\n"
	.string "the grass...$"

CrownForestNorth_Hiker_Text_0:
# 103 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm getting soaked!$"

CrownForestNorth_Hiker_Text_1:
# 104 "data/maps/CrownForestNorth/scripts.pory"
	.string "No! My socks got wet!$"

CrownForestNorth_Hiker_Text_2:
# 106 "data/maps/CrownForestNorth/scripts.pory"
	.string "I should've packed an umbrella...$"

CrownForestNorth_BlackBelt_Text_0:
# 112 "data/maps/CrownForestNorth/scripts.pory"
	.string "LET US COMMENCE BATTLE!$"

CrownForestNorth_BlackBelt_Text_1:
# 113 "data/maps/CrownForestNorth/scripts.pory"
	.string "THE BATTLE DIDN'T GO AS PLANNED!$"

CrownForestNorth_BlackBelt_Text_2:
# 115 "data/maps/CrownForestNorth/scripts.pory"
	.string "How's it going?$"

CrownForestNorth_BattleGirl_Text_0:
# 121 "data/maps/CrownForestNorth/scripts.pory"
	.string "If I win you have to drop and give\nme 20!$"

CrownForestNorth_BattleGirl_Text_1:
# 122 "data/maps/CrownForestNorth/scripts.pory"
	.string "Suit yourself, more pushups for me!$"

CrownForestNorth_BattleGirl_Text_2:
# 124 "data/maps/CrownForestNorth/scripts.pory"
	.string "Get a load of these guns!$"

CrownForestNorth_Parasol_Text_0:
# 130 "data/maps/CrownForestNorth/scripts.pory"
	.string "Am I the only person prepared?$"

CrownForestNorth_Parasol_Text_1:
# 131 "data/maps/CrownForestNorth/scripts.pory"
	.string "You may have won, but I'm still dry.\nSo who's the real winner?$"

CrownForestNorth_Parasol_Text_2:
# 133 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'd heard that it rains a lot in here, but\n"
	.string "it really does.$"

CrownForestNorth_BirdKeeper_Text_0:
# 139 "data/maps/CrownForestNorth/scripts.pory"
	.string "Wet wings can still fly!$"

CrownForestNorth_BirdKeeper_Text_1:
# 140 "data/maps/CrownForestNorth/scripts.pory"
	.string "Help! Feathers full of water!$"

CrownForestNorth_BirdKeeper_Text_2:
# 142 "data/maps/CrownForestNorth/scripts.pory"
	.string "Flying types are good against all the\n"
	.string "bugs here.$"

CrownForestNorth_Breeder_Text_0:
# 148 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm just out for a stroll, care to have\nsome fun?$"

CrownForestNorth_Breeder_Text_1:
# 149 "data/maps/CrownForestNorth/scripts.pory"
	.string "My babies need to expend their energy\nsomehow after all.$"

CrownForestNorth_Breeder_Text_2:
# 151 "data/maps/CrownForestNorth/scripts.pory"
	.string "Even if I lose, battling trainers is a\n"
	.string "good way to exercise.$"

CrownForestNorth_AromaLady_Text_0:
# 157 "data/maps/CrownForestNorth/scripts.pory"
	.string "I'm not really a fan of standing around\nin the rain.$"

CrownForestNorth_AromaLady_Text_1:
# 158 "data/maps/CrownForestNorth/scripts.pory"
	.string "Oh dear...$"

CrownForestNorth_AromaLady_Text_2:
# 160 "data/maps/CrownForestNorth/scripts.pory"
	.string "At least the Rest Area stays dry.$"
