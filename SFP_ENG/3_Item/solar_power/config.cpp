class CfgPatches
{
	class DZ_Gear_Camping
	{
		units[] = {"TentMedium_Packed","TentMedium_Pitched"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class PowerGenerator;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class Static;
	class SFP_Solar_bat: PowerGenerator
	{
		scope = 2;
		displayName = "Solar panel";
		descriptionShort = "It is not finished yet. Works like a normal generator";
		model = "\SFP\3_Item\solar_power\solar_power.p3d";
		rotationFlags = 2;
		slopeTolerance = 0.4;
		yawPitchRollLimit[] = {45,45,45};
		weight = 45000;
		itemSize[] = {15,15};
		itemBehaviour = 0;
		fuelTankCapacity = 7000;
		carveNavmesh = 1;
		heavyItem = 1;
		hiddenSelections[] = {"socket_1_plugged","socket_2_plugged","socket_3_plugged","socket_4_plugged","sparkplug_installed","placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\plug_black_CO.paa","dz\gear\camping\data\plug_yellow_CO.paa","dz\gear\camping\data\plug_white_CO.paa","dz\gear\camping\data\plug_orange_CO.paa","dz\gear\camping\data\power_generator_CO.paa","dz\gear\camping\data\power_generator_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\power_generator.rvmat","dz\gear\camping\data\power_generator.rvmat"};
		hologramMaterial = "power_generator";
		hologramMaterialPath = "dz\gear\camping\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\gear\camping\data\power_generator.rvmat"}},{0.7,{"DZ\gear\camping\data\power_generator.rvmat"}},{0.5,{"DZ\gear\camping\data\power_generator_damage.rvmat"}},{0.3,{"DZ\gear\camping\data\power_generator_damage.rvmat"}},{0,{"DZ\gear\camping\data\power_generator_destruct.rvmat"}}};
				};
			};
		};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 0;
			energyStorageMax = 100000;
			energyUsagePerSecond = 0;
			reduceMaxEnergyByDamageCoef = 0.5;
			energyAtSpawn = 10000;
			powerSocketsCount = 4;
			compatiblePlugTypes[] = {2,6};
		};
		class AnimationSources
		{
			class socket_1_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_2_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_3_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_4_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class sparkplug
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class fuel_tank
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class sparkplug_installed
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class dial_fuel
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walk
				{
					soundSet = "powergenerator_movement_walk_SoundSet";
					id = 1;
				};
				class pickUpItem_Light
				{
					soundSet = "pickUpPowerGenerator_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpPowerGenerator_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "powergenerator_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
