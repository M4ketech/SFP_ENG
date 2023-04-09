class CfgPatches
{
	class DZ_Radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class PersonalRadio;
	class SFP_ArmyRadio169: PersonalRadio
	{
		scope = 2;
		displayName = "Military radio";
		descriptionShort = "Military radio type R-169p-1-01";
		lootTag[] = {"Police","Hunting","Camping","Military_east"};
		model = "SFP\3_Item\ArmyRadio\ArmRadio.p3d";
		weight = 750;
		absorbency = 0.5;
		itemSize[] = {1,3};
		inventorySlot[] = {"WalkieTalkie"};
		rotationFlags = 1;
		oldpower = 0;
		isMeleeWeapon = 1;
		simulation = "itemTransmitter";
		inputRange[] = {2,5,10};
		range = 9000;
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {7};
		repairCosts[] = {25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
	};
};
