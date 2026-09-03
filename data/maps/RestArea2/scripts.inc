RestArea2_MapScripts::
# 2 "data/maps/RestArea2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RestArea2_OnResume
	.byte 0


RestArea2_OnResume::
# 6 "data/maps/RestArea2/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
	return

