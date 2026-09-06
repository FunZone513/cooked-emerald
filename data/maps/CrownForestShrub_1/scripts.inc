CrownForestShrub_1_MapScripts::
# 2 "data/maps/CrownForestShrub_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CrownForestShrub_1_OnLoad
	.byte 0


CrownForestShrub_1_OnLoad::
# 6 "data/maps/CrownForestShrub_1/scripts.pory"
	setupshrub 1
# 7 "data/maps/CrownForestShrub_1/scripts.pory"
	goto_if_unset FLAG_OPENED_SHRUB_1, CrownForestShrub_1_OnLoad_1
	return

CrownForestShrub_1_OnLoad_1:
# 7 "data/maps/CrownForestShrub_1/scripts.pory"
	setflag FLAG_OPENED_SHRUB_1
	return


CrownForestShrub_1_BugCatcher::
# 11 "data/maps/CrownForestShrub_1/scripts.pory"
	trainerbattle_single TRAINER_CROWN_SHRUB1_BUG_CATCHER, CrownForestShrub_1_BugCatcher_Text_0, CrownForestShrub_1_BugCatcher_Text_1
# 16 "data/maps/CrownForestShrub_1/scripts.pory"
	msgbox CrownForestShrub_1_BugCatcher_Text_2, MSGBOX_NPC
	return


CrownForestShrub_1_BugCatcher_Text_0:
# 13 "data/maps/CrownForestShrub_1/scripts.pory"
	.string "Yo, check this out!$"

CrownForestShrub_1_BugCatcher_Text_1:
# 14 "data/maps/CrownForestShrub_1/scripts.pory"
	.string "These bushes can hide some rare\nPokemon!$"

CrownForestShrub_1_BugCatcher_Text_2:
# 16 "data/maps/CrownForestShrub_1/scripts.pory"
	.string "I'm trying to catch every bug type!$"
