class CfgPatches
{
	class DZ_Weapons_Firearms_VSS
	{
		units[] = {"VSS"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class VSS;
	class SFP_9A91_Base: VSS
	{
		scope = 0;
		weight = 2600;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,50,150,4,10};
		WeaponLength = 0.78;
		barrelArmor = 2.4;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39","Ammo_9x39AP"};
		magazines[] = {"SFP_9A91_Mag_20rnd"};
		magazineSwitchTime = 0.38;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.2,2.2,1.2};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		reloadAction = "ReloadVSS";
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class NoiseShoot
		{
			strength = 5;
			type = "sound";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[] = {100,200,300,400};
			memoryPointCamera = "eye";
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class SFP_9A91: SFP_9A91_Base
	{
		scope = 2;
		displayName = "9A91 Assault Rifle";
		descriptionShort = "This is a compact assault rifle currently in use by the Russian police. It is used as a cheaper and more versatile alternative to the SR-3 Vikhr";
		model = "\SFP\4_Weapons\9A91\9A91_FV.p3d";
		attachments[] = {"weaponOpticsAK","9A91Silenser"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1550;
					healthLevels[] = {{1,{"DZ\weapons\firearms\VSS\data\vss.rvmat"}},{0.7,{"DZ\weapons\firearms\VSS\data\vss.rvmat"}},{0.5,{"DZ\weapons\firearms\VSS\data\vss_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\VSS\data\vss_damage.rvmat"}},{0,{"DZ\weapons\firearms\VSS\data\vss_destruct.rvmat"}}};
				};
			};
		};
	};
};
