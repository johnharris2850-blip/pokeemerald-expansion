GraniteCave_B2F_MapScripts::
	.byte 0



@ The Forgotten: a visible haunted doll on the lower cave floor.
GraniteCave_B2F_EventScript_HauntedDoll::
	lock
	goto_if_set FLAG_FORGOTTEN_B2F_DOLL_BATTLE, GraniteCave_B2F_EventScript_DollQuiet
	playse SE_PIN
	msgbox GraniteCave_B2F_Text_DollAttacks, MSGBOX_DEFAULT
	setwildbattle SPECIES_DUSKULL, 22
	dowildbattle
	setflag FLAG_FORGOTTEN_B2F_DOLL_BATTLE
	release
	end

GraniteCave_B2F_EventScript_DollQuiet::
	msgbox GraniteCave_B2F_Text_DollQuiet, MSGBOX_DEFAULT
	release
	end

GraniteCave_B2F_Text_DollAttacks:
	.string "The abandoned doll shakes!\p"
	.string "Its eyes flash red!$"

GraniteCave_B2F_Text_DollQuiet:
	.string "The doll sits completely still.$"
