class CfgPatches
{
	class DZ_Weapons_Melee_Blade
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Hatchet;
	class SFP_CreepyAxe: Hatchet
	{
		scope = 2;
		displayName = "Creepy Axe";
		descriptionShort = "Homemade creepy axe";
		model = "\SFP\5_melee\Apo_Axe\Apo_Axe.p3d";
		build_action_type = 10;
		dismantle_action_type = 10;
		repairableWithKits[] = {5,4};
		repairCosts[] = {30,25};
		rotationFlags = 17;
		weight = 1133;
		itemSize[] = {2,5};
		fragility = 0.01;
		inventorySlot = "";
		lootCategory = "Tools";
		lootTag[] = {"Work","Forester","Camping"};
		itemInfo[] = {"Axe"};
		openItemSpillRange[] = {20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},{0.7,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},{0.3,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},{0,{"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeHatchet";
				range = 2.4;
			};
			class Heavy
			{
				ammo = "MeleeHatchet_Heavy";
				range = 2.4;
			};
			class Sprint
			{
				ammo = "MeleeHatchet_Heavy";
				range = 5.3;
			};
		};
	};
};
