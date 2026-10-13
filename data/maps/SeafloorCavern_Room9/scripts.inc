SeafloorCavern_Room9_MapScripts::
	.byte 0

SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
	lockall
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	applymovement LOCALID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
	waitmovement 0
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8004
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
	applymovement VAR_0x8004, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
	setweather WEATHER_NONE
	doweather
	special Script_FadeOutMapMusic
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
	special WaitWeather
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 16, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	closemessage
	setvar VAR_RESULT, 0
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 150
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE_SLEEPING
	addobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
	waitstate
	delay 60
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
	waitmovement 0
	special FadeOutOrbEffect
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_SEAFLOOR_CAVERN_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
	waitmovement 0
	removeobject LOCALID_SEAFLOOR_CAVERN_KYOGRE
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	setvar VAR_0x8004, LOCALID_SEAFLOOR_CAVERN_ARCHIE
	setvar VAR_0x8005, LOCALID_SEAFLOOR_CAVERN_MAXIE
	setvar VAR_0x8006, LOCALID_SEAFLOOR_CAVERN_GRUNT_1
	setvar VAR_0x8007, LOCALID_SEAFLOOR_CAVERN_GRUNT_2
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
	playse SE_PC_LOGIN
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
	closemessage
	playse SE_PC_OFF
	delay 20
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
	closemessage
	addobject VAR_0x8005
	addobject VAR_0x8006
	addobject VAR_0x8007
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x8004, Common_Movement_Delay48
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
	waitmovement 0
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
	setvar VAR_ROUTE128_STATE, 1
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
	setflag FLAG_SYS_WEATHER_CTRL
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
	setvar VAR_STEVENS_HOUSE_STATE, 2
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
	setflag FLAG_HIDE_MAP_NAME_POPUP
	warp MAP_ROUTE128, 38, 22
	waitstate
	releaseall
	end

SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_Unused1:
	walk_left
	walk_left
	step_end

SeafloorCavern_Room9_Movement_ArchieListenMessage:
	walk_left
	delay_16
	step_end

SeafloorCavern_Room9_Movement_Unused2:
	walk_right
	step_end

SeafloorCavern_Room9_Movement_ArchieExit:
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	walk_in_place_faster_right
	step_end

SeafloorCavern_Room9_Movement_KyogreApproach:
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Movement_KyogreExit:
	slide_up
	slide_up
	step_end

SeafloorCavern_Room9_Movement_MaxieArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_MaxieExit:
	walk_right
	walk_right
	step_end

SeafloorCavern_Room9_Movement_MagmaGruntArrive:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SeafloorCavern_Room9_Movement_Delay32:
	delay_16
	delay_16
	step_end

SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
	.string "ARCHIE: Hold it right there.$"

SeafloorCavern_Room9_Text_ArchieSoItWasYou:
	.string "ARCHIE: Fufufu…\n"
	.string "So it was you, after all.$"

SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
	.string "ARCHIE: Behold!\p"
	.string "See how beautiful it is, the sleeping\n"
	.string "form of the ancient POKéMON KYOGRE!\p"
	.string "I have waited so long for this day to\n"
	.string "come…$"

SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
	.string "ARCHIE: It surprises me, how you've\n"
	.string "managed to chase me here.\p"
	.string "But that's all over now.\p"
	.string "For the realization of my dream,\n"
	.string "you must disappear now!$"

SeafloorCavern_Room9_Text_ArchieDefeat:
	.string "What?!\n"
	.string "I lost to a mere child like you?!$"

SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
	.string "ARCHIE: Fufufu…\p"
	.string "I commend you. I must recognize that\n"
	.string "you are truly gifted.\p"
	.string "But!\n"
	.string "I have this in my possession!\p"
	.string "With this RED ORB, I can make KYOGRE…$"

SeafloorCavern_Room9_Text_RedOrbShinesByItself:
	.string "The RED ORB began to shine.\p"
	.string "A bell rang beneath the sea.\n"
	.string "The stone floor shook.$"

SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
	.string "ARCHIE: What?!\p"
	.string "I didn't do anything.\n"
	.string "Why did the RED ORB…\p"
	.string "Where did KYOGRE go?\p"
	.string "Why does the cave echo 317?$"

SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
	.string "ARCHIE: A message from outside…\p"
	.string "The radio says RETURNED.\n"
	.string "Who's sending that?$"

SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
	.string "ARCHIE: Yes, what is it?\p"
	.string "Hm…\n"
	.string "It's raining heavily?\p"
	.string "Good… That should have happened.\n"
	.string "That is why we awakened KYOGRE,\l"
	.string "to realize TEAM AQUA's vision of\l"
	.string "expanding the sea.\p"
	.string "What?!\p"
	.string "It's raining far harder than we\n"
	.string "envisioned? You're in danger?\p"
	.string "That can't be…\n"
	.string "That's just not possible…\p"
	.string "Hold your position and monitor\n"
	.string "the situation!$"

SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
	.string "ARCHIE: There's something wrong…\p"
	.string "The RED ORB is supposed to awaken\n"
	.string "and control KYOGRE…\p"
	.string "But… Why?\n"
	.string "Why did KYOGRE disappear?\p"
	.string "Why?!$"

SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
	.string "MAXIE: What have you wrought?\p"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
	.string "haven't you?\p"
	.string "What will happen to the world if this\n"
	.string "downpour continues for all eternity?\p"
	.string "The world's landmass will drown in\n"
	.string "the deepening sea…$"

SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
	.string "ARCHIE: W-what?!\n"
	.string "Don't get all high and mighty with me!\p"
	.string "Wasn't it you, TEAM MAGMA, that\n"
	.string "infuriated GROUDON?\p"
	.string "So long as I have this RED ORB,\n"
	.string "I should be able to control KYOGRE…\p"
	.string "I should be able to control it…$"

SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
	.string "MAXIE: We don't have the time to\n"
	.string "argue about it here!\p"
	.string "Get outside and see for yourself!\p"
	.string "See if what you've wrought is the\n"
	.string "world that we desired!$"

SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
	.string "MAXIE: {PLAYER}, get out of here!\p"
	.string "The sealed chamber is waking.\p"
	.string "I saw a door marked 317.\n"
	.string "There were two shadows inside.\p"
	.string "One shadow turned toward me.\n"
	.string "The other had no face.\p"
	.string "We must reach the surface!$"

@ Optional post-League investigation; does not alter Kyogre or story flags.
SeafloorCavern_Room9_EventScript_SealedChamberTrace::
	lock
	goto_if_set FLAG_SYS_GAME_CLEAR, SeafloorCavern_Room9_EventScript_TracePostgame
	msgbox SeafloorCavern_Room9_Text_TraceBeforeLeague, MSGBOX_DEFAULT
	release
	end

SeafloorCavern_Room9_EventScript_TracePostgame::
	goto_if_set FLAG_UNUSED_0x022, SeafloorCavern_Room9_EventScript_SealRemembered
	msgbox SeafloorCavern_Room9_Text_TracePostgame, MSGBOX_DEFAULT
	msgbox SeafloorCavern_Room9_Text_TouchSeal, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SeafloorCavern_Room9_EventScript_TouchSeal
	msgbox SeafloorCavern_Room9_Text_LeaveSeal, MSGBOX_DEFAULT
	release
	end

SeafloorCavern_Room9_EventScript_TouchSeal::
	playse SE_M_DETECT
	waitse
	msgbox SeafloorCavern_Room9_Text_SealResponds, MSGBOX_DEFAULT
	setflag FLAG_UNUSED_0x022
	release
	end

@ Persistent clue marker, reserved for the postgame Room 317 story.
SeafloorCavern_Room9_EventScript_SealRemembered::
	goto_if_set FLAG_UNUSED_0x023, SeafloorCavern_Room9_EventScript_SealInspected
	msgbox SeafloorCavern_Room9_Text_SealRemembered, MSGBOX_DEFAULT
	msgbox SeafloorCavern_Room9_Text_ListenAtDoor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SeafloorCavern_Room9_EventScript_ListenAtDoor
	release
	end

SeafloorCavern_Room9_EventScript_ListenAtDoor::
	playse SE_M_DETECT
	waitse
	msgbox SeafloorCavern_Room9_Text_DoorWhisper, MSGBOX_DEFAULT
	setflag FLAG_UNUSED_0x023
	release
	end

SeafloorCavern_Room9_EventScript_SealInspected::
	msgbox SeafloorCavern_Room9_Text_DoorInspected, MSGBOX_DEFAULT
	release
	end

SeafloorCavern_Room9_Text_TraceBeforeLeague:
	.string "A cold mark cuts through the rock.\p"
	.string "Three scratches. Then 1 and 7.\p"
	.string "Something is sealed below.$"

SeafloorCavern_Room9_Text_TracePostgame:
	.string "The stone is marked ROOM 317.\p"
	.string "A child's handprint appears\n"
	.string "beside a second, smaller print.\p"
	.string "You hear three distant bells.\p"
	.string "A voice whispers: FIND THE DOOR.\p"
	.string "The rock feels warm now.$"


SeafloorCavern_Room9_Text_TouchSeal:
	.string "Press your hand against\n"
	.string "the mark in the stone?$"

SeafloorCavern_Room9_Text_LeaveSeal:
	.string "You step away from the wall.\p"
	.string "The bells stop immediately.$"

SeafloorCavern_Room9_Text_SealResponds:
	.string "The stone pulses under your hand.\p"
	.string "A heartbeat answers your own.\p"
	.string "A child's voice: YOU CAME BACK.\p"
	.string "Another voice: NOT FOR ME.\p"
	.string "The outline of a locked door\n"
	.string "briefly shines through the rock.\p"
	.string "Its number is 317.\p"
	.string "Then the wall is silent again.$"

SeafloorCavern_Room9_Text_SealRemembered:
	.string "The handprints are gone.\p"
	.string "Only 317 remains in the stone.\p"
	.string "You remember the second voice:\n"
	.string "NOT FOR ME.\p"
	.string "Somewhere below, a lock clicks.$"

@ Second postgame clue is saved independently of the first handprint.
SeafloorCavern_Room9_Text_ListenAtDoor:
	.string "A thin crack has opened.\p"
	.string "Put your ear against the stone?$"

SeafloorCavern_Room9_Text_DoorWhisper:
	.string "A child whispers from below.\p"
	.string "THE FIRST DOOR WAS A LIE.\p"
	.string "THE REAL ONE HAS NO HANDLE.\p"
	.string "A second voice counts:\n"
	.string "THREE... ONE... SEVEN...\p"
	.string "The crack seals itself again.$"

SeafloorCavern_Room9_Text_DoorInspected:
	.string "The stone is smooth and cold.\p"
	.string "Someone has scratched a warning:\n"
	.string "DO NOT TRUST THE RETURNED.$"
