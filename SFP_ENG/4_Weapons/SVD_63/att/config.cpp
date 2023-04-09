class CfgPatches
{
	class DZ_Weapons_Supports
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class AtlasBipod;
	class M4_OEBttstck;
	class SFP_SVD_Bipod: M4_OEBttstck
	{
		scope = 2;
		displayName = "SVD Bipod";
		descriptionShort = "SVD 1963 Dipod";
		model = "\SFP\4_Weapons\SVD_63\att\svd_soski.p3d";
		rotationFlags = 12;
		reversed = 0;
		inventorySlot = "svd_dipload";
		weight = 376;
		itemSize[] = {1,3};
		dispersionModifier = -0.00055;
		dexterityModifier = -0.2;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camox"};
		isMeleeWeapon = 1;
	};
	class SFP_SVD_Belt: M4_OEBttstck
	{
		scope = 2;
		displayName = "SVD 1963 Belt";
		descriptionShort = "SVD 1963 Belt";
		model = "\SFP\4_Weapons\SVD_63\att\svd_belt2.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "svd_remen";
		weight = 354;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		isMeleeWeapon = 0;
	};
};
