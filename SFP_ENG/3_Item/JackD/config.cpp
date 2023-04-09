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
	class Vodka;
	class SFP_JackDan_Bootle: Vodka
	{
		scope = 2;
		displayName = "Bottle of Whiskey";
		descriptionShort = "A nice bottle of Jack Daniels Whiskey";
		model = "\SFP\3_Item\JackD\JD_glass.p3d";
		weight = 750;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		varQuantityInit = 800;
		varQuantityMin = 0;
		varQuantityMax = 800;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1,{"DZ\gear\drinks\data\VodkaBottles.rvmat"}},{0.7,{"DZ\gear\drinks\data\VodkaBottles.rvmat"}},{0.5,{"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"}},{0.3,{"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"}},{0,{"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"}}};
				};
			};
		};
	};
};
