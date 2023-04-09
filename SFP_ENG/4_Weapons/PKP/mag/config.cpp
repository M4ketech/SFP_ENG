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
	class Mag_SVD_10Rnd;
	class SFP_PKP_BoxMag: Mag_SVD_10Rnd
	{
		scope = 2;
		displayName = "BoxMag PKP 200rnd";
		descriptionShort = "BoxMag PKP 200rnd 762x54";
		model = "\SFP\4_Weapons\PKP\mag\PKP_BoxMag.p3d";
		weight = 1120;
		itemSize[] = {2,2};
		count = 200;
		ammo = "Bullet_762x54";
		ammoItems[] = {"Ammo_762x54","Ammo_762x54Tracer"};
		tracersEvery = 0;
	};
};
