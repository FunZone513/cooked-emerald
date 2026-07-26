WhisperWoods_MapScripts::
# 2 "data/maps/WhisperWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, WhisperWoods_OnLoad
	.byte 0


WhisperWoods_OnLoad::
# 6 "data/maps/WhisperWoods/scripts.pory"
	goto_if_unset FLAG_TEMP_FORCE_ENCOUNTER_ON_RUN, WhisperWoods_OnLoad_1
	return

WhisperWoods_OnLoad_1:
# 7 "data/maps/WhisperWoods/scripts.pory"
	setflag FLAG_TEMP_FORCE_ENCOUNTER_ON_RUN
	return


WhisperWoods_BugCatcher::
# 12 "data/maps/WhisperWoods/scripts.pory"
	trainerbattle_single TRAINER_WHISPER_WOODS_BUG_CATCHER, WhisperWoods_BugCatcher_Text_0, WhisperWoods_BugCatcher_Text_1
# 17 "data/maps/WhisperWoods/scripts.pory"
	msgbox WhisperWoods_BugCatcher_Text_2, MSGBOX_NPC
	return


WhisperWoods_Camper::
# 21 "data/maps/WhisperWoods/scripts.pory"
	trainerbattle_single TRAINER_WHISPER_WOODS_CAMPER, WhisperWoods_Camper_Text_0, WhisperWoods_Camper_Text_1
# 26 "data/maps/WhisperWoods/scripts.pory"
	msgbox WhisperWoods_Camper_Text_2, MSGBOX_NPC
	return


WhisperWoods_Lady::
# 30 "data/maps/WhisperWoods/scripts.pory"
	trainerbattle_single TRAINER_WHISPER_WOODS_LADY, WhisperWoods_Lady_Text_0, WhisperWoods_Lady_Text_1
# 35 "data/maps/WhisperWoods/scripts.pory"
	msgbox WhisperWoods_Lady_Text_2, MSGBOX_NPC
	return


WhisperWoods_BugCatcher_Text_0:
# 14 "data/maps/WhisperWoods/scripts.pory"
	.string "I'm on the lookout!$"

WhisperWoods_BugCatcher_Text_1:
# 15 "data/maps/WhisperWoods/scripts.pory"
	.string "I haven't found any yet!$"

WhisperWoods_BugCatcher_Text_2:
# 17 "data/maps/WhisperWoods/scripts.pory"
	.string "I'm looking for any cool new Pokemon\nto add to my team!$"

WhisperWoods_Camper_Text_0:
# 23 "data/maps/WhisperWoods/scripts.pory"
	.string "Shh!$"

WhisperWoods_Camper_Text_1:
# 24 "data/maps/WhisperWoods/scripts.pory"
	.string "Don't make so much noise!$"

WhisperWoods_Camper_Text_2:
# 26 "data/maps/WhisperWoods/scripts.pory"
	.string "The Pokemon here are really sensitive\n"
	.string "to sound, so be careful when moving\l"
	.string "about.$"

WhisperWoods_Lady_Text_0:
# 32 "data/maps/WhisperWoods/scripts.pory"
	.string "Oh my!$"

WhisperWoods_Lady_Text_1:
# 33 "data/maps/WhisperWoods/scripts.pory"
	.string "Well aren't you something?$"

WhisperWoods_Lady_Text_2:
# 35 "data/maps/WhisperWoods/scripts.pory"
	.string "I like how calm and quiet it is here.\nIt's very soothing.$"
