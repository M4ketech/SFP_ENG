class CfgPatches
{
	class DZ_Weapons_Firearms_AK101
	{
		units[] = {"AK101"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class cfgVehicles
{
	class AK_PlasticBttstck_Black;
	class SFP_AK107_PlasticBttstck: AK_PlasticBttstck_Black
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_PlasticBttstck0";
		descriptionShort = "$STR_cfgVehicles_AK_PlasticBttstck1";
		model = "\SFP\4_Weapons\AK107\butt\AKbutt.p3d";
		rotationFlags = 17;
		reversed = 0;
		inventorySlot[] = {"weaponButtstockAK"};
		weight = 363;
		itemSize[] = {3,1};
		recoilModifier[] = {0.8,0.8,0.8};
		swayModifier[] = {0.7,0.7,0.7};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat"};
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
class CfgMagazines
{
	class Mag_AK101_30Rnd;
	class Mag_AK107_30Rnd: Mag_AK101_30Rnd
	{
		scope = 2;
		displayName = "AK107 Magazine";
		descriptionShort = "556x45 round Magazine for the AK107.";
		model = "\SFP\4_Weapons\AK107\mag\Magazine107.p3d";
		weight = 400;
		itemSize[] = {1,3};
		count = 30;
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		tracersEvery = 0;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"DZ\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\AK101\data\ak101.rvmat"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class AK101;
	class SFP_AK107_Base: AK101
	{
		scope = 0;
		weight = 3077;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 0.56;
		barrelArmor = 1.806;
		initSpeedMultiplier = 0.9;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = {"Mag_AK101_30Rnd","Mag_AK101_30Rnd_Black","Mag_AK107_30Rnd","Mag_AK101_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		ejectType = 1;
		recoilModifier[] = {0.4,0.5,0.4};
		swayModifier[] = {1.2,1.2,1.2};
		simpleHiddenSelections[] = {"hide_barrel","magazine"};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"camo","magazine"};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SFP_AK107_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.12;
			recoil = "recoil_AK101";
			recoilProne = "recoil_AK101_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SFP_AK107_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.038;
			recoil = "recoil_AK101";
			recoilProne = "recoil_AK101_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 82;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};
	};
	class SFP_AK107: SFP_AK107_Base
	{
		scope = 2;
		displayName = "AK107 Rifle";
		descriptionShort = "They are distinguished by the presence of balanced automation, previously used in the AL-7 and AEK-971 models. Balanced automation significantly improves the accuracy of firing bursts from unstable positions, in comparison with the AK74M - by 15-20%. However, in the future, such a balancing scheme for AK automation was abandoned.";
		model = "SFP\4_Weapons\AK107\AK107.p3d";
		attachments[] = {"weaponButtstockAK","weaponWrap","weaponOpticsAK","weaponMuzzleAK","weaponBayonetAK"};
		itemSize[] = {8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					healthLevels[] = {{1,{"DZ\weapons\firearms\AK101\Data\ak101.rvmat"}},{0.7,{"DZ\weapons\firearms\AK101\Data\ak101.rvmat"}},{0.5,{"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat"}},{0,{"DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"}}};
				};
			};
		};
	};
};
