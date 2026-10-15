GraniteCave_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
	.byte 0

GraniteCave_B1F_SetHoleWarp:
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_GRANITE_CAVE_B2F
	end



@ The Forgotten: a one-time wild Ghost-type ambush on the lower floor.
GraniteCave_B1F_EventScript_ForgottenGhostAmbush::
	lock
	goto_if_set FLAG_FORGOTTEN_B1F_GHOST_BATTLE, GraniteCave_B1F_EventScript_ForgottenGhostGone
	playse SE_PIN
	msgbox GraniteCave_B1F_Text_ForgottenGhostAmbush, MSGBOX_DEFAULT
	setwildbattle SPECIES_SHUPPET, 18
	dowildbattle
	setflag FLAG_FORGOTTEN_B1F_GHOST_BATTLE
	release
	end

GraniteCave_B1F_EventScript_ForgottenGhostGone::
	msgbox GraniteCave_B1F_Text_ForgottenGhostGone, MSGBOX_DEFAULT
	release
	end

GraniteCave_B1F_Text_ForgottenGhostAmbush:
	.string "Something moves in the dark!\p"
	.string "A wild SHUPPET attacks!$"

GraniteCave_B1F_Text_ForgottenGhostGone:
	.string "The cave is quiet again.$"
