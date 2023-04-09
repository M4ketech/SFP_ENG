class CfgPatches
{
	class DZ_Characters_Zombies
	{
		units[] = {"Hermit_NewAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class HuntingJacket_Autumn;
	class SFP_Skeleton_Kostum: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Skeleton suit";
		descriptionShort = "The suit is worn over the whole character, to hide other body parts, use the hiding body parts masquerade. Arms, legs, feet, head.";
		model = "SFP\2_ODEZDA\Skeleton\skeleton_maskarad.p3d";
		inventorySlot = "Hips";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = -50000;
		itemSize[] = {2,2};
		itemsCargoSize[] = {8,15};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"camo1"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.7,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\Skeleton\skeleton_maskarad.p3d";
			female = "SFP\2_ODEZDA\Skeleton\skeleton_maskarad.p3d";
		};
	};
};
