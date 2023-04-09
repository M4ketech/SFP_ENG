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
	class SFP_NaseserRuArmy: FirstAidKit
	{
		scope = 2;
		displayName = "Army Travel bag";
		descriptionShort = "No contents, can be used as a storage item.";
		model = "\SFP\3_Item\Naseser\NaseserRusArmy.p3d";
		rotationFlags = 17;
		weight = 240;
		itemSize[] = {3,3};
		itemsCargoSize[] = {6,3};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
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
};
