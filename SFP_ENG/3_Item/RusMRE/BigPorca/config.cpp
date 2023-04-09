class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class TacticalBaconCan_Opened;
	class SFP_RusMRE_BigPorcaBase: TacticalBaconCan_Opened
	{
		scope = 0;
		displayName = "$STR_TacticalBaconCan0";
		descriptionShort = "Must be delicious.";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca.p3d";
		itemSize[] = {2,2};
		inventorySlot[] = {"irpBank","CookingEquipment"};
		weight = 40;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\tactical_bacon_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\food_can.rvmat"}},{0.7,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.3,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 300;
			water = 50;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Buckwheat: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Buckwheat Porridge with Beef.";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\BuckWheat_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\BuckWheat_mat.rvmat"};
	};
	class SFP_RusIRP_Buckwheat_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Buckwheat Porridge with Beef.";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_food.rvmat"};
	};
	class SFP_RusIRP_Lard: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Salted Spitz";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_Lard_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Salted Spitz";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_food.rvmat"};
	};
	class SFP_RusIRP_Lard2: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Canned Salted Bacon";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard2\Lard2_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_Lard2_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Canned Salted Bacon";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_food.rvmat"};
	};
	class SFP_RusIRP_GulashMeatTomato: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Beef Goulash with Tomato Sauce";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\MeatInSauce_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_GulashMeatTomato_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Beef Goulash with Tomato Sauce";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_mat.rvmat"};
	};
	class SFP_RusIRP_Meat: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Meat with green peas";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Peas_with_meat\PeasWithMeat_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Peas_with_meat\PeasWithMeat_mat.rvmat"};
	};
	class SFP_RusIRP_Meat_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Meat with green peas";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Peas_with_meat\open\PeasWithMeat_Open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Peas_with_meat\open\PeasWithMeat_Open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Peas_with_meat\open\PeasWithMeat_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Peas_with_meat\open\PeasWithMeat_open_food.rvmat"};
	};
	class SFP_RusIRP_KashaRice: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Rice porridge with beef";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\KashaRisGovadina\Kasha_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_KashaRice_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Rice porridge with beef";
		descriptionShort = "Мда! А это точно Рис? а то похоже на опарыши.";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\KashaRisGovadina\open\Kasha_Open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\KashaRisGovadina\open\Kasha_Open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\KashaRisGovadina\open\kasha_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\KashaRisGovadina\open\kasha_open_food.rvmat"};
	};
	class SFP_RusIRP_MeatFasol6: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Meat with beans and vegetables";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\MasoFresh\MasoFresh_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_MeatFasol6_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Meat with beans and vegetables";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\MasoFresh\open\MasoFresh_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\MasoFresh\open\MasoFresh_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\MasoFresh\open\MasoFresh_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\MasoFresh\open\MasoFresh_open_food.rvmat"};
	};
	class SFP_RusIRP_TeftelMeat6: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Beef meatballs";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\TeftelMeat\Teftel_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_TeftelMeat6_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Beef meatballs";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_food.rvmat"};
	};
	class SFP_RusIRP_FrecodelMeat: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Beef meatballs";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Frecodelec_govadina6\frekodelek_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_FrecodelMeat_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Beef meatballs";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Meat_in_sauce\open\Meat_in_sauce_open_food.rvmat"};
	};
	class SFP_RusIRP_KashaGrecaMeat: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Buckwheat porridge with beef";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\KasaGrecnevaMaso6\KasaGrecnevaya6_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_KashaGrecaMeat_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Buckwheat porridge with beef";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Buckwheat\open\BuckWheat_open_food.rvmat"};
	};
	class SFP_RusIRP_MeatFasolFresh: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Meat with beans and vegetables";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\MasoFasolGoroh6\MasoFasolGoroh6_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_MeatFasolFresh_open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Meat with beans and vegetables";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\MasoFasolGoroh6\open\MasoFasolGoroh6_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\MasoFasolGoroh6\open\MasoFasolGoroh6_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\MasoFasolGoroh6\open\MasoFasolGoroh6_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\MasoFasolGoroh6\open\MasoFasolGoroh6_open_food.rvmat"};
	};
	class SFP_RusIRP_Shpik: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Canned salted bacon";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard3\lard3_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Lard_mat.rvmat"};
	};
	class SFP_RusIRP_Shpik_Open: SFP_RusMRE_BigPorcaBase
	{
		scope = 2;
		displayName = "Canned salted bacon";
		model = "SFP\3_Item\RusMRE\BigPorca\BigPorca_open.p3d";
		itemSize[] = {1,1};
		weight = 40;
		hiddenSelections[] = {"vkcomfidovpublic","vkcomfidovpublic_FOOD"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_co.paa","SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_mat.rvmat","SFP\3_Item\RusMRE\BigPorca\data\Lard\Open\lard_open_food.rvmat"};
	};
};
