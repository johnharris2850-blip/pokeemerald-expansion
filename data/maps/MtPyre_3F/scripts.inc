MtPyre_3F_MapScripts::
	.byte 0

MtPyre_3F_EventScript_William::
	trainerbattle_single TRAINER_WILLIAM, MtPyre_3F_Text_WilliamIntro, MtPyre_3F_Text_WilliamDefeat
	msgbox MtPyre_3F_Text_WilliamPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Kayla::
	trainerbattle_single TRAINER_KAYLA, MtPyre_3F_Text_KaylaIntro, MtPyre_3F_Text_KaylaDefeat
	msgbox MtPyre_3F_Text_KaylaPostBattle, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_EventScript_Gabrielle::
	trainerbattle_single TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleIntro, MtPyre_3F_Text_GabrielleDefeat, MtPyre_3F_EventScript_RegisterGabrielle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtPyre_3F_EventScript_RematchGabrielle
	msgbox MtPyre_3F_Text_GabriellePostBattle, MSGBOX_DEFAULT
	release
	end

MtPyre_3F_EventScript_RegisterGabrielle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtPyre_3F_Text_GabrielleRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GABRIELLE_1
	release
	end

MtPyre_3F_EventScript_RematchGabrielle::
	trainerbattle_rematch TRAINER_GABRIELLE_1, MtPyre_3F_Text_GabrielleRematchIntro, MtPyre_3F_Text_GabrielleRematchDefeat
	msgbox MtPyre_3F_Text_GabriellePostRematch, MSGBOX_AUTOCLOSE
	end

MtPyre_3F_Text_WilliamIntro:
	.string "My psychic power lets me see\n"
	.string "the memories people hide.\p"
	.string "But yours has a door in it.\n"
	.string "A black door marked 317.\p"
	.string "Something on the other side\n"
	.string "is trying to open it!$"

MtPyre_3F_Text_WilliamDefeat:
	.string "I drown in self-pity…$"

MtPyre_3F_Text_WilliamPostBattle:
	.string "I saw two children holding hands\n"
	.string "at the bottom of stone steps.\p"
	.string "One of them was you, {PLAYER}.\n"
	.string "I could not see the other face.\p"
	.string "The second child said:\n"
	.string "YOU PROMISED TO COME BACK.$"

MtPyre_3F_Text_KaylaIntro:
	.string "Ahahahaha!\p"
	.string "This is no place for children, least\n"
	.string "of all you!$"

MtPyre_3F_Text_KaylaDefeat:
	.string "I lost that cleanly…$"

MtPyre_3F_Text_KaylaPostBattle:
	.string "I heard a bell during our battle.\p"
	.string "My POKéMON heard it too.\n"
	.string "But the sound came from below us.\p"
	.string "The clock on my POKéNAV\n"
	.string "stopped at 3:17.$"

MtPyre_3F_Text_GabrielleIntro:
	.string "Why have you come here?$"

MtPyre_3F_Text_GabrielleDefeat:
	.string "That was amazing!\n"
	.string "You're a very special TRAINER.$"

MtPyre_3F_Text_GabriellePostBattle:
	.string "Some memories fade with time.\n"
	.string "Others are taken away.\p"
	.string "I sensed a small hand reaching\n"
	.string "for yours in the darkness.\p"
	.string "Whoever waits behind that door\n"
	.string "has not forgotten you.\p"
	.string "Remember them, {PLAYER}.\n"
	.string "Even if the world cannot.$"

MtPyre_3F_Text_GabrielleRegister:
	.string "I would like to see your POKéMON\n"
	.string "when they grow up some more…\p"
	.string "Please, I need to see your POKéNAV.$"

MtPyre_3F_Text_GabrielleRematchIntro:
	.string "Oh, it's you…\p"
	.string "Have you come to show me your grown\n"
	.string "POKéMON?$"

MtPyre_3F_Text_GabrielleRematchDefeat:
	.string "How amazing!\n"
	.string "You are a special person.$"

MtPyre_3F_Text_GabriellePostRematch:
	.string "POKéMON no longer of this world.\n"
	.string "POKéMON that are with you now.\p"
	.string "And the POKéMON that you will meet\n"
	.string "in the future…\p"
	.string "They are all to be equally cherished.\n"
	.string "I see that you've remembered that.$"

