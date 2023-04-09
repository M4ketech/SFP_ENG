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
		displayName = "Tactical PDA";
		descriptionShort = "Universal Tactical PDA, pretty rare and attaches to the wrist. Has many sensors to determine the status of the user. Integrated anomaly detector, geiger counter, sound sensor and has the basic functions of a PDA.";
		model = "\SFP\3_Item\Det_2010\Det_PDA_G.p3d";
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
		hiddenSelections[] = {"tablo"};
		hiddenSelectionsTextures[] = {"\SFP\3_Item\Det_2010\data\Tablo\screen_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"SFP\3_Item\Det_2010\data\Tablo\screen_mat.rvmat"}},{0.7,{"SFP\3_Item\Det_2010\data\Tablo\screen_mat.rvmat"}},{0.5,{"SFP\3_Item\Det_2010\data\Tablo\screen_damaged.rvmat"}},{0.3,{"SFP\3_Item\Det_2010\data\Tablo\screen_damaged2.rvmat"}},{0,{"SFP\3_Item\Det_2010\data\Tablo\screen_ruined.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SFP\3_Item\Det_2010\Det_PDA.p3d";
			female = "\SFP\3_Item\Det_2010\Det_PDA.p3d";
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
