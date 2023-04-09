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
	class SFP_ExoClassic_Tors_Base: HuntingJacket_Autumn
	{
		scope = 0;
		displayName = "Exoskeleton Armor (Heavy)";
		descriptionShort = "Heavy protective armor, good protection, good insulation. Without exoskeleton legs, very hard to wear.";
		model = "SFP\2_ODEZDA\ExoClassic\ExoClassic_tors_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 10000;
		itemSize[] = {5,5};
		itemsCargoSize[] = {8,9};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic"};
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
			male = "SFP\2_ODEZDA\ExoClassic\ExoClassic_tors.p3d";
			female = "SFP\2_ODEZDA\ExoClassic\ExoClassic_tors.p3d";
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
	class SFP_ExoClassic_Tors_Dolg: SFP_ExoClassic_Tors_Base
	{
		scope = 2;
		displayName = "Exoskeleton top Duty (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Dolg_mat.rvmat"};
	};
	class SFP_ExoClassic_Tors_Svoboda: SFP_ExoClassic_Tors_Base
	{
		scope = 2;
		displayName = "Freedom Exoskeleton Top (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_svoboda_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Svoboda_mat.rvmat"};
	};
	class SFP_ExoClassic_Tors_Naem: SFP_ExoClassic_Tors_Base
	{
		scope = 2;
		displayName = "Mercenary Exoskeleton Top (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_naem_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Naem_mat.rvmat"};
	};
	class SFP_ExoClassic_Tors_monolit: SFP_ExoClassic_Tors_Base
	{
		scope = 2;
		displayName = "Monolith Exoskeleton (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_monolit_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Monolit_mat.rvmat"};
	};
	class SFP_ExoClassic_Tors_Neitral: SFP_ExoClassic_Tors_Base
	{
		scope = 2;
		displayName = "Exoskeleton Neutral (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_Netral_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Neitral_mat.rvmat"};
	};
	class SFP_ExoClassic_Pants_base: CargoPants_Beige
	{
		scope = 0;
		displayName = "Exoskeleton Pants (Heavy)";
		descriptionShort = "Rugged exoskeleton pants, adds maximum portable weight";
		model = "SFP\2_ODEZDA\ExoClassic\ExoClassic_pants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,6};
		weight = -20000;
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 0.8;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic","personality"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\ExoClassic\ExoClassic_pants_m.p3d";
			female = "SFP\2_ODEZDA\ExoClassic\ExoClassic_pants_f.p3d";
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
	class SFP_ExoClassic_Pants_Dolg: SFP_ExoClassic_Pants_base
	{
		scope = 2;
		displayName = "Exoskeleton Pants Duty (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Dolg_mat.rvmat"};
	};
	class SFP_ExoClassic_Pants_Svoboda: SFP_ExoClassic_Pants_base
	{
		scope = 2;
		displayName = "Freedom Exoskeleton Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_svoboda_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Svoboda_mat.rvmat"};
	};
	class SFP_ExoClassic_Pants_Naem: SFP_ExoClassic_Pants_base
	{
		scope = 2;
		displayName = "Exoskeleton Mercenary Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_naem_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Naem_mat.rvmat"};
	};
	class SFP_ExoClassic_Pants_monolit: SFP_ExoClassic_Pants_base
	{
		scope = 2;
		displayName = "Monolith Exoskeleton Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_monolit_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Monolit_mat.rvmat"};
	};
	class SFP_ExoClassic_Pants_Neitral: SFP_ExoClassic_Pants_base
	{
		scope = 2;
		displayName = "Exoskeleton Neutral Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_Netral_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Neitral_mat.rvmat"};
	};
	class Mich2001Helmet;
	class SFP_ExoClassic_Helmet_Base: Mich2001Helmet
	{
		scope = 0;
		displayName = "Exoskeleton Helmet (Heavy)";
		descriptionShort = "Тяжелый шлем экзоскелета. Можно устанавливать ПНВ и фонарик";
		model = "SFP\2_ODEZDA\ExoClassic\ExoClassic_helm_g.p3d";
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
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Dolg_mat.rvmat"};
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
					hitpoints = 380;
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
			male = "SFP\2_ODEZDA\ExoClassic\ExoClassic_helm.p3d";
			female = "SFP\2_ODEZDA\ExoClassic\ExoClassic_helm.p3d";
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
	class SFP_ExoClassic_Helmet_Dolg: SFP_ExoClassic_Helmet_Base
	{
		scope = 2;
		displayName = "Exoskeleton Helmet Duty (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Dolg_mat.rvmat"};
	};
	class SFP_ExoClassic_Helmet_Svoboda: SFP_ExoClassic_Helmet_Base
	{
		scope = 2;
		displayName = "Freedom Exoskeleton Helmet (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_svoboda_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Svoboda_mat.rvmat"};
	};
	class SFP_ExoClassic_Helmet_Naem: SFP_ExoClassic_Helmet_Base
	{
		scope = 2;
		displayName = "Exoskeleton Helmet Mercenaries (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_naem_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Naem_mat.rvmat"};
	};
	class SFP_ExoClassic_Helmet_monolit: SFP_ExoClassic_Helmet_Base
	{
		scope = 2;
		displayName = "Monolith Exoskeleton Helmet (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_monolit_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Monolit_mat.rvmat"};
	};
	class SFP_ExoClassic_Helmet_Neitral: SFP_ExoClassic_Helmet_Base
	{
		scope = 2;
		displayName = "Exoskeleton Neutral Helmet (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_Netral_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\helm\exoClassic_Neitral_mat.rvmat"};
	};
	class SFP_ExoClassic_TorsRuined_Base: HuntingJacket_Autumn
	{
		scope = 0;
		displayName = "Exoskeleton Armor (Heavy)";
		descriptionShort = "Shattered exoskeleton";
		model = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedTors_g.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 15000;
		itemSize[] = {5,5};
		itemsCargoSize[] = {8,9};
		quickBarBonus = 1;
		heatIsolation = 0;
		absorbency = 0;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Mat.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.7,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 1.3;
					};
					class Blood
					{
						damage = 1.3;
					};
					class Shock
					{
						damage = 1.3;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 1.2;
					};
					class Blood
					{
						damage = 1.2;
					};
					class Shock
					{
						damage = 1.2;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedTors.p3d";
			female = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedTors.p3d";
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
	class SFP_ExoClassic_TorsRuined_Dolg: SFP_ExoClassic_TorsRuined_Base
	{
		scope = 2;
		displayName = "Exoskeleton top Duty (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_dolg.paa"};
	};
	class SFP_ExoClassic_TorsRuined_Svoboda: SFP_ExoClassic_TorsRuined_Base
	{
		scope = 2;
		displayName = "Freedom Exoskeleton Top (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_svoboda.paa"};
	};
	class SFP_ExoClassic_TorsRuined_Naem: SFP_ExoClassic_TorsRuined_Base
	{
		scope = 2;
		displayName = "Mercenary Exoskeleton Top (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_naem.paa"};
	};
	class SFP_ExoClassic_TorsRuined_monolit: SFP_ExoClassic_TorsRuined_Base
	{
		scope = 2;
		displayName = "Monolith Exoskeleton Top (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_monolit.paa"};
	};
	class SFP_ExoClassic_TorsRuined_Neitral: SFP_ExoClassic_TorsRuined_Base
	{
		scope = 2;
		displayName = "Exoskeleton Neutral (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Neitral.paa"};
	};
	class SFP_ExoClassic_PantsRuined_base: CargoPants_Beige
	{
		scope = 0;
		displayName = "Exoskeleton Pants (Heavy)";
		descriptionShort = "Rugged exoskeleton pants, adds maximum portable weight";
		model = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedPants_g.p3d";
		inventorySlot = "Legs";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Legs"};
		itemSize[] = {4,3};
		itemsCargoSize[] = {6,6};
		weight = 10000;
		quickBarBonus = 1;
		absorbency = 0.1;
		heatIsolation = 0;
		visibilityModifier = 0.95;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30,25};
		hiddenSelections[] = {"vkcomfidovpublic","personality"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Mat.rvmat"};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedPants.p3d";
			female = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedPants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2;
					healthLevels[] = {{1,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.7,{"DZ\characters\pants\Data\CargoPants.rvmat","DZ\characters\pants\Data\CargoPants_g.rvmat"}},{0.5,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0.3,{"DZ\characters\pants\Data\CargoPants_damage.rvmat","DZ\characters\pants\Data\CargoPants_g_damage.rvmat"}},{0,{"DZ\characters\pants\Data\CargoPants_destruct.rvmat","DZ\characters\pants\Data\CargoPants_g_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 1.2;
					};
					class Blood
					{
						damage = 1.2;
					};
					class Shock
					{
						damage = 1.2;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 1.2;
					};
					class Blood
					{
						damage = 1.2;
					};
					class Shock
					{
						damage = 1.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 1.2;
					};
					class Blood
					{
						damage = 1.2;
					};
					class Shock
					{
						damage = 1.2;
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
	class SFP_ExoClassic_PantsRuined_Dolg: SFP_ExoClassic_PantsRuined_base
	{
		scope = 1;
		displayName = "Exoskeleton Pants Duty (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_dolg.paa"};
	};
	class SFP_ExoClassic_PantsRuined_Svoboda: SFP_ExoClassic_PantsRuined_base
	{
		scope = 1;
		displayName = "Freedom Exoskeleton Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_svoboda.paa"};
	};
	class SFP_ExoClassic_PantsRuined_Naem: SFP_ExoClassic_PantsRuined_base
	{
		scope = 1;
		displayName = "Exoskeleton Mercenary Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_naem.paa"};
	};
	class SFP_ExoClassic_PantsRuined_monolit: SFP_ExoClassic_PantsRuined_base
	{
		scope = 1;
		displayName = "Monolith Exoskeleton Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Monolit.paa"};
	};
	class SFP_ExoClassic_PantsRuined_Neitral: SFP_ExoClassic_PantsRuined_base
	{
		scope = 1;
		displayName = "Exoskeleton Neutral Pants (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Neitral.paa"};
	};
	class SFP_ExoClassic_HelmetRuined_Base: Mich2001Helmet
	{
		scope = 2;
		displayName = "Exoskeleton Helmet (Heavy)";
		descriptionShort = "Heavy exoskeleton helmet. Can be fitted with a UAV and flashlight";
		model = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedHelm_g.p3d";
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
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\Clans\exoClassic_dolg_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Mat.rvmat"};
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
					hitpoints = 2;
					healthLevels[] = {{1,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.7,{"DZ\characters\headgear\data\mich2001.rvmat","DZ\characters\headgear\data\mich2001_rail.rvmat"}},{0.5,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\mich2001_damage.rvmat","DZ\characters\headgear\data\mich2001_rail_damage.rvmat"}},{0,{"DZ\characters\headgear\data\mich2001_destruct.rvmat","DZ\characters\headgear\data\mich2001_rail_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 1.25;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 1.25;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 1.25;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 1.5;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1.26;
					};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedHelm.p3d";
			female = "SFP\2_ODEZDA\ExoClassic\ruined\RuinedHelm.p3d";
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
	class SFP_ExoClassic_HelmetRuined_Dolg: SFP_ExoClassic_HelmetRuined_Base
	{
		scope = 1;
		displayName = "Exoskeleton Helmet Duty (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_dolg.paa"};
	};
	class SFP_ExoClassic_HelmetRuined_Svoboda: SFP_ExoClassic_HelmetRuined_Base
	{
		scope = 1;
		displayName = "Freedom Exoskeleton Helmet (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_svoboda.paa"};
	};
	class SFP_ExoClassic_HelmetRuined_Naem: SFP_ExoClassic_HelmetRuined_Base
	{
		scope = 1;
		displayName = "Exoskeleton Helmet Mercenaries (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_naem.paa"};
	};
	class SFP_ExoClassic_HelmetRuined_monolit: SFP_ExoClassic_HelmetRuined_Base
	{
		scope = 1;
		displayName = "Monolith Exoskeleton Helmet (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Monolit.paa"};
	};
	class SFP_ExoClassic_HelmetRuined_Neitral: SFP_ExoClassic_HelmetRuined_Base
	{
		scope = 1;
		displayName = "Exoskeleton Neutral Helmet (Heavy)";
		hiddenSelections[] = {"vkcomfidovpublic"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\ExoClassic\data\ruined\Ruined_Exo_Neitral.paa"};
	};
};
