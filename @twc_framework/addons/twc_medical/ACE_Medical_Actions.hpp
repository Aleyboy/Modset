class ACE_Medical_Actions {
	class Advanced {
		class Bandage;
		class FieldDressing: Bandage {
			treatmentTime = 9;
		};
		
		class QuikClot: FieldDressing {
			treatmentTime = 4;
		};
		
		class PackingBandage: FieldDressing {
			treatmentTime = 6;
		};
		
		class ElasticBandage: FieldDressing {
			treatmentTime = 15;
		};
		
		class CPR: FieldDressing {
			callbackSuccess = "twc_medical_fnc_action";
			animationCaller = "AinvPknlMstpSnonWnonDr_medic0";
			animationCallerProne = "AinvPknlMstpSnonWnonDr_medic0";
		};
		
		class Defib: CPR {
			displayName = "Defibrillate";
			displayNameProgress = "Defibrillating...";
			treatmentLocations[] = {"MedicalVehicle"};
			allowedSelections[] = {"body"};
			condition = "[(_this select 0), (_this select 1)] call twc_medical_fnc_canDefib";
			allowSelfTreatment = 0;
			requiredMedic = 1;
			treatmentTime = 10;
			patientStateCondition = 1;
			callbackSuccess = "twc_medical_fnc_action_Defib";
		};
		
		class CheckPulse;
		class LogDebug: CheckPulse {
			displayName = "Medical to RPT (DEBUG)";
			displayNameProgress = "Logging Medical State";
			callbackSuccess = "twc_medical_fnc_logToRPT";
		};
		
		class BloodIV: FieldDressing{};
		
		class BloodIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class PlasmaIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class SalineIV_250: BloodIV {
			allowSelfTreatment = 1;
		};
		
		class Tourniquet: FieldDressing {
			treatmentTime = 2;
		};
		
		class SutureKit: FieldDressing {
			displayName = "Use Suture Kit";
			displayNameProgress = "Suturing";
			category = "advanced";
			condition = "twc_medical_fnc_canSuture";

			// custom handler for items check, to ignore shared gear
			items[] = {};
			treatmentLocations[] = {"All"};
			allowedSelections[] = {"All"};
			allowSelfTreatment = 0;
			requiredMedic = 1;
			patientStateCondition = 0;
			treatmentTime = "twc_medical_fnc_sutureKitTime";
			callbackSuccess = "twc_medical_fnc_sutureKitSuccess";
			callbackProgress = "twc_medical_fnc_sutureKitProgress";
			callbackFailure = "twc_medical_fnc_sutureKitFailure";
			itemConsumed = 0;
			animationCaller = "AinvPknlMstpSnonWnonDnon_medic1";

			litter[] = {
				{"All", "", {"ACE_MedicalLitter_gloves"}},
				{"All", "", {{"ACE_MedicalLitterBase", "ACE_MedicalLitter_bandage1", "ACE_MedicalLitter_bandage2", "ACE_MedicalLitter_bandage3"}}}
			};
		};
	};
};