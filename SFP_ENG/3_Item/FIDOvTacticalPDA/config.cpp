class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CargoPants_Beige;
	class HuntingJacket_Autumn;
	class CivilianBelt;
	class JungleBoots_Beige;
	class LeatherBelt_Beige;
	class ZmbF_CitizenANormal_Beige;
	class SFP_Tactical_PDA: CivilianBelt
	{
		scope = 2;
		displayName = "Military Tactical PDA";
		descriptionShort = "RDA, made of strong plastic, reinforced design that protects from damage. Can be charged with a regular phone charger, but also charged by solar battery.";
		model = "\SFP\3_Item\FIDOvTacticalPDA\FIDOvTacticalPDA_g.p3d";
		attachments[] = {""};
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot[] = {"Hips"};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {3,1};
		weight = 20;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		class ClothingTypes
		{
			male = "SFP\3_Item\FIDOvTacticalPDA\FIDOvTacticalPDA.p3d";
			female = "SFP\3_Item\FIDOvTacticalPDA\FIDOvTacticalPDA.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
