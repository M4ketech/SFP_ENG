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
	class SFP_BadHeavyArmor_tors: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Armored suit Kit 1D (Heavy)";
		descriptionShort = "Rather old armored suit.";
		model = "SFP\2_ODEZDA\Bad_heavy_armor\Bad_Heavy_armor_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 2800;
		itemSize[] = {5,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublicAttach"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat"}},{0.7,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat"}},{0.5,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat"}},{0,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Bad_heavy_armor\Bad_Heavy_armor.p3d";
			female = "SFP\2_ODEZDA\Bad_heavy_armor\Bad_Heavy_armor.p3d";
		};
	};
	class SFP_BadHeavyArmor_pants: CargoPants_Beige
	{
		scope = 2;
		displayName = "Armored Suit Pants Kit 1D (Heavy)";
		descriptionShort = "Old armored suit pants.";
		model = "SFP\2_ODEZDA\Bad_heavy_armor\Bad_Heavy_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,6};
		weight = 1411;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.4;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {""};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Bad_heavy_armor\Bad_Heavy_pants.p3d";
			female = "SFP\2_ODEZDA\Bad_heavy_armor\Bad_Heavy_pants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.7,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.5,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
			};
		};
	};
};
