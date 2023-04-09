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
	class NBCBootsGray;
	class NBCJacketGray;
	class NBCPantsGray;
	class NBCHoodGray;
	class NBCGlovesGray;
	class SFP_EcologBig_Boots: NBCBootsGray
	{
		scope = 2;
		displayName = "Ecologist Boots (Lightweight)";
		descriptionShort = "Special boots for working in contaminated areas.";
		model = "SFP\2_ODEZDA\EcologBig\EcologBig_boots_g.p3d";
		inventorySlot[] = {"Feet"};
		itemInfo[] = {"Clothing","Feet"};
		itemSize[] = {4,4};
		weight = 530;
		durability = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		absorbency = 0;
		heatIsolation = 0.7;
		soundAttType = "Boots";
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\EcologBig\EcologBig_boots.p3d";
			female = "SFP\2_ODEZDA\EcologBig\EcologBig_boots.p3d";
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
	class SFP_EcologBig_tors: NBCJacketGray
	{
		scope = 2;
		displayName = "Ecologist Uniform (Light)";
		descriptionShort = "Special form, for work in contaminated areas";
		model = "SFP\2_ODEZDA\EcologBig\EcologBig_tors_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 7000;
		itemSize[] = {5,5};
		itemsCargoSize[] = {8,9};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0;
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
			male = "SFP\2_ODEZDA\EcologBig\EcologBig_tors.p3d";
			female = "SFP\2_ODEZDA\EcologBig\EcologBig_tors.p3d";
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
	class SFP_EcologBig_pants: NBCPantsGray
	{
		scope = 2;
		displayName = "Environmental protection pants (Light)";
		descriptionShort = "Special pants, for work in contaminated areas";
		model = "SFP\2_ODEZDA\EcologBig\EcologBig_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,6};
		weight = 1000;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.4;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\EcologBig\EcologBig_pants.p3d";
			female = "SFP\2_ODEZDA\EcologBig\EcologBig_pants.p3d";
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
	class Mich2001Helmet;
	class SFP_EcologBig_Helm: NBCHoodGray
	{
		scope = 2;
		displayName = "Ecologist's helmet (light)";
		descriptionShort = "environmentalist helmet. This form was developed to perform tasks in especially dangerous places.";
		model = "SFP\2_ODEZDA\EcologBig\EcologBig_helm_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		attachments[] = {"NVG","helmetFlashlight"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 1;
		noEyewear = 1;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\DZ\characters\headgear\data\mich2001_CO.paa","\DZ\characters\headgear\data\mich2001_CO.paa","\DZ\characters\headgear\data\mich2001_CO.paa"};
		soundVoiceType = "gasmask";
		soundVoicePriority = 5;
		class Protection
		{
			biological = 1;
		};
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
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
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
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.25;
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
						damage = 0.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\EcologBig\EcologBig_helm.p3d";
			female = "SFP\2_ODEZDA\EcologBig\EcologBig_helm.p3d";
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
};
