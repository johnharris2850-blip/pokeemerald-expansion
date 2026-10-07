GraniteCave_1F_MapScripts::
	.byte 0

GraniteCave_1F_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
	giveitem ITEM_HM_FLASH
	setflag FLAG_RECEIVED_HM_FLASH
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_EventScript_ReceivedFlash::
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
	release
	end

GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
	.string "Hey. Be careful down there.\p"
	.string "STEVEN went in earlier looking for\n"
	.string "some unusual stone.\p"
	.string "A few minutes later the cave shook.\n"
	.string "Then I heard a bell underground.\p"
	.string "There aren't any bells on this island.\p"
	.string "Take FLASH. You'll want to see what's\n"
	.string "standing in front of you.$"

GraniteCave_1F_Text_ExplainFlash:
	.string "FLASH lights the deepest darkness.\p"
	.string "You'll need DEWFORD's GYM BADGE\n"
	.string "to use it outside battle.\p"
	.string "And if you hear somebody walking just\n"
	.string "behind you... don't turn around.$"

