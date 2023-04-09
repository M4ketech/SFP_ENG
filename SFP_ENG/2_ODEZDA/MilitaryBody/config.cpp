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
	class SFP_MilitaryBodyVest: PressVest_Blue
	{
		displayName = "Military Vest";
		scope = 2;
		descriptionShort = "Not very protective, but it'll do.";
		model = "\SFP\2_ODEZDA\MilitaryBody\MilitaryBodyVest2_g.p3d";
		inventorySlot[] = {"Vest"};
		attachments[] = {"Melee","Belt_Back","VestHolster","VestPouch","VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD","Chemlight","WalkieTalkie"};
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
			male = "\SFP\2_ODEZDA\MilitaryBody\MilitaryBodyVest2.p3d";
			female = "\SFP\2_ODEZDA\MilitaryBody\MilitaryBodyVest2.p3d";
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
};
