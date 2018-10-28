params [["_era", "modern"], ["_isNight", false]];

if (_isNight) exitWith {
	[(configFile >> "CfgIntros" >> _era), "nightSong", "twc_modern_day_intro"] call BIS_fnc_returnConfigEntry;
};

[(configFile >> "CfgIntros" >> _era), "daySong", "twc_modern_day_intro"] call BIS_fnc_returnConfigEntry;