class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class GP5GasMask;
	class SFP_GP7GasMask: GP5GasMask
	{
		scope = 2;
		displayName = "GP7 Gas Mask";
		descriptionShort = "Gas Mask type GP7";
		model = "SFP\2_ODEZDA\GP7\GP7_g.p3d";
		inventorySlot[] = {"Mask"};
		attachments[] = {"GasMaskFilter"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 1;
		itemSize[] = {3,3};
		weight = 1090;
		varWetMax = 0.249;
		heatIsolation = 0.7;
		repairableWithKits[] = {8,6};
		repairCosts[] = {30,25};
		visibilityModifier = 0.95;
		noHelmet = 1;
		noEyewear = 1;
		headSelectionsToHide[] = {"Clipping_GP5GasMask"};
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\GP7\data\gasmaskGP7_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\GP7\data\GasMaskGP7_mat.rvmat"}},{0.7,{"SFP\2_ODEZDA\GP7\data\GasMaskGP7_mat.rvmat"}},{0.5,{"SFP\2_ODEZDA\GP7\data\GasMaskGP7_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\GP7\data\GasMaskGP7_damage.rvmat"}},{0,{"SFP\2_ODEZDA\GP7\data\GasMaskGP7_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SFP\2_ODEZDA\GP7\GP7.p3d";
			female = "\SFP\2_ODEZDA\GP7\GP7.p3d";
		};
		class Protection
		{
			biological = 1;
		};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
	};
};
