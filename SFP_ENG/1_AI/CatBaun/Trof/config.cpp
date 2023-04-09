class CfgPatches
{
	class DZ_Gear_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Rice;
	class Pumpkin;
	class SFP_CatBaun_Head: Rice
	{
		scope = 2;
		displayName = "Baboon Cat Head";
		descriptionShort = "A head that may be of interest to scientists or other merchants.";
		model = "\SFP\1_AI\CatBaun\Trof\BaunHeat.p3d";
		weight = 2400;
		itemSize[] = {4,4};
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		absorbency = 0.9;
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1,{"DZ\gear\food\data\rice.rvmat"}},{0.7,{}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.3,{}},{0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2.5;
			energy = 150;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 500;
			agents = 5;
		};
		class DamageApplied
		{
			dispersion = 0;
			bleedThreshold = 0.3;
			Health = 20;
			Blood = 100;
			Shock = 100;
		};
	};
};
