HorizonPort_MapScripts::
# 2 "data/maps/HorizonPort/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HorizonPort_OnLoad
	.byte 0


HorizonPort_OnLoad::
# 7 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_ADVENTURE_STARTED, HorizonPort_OnLoad_1
	return

HorizonPort_OnLoad_1:
# 8 "data/maps/HorizonPort/scripts.pory"
	call Generic_DefaultSettings
# 9 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
	return


HorizonPort_Sign_Yard::
# 14 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Yard_Text_0, MSGBOX_SIGN
	return


HorizonPort_Sign_Market::
# 18 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Market_Text_0, MSGBOX_SIGN
	return


HorizonPort_Kid_Fire::
# 22 "data/maps/HorizonPort/scripts.pory"
	lockall
# 23 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 24 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 0, HorizonPort_Kid_Fire_1
# 34 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Fire_1:
# 25 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_0, MSGBOX_YESNO
# 26 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Fire_4
# 32 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Fire_4:
# 27 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_FIRE, HorizonPort_Kid_Fire_Text_1, HorizonPort_Kid_Fire_Text_2
	return


HorizonPort_Kid_Water::
# 39 "data/maps/HorizonPort/scripts.pory"
	lockall
# 40 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 41 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 0, HorizonPort_Kid_Water_1
# 50 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Water_1:
# 42 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_0, MSGBOX_YESNO
# 43 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Water_4
# 49 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Water_4:
# 44 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_WATER, HorizonPort_Kid_Water_Text_1, HorizonPort_Kid_Water_Text_2
	return


HorizonPort_Kid_Grass::
# 54 "data/maps/HorizonPort/scripts.pory"
	lockall
# 55 "data/maps/HorizonPort/scripts.pory"
	faceplayer
# 56 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 0, HorizonPort_Kid_Grass_1
# 65 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_4, MSGBOX_NPC
	return

HorizonPort_Kid_Grass_1:
# 57 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_0, MSGBOX_YESNO
# 58 "data/maps/HorizonPort/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HorizonPort_Kid_Grass_4
# 64 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_3, MSGBOX_AUTOCLOSE
	return

HorizonPort_Kid_Grass_4:
# 59 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_GRASS, HorizonPort_Kid_Grass_Text_1, HorizonPort_Kid_Grass_Text_2
	return


HorizonPort_OldMan::
# 70 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan_Text_0, MSGBOX_NPC
	return


HorizonPort_OldMan2::
# 74 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan2_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor::
# 78 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor2::
# 82 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor2_Text_0, MSGBOX_NPC
	return


HorizonPort_Boy::
# 86 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Boy_Text_0, MSGBOX_NPC
	return


HorizonPort_OldWoman::
# 90 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldWoman_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson::
# 94 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson_Text_0, MSGBOX_NPC
# 95 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 96 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 99 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop:
# 100 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POKE_BALL
# 101 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 102 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POTION
# 103 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 104 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

HorizonPort_MarketPerson2::
# 108 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson2_Text_0, MSGBOX_NPC
# 109 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 110 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 113 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop2:
# 114 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 115 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_AWAKENING
# 116 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 117 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 118 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

HorizonPort_MarketPerson3::
# 146 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson3_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson4::
# 150 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson4_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson5::
# 154 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson5_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson6::
# 159 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson6_Text_0, MSGBOX_NPC
	return


HorizonPort_Father::
# 163 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_FIRE
	goto_if 1, HorizonPort_Father_4
HorizonPort_Father_2:
# 178 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_3, MSGBOX_NPC
	return

HorizonPort_Father_1:
# 164 "data/maps/HorizonPort/scripts.pory"
	goto_if_unset FLAG_BEAT_HORIZON_PORT_KIDS, HorizonPort_Father_8
# 175 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_2, MSGBOX_NPC
	return

HorizonPort_Father_3:
# 163 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_GRASS
	goto_if 1, HorizonPort_Father_1
	goto HorizonPort_Father_2

HorizonPort_Father_4:
# 163 "data/maps/HorizonPort/scripts.pory"
	checktrainerflag TRAINER_HORIZON_PORT_WATER
	goto_if 1, HorizonPort_Father_3
	goto HorizonPort_Father_2

HorizonPort_Father_8:
# 165 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_0, MSGBOX_NPC
# 171 "data/maps/HorizonPort/scripts.pory"
	giveitem ITEM_PP_MAX, 1
# 172 "data/maps/HorizonPort/scripts.pory"
	setflag FLAG_BEAT_HORIZON_PORT_KIDS
# 173 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_1, MSGBOX_NPC
	return


HorizonPort_Mother::
# 183 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Mother_Text_0, MSGBOX_NPC
	return


HorizonPort_Fisherman::
# 187 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Fisherman_Text_0, MSGBOX_NPC
	return


HorizonPort_Sign_Yard_Text_0:
# 14 "data/maps/HorizonPort/scripts.pory"
	.string "Boats,\nA bouyant masterpiece$"

HorizonPort_Sign_Market_Text_0:
# 18 "data/maps/HorizonPort/scripts.pory"
	.string "Markets are now open!\nWe have wares if you have coin!$"

HorizonPort_Kid_Fire_Text_0:
# 25 "data/maps/HorizonPort/scripts.pory"
	.string "He he he! You look like someone\nwho's up for a battle!$"

HorizonPort_Kid_Fire_Text_1:
# 29 "data/maps/HorizonPort/scripts.pory"
	.string "Yah!\nTake that!$"

HorizonPort_Kid_Fire_Text_2:
# 30 "data/maps/HorizonPort/scripts.pory"
	.string "Wha- no!\nThat's not how it works!$"

HorizonPort_Kid_Fire_Text_3:
# 32 "data/maps/HorizonPort/scripts.pory"
	.string "Chicken!$"

HorizonPort_Kid_Fire_Text_4:
# 34 "data/maps/HorizonPort/scripts.pory"
	.string "I like being at the beach when the sun\n"
	.string "is out!$"

HorizonPort_Kid_Water_Text_0:
# 42 "data/maps/HorizonPort/scripts.pory"
	.string "A challenger!\nDo you wish to do battle?$"

HorizonPort_Kid_Water_Text_1:
# 46 "data/maps/HorizonPort/scripts.pory"
	.string "Being at the beach gives me power!$"

HorizonPort_Kid_Water_Text_2:
# 47 "data/maps/HorizonPort/scripts.pory"
	.string "I got sand in my eye!\nThat didn't count!$"

HorizonPort_Kid_Water_Text_3:
# 49 "data/maps/HorizonPort/scripts.pory"
	.string "Come back later then!$"

HorizonPort_Kid_Water_Text_4:
# 50 "data/maps/HorizonPort/scripts.pory"
	.string "I love playing in the waves until I get\n"
	.string "all wrinkly!$"

HorizonPort_Kid_Grass_Text_0:
# 57 "data/maps/HorizonPort/scripts.pory"
	.string "You wanna have a battle?$"

HorizonPort_Kid_Grass_Text_1:
# 61 "data/maps/HorizonPort/scripts.pory"
	.string "I hope I win.$"

HorizonPort_Kid_Grass_Text_2:
# 62 "data/maps/HorizonPort/scripts.pory"
	.string "Aw man.$"

HorizonPort_Kid_Grass_Text_3:
# 64 "data/maps/HorizonPort/scripts.pory"
	.string "All good.$"

HorizonPort_Kid_Grass_Text_4:
# 65 "data/maps/HorizonPort/scripts.pory"
	.string "I just wanna play my game, I'm hoping it\n"
	.string "doesn't get sand in it.$"

HorizonPort_OldMan_Text_0:
# 70 "data/maps/HorizonPort/scripts.pory"
	.string "This lighthouse was put in to make it\n"
	.string "safer for people to come to the island.$"

HorizonPort_OldMan2_Text_0:
# 74 "data/maps/HorizonPort/scripts.pory"
	.string "I sometimes come here and gaze out at\n"
	.string "the sea, thinking about what could have\l"
	.string "been.$"

HorizonPort_Sailor_Text_0:
# 78 "data/maps/HorizonPort/scripts.pory"
	.string "We get a lot of travellers coming and\n"
	.string "going on boats 'round these parts.$"

HorizonPort_Sailor2_Text_0:
# 82 "data/maps/HorizonPort/scripts.pory"
	.string "Boats are pretty important for this\n"
	.string "city, so there are displays all over.$"

HorizonPort_Boy_Text_0:
# 86 "data/maps/HorizonPort/scripts.pory"
	.string "The salt spray from the ocean makes my\n"
	.string "eyes crusty!$"

HorizonPort_OldWoman_Text_0:
# 90 "data/maps/HorizonPort/scripts.pory"
	.string "Huh? What do you want? Why don't you\n"
	.string "get back on your boat and go home!$"

HorizonPort_MarketPerson_Text_0:
# 94 "data/maps/HorizonPort/scripts.pory"
	.string "Items an aspiring trainer like you might\n"
	.string "need!$"

HorizonPort_MarketPerson2_Text_0:
# 108 "data/maps/HorizonPort/scripts.pory"
	.string "Got problems? I've got solutions!$"

HorizonPort_MarketPerson3_Text_0:
# 146 "data/maps/HorizonPort/scripts.pory"
	.string "Welcome!\nAre you interested in some...\pOh, you're a trainer?\nI don't have any items for trainers.$"

HorizonPort_MarketPerson4_Text_0:
# 150 "data/maps/HorizonPort/scripts.pory"
	.string "There's always something of interest to\n"
	.string "be found at markets like these.$"

HorizonPort_MarketPerson5_Text_0:
# 154 "data/maps/HorizonPort/scripts.pory"
	.string "I'm just... huff... taking a break... hoo...$"

HorizonPort_MarketPerson6_Text_0:
# 159 "data/maps/HorizonPort/scripts.pory"
	.string "Come back when you're a little more\n"
	.string "cool.$"

HorizonPort_Father_Text_0:
# 166 "data/maps/HorizonPort/scripts.pory"
	.string "I saw you battling with the little ones,\nI appreciate you playing with them.\p"
	.string "It gave me some time to relax for once,\nit's getting harder these days.\p"
	.string "And who knows when another one might\nbe on the way...\p"
	.string "Oh right,\nI have something for you as thanks.$"

HorizonPort_Father_Text_1:
# 173 "data/maps/HorizonPort/scripts.pory"
	.string "I have an abundance of these\nlaying around...$"

HorizonPort_Father_Text_2:
# 175 "data/maps/HorizonPort/scripts.pory"
	.string "Thanks for keeping the kids company.$"

HorizonPort_Father_Text_3:
# 178 "data/maps/HorizonPort/scripts.pory"
	.string "These little rascals really like\n"
	.string "battling, could you please keep them\l"
	.string "entertained so I can get some peace\l"
	.string "and quiet...$"

HorizonPort_Mother_Text_0:
# 183 "data/maps/HorizonPort/scripts.pory"
	.string "After three childred my husband has\nstarted having reservations...\pbut I can be very convincing.$"

HorizonPort_Fisherman_Text_0:
# 187 "data/maps/HorizonPort/scripts.pory"
	.string "Imagine all the fishing that could be\n"
	.string "done in a boat like that...$"
