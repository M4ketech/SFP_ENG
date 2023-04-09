class CfgPatches
{
	class DZ_Gear_Drinks
	{
		units[] = {"Drink_Canteen","Drink_SodaZlutaKlasik","Drink_SodaZlutaKolaloka","Drink_SodaZlutaMalinovka","Drink_WaterBottle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
	class vodka;
	class SFP_Vodka_ColorBase: vodka
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_Vodka0";
		descriptionShort = "$STR_CfgVehicles_Vodka1";
		model = "\SFP\3_Item\Bootle_Vodka\bootle_vodka.p3d";
		weight = 450;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_spite_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet = "SFP_Samogon_ProbkaOpen_soundset";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle_in_C1
				{
					soundSet = "WaterBottle_in_C1_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "SFP_Samogon_ProbkaClosed_soundset";
					id = 206;
				};
				class WellPond_loop
				{
					soundSet = "WellPond_loop_SoundSet";
					id = 209;
				};
				class WellBottle_loop
				{
					soundSet = "WellBottle_loop_SoundSet";
					id = 210;
				};
			};
		};
	};
	class SFP_Vodka_Pseno: SFP_Vodka_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_Pseno_ca.paa"};
	};
	class SFP_Vodka_Rus: SFP_Vodka_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_rus_ca.paa"};
	};
	class SFP_Vodka_Sibir: SFP_Vodka_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_sib_ca.paa"};
	};
	class SFP_Vodka_istrinka: SFP_Vodka_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_istrinka_ca.paa"};
	};
	class SFP_Vodka_Kazak: SFP_Vodka_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_kazak_ca.paa"};
	};
	class SFP_Vodka025_ColorBase: SFP_Vodka_ColorBase
	{
		scope = 0;
		displayName = "Vodka 0.25";
		descriptionShort = "$STR_CfgVehicles_Vodka1";
		model = "\SFP\3_Item\Bootle_Vodka\bootle_vodka025.p3d";
		weight = 250;
		itemSize[] = {1,2};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 250;
		varQuantityMin = 0;
		varQuantityMax = 250;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_spite_co.paa"};
	};
	class SFP_Vodka_Pseno025: SFP_Vodka025_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_Pseno_ca.paa"};
	};
	class SFP_Vodka_Rus025: SFP_Vodka025_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_rus_ca.paa"};
	};
	class SFP_Vodka_Sibir025: SFP_Vodka025_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_sib_ca.paa"};
	};
	class SFP_Vodka_istrinka025: SFP_Vodka025_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_istrinka_ca.paa"};
	};
	class SFP_Vodka_Kazak025: SFP_Vodka025_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_kazak_ca.paa"};
	};
	class SFP_Vodka01_ColorBase: SFP_Vodka_ColorBase
	{
		scope = 0;
		displayName = "Vodka 0.1";
		descriptionShort = "$STR_CfgVehicles_Vodka01";
		model = "\SFP\3_Item\Bootle_Vodka\bootle_vodka01.p3d";
		weight = 100;
		itemSize[] = {1,1};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 60;
		varQuantityMin = 0;
		varQuantityMax = 60;
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_spite_co.paa"};
	};
	class SFP_Vodka_Pseno01: SFP_Vodka01_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_Pseno_ca.paa"};
	};
	class SFP_Vodka_Rus01: SFP_Vodka01_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_rus_ca.paa"};
	};
	class SFP_Vodka_Sibir01: SFP_Vodka01_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_sib_ca.paa"};
	};
	class SFP_Vodka_istrinka01: SFP_Vodka01_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_istrinka_ca.paa"};
	};
	class SFP_Vodka_Kazak01: SFP_Vodka01_ColorBase
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFP\3_Item\Bootle_Vodka\data\Bootle_Vodka_kazak_ca.paa"};
	};
};
