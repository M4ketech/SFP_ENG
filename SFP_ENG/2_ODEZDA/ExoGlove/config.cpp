class CfgPatches
{
	class DZ_Characters_Gloves
	{
		units[] = {"MaleHands","FemaleHands"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class OMNOGloves_Gray;
	class SFP_EXO_Glove: OMNOGloves_Gray
	{
		scope = 2;
		displayName = "Exo Gloves";
		descriptionShort = "One Pair of Exo Gloves";
		model = "\SFP\2_ODEZDA\ExoGlove\ExoGlove_g.p3d";
		inventorySlot[] = {"Gloves"};
		simulation = "clothing";
		itemInfo[] = {"Clothing","Gloves"};
		rotationFlags = 34;
		weight = 450;
		itemSize[] = {2,2};
		varWetMax = 0.79;
		heatIsolation = 0.8;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		class ClothingTypes
		{
			male = "\SFP\2_ODEZDA\ExoGlove\ExoGlove.p3d";
			female = "\SFP\2_ODEZDA\ExoGlove\ExoGlove.p3d";
		};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale","personality"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 180;
					healthLevels[] = {{1,{"DZ\Characters\gloves\data\OMNOGloves.rvmat"}},{0.7,{"DZ\Characters\gloves\data\OMNOGloves.rvmat"}},{0.5,{"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"}},{0.3,{"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"}},{0,{"DZ\Characters\gloves\data\OMNOGloves_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "WorkingGloves_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "WorkingGloves_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
};
