/*
* Author: [TWC] jayman
* Sets rank insignias for friendly units. Changes default ACE pictures
*
* Arguments:
* 0: ERA <STRING>
*
* Return Value:
* NOTHING
*
* Example:
* [modern] call twc_fnc_era;
*
* Public: No
*/
params["_era"];

switch (_era) do {
	case "1990": {
		["TWC_Millenial", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;
		cTab_vehicleClass_has_FBCB2 = [];
	};
	case "coldwar": {
		["TWC_ColdWar", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;	
		cTab_vehicleClass_has_FBCB2 = [];
		cTab_vehicleClass_has_TAD = [];
	};
	case "ww2": {
		["twc_faction_independent", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;
		cTab_vehicleClass_has_FBCB2 = [];
		cTab_vehicleClass_has_TAD = [];
		
		["CAManBase","init",{
			if((side (_this select 0) == West) && (rank (_this select 0) == "PRIVATE" || rank (_this select 0) == "CORPORAL"))then{
				(_this select 0) unassignItem "itemMap";
				(_this select 0) removeItem "itemMap";
			};
		}, true, nil, true] call CBA_fnc_addClassEventHandler;
	};
	default {
		["TWC_Modern", [
		"\twc_faction\ranks\private.paa",
		"\twc_faction\ranks\lance_corporal.paa",
		"\twc_faction\ranks\corporal.paa",
		"\twc_faction\ranks\sergeant.paa",
		"\twc_faction\ranks\staff_sergeant.paa",
		"\twc_faction\ranks\second_lieutenant.paa",
		"\twc_faction\ranks\major.paa"
		]] call ace_nametags_fnc_setFactionRankIcons;		
	};
};