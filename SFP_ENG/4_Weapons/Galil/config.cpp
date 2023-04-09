class CfgPatches
{
	class DZ_Weapons_Firearms_AKM
	{
		units[] = {"AKM"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class AKM;
	class SFP_Galil_Base: AKM
	{
		scope = 0;
		weight = 2940;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		ironsightsExcludingOptics[] = {"KashtanOptic","GrozaOptic","KobraOptic"};
		WeaponLength = 0.829067;
		barrelArmor = 4.444;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = {"SFP_Mag_Galil_35rnd"};
		magazineSwitchTime = 0.2;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1.1};
		simpleHiddenSelections[] = {"hide_barrel"};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.125;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
	};
	class SFP_Galil: SFP_Galil_Base
	{
		scope = 2;
		displayName = "Galil Assault Rifle";
		descriptionShort = "Uses 556x45 rounds";
		model = "\SFP\4_Weapons\Galil\gal.p3d";
		attachments[] = {""};
		itemSize[] = {8,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AKM\data\akm_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AKM\data\AKM.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1300;
					healthLevels[] = {{1,{"DZ\weapons\firearms\AKM\data\AKM.rvmat"}},{0.7,{"DZ\weapons\firearms\AKM\data\AKM.rvmat"}},{0.5,{"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\AKM\data\AKM_damage.rvmat"}},{0,{"DZ\weapons\firearms\AKM\data\AKM_destruct.rvmat"}}};
				};
			};
		};
	};
};
