class CfgPatches
{
	class DZ_Weapons_Supports
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Saiga_Bttstck;
	class SFP_VEPR12_Bttstck: Saiga_Bttstck
	{
		scope = 2;
		displayName = "VEPR-12 ButtStock";
		descriptionShort = "ButtStock VEPR 12";
		model = "\SFP\4_Weapons\VEPR_12\butt\vepr12_butt.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponButtstockSaiga";
		weight = 720;
		itemSize[] = {3,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\support\data\saiga_folding_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\attachments\support\data\saiga_folding.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1,{"DZ\weapons\attachments\support\data\saiga_folding.rvmat"}},{0.7,{"DZ\weapons\attachments\support\data\saiga_folding.rvmat"}},{0.5,{"DZ\weapons\attachments\support\data\saiga_folding_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\support\data\saiga_folding_damage.rvmat"}},{0,{"DZ\weapons\attachments\support\data\saiga_folding_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
