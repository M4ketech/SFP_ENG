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
	class HouseNoDestruct;
	class SFP_FON: HouseNoDestruct
	{
		scope = 2;
		model = "\SFP\FON\FONsfp.p3d";
	};
	class SFP_FON2: HouseNoDestruct
	{
		scope = 2;
		model = "\SFP\FON\FONsfp2.p3d";
	};
};
