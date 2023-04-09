class CfgPatches
{
	class DZ_Animals_ursus_arctos
	{
		units[] = {"Animal_UrsusArctos"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals","DZ_Data_Bliss","DZ_AI_Bliss","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Animal_UrsusArctos;
	class SFP_Gigant_Zad: Animal_UrsusArctos
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\SFP\1_AI\Gigant\Mutant_GigantZad.p3d";
		armor = 1.2;
		displayName = "Giant";
		descriptionShort = "This one can break every bone in your body.";
		aiAgentTemplate = "Predator_UrsusArctos";
		injuryLevels[] = {1,0.5,0.2,0};
		DamageSphereAmmos[] = {"MeleeBear","MeleeBearShock","MeleeWolf"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 6800;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 8000;
				};
				class Shock
				{
					hitpoints = 9000;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					canBleed = 0;
					class Health
					{
						hitpoints = 250;
						transferToGlobalCoef = 1;
					};
					class Blood: Health
					{
						hitpoints = 5000;
					};
					class Shock: Health
					{
						hitpoints = 5000;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.51;
							};
						};
						class Projectile: Melee
						{
							class Health: Health
							{
								damage = 0.56;
							};
						};
						class FragGrenade: Melee{};
					};
				};
				class Zone_Neck: Zone_Head
				{
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
					class Health
					{
						hitpoints = 300;
						transferToGlobalCoef = 1;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.15;
							};
						};
						class Projectile: Projectile
						{
							class Health: Health
							{
								damage = 0.78;
							};
						};
					};
				};
				class Zone_Belly: Zone_Head
				{
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 400;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Pelvis: Zone_Head
				{
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 500;
					};
					class ArmorType: ArmorType
					{
						class Melee: Melee
						{
							class Health: Health
							{
								damage = 0.3;
							};
						};
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.01;
					class Health: Health
					{
						hitpoints = 200;
						transferToGlobalCoef = 0;
					};
				};
			};
		};
		class Skinning
		{
			class ObtainedGolova
			{
				item = "SFP_Gigant_Otrezano_Head";
				count = 1;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 3;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 7;
				quantityMinMaxCoef[] = {0,1};
			};
			class ObtainedBones
			{
				item = "Bones";
				count = 7;
				quantityMinMaxCoef[] = {0.25,1};
				transferToolDamageCoef = 1;
			};
			class ObtainedTors
			{
				item = "";
				count = 1;
				quantityMinMaxCoef[] = {1,1};
				transferToolDamageCoef = 1;
			};
			class ObtainedRleg
			{
				item = "SFP_Gigant_Otrezano_kultapa";
				count = 2;
				quantityMinMaxCoef[] = {1,1};
				transferToolDamageCoef = 1;
			};
			class ObtainedLleg
			{
				item = "SFP_Gigant_Otrezano_Lapa";
				count = 2;
				quantityMinMaxCoef[] = {1,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "DZ\animals_bliss\ursus_arctos\data\ursus_arctos_skeleton.xob";
			graphname = "DZ\animals_bliss\animations\!graph_files\bear\Bear_Graph.agr";
			defaultinstance = "DZ\animals_bliss\animations\!graph_files\bear\BearSkeleton_AnimInstance.asi";
			startnode = "MasterBear_SM";
			skeletonName = "ursus_arctos_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "PawMediumWalk_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "PawMediumRun_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 8;
				};
				class Bodyfall
				{
					soundLookupTable = "PawMediumBodyfall_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "PawMediumSettle_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "PawMediumRest2standA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "PawMediumRest2standB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "PawMediumStand2restA_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "PawMediumStand2restB_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "PawMediumStand2restC_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 17;
				};
				class Jump
				{
					soundLookupTable = "PawMediumJump_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 18;
				};
				class Impact
				{
					soundLookupTable = "PawMediumImpact_LookupTable";
					noise = "WolfStepNoise";
					effectSet[] = {"WolfStepEffect1","WolfStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class BearAttack
				{
					soundSet = "SFP_Gigant_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 21;
				};
				class BearBreath
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class BearGrowl
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class BearMumble
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 3;
				};
				class BearRoar
				{
					soundSet = "SFP_Gigant_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class BearRoarShort
				{
					soundSet = "SFP_Gigant_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class BearSigh
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class BearSighLong
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class BearSighShort
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class BearSnarl
				{
					soundSet = "SFP_Gigant_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class BearSnarlLong
				{
					soundSet = "SFP_Gigant_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class BearSnort
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class BearGrowl_1
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class BearGrowl_3
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class BearGrowl_4
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class BearGrowl_5
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class BearGrowl_6
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class BearGrowl_7
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 17;
				};
				class BearGrowl_8
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class BearGrowl_9
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 19;
				};
				class BearGrowl_10
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class BearGrowl_12
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 22;
				};
				class BearGrowl_13
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 23;
				};
				class BearRoar_1
				{
					soundSet = "SFP_Gigant_Agresiv_Soundset";
					noise = "WolfRoarNoise";
					id = 24;
				};
				class BearRoar_2
				{
					soundSet = "SFP_Gigant_Agresiv_Soundset";
					noise = "WolfRoarNoise";
					id = 25;
				};
				class BearRoar_3
				{
					soundSet = "SFP_Gigant_Agresiv_Soundset";
					noise = "WolfRoarNoise";
					id = 26;
				};
				class BearRoar_5
				{
					soundSet = "SFP_Gigant_Agresiv_Soundset";
					noise = "WolfRoarNoise";
					id = 27;
				};
				class BearRoar_6
				{
					soundSet = "SFP_Gigant_Agresiv_Soundset";
					noise = "WolfRoarNoise";
					id = 28;
				};
				class BearRoar_7
				{
					soundSet = "SFP_Gigant_Agresiv_Soundset";
					noise = "WolfRoarNoise";
					id = 29;
				};
				class BearSighLong_0
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 30;
				};
				class BearSighLong_1
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 31;
				};
				class BearSighLong_2
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 32;
				};
				class BearSnarlLong_0
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 33;
				};
				class BearSnarlLong_1
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 34;
				};
				class BearSnarlLong_2
				{
					soundSet = "SFP_Gigant_dihanie_Soundset";
					noise = "WolfRoarNoise";
					id = 35;
				};
			};
			class Damages
			{
				class BearBiteDamage
				{
					damage = "BearBiteDamage";
					id = 1;
				};
				class BearLeftPawDamage
				{
					damage = "BearLeftPawDamage";
					id = 2;
				};
				class BearRightPawDamage
				{
					damage = "BearRightPawDamage";
					id = 3;
				};
				class BearBiteDamageIntimidate
				{
					damage = "BearBiteDamageIntimidate";
					id = 11;
				};
				class BearLeftPawDamageIntimidate
				{
					damage = "BearLeftPawDamageIntimidate";
					id = 12;
				};
				class BearRightPawDamageIntimidate
				{
					damage = "BearRightPawDamageIntimidate";
					id = 13;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0,0.24,0.55,1.72,3.5,8};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
	class SFP_Gigant_Pered: SFP_Gigant_Zad
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\SFP\1_AI\Gigant\Mutant_GigantPered.p3d";
	};
	class SFP_Gigant_Pered_GIGANT: SFP_Gigant_Zad
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\SFP\1_AI\Gigant\Mutant_GigantPered.p3d";
	};
};
