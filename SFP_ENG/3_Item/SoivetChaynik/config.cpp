class CfgPatches
{
	class DZ_Gear_Cooking
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Bottle_Base;
	class Pot;
	class SFP_Soviet_Teapot: Pot
	{
		scope = 2;
		displayName = "Soviet Teapot";
		descriptionShort = "It will help you boil water on the fire or on a gas stove.";
		model = "\SFP\3_Item\SoivetChaynik\soivetPot.p3d";
		weight = 740;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,4};
		inventorySlot[] = {"CookingEquipment","DirectCookingA","DirectCookingB","DirectCookingC"};
		stackedRandom = 0;
		canBeDigged = 1;
		allowOwnedCargoManipulation = 1;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 3000;
		varTemperatureMax = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},{0.7,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},{0.5,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},{0.3,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},{0,{"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class handleRotate
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet = "pickUpPotLight_SoundSet";
					id = 796;
				};
				class pickUpPot
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "pot_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
