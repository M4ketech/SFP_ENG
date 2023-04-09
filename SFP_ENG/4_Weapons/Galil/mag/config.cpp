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
	class Mag_STANAG_30Rnd;
	class SFP_Mag_Galil_35rnd: Mag_STANAG_30Rnd
	{
		scope = 2;
		displayName = "Galil Magazine 35rnd";
		descriptionShort = "556x45 35 rounds Magazine for the Galil Assault rifle.";
		model = "\SFP\4_Weapons\Galil\mag\magazine35.p3d";
		weight = 90;
		itemSize[] = {1,3};
		count = 35;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		tracersEvery = 0;
	};
};
