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
	class Mag_VAL_20Rnd;
	class SFP_9A91_Mag_20rnd: Mag_VAL_20Rnd
	{
		scope = 2;
		displayName = "9A91 Assault rifle Magazine";
		descriptionShort = "20rnds 9x39 Magazine for the 9A91 Assault rifle.";
		model = "\SFP\4_Weapons\9A91\mag\Magazine_9A91.p3d";
		weight = 550;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_9x39";
		ammoItems[] = {"Ammo_9x39","Ammo_9x39AP"};
		tracersEvery = 0;
	};
};
