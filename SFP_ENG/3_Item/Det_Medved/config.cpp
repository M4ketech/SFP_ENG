class CfgPatches
{
	class DZ_Gear_Navigation
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Compass;
	class SFP_DETECTOR_Medved: Compass
	{
		scope = 2;
		displayName = "Bear Detector";
		descriptionShort = "The Bear Anomaly Detector is a more advanced type of detector. It can show the direction in which you need to move to find an artifact.";
		model = "\SFP\3_Item\Det_Medved\medved.p3d";
		animClass = "Compass";
		itemSize[] = {1,2};
		weight = 190;
		simulation = "ItemCompass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\gear\navigation\data\compass.rvmat"}},{0.7,{"DZ\gear\navigation\data\compass.rvmat"}},{0.5,{"DZ\gear\navigation\data\compass_damage.rvmat"}},{0.3,{"DZ\gear\navigation\data\compass_damage.rvmat"}},{0,{"DZ\gear\navigation\data\compass_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class compass_open
				{
					soundSet = "compass_open_SoundSet";
					id = 204;
				};
				class compass_close
				{
					soundSet = "compass_close_SoundSet";
					id = 205;
				};
			};
		};
	};
};
