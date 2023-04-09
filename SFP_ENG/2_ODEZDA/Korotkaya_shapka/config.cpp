class CfgPatches
{
	class DZ_Characters_Headgear
	{
		units[] = {"BaseballCap_Blue","BaseballCap_Beige","BaseballCap_Black","BaseballCap_Olive","BaseballCap_Pink","BaseballCap_Red","BaseballCap_Camo","BaseballCap_CMMG_Black","BaseballCap_CMMG_Pink","MotoHelmet_Black","MotoHelmet_Blue","MotoHelmet_Green","MotoHelmet_Red","MotoHelmet_White","Headtorch_Grey","CowboyHat_Brown","CowboyHat_black","CowboyHat_darkBrown","CowboyHat_green","BoonieHat_black","BoonieHat_Blue","BoonieHat_DPM","BoonieHat_dubok","BoonieHat_flecktran","BoonieHat_NavyBlue","BoonieHat_olive","BoonieHat_orange","BoonieHat_red","BoonieHat_Tan","FlatCap_Black","FlatCap_Grey","FlatCap_Brown","FlatCap_Blue","FlatCap_Red","FlatCap_Check_Black","FlatCap_Check_Brown","FlatCap_Check_Grey","GhillieHoodWoodland"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class BeanieHat_Beige;
	class SFP_Hat_ColorBase: BeanieHat_Beige
	{
		displayName = "Hat";
		descriptionShort = "Regular hat";
		model = "\SFP\2_ODEZDA\Korotkaya_shapka\hat_g.p3d";
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 16;
		weight = 90;
		itemSize[] = {3,2};
		varWetMax = 1;
		heatIsolation = 0.7;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		headSelectionsToHide[] = {"Clipping_BeanieHat"};
		hiddenSelections[] = {"camoGround1","camoMale1","camoFemale1"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 40;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\BeanieHat.rvmat"}},{0.7,{"DZ\characters\headgear\data\BeanieHat.rvmat"}},{0.5,{"DZ\characters\headgear\data\BeanieHat_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\BeanieHat_damage.rvmat"}},{0,{"DZ\characters\headgear\data\BeanieHat_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\SFP\2_ODEZDA\Korotkaya_shapka\hat.p3d";
			female = "\SFP\2_ODEZDA\Korotkaya_shapka\hat.p3d";
		};
	};
	class SFP_Hat_Black: SFP_Hat_ColorBase
	{
		scope = 2;
	};
};
