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
	class SFP_Novice_bagpack: TortillaBag
	{
		scope = 2;
		displayName = "Regular backpack";
		descriptionShort = "An ordinary backpack there is nothing special about it. Usually suitable for hiking. Easily holds the necessary items.";
		model = "SFP\2_ODEZDA\Novicek_Jacket\novice_bagpack_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		attachments[] = {"Chemlight","WalkieTalkie"};
		rotationFlags = 16;
		itemSize[] = {5,5};
		itemsCargoSize[] = {5,7};
		weight = 1700;
		absorbency = 0;
		heatIsolation = 0.08;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublicAttach"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_co.paa"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Novicek_Jacket\novice_bagpack.p3d";
			female = "SFP\2_ODEZDA\Novicek_Jacket\novice_bagpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat"}},{0.7,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat"}},{0.5,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat"}},{0,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.85;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.85;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.85;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.85;
					};
				};
			};
		};
	};
	class SFP_Novice_jacket_Hood: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Soviet hooded jacket (Light)";
		descriptionShort = "An old Soviet one with a hood, it won’t save you from a bullet, but it will save you from drafts and light rain.";
		model = "SFP\2_ODEZDA\Novicek_Jacket\novice_jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 800;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublicAttach","vkcomfidovpublicTors"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_co.paa","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_co"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat.rvmat"}},{0.7,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat.rvmat"}},{0.5,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat_damage.rvmat"}},{0,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_destruct.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Novicek_Jacket\novice_jacket.p3d";
			female = "SFP\2_ODEZDA\Novicek_Jacket\novice_jacket.p3d";
		};
	};
	class SFP_Novice_jacket: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Soviet jacket";
		descriptionShort = "Old Soviet, threads stick out on the collar, the hood is torn off. It will not save a blind dog from a bullet or bites. But quite from light rain or wind.";
		model = "SFP\2_ODEZDA\Novicek_Jacket\novice_jacket_clear_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 741;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublicAttach","vkcomfidovpublicTors"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_co.paa","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_co"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat.rvmat"}},{0.7,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat.rvmat"}},{0.5,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_damage.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat_damage.rvmat"}},{0,{"SFP\2_ODEZDA\Novicek_Jacket\data\attach\novice_attach_mat_destruct.rvmat","SFP\2_ODEZDA\Novicek_Jacket\data\torso\novice_tors_mat_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Novicek_Jacket\novice_jacket_clear.p3d";
			female = "SFP\2_ODEZDA\Novicek_Jacket\novice_jacket_clear.p3d";
		};
	};
};
