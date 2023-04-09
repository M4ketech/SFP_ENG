class CfgPatches
{
	class DZ_Animals_canis_lupus
	{
		units[] = {"Animal_CanisLupus_Grey","Animal_CanisLupus_White"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class SFP_CatBaun_Base: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 0;
		model = "\SFP\1_AI\CatBaun\CatBaun.p3d";
		displayName = "Baboon Cat";
		descriptionShort = "feed mods are not the same";
		hiddenSelections[] = {"vkcomfidovpublic"};
		DamageSphereAmmos[] = {"MeleeWolf"};
		aiAgentTemplate = "Predators_Wolf";
		injuryLevels[] = {1,0.5,0.2,0};
		class Cargo
		{
			itemsCargoSize[] = {10,10};
			allowOwnedCargoManipulation = 1;
			openable = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1200;
					healthLabels[] = {1,0.7,0.5,0.3,0};
				};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Belly
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.2;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.33;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.33;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Chest
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.75;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Head
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 500;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.5;
				};
				class Zone_Legs_Front
				{
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Legs_Front"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Legs_Back
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.1;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Legs_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Neck
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.75;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.66;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.66;
							};
							class Blood
							{
								damage = 5;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Pelvis
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.25;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.2;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.2;
							};
							class Blood
							{
								damage = 0;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Spine_Front
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.75;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.66;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.66;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Spine_Front"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
				class Zone_Spine_Back
				{
					canBleed = 0;
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class ArmorType
					{
						class Melee
						{
							class Health
							{
								damage = 0.25;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class Projectile
						{
							class Health
							{
								damage = 0.33;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage = 0.33;
							};
							class Blood
							{
								damage = 1;
							};
							class Shock
							{
								damage = 0;
							};
						};
					};
					componentNames[] = {"Zone_Spine_Back"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.25;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "SFP_CatBaun_Head";
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
				count = 2;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 0;
				quantityMinMaxCoef[] = {0,1};
			};
			class ObtainedBones
			{
				item = "Bones";
				count = 4;
				quantityMinMaxCoef[] = {0.25,1};
				transferToolDamageCoef = 1;
			};
			class ObtainedLapa
			{
				item = "";
				count = 2;
				quantityMinMaxCoef[] = {1,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\canis_lupus\Data\canis_lupus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Wolf\Wolf_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Wolf\Wolf_AnimInstance.asi";
			startnode = "AlignToTerrain_Rot";
			skeletonName = "canis_lupus_skeleton.xob";
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
				class WolfBark
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 1;
				};
				class WolfBark_1
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 61;
				};
				class WolfBark_2
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 71;
				};
				class WolfBark2
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 2;
				};
				class WolfBark3
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 3;
				};
				class WolfBreath
				{
					soundSet = "WolfBreath_SoundSet";
					noise = "WolfRoarNoise";
					id = 4;
				};
				class WolfGroans
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 5;
				};
				class WolfGrowl_A
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 6;
				};
				class WolfGrowl_B
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 7;
				};
				class WolfGrowl
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 8;
				};
				class WolfPant
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 9;
				};
				class WolfPantShort
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 10;
				};
				class WolfPantLong
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 18;
				};
				class WolfSnarl
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 11;
				};
				class WolfSnarlShort
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 12;
				};
				class WolfWhimper
				{
					soundSet = "SFP_CatBaun_agresia_Soundset";
					noise = "WolfRoarNoise";
					id = 13;
				};
				class WolfYelp
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 14;
				};
				class WolfYawn
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 15;
				};
				class WolfDeath
				{
					soundSet = "SFP_CatBaun_MayLong_Soundset";
					noise = "WolfRoarNoise";
					id = 20;
				};
				class WolfHowl
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 16;
				};
				class WolfHowls
				{
					soundSet = "SFP_CatBaun_Attack_Soundset";
					noise = "WolfRoarNoise";
					id = 17;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "WolfBiteDamage";
					id = 1;
				};
				class BiteLow
				{
					damage = "WolfLowBiteDamage";
					id = 2;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0,0.25,0.5,1.2,4.5,12.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
	class SFP_CatBaun: SFP_CatBaun_Base
	{
		scope = 2;
	};
};
