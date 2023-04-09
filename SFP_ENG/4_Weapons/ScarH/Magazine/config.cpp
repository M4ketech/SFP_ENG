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
	class SFP_ScarH_20Rnd: Mag_AKM_30Rnd
	{
		scope = 2;
		displayName = "Scar-H 20rnd";
		descriptionShort = "308win rounds";
		model = "\SFP\4_Weapons\ScarH\Magazine\scar_h_m.p3d";
		weight = 530;
		itemSize[] = {1,3};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
	};
};
