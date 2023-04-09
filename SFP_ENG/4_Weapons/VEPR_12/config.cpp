class CfgPatches
{
	class DZ_Weapons_Firearms_SaigaK
	{
		units[] = {"Saiga12K"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class CfgMagazines
{
	class Mag_Saiga_8Rnd;
	class SFP_Vepr12_32Rnd: Mag_Saiga_8Rnd
	{
		scope = 2;
		displayName = "Vepr-12 Magazine";
		descriptionShort = "Magazine Vepr12 32rnd 12ga";
		model = "\SFP\4_Weapons\VEPR_12\magazine\vepr12_magazine_32rnd.p3d";
		weight = 820;
		itemSize[] = {1,3};
		count = 32;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		hiddenSelections[] = {"FIDOvCamoMagazine"};
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_co.paa"};
	};
	class SFP_Vepr12_camo_32Rnd: SFP_Vepr12_32Rnd
	{
		scope = 2;
		displayName = "Vepr-12 Magazine camo";
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_camo_co.paa"};
	};
	class SFP_Vepr12_16Rnd: Mag_Saiga_8Rnd
	{
		scope = 2;
		displayName = "Vepr-12 Magazine";
		descriptionShort = "Magazine Vepr12 16rnd 12ga";
		model = "\SFP\4_Weapons\VEPR_12\magazine\vepr12_magazine_16rnd.p3d";
		weight = 520;
		itemSize[] = {1,2};
		count = 16;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		hiddenSelections[] = {"FIDOvCamoMagazine"};
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_co.paa"};
	};
	class SFP_Vepr12_camo_16Rnd: SFP_Vepr12_16Rnd
	{
		scope = 2;
		displayName = "Vepr-12 Magazine camo";
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_camo_co.paa"};
	};
	class SFP_Vepr12_8Rnd: Mag_Saiga_8Rnd
	{
		scope = 2;
		displayName = "Vepr-12 Magazine";
		descriptionShort = "Magazine Vepr12 8rnd 12ga";
		model = "\SFP\4_Weapons\VEPR_12\magazine\vepr12_magazine_8rnd.p3d";
		weight = 220;
		itemSize[] = {1,2};
		count = 8;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		hiddenSelections[] = {"FIDOvCamoMagazine"};
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_co.paa"};
	};
	class SFP_Vepr12_Camo_8Rnd: SFP_Vepr12_8Rnd
	{
		scope = 2;
		displayName = "Vepr-12 Magazine camo";
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_camo_co.paa"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoShotgun;
class cfgWeapons
{
	class Saiga;
	class SFP_VEPR12_Base: Saiga
	{
		scope = 0;
		weight = 3500;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Ammo_12gaRubberSlug","Ammo_12gaBeanbag"};
		magazines[] = {"SFP_Vepr12_Camo_8Rnd","SFP_Vepr12_8Rnd","SFP_Vepr12_camo_16Rnd","SFP_Vepr12_16Rnd","SFP_Vepr12_camo_32Rnd","SFP_Vepr12_32Rnd"};
		magazineSwitchTime = 0.2;
		PPDOFProperties[] = {1,0.5,10,140,4,10};
		WeaponLength = 0.95;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[] = {2,2,1};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		modes[] = {"Single","FullAuto"};
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
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"SFP_vepr12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.2;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"SFP_vepr12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			reloadTime = 0.2;
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class OpticsInfo: OpticsInfoShotgun{};
	};
	class SFP_VEPR12: SFP_VEPR12_Base
	{
		scope = 2;
		displayName = "VEPR-12";
		descriptionShort = "The Vepr-12 smoothbore rifles inherited the general layout and device of the PKK light machine gun, with a gas-discharge mechanism and locking by turning the bolt, however, the bolt group and receiver were redesigned taking into account the use of rifle cartridges, and the trigger mechanism is devoid of self-timer.";
		model = "\SFP\4_Weapons\VEPR_12\vepr12.p3d";
		itemSize[] = {7,3};
		hiddenSelections[] = {"FIDOvCamo","FIDOvCamoMagazine"};
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\vepr\vepr_co.paa","SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_co.paa"};
		attachments[] = {"weaponButtstockSaiga","weaponOpticsAK","weaponWrap"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1250;
					healthLevels[] = {{1,{"DZ\weapons\shotguns\saiga\data\saiga.rvmat"}},{0.7,{"DZ\weapons\shotguns\saiga\data\saiga.rvmat"}},{0.5,{"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"}},{0.3,{"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"}},{0,{"DZ\weapons\shotguns\saiga\data\saiga_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFP_VEPR12_CAMO: SFP_VEPR12
	{
		scope = 2;
		displayName = "VEPR-12 CAMO";
		hiddenSelectionsTextures[] = {"SFP\4_Weapons\VEPR_12\data\vepr\vepr_camo_co.paa","SFP\4_Weapons\VEPR_12\data\mag\vepr12_magazine_camo_co.paa"};
	};
};
