/* 
*
* TFD_ORBAT is used to assign group names and radio channels.
*
* Usage - [ "groupName" , SW Channel , "name" , "name" ]
* Add one new array per group. Ensure all arrays except the final one are followed by a comma (,)
*
*/

TFD_ORBAT = [
	["Command",	8,	"s_1","s_2"],
	["Alpha",	1,	"s_3","s_4","s_5","s_6","s_7","s_8","s_9","s_10","s_11"],
	["Bravo",	2,	"s_12","s_13","s_14","s_15","s_16","s_17","s_18","s_19","s_20"],
	["Charlie",	3,	"s_21","s_22","s_23","s_24","s_25","s_26","s_27","s_28","s_29"],
	["Delta",	4,	"s__30","s_31","s_32","s_33","s_34","s_35","s_36","s_37","s_38"],
	["Echo",	5,	"s__39","s_40","s_41","s_42","s_43","s_44","s_45","s_46","s_47"],
	["Foxtrot",	6,	"s_48","s_49","s_50","s_51","s_52","s_53","s_54","s_55","s_56"]
];

/*
*
* startMission is used by the game logic to define the briefing phase from the play phase.
* For a 'hot start' mission set this to true.
*
*/

startMission = false;

/*
*
* scriptedPlayerKit is used to check if you are using the "playerKit.sqf" script to assign player equipment.
* set to true if you are using the script.
*
*/

scriptedPlayerKit = false;