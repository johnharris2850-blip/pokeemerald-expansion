TheForgotten_Room317_MapScripts::
	.byte 0

TheForgotten_Room317_EventScript_Entrance::
	lockall
	msgbox TheForgotten_Room317_Text_Entrance, MSGBOX_DEFAULT
	releaseall
	end

TheForgotten_Room317_Text_Entrance:
	.string "The air is still.\p"
	.string "A bell rings three times.\p"
	.string "On the wall, someone has written:\n"
	.string "ONLY ONE OF US LEFT.\p"
	.string "Then a second line appears:\n"
	.string "ONLY ONE OF US CAME BACK.$"
