class CfgPatches
{
	class DZ_Gear_Cooking
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Bottle_Base;
	class PortableGasStove;
	class SFP_GasStove: PortableGasStove
	{
		scope = 2;
		displayName = "Old Gas Stove";
		descriptionShort = "Handles are torn off except for one, maybe it works. Hose to install gas cylinder in back, may work.";
		model = "\SFP\3_Item\Gas_Stove\Gas_Stove.p3d";
		overrideDrawArea = "3.0";
		openable = 0;
		lootTag[] = {"Camping"};
		lootCategory = "Tools";
		weight = 17570;
		itemSize[] = {20,25};
		attachments[] = {"GasCanister","CookingEquipment"};
		containerSlot = "GasCanister";
		hiddenSelections[] = {"flame"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\cooking\data\GasCooker.rvmat"}},{0.7,{"DZ\gear\cooking\data\GasCooker.rvmat"}},{0.5,{"DZ\gear\cooking\data\GasCooker_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\GasCooker_damage.rvmat"}},{0,{"DZ\gear\cooking\data\GasCooker_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn = 0;
			autoSwitchOff = 1;
			autoSwitchOffWhenInCargo = 1;
			energyStorageMax = 0;
			energyUsagePerSecond = 1;
			energyAtSpawn = 0;
			powerSocketsCount = 0;
			plugType = 7;
			attachmentAction = 1;
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1,0.6,0.5,1};
				brightness = 1;
				radius = 5;
				dayLight = 0;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
};
