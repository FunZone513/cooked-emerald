CrownForestShrub_3_MapScripts::
# 2 "data/maps/CrownForestShrub_3/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CrownForestShrub_2_OnLoad
	.byte 0


CrownForestShrub_3_OnLoad::
# 6 "data/maps/CrownForestShrub_3/scripts.pory"
	setupshrub 3
# 7 "data/maps/CrownForestShrub_3/scripts.pory"
	goto_if_unset FLAG_OPENED_SHRUB_3, CrownForestShrub_3_OnLoad_1
	return

CrownForestShrub_3_OnLoad_1:
# 7 "data/maps/CrownForestShrub_3/scripts.pory"
	setflag FLAG_OPENED_SHRUB_3
	return

