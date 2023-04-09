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
	class Armband_Yellow;
	class Sweater_Gray;
	class LeatherBelt_Beige;
	class SFP_TAG_ColorBase: LeatherBelt_Beige
	{
		scope = 0;
		displayName = "Sleeve band";
		descriptionShort = "Sleeveband embroidered with velcro. There is a feeder inside.";
		model = "SFP\2_ODEZDA\ArmbandTAG\ArmBandTAG_G.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		itemsCargoSize[] = {1,2};
		inventorySlot = "Armband";
		attachments[] = {""};
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {1,1};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"1_FLAG","1_Text","1_SmallText","1_ZNAK","1_Telo"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\characters\belts\data\belt_leather_beige.rvmat"}},{0.7,{}},{0.5,{"DZ\characters\belts\data\belt_leather_beige_damage.rvmat"}},{0.3,{}},{0,{"DZ\characters\belts\data\belt_leather_beige_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\ArmbandTAG\ArmBandTAG_m.p3d";
			female = "SFP\2_ODEZDA\ArmbandTAG\ArmBandTAG_m.p3d";
		};
	};
	class SFP_TAG_OSCOP: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage OSKOP";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\Text_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\SmallTex_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\Znak_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\text\Text_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\SmallTex.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\Znak_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_Efretor: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Armband DOLG Private";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG1_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG1.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_MLserzant: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage DUTY Junior Sergeant";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG2_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG2.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_Serzant: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage DUTY Sergeant";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG3_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG3.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_Letexa: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage DOLG Pilot";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG4_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG4.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_StLetexa: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage DOLG Senior Pilot";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG5_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG5.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_Kapitan: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage DUTY Captain";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG6_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG6.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_Maer: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve band DOLG Major";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_RusPoligon_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG7_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_Poligon_Mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG7.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_PodPolkan: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve band DUTY Lieutenant Colonel";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_RusPoligon_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG8_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_Poligon_Mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG8.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
	class SFP_TAG_DOLG_Polkan: SFP_TAG_ColorBase
	{
		scope = 2;
		displayName = "Sleeve bandage DUTY Colonel";
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_RusPoligon_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\text\dolg\LargeText_DOLG9_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_dolg_ca.paa","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\Znak_DOLG_co.paa","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ArmbandTAG\data\Flag\Flag_Poligon_Mat.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Text\DOLG\LargeText_DOLG9.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\SmallTex\dolg\SmallTex_Dolg.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\Znak\DOLG\ZNAK_DOLG_MAT.rvmat","SFP\2_ODEZDA\ArmbandTAG\data\BandTelo\BandTelo_mat.rvmat"};
	};
};
