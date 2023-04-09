class CfgPatches
{
	class DZ_Characters_Tops
	{
		units[] = {"Shirt_CheckRed","Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red","MaleTorso","FemaleTorso"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CargoPants_Beige;
	class HuntingJacket_Autumn;
	class TortillaBag;
	class JungleBoots_Beige;
	class LeatherBelt_Beige;
	class ZmbF_CitizenANormal_Beige;
	class SFP_Gorka4Vest_Top: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Gorka 4 with vest(Heavy)";
		descriptionShort = "Sturdy Gorka 4 with vest";
		model = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Tops_g.p3d";
		inventorySlot = "Body";
		attachments[] = {"VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 4000;
		quickBarBonus = 4;
		heatIsolation = 1.1;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.7,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.5,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.8;
					};
					class Blood
					{
						damage = 0.7;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Tops.p3d";
			female = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Tops.p3d";
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
	class SFP_Gorka4_Boots: JungleBoots_Beige
	{
		scope = 2;
		displayName = "Military Boots";
		descriptionShort = "Rugged, good boots.";
		model = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Boots_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {4,4};
		weight = 430;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0.1;
		heatIsolation = 1.1;
		soundAttType = "Boots";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_co.paa"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Boots.p3d";
			female = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Boots.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.7,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.5,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
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
					soundSet = "AthleticShoes_pickup_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "AthleticShoes_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class SFP_Gorka4_Pants: CargoPants_Beige
	{
		scope = 2;
		displayName = "Gorka 4 pants";
		descriptionShort = "Sturdy pants";
		model = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,3};
		weight = 911;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 1.1;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {""};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Pants.p3d";
			female = "SFP\2_ODEZDA\RusArmy1\RusArmy1_Pants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.7,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.5,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
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
	class SFP_Gorka4_PantsBelt: CargoPants_Beige
	{
		scope = 2;
		displayName = "Gorka 4 pants";
		descriptionShort = "Sturdy pants with a belt.";
		model = "SFP\2_ODEZDA\RusArmy1\RusArmy1_PantsBelt_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,3};
		weight = 911;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 1.1;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"personality"};
		hiddenSelectionsTextures[] = {""};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\RusArmy1\RusArmy1_PantsBelt.p3d";
			female = "SFP\2_ODEZDA\RusArmy1\RusArmy1_PantsBelt_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.7,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material.rvmat"}},{0.5,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0.3,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_damage.rvmat"}},{0,{"SFP\2_ODEZDA\military_heavy_armor\data\armor_material_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.2;
					};
					class Blood
					{
						damage = 0.2;
					};
					class Shock
					{
						damage = 0.2;
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
