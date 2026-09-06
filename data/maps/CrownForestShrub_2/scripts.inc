CrownForestShrub_2_MapScripts::
# 2 "data/maps/CrownForestShrub_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CrownForestShrub_2_OnLoad
	.byte 0


CrownForestShrub_2_OnLoad::
# 6 "data/maps/CrownForestShrub_2/scripts.pory"
	setupshrub 2
# 7 "data/maps/CrownForestShrub_2/scripts.pory"
	goto_if_unset FLAG_OPENED_SHRUB_2, CrownForestShrub_2_OnLoad_2
CrownForestShrub_2_OnLoad_1:
# 8 "data/maps/CrownForestShrub_2/scripts.pory"
	call CrownForestShrub_2_UpdateFloor
	return

CrownForestShrub_2_OnLoad_2:
# 7 "data/maps/CrownForestShrub_2/scripts.pory"
	setflag FLAG_OPENED_SHRUB_2
	goto CrownForestShrub_2_OnLoad_1


CrownForestShrub_2_UpdateFloor::
# 12 "data/maps/CrownForestShrub_2/scripts.pory"
	compare VAR_BUG_MASTER_PROGRESS, 2
	goto_if_ge CrownForestShrub_2_UpdateFloor_2
CrownForestShrub_2_UpdateFloor_1:
# 16 "data/maps/CrownForestShrub_2/scripts.pory"
	compare VAR_BUG_MASTER_PROGRESS, 3
	goto_if_ge CrownForestShrub_2_UpdateFloor_5
CrownForestShrub_2_UpdateFloor_4:
# 20 "data/maps/CrownForestShrub_2/scripts.pory"
	compare VAR_BUG_MASTER_PROGRESS, 4
	goto_if_ge CrownForestShrub_2_UpdateFloor_7
	return

CrownForestShrub_2_UpdateFloor_2:
# 13 "data/maps/CrownForestShrub_2/scripts.pory"
	setmetatile 13, 1, METATILE_SecretBase_SolidBoard_Top, FALSE
# 14 "data/maps/CrownForestShrub_2/scripts.pory"
	setmetatile 13, 2, METATILE_SecretBase_SolidBoard_Bottom, FALSE
	goto CrownForestShrub_2_UpdateFloor_1

CrownForestShrub_2_UpdateFloor_5:
# 17 "data/maps/CrownForestShrub_2/scripts.pory"
	setmetatile 17, 5, METATILE_SecretBase_SolidBoard_Top, FALSE
# 18 "data/maps/CrownForestShrub_2/scripts.pory"
	setmetatile 17, 6, METATILE_SecretBase_SolidBoard_Bottom, FALSE
	goto CrownForestShrub_2_UpdateFloor_4

CrownForestShrub_2_UpdateFloor_7:
# 21 "data/maps/CrownForestShrub_2/scripts.pory"
	setmetatile 16, 9, METATILE_SecretBase_SolidBoard_Top, FALSE
# 22 "data/maps/CrownForestShrub_2/scripts.pory"
	setmetatile 16, 10, METATILE_SecretBase_SolidBoard_Bottom, FALSE
	return


CrownForestShrub_2_Dirk::
# 29 "data/maps/CrownForestShrub_2/scripts.pory"
	switch VAR_BUG_MASTER_PROGRESS
# 30 "data/maps/CrownForestShrub_2/scripts.pory"
	case 0, CrownForestShrub_2_Dirk_2
	return

CrownForestShrub_2_Dirk_2:
# 31 "data/maps/CrownForestShrub_2/scripts.pory"
	msgbox CrownForestShrub_2_Dirk_Text_0
	return


CrownForestShrub_2_FinalBall::
	return


CrownForestShrub_2_Dirk_Text_0:
# 32 "data/maps/CrownForestShrub_2/scripts.pory"
	.string "I am the Bug Master, Dirk.\p"
	.string "I wasn't expecting company, but I\nwelcome you all the same.\p"
	.string "I've made this spot into a comfy\nhideaway.\p$"
