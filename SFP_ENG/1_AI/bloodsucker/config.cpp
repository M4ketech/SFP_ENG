class CfgPatches
{
	class DZ_Characters_Zombies
	{
		units[] = {"Hermit_NewAI"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class ZombieMaleBase;
	class HuntingJacket_Autumn;
	class SFP_Bloodsucker_maskarad: HuntingJacket_Autumn
	{
		scope = 2;
		displayName = "Bloodsucker costume";
		descriptionShort = "The costume is worn over the whole character, to hide other body parts, use the hiding body parts masquerade. Arms, legs, feet, head. ";
		model = "SFP\1_AI\bloodsucker\bloodsucker_maskarad.p3d";
		inventorySlot = "Body";
		itemInfo[] = {"Clothing","Body"};
		rotationFlags = 34;
		weight = 3;
		itemSize[] = {4,4};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 5;
		heatIsolation = 0.8;
		absorbency = 0.1;
		repairableWithKits[] = {5,2};
		repairCosts[] = {30,25};
		soundAttType = "HeavyJacket";
		hiddenSelections[] = {"camo1"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.7,{"DZ\characters\tops\Data\Hunting_jacket.rvmat","DZ\characters\tops\Data\Hunting_jacket_G.rvmat"}},{0.5,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0.3,{"DZ\characters\tops\Data\Hunting_jacket_damage.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_damage.rvmat"}},{0,{"DZ\characters\tops\Data\Hunting_jacket_destruct.rvmat","DZ\characters\tops\Data\Hunting_jacket_G_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "SFP\1_AI\bloodsucker\bloodsucker_maskarad.p3d";
			female = "SFP\1_AI\bloodsucker\bloodsucker_maskarad.p3d";
		};
	};
	class SFP_Bloodsucker_base: ZombieMaleBase
	{
		scope = 0;
		hiddenSelections[] = {"vkComFidovPublic1"};
		model = "SFP\1_AI\bloodsucker\bloodsucker.p3d";
		htMin = 6000;
		htMax = 8800;
		afMax = 400;
		mfMax = 333;
		mFact = 333;
		tBody = 573;
		displayName = "Кровосос";
		descriptionShort = "Мутант";
		class InputController
		{
			movementSpeedMapping[] = {-7.7,-7.7,0.3,0.3};
			lookAtFilterTimeout = 0.3;
			lookAtFilterSpeed = 1.17;
		};
		class Cargo
		{
			itemsCargoSize[] = {10,15};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2500;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
						};
					};
					componentNames[] = {"Head"};
					fatalInjuryCoef = 0.1;
					inventorySlots[] = {"Headgear","Mask"};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
						};
					};
					componentNames[] = {"Spine1","Spine3"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Vest","Body","Back"};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
						};
					};
					componentNames[] = {"LeftArm","LeftForeArm"};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightArm","RightForeArm"};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
						};
					};
					componentNames[] = {"LeftLeg","LeftUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0.33;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					componentNames[] = {"RightLeg","RightUpLeg"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Legs"};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"LeftLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"LeftFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 2500;
						transferToGlobalCoef = 0.1;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage = 2;
							};
						};
					};
					transferToZonesNames[] = {"RightLeg"};
					transferToZonesCoefs[] = {0.1};
					componentNames[] = {"RightFoot"};
					fatalInjuryCoef = -1;
					inventorySlots[] = {"Feet"};
				};
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "walkErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "walkErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "walkErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "walkErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 8;
				};
				class Sprint1
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 9;
				};
				class Sprint2
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 10;
				};
				class Sprint3
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 11;
				};
				class Sprint4
				{
					soundLookupTable = "SFP_KrovoosBegom_Soundset";
					noise = "ZombieStepNoise";
					id = 12;
				};
				class Scuff1
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 17;
				};
				class Scuff2
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 18;
				};
				class Sccuff3
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 19;
				};
				class Scuff4
				{
					soundLookupTable = "scuffErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 20;
				};
				class landFeetErc
				{
					soundLookupTable = "landFeetErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 21;
				};
				class landFootErc
				{
					soundLookupTable = "landFootErc_Sneakers_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 22;
				};
				class Bodyfall
				{
					soundLookupTable = "bodyfall_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable = "bodyfall_hand_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable = "bodyfall_slide_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 25;
				};
				class Prone_Walk_L
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 27;
				};
				class Prone_Walk_R
				{
					soundLookupTable = "walkProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 28;
				};
				class Prone_Run_L
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 29;
				};
				class Prone_Run_R
				{
					soundLookupTable = "runProne_Zmb_LookupTable";
					noise = "ZombieStepNoise";
					id = 30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet = "SFP_KrovoosAttack_Soundset";
					id = 1;
				};
				class Attack_Light2
				{
					soundSet = "SFP_KrovoosAttack_Soundset";
					id = 2;
				};
				class Attack_Heavy1
				{
					soundSet = "SFP_KrovoosAttack_Soundset";
					id = 3;
				};
				class Attack_Heavy2
				{
					soundSet = "SFP_KrovoosAttack_Soundset";
					id = 4;
				};
				class TwoHands
				{
					soundSet = "SFP_KrovoosAttack_Soundset";
					id = 5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet = "SFP_KrovoosPopadanie_Soundset";
					id = 1;
				};
				class HeavyHit
				{
					soundSet = "SFP_KrovoosPopadanie_Soundset";
					id = 2;
				};
				class Attack
				{
					soundSet = "SFP_KrovoosAttack_Soundset";
					id = 5;
				};
				class Jump
				{
					soundSet = "SFP_KrovoosProstoy_Soundset";
					id = 10;
				};
				class Land
				{
					soundSet = "SFP_KrovoosProstoy";
					id = 11;
				};
				class CallToArmsShort
				{
					soundSet = "SFP_KrovoosAGGR_Soundset";
					id = 20;
				};
			};
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName = "attackLong";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 1.25;
				distance = 3.75;
				time = 2.07;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 6.6;
				repeatable = 0;
				cooldown = 0.35;
			};
			class AttackRun
			{
				attackName = "attackRun";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"run","sprint"};
				minDistance = 1.25;
				distance = 3.75;
				time = 2.07;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 6.6;
				repeatable = 0;
				cooldown = 0.35;
			};
			class AttackShort
			{
				attackName = "attackShort";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk"};
				minDistance = 1.25;
				distance = 3.75;
				time = 2.07;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 6.6;
				repeatable = 0;
				cooldown = 0.35;
			};
			class AttackShortLow
			{
				attackName = "attackShortLow";
				ammoType = "MeleeZombieFemale";
				stanceName = "erect";
				moveAnimNames[] = {"idle","walk","run"};
				minDistance = 1.25;
				distance = 3.75;
				time = 2.07;
				yawAngle = 0;
				pitchAngle = 0;
				attackWidth = 6.6;
				repeatable = 0;
				cooldown = 0.35;
			};
			class CrawlAttackMove
			{
				attackName = "crawlAttackMove";
				ammoType = "MeleeZombieFemale";
				stanceName = "crawl";
				moveAnimNames[] = {"walk"};
				distance = 2;
				time = 0.1;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 4.25;
			};
			class CrawlAttackStill
			{
				attackName = "crawlAttackStill";
				ammoType = "MeleeZombieFemale";
				stanceName = "crawl";
				moveAnimNames[] = {"idle"};
				distance = 2;
				time = 0.1;
				yawAngle = 0;
				pitchAngle = 45;
				attackWidth = 2;
				cooldown = 1.25;
			};
		};
	};
	class SFP_Bloodsucker_original: SFP_Bloodsucker_base
	{
		scope = 2;
		hiddenSelections[] = {"vkComFidovPublic"};
		displayName = "Bloodsucker";
		descriptionShort = "Dangerous Mutant";
		hiddenSelectionsTextures[] = {"SFP\1_AI\bloodsucker\data\krovosos_co.paa"};
	};
	class SFP_Bloodsucker_Blue: SFP_Bloodsucker_base
	{
		scope = 2;
		hiddenSelections[] = {"vkComFidovPublic"};
		displayName = "Bloodsucker";
		descriptionShort = "Dangerous Mutant";
		hiddenSelectionsTextures[] = {"SFP\1_AI\bloodsucker\data\krovosos_blue_co.paa"};
	};
	class SFP_Bloodsucker_black: SFP_Bloodsucker_base
	{
		scope = 2;
		hiddenSelections[] = {"vkComFidovPublic"};
		displayName = "Bloodsucker";
		descriptionShort = "Dangerous Mutant";
		hiddenSelectionsTextures[] = {"SFP\1_AI\bloodsucker\data\krovosos_black_co.paa"};
	};
	class SFP_Bloodsucker_red: SFP_Bloodsucker_base
	{
		scope = 2;
		hiddenSelections[] = {"vkComFidovPublic"};
		displayName = "Bloodsucker";
		descriptionShort = "Dangerous Mutant";
		hiddenSelectionsTextures[] = {"SFP\1_AI\bloodsucker\data\krovosos_red_co.paa"};
	};
	class SFP_Bloodsucker_green: SFP_Bloodsucker_base
	{
		scope = 2;
		hiddenSelections[] = {"vkComFidovPublic"};
		displayName = "Bloodsucker";
		descriptionShort = "Dangerous Mutant";
		hiddenSelectionsTextures[] = {"SFP\1_AI\bloodsucker\data\krovosos_green_co.paa"};
	};
	class SFP_Bloodsucker_Hameleon: SFP_Bloodsucker_base
	{
		scope = 2;
		hiddenSelections[] = {"vkComFidovPublic"};
		displayName = "Bloodsucker";
		descriptionShort = "Dangerous Mutant";
		hiddenSelectionsTextures[] = {"SFP\1_AI\bloodsucker\data\krovosos_black_co.paa"};
		hiddenSelectionsMaterials[] = {"SFP\1_AI\bloodsucker\data\krovosos_hameleon.rvmat"};
	};
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		model = "\dz\Characters\Proxies\ak_47_v58_proxy.p3d";
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
		model = "\dz\Characters\Proxies\Backpack_DZ.p3d";
	};
	class ProxyEyewear;
	class ProxyEyewear_DZ: ProxyEyewear
	{
		model = "\dz\Characters\Proxies\Eyewear_DZ.p3d";
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
		model = "\dz\Characters\Proxies\Headgear_DZ.p3d";
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
		model = "\dz\Characters\Proxies\Mask_DZ.p3d";
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
		model = "\dz\Characters\Proxies\Vest_DZ.p3d";
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
		model = "\dz\Characters\Proxies\Melee_DZ.p3d";
	};
};
