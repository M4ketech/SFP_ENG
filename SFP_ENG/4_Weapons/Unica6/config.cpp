class CfgPatches
{
	class DZ_Pistols_Magnum
	{
		units[] = {"magnum"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Single;
class Mode_Burst;
class Mode_FullAuto;
class Muzzle_Base;
class OpticsInfoPistol;
class cfgWeapons
{
	class Magnum;
	class SFP_Unica6_Base: Magnum
	{
		scope = 0;
		weight = 1400;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.9,10,250,4,10};
		WeaponLength = 0.63;
		barrelArmor = 1.758;
		initSpeedMultiplier = 0.9;
		DisplayMagazine = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_357","Mag_357Speedloader_6Rnd"};
		ejectType = 8;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {1.15,1.15,0.8};
		drySound[] = {"DZ\sounds\weapons\firearms\magnum\Magnum_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\magnum\magnum_reload2",0.8,1,20};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[] = {"Magnum_Shot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\magnum\magnum_single_2",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\magnum\magnum_single_1",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.19;
			dispersion = 0.0045;
			magazineSlot = "magazine";
		};
		class OpticsInfoMagnumBase: OpticsInfoPistol
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoMagnumBase{};
		muzzles[] = {"this","SecondMuzzle","ThirdMuzzle","FourthMuzzle","FifthMuzzle","SixthMuzzle"};
		class SecondMuzzle: Muzzle_Base
		{
			chamberSize = 1;
			muzzlePos = "usti hlavne";
			muzzleEnd = "konec hlavne";
			cartridgePos = "nabojnicestart_2";
			cartridgeVel = "nabojniceend_2";
			modes[] = {"Single"};
			magazines[] = {};
			chamberableFrom[] = {"Ammo_357"};
			barrelArmor = 1.758;
			initSpeedMultiplier = 0.9;
			drySound[] = {"DZ\sounds\weapons\firearms\magnum\Magnum_dry",0.5,1,20};
			soundBullet[] = {};
			class Single: Mode_SemiAuto
			{
				soundSetShot[] = {"Magnum_Shot_SoundSet","Magnum_Tail_SoundSet","Magnum_InteriorTail_SoundSet"};
				begin1[] = {"dz\sounds\weapons\firearms\magnum\magnum_single_2",1,1,700};
				begin2[] = {"dz\sounds\weapons\firearms\magnum\magnum_single_1",1,1,700};
				soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
				reloadTime = 0.19;
				dispersion = 0.0045;
				magazineSlot = "magazine";
			};
			class OpticsInfo: OpticsInfoMagnumBase{};
		};
		class ThirdMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_3";
			cartridgeVel = "nabojniceend_3";
		};
		class FourthMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_4";
			cartridgeVel = "nabojniceend_4";
		};
		class FifthMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_5";
			cartridgeVel = "nabojniceend_5";
		};
		class SixthMuzzle: SecondMuzzle
		{
			cartridgePos = "nabojnicestart_6";
			cartridgeVel = "nabojniceend_6";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 7;
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
	};
	class SFP_Unica6: SFP_Unica6_Base
	{
		scope = 2;
		displayName = "Unica-6 Revolver";
		descriptionShort = "Semi-automatic revolver with recoil, one of the few revolvers of this type ever produced.";
		model = "\SFP\4_Weapons\Unica6\unica6.p3d";
		itemSize[] = {4,2};
		attachments[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\weapons\pistols\magnum\data\magnum.rvmat"}},{0.7,{"DZ\weapons\pistols\magnum\data\magnum.rvmat"}},{0.5,{"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"}},{0.3,{"DZ\weapons\pistols\magnum\data\magnum_damage.rvmat"}},{0,{"DZ\weapons\pistols\magnum\data\magnum_destruct.rvmat"}}};
				};
			};
		};
	};
};
