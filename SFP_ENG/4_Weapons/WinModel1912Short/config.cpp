class CfgPatches
{
	class DZ_Weapons_Shotguns_MP133
	{
		units[] = {"ShotgunMp133","ShotgunMp133_Pistol_Grip"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Mp133Shotgun;
	class SFP_WinM1912Short_Shotgun_b: Mp133Shotgun
	{
		scope = 0;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		chamberSize = 6;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {};
		DisplayMagazine = 0;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 1.03525;
		barrelArmor = 2.25;
		initSpeedMultiplier = 1.25;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2.3,2.3,1.2};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadSkips[] = {0.26,0.4,0.53,0.64,0.735};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_pump_0",1,1,20};
		reloadAction = "ReloadMP133";
		shotAction = "ReloadMP133Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle = "weapon_shot_winded_smoke";
					onlyWithinHealthLabel[] = {3,4};
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp133_01";
					illuminateWorld = 1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
					onlyWithinHealthLabel[] = {3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 4;
				shotsToStartOverheating = 1;
				overheatingDecayInterval = 3;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
				};
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
		class Single: Mode_Single
		{
			soundSetShot[] = {"SFP_Rem870_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\mp133\mp133_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\mp133\mp133_single_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\mp133\mp133_single_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
	};
	class SFP_WinM1912Short_Shotgun: SFP_WinM1912Short_Shotgun_b
	{
		scope = 2;
		displayName = "Winchester Model 1912 short";
		descriptionShort = "The sawed buttstock is shorter, but the recoil is stronger!";
		model = "\SFP\4_Weapons\WinModel1912Short\win1912Short.p3d";
		animName = "ShotgunMp133";
		attachments[] = {""};
		itemSize[] = {7,3};
		weight = 2300;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"}},{0.7,{"DZ\weapons\shotguns\Mp133\data\mp133.rvmat"}},{0.5,{"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"}},{0.3,{"DZ\weapons\shotguns\Mp133\data\mp133_damage.rvmat"}},{0,{"DZ\weapons\shotguns\Mp133\data\mp133_destruct.rvmat"}}};
				};
			};
		};
	};
};
