SeafloorCavern_Room4_MapScripts::
	.byte 0

SeafloorCavern_Room4_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, SeafloorCavern_Room4_Text_Grunt3Intro, SeafloorCavern_Room4_Text_Grunt3Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, SeafloorCavern_Room4_Text_Grunt4Intro, SeafloorCavern_Room4_Text_Grunt4Defeat
	msgbox SeafloorCavern_Room4_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_Text_Grunt3Intro:
	.string "Who opened the sealed door?\n"
	.string "It was locked from inside!$"

SeafloorCavern_Room4_Text_Grunt3Defeat:
	.string "Lost it…$"

SeafloorCavern_Room4_Text_Grunt3PostBattle:
	.string "Every tunnel leads to the same\n"
	.string "number: 317.\p"
	.string "I'm not afraid. Not at all!$"

SeafloorCavern_Room4_Text_Grunt4Intro:
	.string "Did you hear that bell?\n"
	.string "There's no bell down here!$"

SeafloorCavern_Room4_Text_Grunt4Defeat:
	.string "I failed to win!$"

SeafloorCavern_Room4_Text_Grunt4PostBattle:
	.string "Our map shows a passage that\n"
	.string "doesn't exist.\p"
	.string "Something scratched RETURNED\n"
	.string "into the stone wall.$"

