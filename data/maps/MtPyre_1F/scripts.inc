MtPyre_1F_MapScripts::
	.byte 0

MtPyre_1F_EventScript_CleanseTagWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CLEANSE_TAG, MtPyre_1F_EventScript_ReceivedCleanseTag
	msgbox MtPyre_1F_Text_TakeThisForYourOwnGood, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_CLEANSE_TAG
	release
	end

MtPyre_1F_EventScript_ReceivedCleanseTag::
	msgbox MtPyre_1F_Text_ExplainCleanseTag, MSGBOX_DEFAULT
	release
	end

MtPyre_1F_EventScript_PokefanF::
	msgbox MtPyre_1F_Text_ComeToPayRespects, MSGBOX_NPC
	end

MtPyre_1F_EventScript_Man::
	msgbox MtPyre_1F_Text_RestingPlaceOfZigzagoon, MSGBOX_NPC
	end

MtPyre_1F_Text_TakeThisForYourOwnGood:
	.string "Some spirits come to MT. PYRE\n"
	.string "because they are remembered.\p"
	.string "Others come because someone\n"
	.string "has forgotten them.\p"
	.string "Take this CLEANSE TAG.\n"
	.string "Please, don't follow the bells.$"

MtPyre_1F_Text_ExplainCleanseTag:
	.string "Let a POKéMON hold the\n"
	.string "CLEANSE TAG to ward off wild ones.\p"
	.string "But if you hear a child calling\n"
	.string "from an empty room...\p"
	.string "Do not answer until you can\n"
	.string "see who is speaking.$"

MtPyre_1F_Text_ComeToPayRespects:
	.string "Have you come to remember the\n"
	.string "POKéMON who have passed on?\p"
	.string "The memorial book is missing\n"
	.string "one name. The ink is still wet.\p"
	.string "The empty space is beside\n"
	.string "a drawing of a broken bell.$"

MtPyre_1F_Text_RestingPlaceOfZigzagoon:
	.string "This is the final resting place of my\n"
	.string "ZIGZAGOON. I cherished it…$"

