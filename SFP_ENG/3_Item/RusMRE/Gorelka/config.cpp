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
class CfgSlots
{
	class Slot_TaganokIRPbank
	{
		name = "irpBank";
		displayName = "Canned IRP";
		selection = "irpBank";
		ghostIcon = "food";
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Bottle_Base;
	class PortableGasStove;
	class SFP_RusIRP_Taganok: PortableGasStove
	{
		scope = 2;
		displayName = "Taganok";
		descriptionShort = "Taganok is used for heating food.";
		model = "\SFP\3_Item\RusMRE\Gorelka\taganok.p3d";
		overrideDrawArea = "3.0";
		openable = 0;
		lootTag[] = {"Camping"};
		lootCategory = "Tools";
		weight = 170;
		itemSize[] = {1,1};
		attachments[] = {"irpBank"};
		containerSlot = "";
		hiddenSelections[] = {"flame"};
		hiddenSelectionsTextures[] = {""};
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
			updateInterval = 10;
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyirpBank: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"irpBank"};
		model = "SFP\3_Item\RusMRE\Gorelka\proxy\irpBank.p3d";
	};
};
