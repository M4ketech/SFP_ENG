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
	class SFP_Heavy_Military_armor: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Special Military Armor (Heavy)";
		descriptionShort = "Military armor, for work in specially hazardous and contaminated areas.";
		model = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_g.p3d";
		inventorySlot = "Body";
		attachments[] = {"VestHolster","VestPouch","VestGrenadeA","VestGrenadeB","VestGrenadeC","VestGrenadeD"};
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 4000;
		itemSize[] = {3,4};
		itemsCargoSize[] = {4,6};
		quickBarBonus = 4;
		heatIsolation = 0.6;
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
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor.p3d";
			female = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor.p3d";
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
	class SFP_Heavy_Military_armor_DOLG: SFP_Heavy_Military_armor
	{
		scope = 2;
		displayName = "Military Special Armor DOLG (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_dolg_co.paa"};
	};
	class SFP_Heavy_Military_armor_CS: SFP_Heavy_Military_armor
	{
		scope = 2;
		displayName = "Military special armor CHN (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_clearNebo_co.paa"};
	};
	class SFP_Heavy_Military_armor_Monolit: SFP_Heavy_Military_armor
	{
		scope = 2;
		displayName = "Military Special Armor MONOLITH(Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_monolit_co.paa"};
	};
	class SFP_Heavy_Military_armor_Naem: SFP_Heavy_Military_armor
	{
		scope = 2;
		displayName = "Military special armor MERCENARY (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_Naem_co.paa"};
	};
	class SFP_Heavy_Military_armor_voin: SFP_Heavy_Military_armor
	{
		scope = 2;
		displayName = "Military Special Armor MILITARY(Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_voen_co.paa"};
	};
	class SFP_Heavy_Military_boots: JungleBoots_Beige
	{
		scope = 2;
		displayName = "Military special boots (Heavy)";
		descriptionShort = "Sturdy, good Military boots.";
		model = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_boots_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {4,4};
		weight = 430;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0.1;
		heatIsolation = 0.7;
		soundAttType = "Boots";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_co.paa"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_boots.p3d";
			female = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_boots.p3d";
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
	class SFP_Heavy_Military_boots_DOLG: SFP_Heavy_Military_boots
	{
		scope = 2;
		displayName = "Military Special Armor DOLG (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_dolg_co.paa"};
	};
	class SFP_Heavy_Military_boots_CS: SFP_Heavy_Military_boots
	{
		scope = 2;
		displayName = "Military special armor CHN (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_clearNebo_co.paa"};
	};
	class SFP_Heavy_Military_boots_Monolit: SFP_Heavy_Military_boots
	{
		scope = 2;
		displayName = "Military Special Armor MONOLITH (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_monolit_co.paa"};
	};
	class SFP_Heavy_Military_boots_Naem: SFP_Heavy_Military_boots
	{
		scope = 2;
		displayName = "Military special armor MERCENARY (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_Naem_co.paa"};
	};
	class SFP_Heavy_Military_boots_voin: SFP_Heavy_Military_boots
	{
		scope = 2;
		displayName = "Military Special Armor MILITARY (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_voen_co.paa"};
	};
	class SFP_Heavy_Military_pants: CargoPants_Beige
	{
		scope = 2;
		displayName = "Military Special Pants (Heavy)";
		descriptionShort = "Military special pants, for work in a dangerous environment.";
		model = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {3,3};
		itemsCargoSize[] = {3,6};
		weight = 1411;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.4;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_co.paa"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_pants.p3d";
			female = "SFP\2_ODEZDA\military_heavy_armor\heavy_armor_pants.p3d";
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
	class SFP_Heavy_Military_pants_DOLG: SFP_Heavy_Military_pants
	{
		scope = 2;
		displayName = "Military Special Armor DOLG (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_dolg_co.paa"};
	};
	class SFP_Heavy_Military_pants_CS: SFP_Heavy_Military_pants
	{
		scope = 2;
		displayName = "Military special armor CHN (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_clearNebo_co.paa"};
	};
	class SFP_Heavy_Military_pants_Monolit: SFP_Heavy_Military_pants
	{
		scope = 2;
		displayName = "Military Special Armor MONOLITH (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_monolit_co.paa"};
	};
	class SFP_Heavy_Military_pants_Naem: SFP_Heavy_Military_pants
	{
		scope = 2;
		displayName = "Military special armor MERCENARY (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_Naem_co.paa"};
	};
	class SFP_Heavy_Military_pants_voin: SFP_Heavy_Military_pants
	{
		scope = 2;
		displayName = "Military Special Armor MILITARY (Heavy)";
		hiddenSelectionsTextures[] = {"\SFP\2_ODEZDA\military_heavy_armor\data\clans\armor_voen_co.paa"};
	};
};
