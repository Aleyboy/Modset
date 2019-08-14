/*
* Author(s): [TWC] Hobbs
* AI combat movement code

* Arguments:
* <object> group leader
*
* Return Value:
* <NONE>
*
* Example:
* [leader _group] spawn TWC_fnc_aiscramblenew;
*
* Public: No
*/
CIVILIAN setFriend [EAST, 1];
CIVILIAN setFriend [WEST, 1];
CIVILIAN setFriend [INDEPENDENT, 1];

//Recieved Parameters
params ["_leader", ["_supponly", 0]];
sleep 2;
//making sure only one instance is run on a group at a time
_group = group _leader;

_checker = leader _group;


	_osideo = _leader getvariable ["twcscram_oside", 8];
	_oside = 8;
	if (side _leader == east) then {
		_oside = 0;
	} else {
		if (side _leader == west) then {
			_oside = 1;
		} else {
			if (side _leader == independent) then {
				_oside = 2;
			};
		};
	};
	
	if (_osideo == 8) then {
		{_x setvariable ["twcscram_oside", _oside];} foreach (units _group);
	};
	
	
_keycheck = _group getvariable ["twc_aiscramkey", 0];

_group setvariable ["twc_aiscramkey", (_keycheck + 1), true];


_leader = leader _leader;

_group setSpeedMode "full";
_enemy = _leader findnearestenemy _leader;

if (_enemy == objnull) then {
	_enemy = allplayers call bis_fnc_selectrandom;
};

{
	if ((_x getvariable ["twc_aisuppression", 0]) == 0) then {
		[_x] spawn TWC_fnc_aisuppress;
	};
} foreach units _group;

if (_supponly == 1) exitwith {};

[(units _group)] call ace_ai_fnc_unGarrison;

{
		_unit = _x;
		_check = 0;
		_pos = getpos _enemy;
		_radius = 20;
		while {(_check == 0) && (_radius < 250)} do {
			_pos = [_unit, 1, _radius, 10, 0, 20, 0] call BIS_fnc_findSafePos;
			_pos2 = AtlToAsl ([_pos select 0,_pos select 1, (1 + (random 3))]);
			_vis = [objNull, "VIEW"] checkVisibility [(GETPosasl _enemy) vectoradd [0,0,(1 + (random 7))], _pos2];
			if (_vis == 0) then {
				_check = 1;
			} else {
				_radius = _radius + 5;
			};
		};
		if (_check == 1) then {
			sleep (random 30);
			_unit enableai "path";
			_unit domove _pos;
			
			[_unit, _pos] spawn {
				params ["_unit", "_pos"];
				sleep 3;
				if ((random 1) > 0.3) then {
					sleep 10;
				};
			};
			
			
		} else {
			if ((leader group _unit) == _unit) then {
			};
		};
} foreach units _group;

sleep 30;

_group setvariable ["twc_aiscramkey", 0];
if ((count units _group)> 0) then {
	_group setvariable ["twc_aiscramkey", 0, true];
	[leader _group] spawn TWC_fnc_aiscramble;
};