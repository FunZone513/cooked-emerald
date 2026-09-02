CrownForestShrub_1_MapScripts::
# 2 "data/maps/CrownForestShrub_1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CrownForestShrub_1_OnLoad
	.byte 0


CrownForestShrub_1_OnLoad::
# 6 "data/maps/CrownForestShrub_1/scripts.pory"
	resetshrubencounters 1
	return


CrownForestShrub_1_BugCatcher::
# 10 "data/maps/CrownForestShrub_1/scripts.pory"
	trainerbattle_single TRAINER_CROWN_SHRUB1_BUG_CATCHER, CrownForestShrub_1_BugCatcher_Text_0, CrownForestShrub_1_BugCatcher_Text_1
# 15 "data/maps/CrownForestShrub_1/scripts.pory"
	msgbox CrownForestShrub_1_BugCatcher_Text_2, MSGBOX_NPC
	return


CrownForestShrub_1_BugCatcher_Text_0:
# 12 "data/maps/CrownForestShrub_1/scripts.pory"
	.string "Yo, check this out!$"

CrownForestShrub_1_BugCatcher_Text_1:
# 13 "data/maps/CrownForestShrub_1/scripts.pory"
	.string "These bushes can hide some rare\nPokemon!$"

CrownForestShrub_1_BugCatcher_Text_2:
# 15 "data/maps/CrownForestShrub_1/scripts.pory"
	.string "I'm trying to catch every bug type!$"
