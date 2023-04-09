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
	class SFP_Brodaga_Jacket: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Black Winter Jacket";
		descriptionShort = "Winter jacket with sweater, it does not look like new, but you can still wear it.";
		model = "SFP\2_ODEZDA\Brodaga\brodaga_jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 800;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 3;
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
			male = "SFP\2_ODEZDA\Brodaga\brodaga_jacket.p3d";
			female = "SFP\2_ODEZDA\Brodaga\brodaga_jacket_F.p3d";
		};
	};
};
