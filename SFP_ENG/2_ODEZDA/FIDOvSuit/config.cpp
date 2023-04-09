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
	class SFP_Stranik_Boots: JungleBoots_Beige
	{
		scope = 2;
		displayName = "Old military boots";
		descriptionShort = "Old but not useless";
		model = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_boots_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {4,4};
		weight = 730;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0;
		heatIsolation = 0.7;
		soundAttType = "Boots";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_boots_M.p3d";
			female = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_boots_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 690;
					healthLevels[] = {{1,{"DZ\characters\shoes\Data\JungleBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\JungleBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\JungleBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\JungleBoots_damage.rvmat"}},{0,{"DZ\characters\shoes\Data\JungleBoots_destruct.rvmat"}}};
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
	class SFP_Stranik_Sweeter: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Thick sweater";
		descriptionShort = "Warm thick sweater with a hood.";
		model = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_Jacket_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 601;
		itemSize[] = {3,2};
		itemsCargoSize[] = {3,4};
		quickBarBonus = 3;
		heatIsolation = 0.8;
		absorbency = 0.2;
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
					hitpoints = 3100;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.7,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
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
						damage = 0;
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
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.3;
					};
					class Shock
					{
						damage = 0.3;
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
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_Jacket_m.p3d";
			female = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_Jacket_f.p3d";
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
	class SFP_Stranik_Pants: CargoPants_Beige
	{
		scope = 2;
		displayName = "Tight Pants";
		descriptionShort = "Old military pants with kneepads.";
		model = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,4};
		weight = 901;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.5;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"personality"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_pants_m.p3d";
			female = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_pants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 311;
					healthLevels[] = {{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.7,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0.3,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}};
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
	class BeanieHat_Beige;
	class SFP_Stranik_Hood: BeanieHat_Beige
	{
		scope = 2;
		displayName = "Hood";
		descriptionShort = "Hood of thick fabric material.";
		model = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_Hood_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 400;
		itemSize[] = {2,2};
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 180;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_Hood_m.p3d";
			female = "SFP\2_ODEZDA\FIDOvSuit\FIDOv_Hood_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet = "pickUpPot_SoundSet";
					id = 797;
				};
				class drop
				{
					soundset = "BallisticHelmet_drop_SoundSet";
					id = 898;
				};
			};
		};
	};
	class NioshFaceMask;
	class SFP_Stranik_FaceMask: NioshFaceMask
	{
		scope = 2;
		displayName = "Face Mask";
		descriptionShort = "A mask made of rags.";
		model = "\SFP\2_ODEZDA\FIDOvSuit\FIDOv_Mask_g.p3d";
		inventorySlot[] = {"Mask"};
		itemInfo[] = {"Clothing","Mask"};
		rotationFlags = 16;
		weight = 340;
		itemSize[] = {2,2};
		varWetMax = 1;
		heatIsolation = 0.2;
		class ClothingTypes
		{
			male = "\SFP\2_ODEZDA\FIDOvSuit\FIDOv_Mask_m.p3d";
			female = "\SFP\2_ODEZDA\FIDOvSuit\FIDOv_Mask_f.p3d";
		};
		class Protection
		{
			biological = 0.75;
			chemical = 0;
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
		soundVoiceType = "none";
		soundVoicePriority = 5;
	};
};
