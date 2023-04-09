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
	class Zagorky;
	class VitaminBottle;
	class SFP_RusMRE_Goletos_ColorBase: Zagorky
	{
		model = "\dz\gear\food\Zagorky.p3d";
		rotationFlags = 1;
		scope = 0;
		weight = 0;
		itemSize[] = {1,2};
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
					hitpoints = 20;
					healthLevels[] = {{1,{"DZ\gear\food\data\zagorky.rvmat","DZ\gear\food\data\zagorky_wrapping.rvmat"}},{0.7,{"DZ\gear\food\data\zagorky.rvmat","DZ\gear\food\data\zagorky_wrapping.rvmat"}},{0.5,{"DZ\gear\food\data\zagorky_damage.rvmat","DZ\gear\food\data\zagorky_wrapping_damage.rvmat"}},{0.3,{"DZ\gear\food\data\zagorky_damage.rvmat","DZ\gear\food\data\zagorky_wrapping_damage.rvmat"}},{0,{"DZ\gear\food\data\zagorky_destruct.rvmat","DZ\gear\food\data\zagorky_wrapping_destruct.rvmat"}}};
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
				class pickup
				{
					soundSet = "BoxCerealCrunchin_pickup_SoundSet";
					id = 797;
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
				class drop
				{
					soundset = "BoxCerealCrunchin_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class SFP_RusIRP_Goletos_Blue: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Wheat flour galettes";
		descriptionShort = "Galettes are dry bread cookies with high nutritional properties.  Because of these characteristics they are very popular in army and field meals. Army galettes are supplied with IRPs.";
		model = "\SFP\3_Item\RusMRE\Goletos\Goletos_blue.p3d";
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 100;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Goletos_Green: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "First grade wheat flour rolls";
		descriptionShort = "Galettes are dry bread cookies with high nutritional properties.  Because of these characteristics they are very popular in army and field meals. Army galettes are supplied with IRPs.";
		model = "\SFP\3_Item\RusMRE\Goletos\Goletos_green.p3d";
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 120;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_OfficerShocolade: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Officers Chocolate";
		descriptionShort = "Bitter Chocolate";
		itemSize[] = {1,1};
		model = "\SFP\3_Item\RusMRE\Goletos\officerShocolad.p3d";
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 120;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_SuhouNapitokCherry: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Beverage concentrate dry Cherry";
		descriptionShort = "Needed to make a delicious drink. Alternatively, you can eat it dry.";
		model = "\SFP\3_Item\RusMRE\Goletos\Concetrat_cherry.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 120;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_SuhouNapitokSmorodina: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Dry currant drink concentrate";
		descriptionShort = "Needed to make a delicious drink. Alternatively, you can eat it dry. ";
		model = "\SFP\3_Item\RusMRE\Goletos\Concetrat_smorodina.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 120;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Cofe: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Coffee powder";
		descriptionShort = "Needed for making coffee. Alternatively, you can eat it dry";
		model = "\SFP\3_Item\RusMRE\Goletos\Kofe.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 20;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Sahar: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Sugar";
		descriptionShort = "Multiusable ingredient. It has a sweet taste.";
		model = "\SFP\3_Item\RusMRE\Goletos\Sahar.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 60;
		varQuantityMin = 0;
		varQuantityMax = 60;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 60;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Zvacka: VitaminBottle
	{
		scope = 2;
		displayName = "Chewing gum (10 drops)";
		descriptionShort = "It's time to kick ass and chew Bubblegum!";
		model = "\SFP\3_Item\RusMRE\Goletos\zvacka.p3d";
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,1};
		weight = 20;
		stackedUnit = "pills";
		quantityBar = 0;
		class Medicine
		{
			prevention = 0.75;
			treatment = 0.5;
			diseaseExit = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class VitaminBottle_open
				{
					soundSet = "Eating_BoxShake_Soundset";
					id = 201;
				};
				class VitaminBottle_shake
				{
					soundSet = "VitaminBottle_shake_SoundSet";
					id = 202;
				};
				class VitaminBottle_close
				{
					soundSet = "Eating_BoxEnd_Soundset";
					id = 203;
				};
				class pickUpItem
				{
					soundSet = "vitaminbottle_pickup_SoundSet";
					id = 797;
				};
			};
		};
	};
	class SFP_RusIRP_slivki: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Creamer";
		descriptionShort = "Needed to make a tasty drink, can be eaten dry, well, what will these couple of grams provide?";
		model = "\SFP\3_Item\RusMRE\Goletos\slivki.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 20;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_SuhouNapitokKlubnika: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Dried strawberry drink (concentrate)";
		descriptionShort = "Needed to make a delicious drink. Alternatively, you can eat it dry.";
		model = "\SFP\3_Item\RusMRE\Goletos\Concetrat_Klubnika.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 20;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_ArmyShocolade6: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Army Chocolate";
		descriptionShort = "Bitter Chocolate";
		itemSize[] = {1,1};
		model = "\SFP\3_Item\RusMRE\Goletos\shokolad6.p3d";
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 120;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_Cofe6: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Coffee powder";
		descriptionShort = "Needed for making coffee. Alternatively, you can eat it dry.";
		model = "\SFP\3_Item\RusMRE\Goletos\kofe6.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 20;
			water = 0;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusIRP_PovidloApple: SFP_RusMRE_Goletos_ColorBase
	{
		scope = 2;
		displayName = "Apple jelly";
		descriptionShort = "Sweet apple jam";
		model = "\SFP\3_Item\RusMRE\Goletos\povidlo_apple.p3d";
		itemSize[] = {1,1};
		varQuantityInit = 90;
		varQuantityMin = 0;
		varQuantityMax = 90;
		class Nutrition
		{
			fullnessIndex = 0;
			energy = 130;
			water = 11;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
};
