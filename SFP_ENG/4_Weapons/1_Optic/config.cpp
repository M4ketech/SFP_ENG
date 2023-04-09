class CfgPatches
{
	class DZ_Weapons_Optics
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class PSO1Optic;
	class SFP_PSO11Optic: PSO1Optic
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_PSO11Optic0";
		descriptionShort = "$STR_cfgVehicles_PSO11Optic1";
		model = "\SFP\4_Weapons\1_Optic\PSO\Optic_PSO.p3d";
		animClass = "Binoculars";
		rotationFlags = 1;
		reversed = 0;
		weight = 600;
		itemSize[] = {3,2};
		inventorySlot = "weaponOpticsAK";
		simulation = "itemoptics";
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		dispersionModifier = -0.000125;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"reddot","reticle_nonglow"};
		hiddenSelectionsTextures[] = {"","dz\weapons\attachments\optics\data\Reticle_Pso11_ca.paa"};
		hiddenSelectionsMaterials[] = {"","dz\weapons\attachments\optics\data\lensglass_noreflect.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 50;
					healthLevels[] = {{1,{"DZ\weapons\attachments\optics\data\lensglass_ca.paa","DZ\weapons\attachments\data\svd_scope.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa","DZ\weapons\attachments\data\svd_scope_damage.rvmat"}},{0.3,{}},{0,{"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa","DZ\weapons\attachments\data\svd_scope_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			modelOptics = "-";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur3"};
			opticSightTexture = "dz\weapons\attachments\optics\data\reticle_pso11glow_ca.paa";
			opticSightMaterial = "dz\weapons\attachments\optics\data\tritium.rvmat";
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/4";
			opticsZoomInit = "0.3926/4";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.275,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0.6;
		};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
	};
};
