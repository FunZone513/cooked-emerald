HorizonPort_MapScripts::
# 2 "data/maps/HorizonPort/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, HorizonPort_OnLoad
	.byte 0


HorizonPort_OnLoad::
# 7 "data/maps/HorizonPort/scripts.pory"
	call Generic_DefaultSettings
	return


HorizonPort_Sign_Yard::
# 11 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Yard_Text_0, MSGBOX_SIGN
	return


HorizonPort_Sign_Market::
# 15 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sign_Market_Text_0, MSGBOX_SIGN
	return


HorizonPort_Kid_Fire::
# 19 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_FIRE, HorizonPort_Kid_Fire_Text_0, HorizonPort_Kid_Fire_Text_1
# 24 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Fire_Text_2, MSGBOX_AUTOCLOSE
	end


HorizonPort_Kid_Water::
# 29 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_WATER, HorizonPort_Kid_Water_Text_0, HorizonPort_Kid_Water_Text_1
# 34 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Water_Text_2, MSGBOX_AUTOCLOSE
	end


HorizonPort_Kid_Grass::
# 39 "data/maps/HorizonPort/scripts.pory"
	trainerbattle_single TRAINER_HORIZON_PORT_GRASS, HorizonPort_Kid_Grass_Text_0, HorizonPort_Kid_Grass_Text_1
# 44 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Kid_Grass_Text_2, MSGBOX_AUTOCLOSE
	end


HorizonPort_OldMan::
# 50 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan_Text_0, MSGBOX_NPC
	return


HorizonPort_OldMan2::
# 54 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldMan2_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor::
# 58 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor_Text_0, MSGBOX_NPC
	return


HorizonPort_Sailor2::
# 62 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Sailor2_Text_0, MSGBOX_NPC
	return


HorizonPort_Boy::
# 66 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Boy_Text_0, MSGBOX_NPC
	return


HorizonPort_OldWoman::
# 70 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_OldWoman_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson::
# 74 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson_Text_0, MSGBOX_NPC
# 75 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 76 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 79 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop:
# 80 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POKE_BALL
# 81 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 82 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_POTION
# 83 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 84 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

HorizonPort_MarketPerson2::
# 88 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson2_Text_0, MSGBOX_NPC
# 89 "data/maps/HorizonPort/scripts.pory"
	pokemart HorizonPort_MarketShop
# 90 "data/maps/HorizonPort/scripts.pory"
	release
	return


	.align 2
# 93 "data/maps/HorizonPort/scripts.pory"
HorizonPort_MarketShop2:
# 94 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 95 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_AWAKENING
# 96 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 97 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 98 "data/maps/HorizonPort/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

HorizonPort_MarketPerson3::
# 126 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson3_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson4::
# 130 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson4_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson5::
# 134 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson5_Text_0, MSGBOX_NPC
	return


HorizonPort_MarketPerson6::
# 139 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_MarketPerson6_Text_0, MSGBOX_NPC
	return


HorizonPort_Father::
# 143 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Father_Text_0, MSGBOX_NPC
	return


HorizonPort_Mother::
# 147 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Mother_Text_0, MSGBOX_NPC
	return


HorizonPort_Fisherman::
# 151 "data/maps/HorizonPort/scripts.pory"
	msgbox HorizonPort_Fisherman_Text_0, MSGBOX_NPC
	return


HorizonPort_Sign_Yard_Text_0:
# 11 "data/maps/HorizonPort/scripts.pory"
	.string "Boats,\nA bouyant masterpiece$"

HorizonPort_Sign_Market_Text_0:
# 15 "data/maps/HorizonPort/scripts.pory"
	.string "Markets are now open!\nWe have wares if you have coin!$"

HorizonPort_Kid_Fire_Text_0:
# 21 "data/maps/HorizonPort/scripts.pory"
	.string "Yah!\nTake that!$"

HorizonPort_Kid_Fire_Text_1:
# 22 "data/maps/HorizonPort/scripts.pory"
	.string "Wha- no!\nThat's not how it works!$"

HorizonPort_Kid_Fire_Text_2:
# 24 "data/maps/HorizonPort/scripts.pory"
	.string "I like being at the beach when the sun\n"
	.string "is out!$"

HorizonPort_Kid_Water_Text_0:
# 31 "data/maps/HorizonPort/scripts.pory"
	.string "Being at the beach gives me power!$"

HorizonPort_Kid_Water_Text_1:
# 32 "data/maps/HorizonPort/scripts.pory"
	.string "I got sand in my eye!\nThat didn't count!$"

HorizonPort_Kid_Water_Text_2:
# 34 "data/maps/HorizonPort/scripts.pory"
	.string "I love playing in the waves until I get\n"
	.string "all wrinkly!$"

HorizonPort_Kid_Grass_Text_0:
# 41 "data/maps/HorizonPort/scripts.pory"
	.string "Huh?$"

HorizonPort_Kid_Grass_Text_1:
# 42 "data/maps/HorizonPort/scripts.pory"
	.string "Aw man.$"

HorizonPort_Kid_Grass_Text_2:
# 44 "data/maps/HorizonPort/scripts.pory"
	.string "I just wanna play my game, I'm hoping it\n"
	.string "doesn't get sand in it.$"

HorizonPort_OldMan_Text_0:
# 50 "data/maps/HorizonPort/scripts.pory"
	.string "This lighthouse was put in to make it\n"
	.string "safer for people to come to the island.$"

HorizonPort_OldMan2_Text_0:
# 54 "data/maps/HorizonPort/scripts.pory"
	.string "I sometimes come here and gaze out at\n"
	.string "the sea, thinking about what could have\l"
	.string "been.$"

HorizonPort_Sailor_Text_0:
# 58 "data/maps/HorizonPort/scripts.pory"
	.string "We get a lot of travellers coming and\n"
	.string "going on boats 'round these parts.$"

HorizonPort_Sailor2_Text_0:
# 62 "data/maps/HorizonPort/scripts.pory"
	.string "Boats are pretty important for this\n"
	.string "city, so there are displays all over.$"

HorizonPort_Boy_Text_0:
# 66 "data/maps/HorizonPort/scripts.pory"
	.string "The salt spray from the ocean makes my\n"
	.string "eyes crusty!$"

HorizonPort_OldWoman_Text_0:
# 70 "data/maps/HorizonPort/scripts.pory"
	.string "Huh? What do you want? Why don't you\n"
	.string "get back on your boat and go home!$"

HorizonPort_MarketPerson_Text_0:
# 74 "data/maps/HorizonPort/scripts.pory"
	.string "Items an aspiring trainer like you might\n"
	.string "need!$"

HorizonPort_MarketPerson2_Text_0:
# 88 "data/maps/HorizonPort/scripts.pory"
	.string "Got problems? I've got solutions!$"

HorizonPort_MarketPerson3_Text_0:
# 126 "data/maps/HorizonPort/scripts.pory"
	.string "Welcome!\nAre you interested in some...\pOh, you're a trainer?\nI don't have any items for trainers.$"

HorizonPort_MarketPerson4_Text_0:
# 130 "data/maps/HorizonPort/scripts.pory"
	.string "There's always something of interest to\n"
	.string "be found at markets like these.$"

HorizonPort_MarketPerson5_Text_0:
# 134 "data/maps/HorizonPort/scripts.pory"
	.string "I'm just... huff... taking a break... hoo...$"

HorizonPort_MarketPerson6_Text_0:
# 139 "data/maps/HorizonPort/scripts.pory"
	.string "Come back when you're a little more\n"
	.string "cool.$"

HorizonPort_Father_Text_0:
# 143 "data/maps/HorizonPort/scripts.pory"
	.string "These little rascals like battling as\n"
	.string "much as they like playing at the beach,\l"
	.string "so please keep them entertained so I\l"
	.string "can get some peace and quiet...$"

HorizonPort_Mother_Text_0:
# 147 "data/maps/HorizonPort/scripts.pory"
	.string "After three childred my husband has\n"
	.string "started having reservations, but I can\l"
	.string "be very convincing$"

HorizonPort_Fisherman_Text_0:
# 151 "data/maps/HorizonPort/scripts.pory"
	.string "Imagine all the fishing that could be\n"
	.string "done in a boat like that...$"
