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
	class TortillaBag;
	class JungleBoots_Beige;
	class LeatherBelt_Beige;
	class ZmbF_CitizenANormal_Beige;
	class SFP_USSR_Jacket_Bandit: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Leather Jacket (Lightweight)";
		descriptionShort = "A leather jacket that offers no noteworthy protection. Popular among gangsters.";
		model = "SFP\2_ODEZDA\USSR_Jacket_Bandit\USSR_J_Bandit_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1000;
		itemSize[] = {3,3};
		itemsCargoSize[] = {4,6};
		quickBarBonus = 2;
		heatIsolation = 0.5;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic1","personality"};
		class DamageSystem
		{
			class Health
			{
				hitpoints = 100;
				healthLevels[] = {{1,{"SFP\2_ODEZDA\USSR_Jacket_Bandit\data\Torso\Bandit_J_mat.rvmat"}},{0.7,{"SFP\2_ODEZDA\USSR_Jacket_Bandit\data\Torso\Bandit_J_mat.rvmat"}},{0.5,{"SFP\2_ODEZDA\USSR_Jacket_Bandit\data\Torso\Bandit_J_mat_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\USSR_Jacket_Bandit\data\Torso\Bandit_J_mat_damage.rvmat"}},{0,{"SFP\2_ODEZDA\USSR_Jacket_Bandit\data\Torso\Bandit_J_mat_destruct.rvmat"}}};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\USSR_Jacket_Bandit\USSR_J_Bandit.p3d";
			female = "SFP\2_ODEZDA\USSR_Jacket_Bandit\USSR_J_Bandit_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
