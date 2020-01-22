
/*
 * Author: Glowbal, mharis001
 * Administers medication to the patient on the given body bodypart.
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 * 3: Treatment <STRING>
 * 4: Item User (not used) <OBJECT>
 * 5: Used Item <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorObject, "RightArm", "Morphine", objNull, "ACE_morphine"] call ace_medical_treatment_fnc_medication
 *
 * Public: No
 */

params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

[_patient, _usedItem] call ace_medical_treatment_fnc_addToTriageCard;

[_patient, "activity", (format ["%1 took Painkillers", [_patient, false, true] call ace_common_fnc_getname]), [[_medic, false, true] call ace_common_fnc_getname, getText (configFile >> "CfgWeapons" >> _usedItem >> "displayName")]] call ace_medical_treatment_fnc_addToLog;

//["twc_medical_fnc_painkillerslocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

[_patient, _bodyPart, _classname] remoteexec ["twc_medical_fnc_painkillerslocal", _patient];