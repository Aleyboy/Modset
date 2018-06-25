	class TWC_WW2_USMC_Base: I_Soldier_F
	{
		scope=1;
		displayName="Base";
		faction="twc_faction_independent";
		editorSubcategory = "Men_WW2_USMC";
		vehicleClass="Men_WW2_USMC";
		nakedUniform="U_BasicBody";
		uniformClass="fow_u_usmc_p41_01_private";
		linkedItems[]=
		{
			"fow_v_usmc_garand",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_garand",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		Items[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
		respawntems[]=
		{
			"ACE_EarPlugs",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_fieldDressing",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_packingBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_elasticBandage",
			"ACE_quikclot",
			"ACE_quikclot",
			"ACE_morphine",
			"ACE_epinephrine",
			"ACE_tourniquet",
			"ACE_tourniquet"
		};
	};
	class TWC_WW2_USMC_Platoon_Commander: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Platoon Commander";
		backpack="TWC_Backpack_WW2_USMC_SL";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setVariable [""twc_keepMap"",true]";
		};
		linkedItems[]=
		{
			"fow_v_usmc_thompson_nco",
			"fow_h_us_m1_officer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_thompson_nco",
			"fow_h_us_m1_officer",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"fow_w_m1a1_thompson"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"fow_w_m1a1_thompson"
		};
		magazines[]=
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class TWC_WW2_USMC_Platoon_Sergeant: TWC_WW2_USMC_Platoon_Commander
	{
		scope=2;
		displayName="Platoon Sergeant";
		backpack="TWC_Backpack_WW2_USMC_Sergeant";
		linkedItems[]=
		{
			"fow_v_usmc_carbine",
			"fow_h_us_m1_nco",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_carbine",
			"fow_h_us_m1_nco",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"fow_w_m55_reising"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"Binocular",
			"fow_w_m55_reising"
		};
		magazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_e_mk2",
			"fow_e_mk2"
		};
		Respawnmagazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_e_mk2",
			"fow_e_mk2"

		};
	};
	class TWC_WW2_USMC_Medic: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Medic";
		backpack="TWC_Backpack_WW2_Medic";
		attendant = 1;
		linkedItems[]=
		{
			"fow_v_us_medic",
			"fow_h_us_m1_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_us_medic",
			"fow_h_us_m1_medic",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising"
		};
		magazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class TWC_WW2_USMC_Squad_Leader: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Squad Leader";
		icon="iconManLeader";
		backpack="TWC_Backpack_WW2_USMC_SL";
		linkedItems[]=
		{
			"fow_v_usmc_thompson_nco",
			"fow_h_us_m1_nco",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_thompson_nco",
			"fow_h_us_m1_nco",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1a1_thompson"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1a1_thompson"
		};
		magazines[]=
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_e_mk2",
			"fow_e_mk2",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
		Respawnmagazines[]=
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_e_mk2",
			"fow_e_mk2",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class TWC_WW2_USMC_Rifleman: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Rifleman";
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1903A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1903A1"
		};
		magazines[]=
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_e_mk2",
			"fow_e_mk2"
		};
		Respawnmagazines[]=
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_e_mk2",
			"fow_e_mk2"
		};
	};
	class TWC_WW2_USMC_Pointman: TWC_WW2_USMC_Rifleman
	{
		scope = 2;
		displayName="Pointman";
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_ithaca37"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_ithaca37"
		};
		magazines[]=
		{
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_e_mk2",
			"fow_e_mk2"
		};
		Respawnmagazines[]=
		{
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_e_mk2",
			"fow_e_mk2"
		};				
	};
	class TWC_WW2_USMC_Team_Leader: TWC_WW2_USMC_Rifleman
	{
		displayName="Team Leader";
		backpack="TWC_Backpack_WW2_USMC_TL";
		linkedItems[]=
		{
			"fow_v_usmc_carbine",
			"fow_h_us_m1_nco",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_carbine",
			"fow_h_us_m1_nco",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising"
		};
		magazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_e_mk2",
			"fow_e_mk2"
		};
		Respawnmagazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_e_mk2",
			"fow_e_mk2"

		};
	};
	class TWC_WW2_USMC_Gunner: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Gunner";
		icon="iconManMG";
		linkedItems[]=
		{
			"fow_v_usmc_bar",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_bar",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1918a2"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1918a2"
		};
		magazines[]=
		{
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63"
		};
		Respawnmagazines[]=
		{
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63"
		};
	};
	class TWC_WW2_USMC_Gunner_Ass: TWC_WW2_USMC_Rifleman
	{
		displayName="Gunner Assistant";
		backpack="TWC_Backpack_WW2_USMC_Gunner_Ass";
		linkedItems[]=
		{
			"fow_v_usmc_bar",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_bar",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1903A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1903A1"
		};
		magazines[]=
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};
		Respawnmagazines[]=
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"

		};
	};
	class TWC_WW2_USMC_AT: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Bazooka Gunner";
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising",
			"fow_w_m1a1_bazooka"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising",
			"fow_w_m1a1_bazooka"
		};
		magazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_1Rnd_m6a1"
		};
		Respawnmagazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_1Rnd_m6a1"
		};
	};
	class TWC_WW2_USMC_AAT: TWC_WW2_USMC_Base
	{
		scope=2;
		displayName="Assistant Gunner";
		backpack="TWC_Backpack_WW2_USMC_Rockets";
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m55_reising"
		};
		magazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp"
		};
		Respawnmagazines[]=
		{
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp"
		};
	};
	class TWC_WW2_USMC_MG: TWC_WW2_USMC_Gunner
	{
		scope=2;
		displayName="MG";
		icon="iconManMG";
		backpack="fow_b_usa_m1919_support";
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1919a4"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1919a4"
		};
		magazines[]=
		{
			"fow_100Rnd_762x63",
			"fow_100Rnd_762x63",
			"fow_100Rnd_762x63"
		};
		Respawnmagazines[]=
		{
			"fow_100Rnd_762x63",
			"fow_100Rnd_762x63",
			"fow_100Rnd_762x63"
		};		
	};
	class TWC_WW2_USMC_MG_Ass: TWC_WW2_USMC_Rifleman
	{
		displayName="MG Assistant";
		backpack="TWC_Backpack_WW2_USMC_MG_Ass";
		linkedItems[]=
		{
			"fow_v_usmc_bar",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"fow_v_usmc_bar",
			"fow_h_us_m1",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1903A1"
		};
		respawnweapons[]=
		{
			"Throw",
			"Put",
			"fow_w_m1903A1"
		};
		magazines[]=
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};
		Respawnmagazines[]=
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};		
	};