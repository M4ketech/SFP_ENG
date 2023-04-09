class CfgPatches
{
	class DZ_Weapons_Magazines
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMagazines
{
	class DefaultMagazine;
	class Mag_AKM_30Rnd;
	class SFP_SOC94_7rnd_Mag: Mag_AKM_30Rnd
	{
		scope = 2;
		displayName = "SOC94 7rnd Mag";
		descriptionShort = "308win rounds Magazine";
		model = "\SFP\4_Weapons\Vepr\Mag\soc_mag.p3d";
		weight = 230;
		itemSize[] = {1,2};
		count = 7;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\weapons\attachments\data\akm_steel_mag.rvmat"}},{0.7,{"DZ\weapons\attachments\data\akm_steel_mag.rvmat"}},{0.5,{"DZ\weapons\attachments\data\akm_steel_mag_damage.rvmat"}},{0.3,{"DZ\weapons\attachments\data\akm_steel_mag_damage.rvmat"}},{0,{"DZ\weapons\attachments\data\akm_steel_mag_destruct.rvmat"}}};
				};
			};
		};
	};
};
