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
	class Mich2001Helmet;
	class poiuytrewq: NBCHoodGray
	{
		scope = 2;
		displayName = "Protective helmet of ecologist (lightweight)";
		descriptionShort = "Environmentalist helmet. This uniform was designed for assignments in especially dangerous places.";
		model = "SFP\2_ODEZDA\MisticalDawn\Mistical_Dawn_g.p3d";
		repairableWithKits[] = {8};
		repairCosts[] = {25};
		inventorySlot[] = {"Headgear"};
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Headgear"};
		rotationFlags = 2;
		weight = 1200;
		itemSize[] = {4,3};
		noMask = 1;
		noEyewear = 1;
		varWetMax = 0.249;
		heatIsolation = 0.25;
		visibilityModifier = 0.95;
		headSelectionsToHide[] = {"Clipping_Mich2001"};
		hiddenSelections[] = {"1_Obuc","2_Trapka","3_Face"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\MisticalDawn\data\Kole0\Mask_co.paa","SFP\2_ODEZDA\MisticalDawn\data\Kole1\Shap_co.paa","SFP\2_ODEZDA\MisticalDawn\data\Kole2\Face_co.paa"};
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
			male = "SFP\2_ODEZDA\MisticalDawn\Mistical_Dawn.p3d";
			female = "SFP\2_ODEZDA\MisticalDawn\Mistical_Dawn.p3d";
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
	class poiuytrewq_black: poiuytrewq
	{
		scope = 2;
		hiddenSelections[] = {"1_Obuc","2_Trapka","3_Face"};
		hiddenSelectionsTextures[] = {"SFP\2_ODEZDA\MisticalDawn\data\Kole0\Mask_co.paa","SFP\2_ODEZDA\MisticalDawn\data\Kole1\Shap_black.paa","SFP\2_ODEZDA\MisticalDawn\data\Kole2\Face_co.paa"};
		class Reflectors
		{
			class Beam
			{
				color[] = {1,0.55,0,1};
				brightness = 1;
				radius = 20;
				angle = 70;
				angleInnerRatio = 0.25;
				dayLight = 1;
				flareAngleBias = 40;
				position = "beamStart";
				direction = "beamEnd";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
};
