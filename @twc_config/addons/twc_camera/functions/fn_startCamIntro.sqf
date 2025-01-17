/*
 * Starts the automated camera sequence introduction. This is only run once per mission, at the very start.
 * JIPs/Reconnects etc. are given a static camera, as it won't show other player locations and so forth.
 */
params [["_operationName", TWC_Operation_Name], ["_author", "Unspecified"]];

private _isNightOp = missionNameSpace getVariable ["TWC_NightGear", false];

_song = call TWC_Camera_fnc_getIntroSong;

// Need to support special intro camera stuff here. Hmmm.
_introData = call TWC_Camera_fnc_getIntroData;

// Calculate time per section for panning shot. Overall time limit is 40 seconds, divided by element count. Min of 4 seconds per group.
_allPlayers = call BIS_fnc_listPlayers;
_totalPlayerCount = count (_allPlayers - entities "HeadlessClient_F");
_panTimePerUnit = (40 / _totalPlayerCount) max 1.5;

// Disable player control as best as we can
[true] call ace_common_fnc_disableUserInput;
player enableSimulation false;

_cam = "camera" camCreate (player modelToWorld [0, 2, 2]);
_cam cameraEffect ["internal", "back"];

_lightLevel = 0.05 + (0.95 * call ACE_common_fnc_ambientBrightness);

if (_lightLevel < 0.5) then {
	camUseNVG true;
};

[_song] spawn { playMusic (_this select 0); }; // play calculated tune

titleText ["<t color='#ffffff' size='3'>The Wrecking Crew</t><br/><t color='#FFFFFF' size='1'>Presents</t>", "PLAIN", -1, true, true];
titleFadeOut 4;
sleep 5;

_titleText = format [
	"<t color='#ff6633' size='4' align='center'>%1</t><br/><t color='#FFFFFF' size='1' align='center'>by %2</t>",
	_operationName,
	_author
];

[parseText _titleText, [0, 0.3, 1, 1], nil, 4, 4, 0] spawn BIS_fnc_textTiles;
sleep 11;

"TWCIntroText" cutText ["", "BLACK IN", 20];

_alternatePan = false;

{
	_x params ["_groupName", "_groupUnits", "_panArray"];
	_displayString = "";
	
	_firstUnit = (_panArray select 0);
	_lastUnit = (_panArray select 1);
	
	if (_alternatePan) then {
		_firstUnit = (_panArray select 1);
		_lastUnit = (_panArray select 0);
	};
	
	_alternatePan = !_alternatePan;
	_panTime = (count _groupUnits) * _panTimePerUnit;
	
	// prevent bad pans
	if (!alive _firstUnit && alive _lastUnit) then { _firstUnit = _lastUnit; };
	if (!alive _lastUnit && alive _firstUnit) then { _lastUnit = _firstUnit; };
	
	// Build Group Display List
	{
		_color = "#FFFFFF";
		if (_x select 1) then { _color = "#ff9933"; };

		_tmpString = "<t color='" + _color + "' size='1' align='left'>" + (_x select 0) + "</t><t align='left'>: " + name (_x select 2) + "</t><br />";
		_displayString = _displayString + _tmpString;
	} forEach _groupUnits;
	
	_groupText = format ["<t color='#ff6633' size='2' align='left'>%1</t><br/>%2", _groupName, _displayString];
	
	titleText [_groupText, "PLAIN", -1, false, true];
	titleFadeOut (_panTime + 2);
	
	if (alive _firstUnit && alive _lastUnit) then {
		_cam camSetTarget (_firstUnit modelToWorld [0, 0, 1.5]);
		_cam camSetPos (_firstUnit modelToWorld [0, 2, 1.5]);
		_cam cameraEffect ["internal", "back"];
		_cam camCommit 0;

		_cam camSetTarget (_lastUnit modelToWorld [0, 0, 1.5]);
		_cam camSetPos (_lastUnit modelToWorld [0, 2, 1.5]);
		_cam cameraEffect ["internal", "back"];
		_cam camCommit _panTime;
	};
	
	sleep (_panTime + 1);
} forEach _introData;

_cam = "camera" camCreate (player modelToWorld [0, 2, 5]);
_cam cameraEffect ["terminate", "back"];
camDestroy _cam;

player enableSimulation true;
[false] call ace_common_fnc_disableUserInput;

"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [6];
"dynamicBlur" ppEffectCommit 0;
"dynamicBlur" ppEffectAdjust [0.0];
"dynamicBlur" ppEffectCommit 5;