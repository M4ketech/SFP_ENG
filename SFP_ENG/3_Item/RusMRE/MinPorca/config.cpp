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
	class TacticalBaconCan_Opened;
	class Pate_Opened;
	class FoodCan_100g_ColorBase;
	class FoodCan_100g_Opened_ColorBase;
	class SFP_RusIRPminiPorc_base: Pate_Opened
	{
		model = "\dz\gear\food\FoodCan_100g.p3d";
		scope = 0;
		rotationFlags = 2;
		itemSize[] = {1,1};
		weight = 115;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_silver.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.7,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_silver.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.5,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_silver_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0.3,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_silver_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0,{"DZ\gear\food\data\FoodCan_100g_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_silver_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet = "openTunaCan_SoundSet";
					id = 204;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
				class Eating_BoxOpen
				{
					soundSet = "Eating_BoxOpen_Soundset";
					id = 893;
				};
				class Eating_BoxShake
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 894;
				};
				class Eating_BoxEnd
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 895;
				};
			};
		};
	};
	class SFP_RusIRPminiPorcOpen_base: Pate_Opened
	{
		model = "\dz\gear\food\FoodCan_100g_open.p3d";
		itemSize[] = {1,1};
		scope = 0;
		weight = 15;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_white.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.7,{"DZ\gear\food\data\FoodCan_100g.rvmat","DZ\gear\food\data\FoodCan_100g_white.rvmat","DZ\gear\food\data\FoodCan_100g_content.rvmat"}},{0.5,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_white_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0.3,{"DZ\gear\food\data\FoodCan_100g_damage.rvmat","DZ\gear\food\data\FoodCan_100g_white_damage.rvmat","DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"}},{0,{"DZ\gear\food\data\FoodCan_100g_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_white_destruct.rvmat","DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFP_RusIRP_ApplePure: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Пюре из яблок";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\ApplePure_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_ApplePure_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Apple puree";
		descriptionShort = "Consists in the ration of the Russian IRP";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\ApplePure_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Farsh: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Amateur sausage mince";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\farsh_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Farsh_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Amateur sausage mince";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\farsh_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_ikraFresh: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Caviar from vegetables";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\Ikra_Ovosey_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_ikraFresh_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Caviar from vegetables";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\Ikra_Ovosey_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_PastetPecen: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Liver pate";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\PastetPecen_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_PastetPecen_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Liver pate";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\PastetPecen_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Plavleniy: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Cream Cheese";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\SirPlavlen_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Plavleniy_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Cream Cheese";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\SirPlavlen_Open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Farsh6: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Amateur sausage mince ";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\farsh6_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Farsh6_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Amateur sausage mince ";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\farsh6_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_PastetPecenka6: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Liver pate";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\pastet6_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_PastetPecenka6_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Liver pate";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\pastet6_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_ApplePure6: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Mashed puree of natural apple";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\PureApple6_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_ApplePure6_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Mashed puree of natural apple";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\PureApple6_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_RaguFresh6: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Vegetable stew";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\RaguOvosey6_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_RaguFresh6_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Vegetable stew";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\RaguOvosey6_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Plavleniy6: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Cream Cheese";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\SirPlavleniy6_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Plavleniy6_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Cream Cheese";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\SirPlavleniy6_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Spik6: SFP_RusIRPminiPorc_base
	{
		scope = 2;
		displayName = "Salted bacon";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\spik6_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Spik6_open: SFP_RusIRPminiPorcOpen_base
	{
		scope = 2;
		displayName = "Salted bacon";
		descriptionShort = "Consists in the ration of the Russian IRP.";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\MinPorca\data\open\spik6_open_co.paa"};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 250;
			water = 25;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
};
