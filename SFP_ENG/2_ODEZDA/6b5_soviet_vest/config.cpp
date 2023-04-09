class CfgPatches
{
	class DZ_Characters_Vests
	{
		units[] = {"TacticalVest","UKAssVest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class PressVest_Blue;
	class SFP_Vest6b5_ColorBase: PressVest_Blue
	{
		displayName = "6b5 Soviet Vest";
		scope = 0;
		descriptionShort = "Bullet-proof vest, BZh - an element of individual protection of a person, providing protection of the upper body (torso) of a person from the effects of firearms.";
		model = "\SFP\2_ODEZDA\6b5_soviet_vest\6b5_g.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 7000;
		itemSize[] = {3,3};
		itemsCargoSize[] = {6,6};
		quickBarBonus = 4;
		varWetMax = 0.49;
		heatIsolation = 0.7;
		visibilityModifier = 0.95;
		repairableWithKits[] = {3};
		repairCosts[] = {25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "\SFP\2_ODEZDA\6b5_soviet_vest\6b5.p3d";
			female = "\SFP\2_ODEZDA\6b5_soviet_vest\6b5.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					healthLevels[] = {{1,{"DZ\characters\vests\Data\PressVest.rvmat"}},{0.7,{"DZ\characters\vests\Data\PressVest.rvmat"}},{0.5,{"DZ\characters\vests\Data\PressVest_damage.rvmat"}},{0.3,{"DZ\characters\vests\Data\PressVest_damage.rvmat"}},{0,{"DZ\characters\vests\Data\PressVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "Shirt_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "Shirt_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class SFP_Vest6b5_green: SFP_Vest6b5_ColorBase
	{
		scope = 2;
		displayName = "6b5 Soviet Vest Green";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\6b5_soviet_vest\data\sov_vest_co.paa"};
	};
	class SFP_Vest6b5_Tan: SFP_Vest6b5_ColorBase
	{
		scope = 2;
		displayName = "6b5 Soviet Vest Tan";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\6b5_soviet_vest\data\sov_vest_tan_co.paa"};
	};
	class SFP_Vest6b5_Black: SFP_Vest6b5_ColorBase
	{
		scope = 2;
		displayName = "6b5 Soviet Vest Black";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\6b5_soviet_vest\data\sov_vest_black_co.paa"};
	};
};
