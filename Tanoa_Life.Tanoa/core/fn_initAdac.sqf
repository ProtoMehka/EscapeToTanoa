#include "..\script_macros.hpp"
/*
	File: fn_initAdac.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Initializes the adac..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_adacLevel) isEqualTo 0) && (FETCH_CONST(life_adminlevel) isEqualTo 0)) then {
	["Notwhitelisted",false,true] call BIS_fnc_endMission;
	sleep 35;
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.