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
	class SFP_Reptor_Boots: JungleBoots_Beige
	{
		scope = 2;
		displayName = "Tactical boots";
		descriptionShort = "Sturdy, warm, beautiful boots. Almost indestructible.";
		model = "SFP\2_ODEZDA\Reptor_boots\Reptor_Boots_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {4,4};
		weight = 830;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0.1;
		heatIsolation = 0.7;
		soundAttType = "Boots";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Reptor_boots\Reptor_Boots_M.p3d";
			female = "SFP\2_ODEZDA\Reptor_boots\Reptor_Boots_M.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 690;
					healthLevels[] = {{1,{"DZ\characters\shoes\Data\JungleBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\JungleBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\JungleBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\JungleBoots_damage.rvmat"}},{0,{"DZ\characters\shoes\Data\JungleBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
