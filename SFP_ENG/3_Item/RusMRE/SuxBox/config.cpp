class CfgPatches
{
	class DZ_Gear_Containers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class FirstAidKit;
	class WorldContainer_Base;
	class TacticalBaconCan_Opened;
	class SFP_RusIRP_Corob: TacticalBaconCan_Opened
	{
		scope = 2;
		displayName = "A box of groceries";
		descriptionShort = "A lot of food in this box.";
		model = "SFP\3_Item\RusMRE\SuxBox\Nutro.p3d";
		itemSize[] = {3,5};
		weight = 1140;
		varQuantityInit = 4100;
		varQuantityMin = 0;
		varQuantityMax = 4100;
		isMeleeWeapon = 1;
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 500;
			water = 500;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SFP_RusMRE_Box_RacionBase: FirstAidKit
	{
		scope = 0;
		displayName = "Sukhpai Box";
		descriptionShort = "Individual rations, in common parlance 'suhpayek', is used not only in the army, but also in civilian circulation hunters, fishermen, shift workers, truckers and just tourists.";
		model = "\SFP\3_Item\RusMRE\SuxBox\SuxBox.p3d";
		rotationFlags = 17;
		weight = 240;
		itemSize[] = {3,4};
		itemsCargoSize[] = {4,7};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"vkcomfidovpublic"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1,{"SFP\3_Item\Naseser\data\naseser_mat.rvmat"}},{0.7,{"SFP\3_Item\Naseser\data\naseser_mat.rvmat"}},{0.5,{"SFP\3_Item\Naseser\data\naseser_mat_damage.rvmat"}},{0.3,{"SFP\3_Item\Naseser\data\naseser_mat_damage.rvmat"}},{0,{"SFP\3_Item\Naseser\data\naseser_mat_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet = "pickUpCourierBag_Light_SoundSet";
					id = 796;
				};
				class pickUpItem
				{
					soundSet = "pickUpCourierBag_SoundSet";
					id = 797;
				};
			};
		};
	};
	class SFP_RusIRP_BoxR4: SFP_RusMRE_Box_RacionBase
	{
		scope = 2;
		displayName = "Russian Army IRP Ration 4";
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBox_Co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBoxSet1_mat.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1,{"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBoxSet1_mat.rvmat"}},{0.7,{"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBoxSet1_mat.rvmat"}},{0.5,{"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBoxSet1_mat_damage.rvmat"}},{0.3,{"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBoxSet1_mat_damage.rvmat"}},{0,{"SFP\3_Item\RusMRE\SuxBox\data\Set1\SuxBoxSet1_mat_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFP_RusIRP_BoxR3: SFP_RusMRE_Box_RacionBase
	{
		scope = 2;
		displayName = "Russian Army IRP Ration 3";
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBox3_Co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat.rvmat"}},{0.7,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat.rvmat"}},{0.5,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat_damage.rvmat"}},{0.3,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat_damage.rvmat"}},{0,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFP_RusIRP_BoxR6: SFP_RusMRE_Box_RacionBase
	{
		scope = 2;
		displayName = "Russian Army IRP Ration 6";
		hiddenSelectionsTextures[] = {"SFP\3_Item\RusMRE\SuxBox\data\Set6\set6.paa"};
		hiddenSelectionsMaterials[] = {"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat.rvmat"}},{0.7,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat.rvmat"}},{0.5,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat_damage.rvmat"}},{0.3,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat_damage.rvmat"}},{0,{"SFP\3_Item\RusMRE\SuxBox\data\Set2\SuxBoxSet2_mat_destruct.rvmat"}}};
				};
			};
		};
	};
};
