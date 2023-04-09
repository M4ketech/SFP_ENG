class CfgPatches
{
	class DZ_Gear_Consumables
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Gear_Medical"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class LargeGasCanister;
	class SFP_BIGGasCanister: LargeGasCanister
	{
		scope = 2;
		displayName = "Household gas tank";
		descriptionShort = "Large gas cylinder.";
		model = "\SFP\3_Item\GasBottle\BIG_gas_Ballon.p3d";
		overrideDrawArea = "8.0";
		weight = 5340;
		itemSize[] = {10,13};
		stackedUnit = "w";
		quantityBar = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		varQuantityDestroyOnMin = 0;
		inventorySlot[] = {"GasCanister"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1,{"DZ\gear\consumables\data\LootGasCannisterLarge.rvmat"}},{0.7,{"DZ\gear\consumables\data\LootGasCannisterLarge.rvmat"}},{0.5,{"DZ\gear\consumables\data\LootGasCannisterLarge_damage.rvmat"}},{0.3,{"DZ\gear\consumables\data\LootGasCannisterLarge_damage.rvmat"}},{0,{"DZ\gear\consumables\data\LootGasCannisterLarge_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			isPassiveDevice = 1;
			energyStorageMax = 3800;
			energyUsagePerSecond = 0;
			energyAtSpawn = 3800;
			powerSocketsCount = 1;
			compatiblePlugTypes[] = {7};
			convertEnergyToQuantity = 1;
		};
	};
};
