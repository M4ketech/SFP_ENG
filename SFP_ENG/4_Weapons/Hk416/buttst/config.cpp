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
	class M4_OEBttstck;
	class SFP_HK416_Bttstck: M4_OEBttstck
	{
		scope = 2;
		displayName = "HK416 Buttstock";
		descriptionShort = "Buttstock for the HK416";
		model = "\SFP\4_Weapons\Hk416\buttst\prikladHK416.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot = "weaponButtstockM4";
		weight = 354;
		itemSize[] = {2,1};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		recoilModifier[] = {0.8,0.8,0.8};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\m4_stock.rvmat"}},{0.7,{"DZ\weapons\attachments\data\m4_stock.rvmat"}},{0.5,{"DZ\weapons\attachments\data\m4_stock_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\m4_stock_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\m4_stock_destruct.rvmat"}}};
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
