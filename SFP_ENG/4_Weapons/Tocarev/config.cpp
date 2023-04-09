class CfgPatches
{
	class DZ_Pistols_CZ75
	{
		units[] = {"CZ75"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class CfgMagazines
{
	class Mag_IJ70_8Rnd;
	class SFP_PistolTocarevMagazine_8rnd: Mag_IJ70_8Rnd
	{
		scope = 2;
		displayName = "TT Pistol 8rnd";
		descriptionShort = "380 ammo";
		model = "\SFP\4_Weapons\Tocarev\Magazin\MagazineTT.p3d";
		weight = 131;
		itemSize[] = {1,2};
		count = 8;
		ammo = "Bullet_380";
		ammoItems[] = {"Ammo_380"};
		tracersEvery = 0;
		mass = 10;
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class CZ75;
	class SFP_Pistol_TT: CZ75
	{
		scope = 0;
		weight = 1000;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.55,10,280,4,10};
		WeaponLength = 0.635576;
		barrelArmor = 2;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"SFP_PistolTocarevMagazine_8rnd"};
		chamberableFrom[] = {"Ammo_380"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.2,1.2,0.8};
		drySound[] = {"DZ\sounds\weapons\firearms\CZ75\CZ75_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_reload",0.8,1,20};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"CZ75_Shot_SoundSet","CZ75_Tail_SoundSet","CZ75_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ75_silencerPro_SoundSet","CZ75_silencerTail_SoundSet","CZ75_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\CZ75\CZ75_single_0",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\CZ75\CZ75_single_1",1,1,600};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin1",0.33333,"begin2",0.33333};
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,60};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced2",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.13;
			recoil = "recoil_cz75";
			recoilProne = "recoil_cz75_prone";
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_cz75_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 5;
				maxOverheatingValue = 15;
				overheatingDecayInterval = 1;
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class NoiseShoot
		{
			strength = 50;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class SFP_Tocarev: SFP_Pistol_TT
	{
		scope = 2;
		displayName = "Tocarev pistol";
		descriptionShort = "self-loading pistol, developed in 1930 by the Soviet designer Fyodor Vasilyevich Tokarev, Converted to 380 cartridge";
		model = "\SFP\4_Weapons\Tocarev\tocarev.p3d";
		attachments[] = {""};
		itemSize[] = {3,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 570;
					healthLevels[] = {{1,{"DZ\weapons\pistols\cz75\data\cz75.rvmat"}},{0.7,{"DZ\weapons\pistols\cz75\data\cz75.rvmat"}},{0.5,{"DZ\weapons\pistols\cz75\data\cz75_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\cz75\data\cz75_damage.rvmat"}},{0,{"DZ\weapons\pistols\cz75\data\cz75_destruct.rvmat"}}};
				};
			};
		};
	};
};
