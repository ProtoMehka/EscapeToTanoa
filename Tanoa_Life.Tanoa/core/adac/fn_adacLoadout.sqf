#include "..\..\script_macros.hpp"
/*
File: fn_adacLoadout.sqf
Author: -
Description:  
Loads the adac with the default gear.  
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};
 
/* Load player with default adac gear. */
player addUniform "U_B_CombatUniform_mcam";
 
player addMagazine "30Rnd_556x45_Stanag";
player addWeapon "arifle_Mk20C_ACO_pointer_F";
player addMagazine "30Rnd_556x45_Stanag";
player addMagazine "30Rnd_556x45_Stanag";
 
/* ITEMS */
player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";
 
[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;