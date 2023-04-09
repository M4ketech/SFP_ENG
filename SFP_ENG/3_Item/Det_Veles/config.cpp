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
	class SFP_DETECTOR_VELES: Compass
	{
		scope = 2;
		displayName = "Veles detector";
		descriptionShort = "New generation detector. It has three advanced registration cameras that will display the location of the artefact on a special screen. Capable of detecting radiation and the presence of anomalies. Search mode for artifacts is turned on by raising the indicator panel on the front side of the device. In this mode you are able to detect all known to science artifacts.";
		model = "\SFP\3_Item\Det_Veles\detector_Veles.p3d";
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
