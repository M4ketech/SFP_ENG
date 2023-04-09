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
	class BaseballCap_Pink;
	class SurgicalGloves_Blue;
	class SFP_Maskarad_boots: JungleBoots_Beige
	{
		scope = 2;
		displayName = "Invisible boots";
		descriptionShort = "One of the things of a masquerade. Serves to hide a certain part of the body, to become invisible or wear a special costume";
		model = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_nogi_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {1,1};
		weight = 1;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0.1;
		heatIsolation = 1;
		soundAttType = "Boots";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
			female = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
		};
	};
	class SFP_Maskarad_tors: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Invisible Body";
		descriptionShort = "One of the things of a masquerade. Serves to hide a certain part of the body, to become invisible or wear a special costume";
		model = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_tors_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 1;
		itemSize[] = {1,1};
		itemsCargoSize[] = {4,8};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"camo1"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
			female = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
		};
	};
	class SFP_Maskarad_pants: CargoPants_Beige
	{
		scope = 2;
		displayName = "Invisible pants";
		descriptionShort = "One of the things of a masquerade. Serves to hide a certain part of the body, to become invisible or wear a special costume";
		model = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {1,1};
		itemsCargoSize[] = {4,8};
		weight = 1;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 1;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
			female = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
		};
	};
	class SFP_Maskarad_Head: BaseballCap_Pink
	{
		scope = 2;
		displayName = "The Invisible Head. Read Description.";
		descriptionShort = "Read it carefully. If you put this item on, it will be put on an invisible slot (head). You will not be able to take it off. Put it on this way! Put this item on the quick slot, put it on the character, and to take it off again with the quick slot, take it in your hands again.";
		model = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_head_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"head"};
		rotationFlags = 2;
		weight = 1;
		itemSize[] = {1,1};
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
			female = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
		};
	};
	class SFP_Maskarad_Gloves: SurgicalGloves_Blue
	{
		scope = 2;
		displayName = "Invisible brushes";
		descriptionShort = "One of the things of a masquerade. Serves to hide a certain part of the body, to become invisible or wear a special costume.";
		model = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_ruki_g.p3d";
		rotationFlags = 34;
		weight = 1;
		itemSize[] = {1,1};
		varWetMax = 0.249;
		heatIsolation = 0.05;
		repairableWithKits[] = {5};
		repairCosts[] = {30};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
			female = "SFP\2_ODEZDA\Skeleton\maskarad\maskarad_pustota.p3d";
		};
	};
};
