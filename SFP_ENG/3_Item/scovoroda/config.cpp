class CfgPatches
{
	class DZ_Gear_Crafting
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
	class SharpWoodenStick;
	class FryingPan;
	class SFP_Soviet_Frying_pan: FryingPan
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FryingPan0";
		descriptionShort = "$STR_CfgVehicles_FryingPan1";
		model = "\SFP\3_Item\scovoroda\scovoroda.p3d";
		rotationFlags = 2;
		openable = 0;
		weight = 750;
		itemSize[] = {3,3};
		itemsCargoSize[] = {4,3};
		fragility = 0.01;
		attachments[] = {"Ingredient"};
		allowOwnedCargoManipulation = 1;
		volume = 1000;
		varTemperatureMax = 200;
		inventorySlot[] = {"CookingEquipment","DirectCookingA","DirectCookingB","DirectCookingC"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\gear\cooking\data\frying_pan.rvmat"}},{0.7,{"DZ\gear\cooking\data\frying_pan.rvmat"}},{0.5,{"DZ\gear\cooking\data\frying_pan_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\frying_pan_damage.rvmat"}},{0,{"DZ\gear\cooking\data\frying_pan_destruct.rvmat"}}};
				};
			};
		};
	};
};
