class CfgPatches
{
	class DZ_Structures_Wrecks
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Land_Wreck_hb01_aban1_blue;
	class SFP_Land_Wreck_VestaTaxi: Land_Wreck_hb01_aban1_blue
	{
		scope = 2;
		model = "SFP\1_car\Vesta\wreck_vesta_taxi.p3d";
	};
	class SFP_Land_Wreck_OkaPrestine: Land_Wreck_hb01_aban1_blue
	{
		scope = 2;
		model = "\SFP\1_car\oka\Oka_wr.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName = "door 2";
				component = "Doors2";
				soundPos = "doors2_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName = "door 3";
				component = "Doors3";
				soundPos = "doors3_action";
				animPeriod = 1.5;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorCarWreckOpen";
				soundClose = "doorCarWreckClose";
				soundLocked = "doorCarWreckRattle";
				soundOpenABit = "doorCarWreckOpenABit";
			};
		};
	};
};
