class CfgPatches
{
	class unit_config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F",
			"A3_Soft_F",
			"A3_data_F"
		};
	};
};
class CfgVehicles
{
	class CUP_B_LR_Transport_GB_W;
	class CUP_B_LR_Transport_GB_D;
	class twc_landrover_W: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="Veh_units";
		displayname = "Landrover Woodland (Modern)";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_30Rnd
			{
				magazine="UK3CB_BAF_30Rnd";
				count=8;
			};
			class _xx_UK3CB_BAF_30Rnd_T
			{
				magazine="UK3CB_BAF_30Rnd_T";
				count=2;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=2;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_20Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_20Rnd_T";
				count=1;
			};
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_75Rnd";
				count = 1;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_75Rnd_T";
				count = 1;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
			{
				Weapon = "UK3CB_BAF_NLAW_Launcher";
				count = 1;
			};
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 1;
			};
		};
	};
	class twc_landrover_D: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="Veh_units";
		displayname = "Landrover Desert (Modern)";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_30Rnd
			{
				magazine="UK3CB_BAF_30Rnd";
				count=8;
			};
			class _xx_UK3CB_BAF_30Rnd_T
			{
				magazine="UK3CB_BAF_30Rnd_T";
				count=2;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=2;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=2;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=4;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd
			{
				magazine="UK3CB_BAF_20Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_20Rnd_T
			{
				magazine="UK3CB_BAF_20Rnd_T";
				count=1;
			};
			class _xx_UK3CB_BAF_556_30Rnd
			{
				magazine="UK3CB_BAF_556_30Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				magazine="UK3CB_BAF_556_30Rnd_T";
				count=1;
			};
			class _xx_Belt
			{
				magazine = "UK3CB_BAF_75Rnd";
				count = 1;
			};
			class _xx_Belt_T
			{
				magazine = "UK3CB_BAF_75Rnd_T";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 5;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 5;
			};
			class _xx_quickclot
			{
				name = "ACE_quikclot";
				count = 5;
			};
			class _xx_packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_NLAW
			{
				Weapon = "UK3CB_BAF_NLAW_Launcher";
				count = 1;
			};
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 1;
			};
		};
	};
	class twc_landrover_W_1990: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="Veh_units";
		displayname = "Landrover Woodland (90`s)";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_30Rnd
			{
				magazine="UK3CB_BAF_30Rnd";
				count=25;
			};
			class _xx_UK3CB_BAF_30Rnd_T
			{
				magazine="UK3CB_BAF_30Rnd_T";
				count=5;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=8;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=4;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 5;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 5;
			};
			class _xx_quickclot
			{
				name = "ACE_quikclot";
				count = 5;
			};
			class _xx_packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_AT4
			{
				Weapon = "UK3CB_BAF_AT4_CS_AT_Launcher";
				count = 2;
			};
		};
	};
	class twc_landrover_D_1990: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="Veh_units";
		displayname = "Landrover Desert (90`s)";
		class TransportMagazines
		{
			class _xx_UK3CB_BAF_30Rnd
			{
				magazine="UK3CB_BAF_30Rnd";
				count=25;
			};
			class _xx_UK3CB_BAF_30Rnd_T
			{
				magazine="UK3CB_BAF_30Rnd_T";
				count=5;
			};
			class _xx_UK3CB_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=8;
			};
			class _xx_UK3CB_UGL_FlareWhite_F
			{
				magazine="UGL_FlareWhite_F";
				count=4;
			};
			class _xx_UK3CB_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=4;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 5;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 5;
			};
			class _xx_quickclot
			{
				name = "ACE_quikclot";
				count = 5;
			};
			class _xx_packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_AT4
			{
				Weapon = "UK3CB_BAF_AT4_CS_AT_Launcher";
				count = 2;
			};
		};
	};
	class twc_landrover_W_ColdWar: CUP_B_LR_Transport_GB_W
	{
		scope = 2;
		side = 1;
		faction="Veh_units";
		displayname = "Landrover Woodland (Coldwar)";
		class TransportMagazines
		{
			class _xx_hlc_20Rnd_762x51_B_fal
			{
				magazine="hlc_20Rnd_762x51_B_fal";
				count=8;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_75Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_75Rnd_T";
				count=1;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=2;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=2;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=2;
			};
			class _xx_tf47_m3maaws_SMOKE
			{
				magazine="tf47_m3maaws_SMOKE";
				count=2;
			};
			class _xx_tf47_m3maaws_ILLUM
			{
				magazine="tf47_m3maaws_ILLUM";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=6;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 5;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 5;
			};
			class _xx_quickclot
			{
				name = "ACE_quikclot";
				count = 5;
			};
			class _xx_packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
	class twc_landrover_D_ColdWar: CUP_B_LR_Transport_GB_D
	{
		scope = 2;
		side = 1;
		faction="Veh_units";
		displayname = "Landrover Desert (Coldwar)";
		class TransportMagazines
		{
			class _xx_hlc_20Rnd_762x51_B_fal
			{
				magazine="hlc_20Rnd_762x51_B_fal";
				count=10;
			};
			class _xx_UK3CB_BAF_75Rnd
			{
				magazine="UK3CB_BAF_75Rnd";
				count=2;
			};
			class _xx_UK3CB_BAF_75Rnd_T
			{
				magazine="UK3CB_BAF_75Rnd_T";
				count=1;
			};
			class _xx_ACE_HandFlare_White
			{
				magazine="ACE_HandFlare_White";
				count=2;
			};
			class _xx_tf47_m3maaws_HEAT
			{
				magazine="tf47_m3maaws_HEAT";
				count=2;
			};
			class _xx_tf47_m3maaws_HE
			{
				magazine="tf47_m3maaws_HE";
				count=2;
			};
			class _xx_tf47_m3maaws_SMOKE
			{
				magazine="tf47_m3maaws_SMOKE";
				count=2;
			};
			class _xx_tf47_m3maaws_ILLUM
			{
				magazine="tf47_m3maaws_ILLUM";
				count=2;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_Grenade
			{
				magazine="CUP_HandGrenade_L109A2_HE";
				count=6;
			};
		};
		class TransportItems
		{
			class _xx_Bandage
			{
				name = "ACE_fieldDressing";
				count = 5;
			};
			class _xx_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 5;
			};
			class _xx_quickclot
			{
				name = "ACE_quikclot";
				count = 5;
			};
			class _xx_packing
			{
				name = "ACE_packingBandage";
				count = 5;
			};
			class _xx_Morphine
			{
				name = "ACE_morphine";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_LAW
			{
				Weapon = "HAFM_LAW";
				count = 2;
			};
		};
	};
};