Route_3_MapScripts::
# 2 "data/maps/Route_3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route_3_OnLoad
	.byte 0


Route_3_OnLoad::
	return


Route_3_Picnicker::
# 10 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_PICNICKER, Route_3_Picnicker_Text_0, Route_3_Picnicker_Text_1
# 15 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_Picnicker_Text_2, MSGBOX_NPC
	return


Route_3_BlackBelt::
# 19 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_BLACKBELT, Route_3_BlackBelt_Text_0, Route_3_BlackBelt_Text_1
# 24 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_BlackBelt_Text_2, MSGBOX_NPC
	return


Route_3_NinjaBoy::
# 28 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_NINJA_BOY, Route_3_NinjaBoy_Text_0, Route_3_NinjaBoy_Text_1
# 33 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_NinjaBoy_Text_2, MSGBOX_NPC
	return


Route_3_BugCatcher::
# 37 "data/maps/Route_3/scripts.pory"
	trainerbattle_single TRAINER_ROUTE3_BUG_CATCHER, Route_3_BugCatcher_Text_0, Route_3_BugCatcher_Text_1
# 42 "data/maps/Route_3/scripts.pory"
	msgbox Route_3_BugCatcher_Text_2, MSGBOX_NPC
	return


Route_3_Picnicker_Text_0:
# 12 "data/maps/Route_3/scripts.pory"
	.string "The grass around here is dense!$"

Route_3_Picnicker_Text_1:
# 13 "data/maps/Route_3/scripts.pory"
	.string "Another loss for me...$"

Route_3_Picnicker_Text_2:
# 15 "data/maps/Route_3/scripts.pory"
	.string "If I spent more time training than\nfrolicking I would probably win more.$"

Route_3_BlackBelt_Text_0:
# 21 "data/maps/Route_3/scripts.pory"
	.string "I'M PUNCHING THIS TREE!$"

Route_3_BlackBelt_Text_1:
# 22 "data/maps/Route_3/scripts.pory"
	.string "MY KNUCKLES FAILED ME!$"

Route_3_BlackBelt_Text_2:
# 24 "data/maps/Route_3/scripts.pory"
	.string "I train alongside my Pokemon so it\ndoesn't feel forced into it.$"

Route_3_NinjaBoy_Text_0:
# 30 "data/maps/Route_3/scripts.pory"
	.string "Haha!\nBet you didn't expect this!$"

Route_3_NinjaBoy_Text_1:
# 31 "data/maps/Route_3/scripts.pory"
	.string "What? No!$"

Route_3_NinjaBoy_Text_2:
# 33 "data/maps/Route_3/scripts.pory"
	.string "How did my incredible disguise not work?$"

Route_3_BugCatcher_Text_0:
# 39 "data/maps/Route_3/scripts.pory"
	.string "...sniffle...$"

Route_3_BugCatcher_Text_1:
# 40 "data/maps/Route_3/scripts.pory"
	.string "...A-\pACHOO!$"

Route_3_BugCatcher_Text_2:
# 42 "data/maps/Route_3/scripts.pory"
	.string "Being allergic to grass makes finding\nPokemon really difficult...$"
