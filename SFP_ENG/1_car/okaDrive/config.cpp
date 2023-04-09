class CfgPatches
{
	class DZ_Vehicles_Wheeled
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgSlots
{
	class Slot_OKAwheel
	{
		name = "OKAwheel";
		displayName = "Oka Wheel";
		selection = "wheel_1_1";
		ghostIcon = "wheel";
	};
	class Slot_OKAwheel_1_1
	{
		name = "OKAwheel_1_1";
		displayName = "Oka Wheel";
		selection = "wheel_1_1";
		ghostIcon = "wheel";
	};
	class Slot_OKAwheel_1_2
	{
		name = "OKAwheel_1_2";
		displayName = "Oka Wheel";
		selection = "wheel_1_2";
		ghostIcon = "wheel";
	};
	class Slot_OKAwheel_2_1
	{
		name = "OKAwheel_2_1";
		displayName = "Oka Wheel";
		selection = "wheel_2_1";
		ghostIcon = "wheel";
	};
	class Slot_OKAwheel_2_2
	{
		name = "OKAwheel_2_2";
		displayName = "Oka Wheel";
		selection = "wheel_2_2";
		ghostIcon = "wheel";
	};
	class Slot_Oka_doors_driver
	{
		name = "Oka_doors_driver";
		displayName = "Dors driver";
		selection = "doors_driver";
		ghostIcon = "doorfront";
	};
	class Slot_oka_doors_codriver
	{
		name = "oka_doors_codriver";
		displayName = "Dors CoDrover";
		selection = "doors_codriver";
		ghostIcon = "doorfront";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class HatchbackWheel;
	class OffroadHatchback;
	class HatchbackDoors_Driver;
	class CarScript;
	class Crew;
	class Driver;
	class CoDriver;
	class CarDoor;
	class Front;
	class Rear;
	class Left;
	class Right;
	class AnimationSources;
	class SimulationModule;
	class Axles;
	class Wheels;
	class DamageSystem;
	class GlobalHealth;
	class DamageZones;
	class Window;
	class Health;
	class Doors;
	class CarWheel;
	class Bottle_Base;
	class SFP_Oka_Car: OffroadHatchback
	{
		scope = 2;
		displayName = "Oka Car";
		descriptionShort = "$STR_OffroadHatchback1";
		model = "\SFP\1_car\okaDrive\OkaDrive2.p3d";
		attachments[] = {"CarBattery","Reflector_1_1","Reflector_2_1","CarRadiator","SparkPlug","Oka_doors_codriver","Oka_doors_driver","OKAwheel_1_1","OKAwheel_1_2","OKAwheel_2_1","OKAwheel_2_2"};
		hiddenSelections[] = {"light_left","light_right","light_brake_1_2","light_brake_2_2","light_reverse_1_2","light_reverse_2_2","light_1_2","light_2_2","light_dashboard","dmgZone_chassis","dmgZone_front","dmgZone_back","dmgZone_roof","dmgZone_fender_1_1","dmgZone_fender_1_2","dmgZone_fender_2_1","dmgZone_fender_2_2"};
		hiddenSelectionsTextures[] = {"","","","","","","","","","","","","","","","","","",""};
		hiddenSelectionsMaterials[] = {"SFP\1_car\oka\data\Ok2\ok2_steklo_mat.rvmat","SFP\1_car\oka\data\Ok2\ok2_steklo_mat.rvmat","SFP\1_car\oka\data\Ok2\ok2_steklo_mat.rvmat","SFP\1_car\oka\data\Ok2\ok2_steklo_mat.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat","SFP\1_car\oka\data\Ok3\ok_salon_mat.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat","dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"};
		dashboardMatOn = "SFP\1_car\okaDrive\data\light\ok\dashboard_on.rvmat";
		dashboardMatOff = "SFP\1_car\oka\data\Ok3\ok_salon_mat.rvmat";
		frontReflectorMatOn = "SFP\1_car\okaDrive\data\light\ok\light_on.rvmat";
		frontReflectorMatOff = "SFP\1_car\oka\data\Ok2\ok2_steklo_mat.rvmat";
		brakeReflectorMatOn = "SFP\1_car\okaDrive\data\light\ok\brake_on.rvmat";
		brakeReflectorMatOff = "SFP\1_car\oka\data\Ok2\ok2_steklo_mat.rvmat";
		ReverseReflectorMatOn = "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights_e.rvmat";
		ReverseReflectorMatOff = "dz\vehicles\wheeled\offroadhatchback\data\offroadhatchback_lights.rvmat";
		TailReflectorMatOn = "dz\vehicles\wheeled\offroadhatchback\data\OffroadHatchback_lights_e.rvmat";
		TailReflectorMatOff = "dz\vehicles\wheeled\offroadhatchback\data\OffroadHatchback_lights.rvmat";
		fuelCapacity = 42;
		fuelConsumption = 11;
		class Crew: Crew
		{
			class Driver: Driver{};
			class CoDriver: CoDriver{};
			class Cargo1
			{
				actionSel = "seat_cargo1";
				proxyPos = "crewCargo1";
				getInPos = "pos_driver";
				getInDir = "pos_driver_dir";
			};
			class Cargo2
			{
				actionSel = "seat_cargo2";
				proxyPos = "crewCargo2";
				getInPos = "pos_coDriver";
				getInDir = "pos_coDriver_dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			drive = "DRIVE_AWD";
			centralDiffRatio = 1.45;
			airDragFrontTotal = 0.995;
			class Steering
			{
				increaseSpeed[] = {0,45,60,23,100,12};
				decreaseSpeed[] = {0,80,60,40,90,20};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 1;
				defaultThrust = 0.85;
				gentleThrust = 0.7;
				turboCoef = 4;
				gentleCoef = 0.75;
			};
			braking[] = {0,0.1,1,0.8,2.5,0.9,3,1};
			class Engine
			{
				inertia = 0.15;
				steepness = 1.5;
				torqueMax = 114;
				torqueRpm = 3400;
				powerMax = 53.7;
				powerRpm = 5400;
				rpmIdle = 850;
				rpmMin = 900;
				rpmClutch = 1350;
				rpmRedline = 6000;
				rpmMax = 8000;
			};
			class Gearbox
			{
				reverse = 3.526;
				ratios[] = {3.667,2.1,1.361,1};
				timeToUncoupleClutch = 0.3;
				timeToCoupleClutch = 0.45;
				maxClutchTorque = 260;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle = 30;
					finalRatio = 4.1;
					brakeBias = 0.6;
					brakeForce = 4000;
					wheelHubMass = 5;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 1700;
						stiffness = 40000;
						compression = 2100;
						damping = 7500;
						travelMaxUp = 0.0882;
						travelMaxDown = 0.0833;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_1";
							inventorySlot = "OKAwheel_1_1";
						};
						class Right: Right
						{
							animDamper = "damper_2_1";
							inventorySlot = "OKAwheel_2_1";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle = 0;
					finalRatio = 4.1;
					brakeBias = 0.4;
					brakeForce = 3800;
					wheelHubMass = 5;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 1800;
						stiffness = 40000;
						compression = 2200;
						damping = 7600;
						travelMaxUp = 0.1587;
						travelMaxDown = 0.1059;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							animDamper = "damper_1_2";
							inventorySlot = "OKAwheel_1_2";
						};
						class Right: Right
						{
							animDamper = "damper_2_2";
							inventorySlot = "OKAwheel_2_2";
						};
					};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,30};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
		class AnimationSources: AnimationSources
		{
			class SeatDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.8;
			};
			class SeatCoDriver
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.8;
			};
			class damper_1_1
			{
				source = "user";
				initPhase = 0.4857;
				animPeriod = 1;
			};
			class damper_2_1: damper_1_1{};
			class damper_1_2
			{
				source = "user";
				initPhase = 0.4002;
				animPeriod = 1;
			};
			class damper_2_2: damper_1_2{};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 10000;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
			class DamageZones
			{
				class Chassis
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_chassis"};
					class Health
					{
						hitpoints = 3000;
						transferToGlobalCoef = 0;
					};
					displayName = "$STR_CfgVehicleDmg_Chassis0";
					inventorySlots[] = {};
				};
				class Front
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_front"};
					componentNames[] = {"dmgZone_front"};
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicleDmg_Bumper0";
					transferToZonesNames[] = {"Fender_1_1","Fender_2_1","Engine"};
					transferToZonesCoefs[] = {0.3,0.3,0.4};
					inventorySlots[] = {"CarRadiator","OKAwheel_1_1","OKAwheel_2_1"};
					inventorySlotsCoefs[] = {0.7,0.5,0.4,0.4};
				};
				class Reflector_1_1
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_lights_1_1"};
					memoryPoints[] = {"dmgZone_lights_1_1"};
					class Health
					{
						hitpoints = 10;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\headlights_glass.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\glass_i_damage.rvmat"}},{0.3,{}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\glass_i_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicleDmg_Reflector0";
					transferToZonesNames[] = {"Front","Fender_1_1"};
					transferToZonesCoefs[] = {1,1};
					inventorySlots[] = {"Reflector_1_1","OKAwheel_1_1"};
					inventorySlotsCoefs[] = {1,0.3};
				};
				class Reflector_2_1: Reflector_1_1
				{
					memoryPoints[] = {"dmgZone_lights_2_1"};
					componentNames[] = {"dmgZone_lights_2_1"};
					transferToZonesNames[] = {"Front","Fender_2_1"};
					inventorySlots[] = {"Reflector_2_1","OKAwheel_2_1"};
				};
				class Back
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_back"};
					componentNames[] = {"dmgZone_back"};
					class Health
					{
						hitpoints = 1500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_damage.rvmat"}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicleDmg_Bumper0";
					transferToZonesNames[] = {"Fender_1_2","Fender_2_2","WindowLR","WindowRR"};
					transferToZonesCoefs[] = {0.3,0.3,0.1,0.1};
					inventorySlots[] = {"OKAwheel_1_2","OKAwheel_2_2"};
					inventorySlotsCoefs[] = {0.6,0.4,0.4};
				};
				class Roof
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_roof"};
					memoryPoints[] = {"dmgZone_roof"};
					class Health
					{
						hitpoints = 700;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicleDmg_Roof0";
					inventorySlotsCoefs[] = {};
					inventorySlots[] = {};
				};
				class Fender_1_1
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_fender_1_1"};
					memoryPoints[] = {"dmgZone_fender_1_1"};
					class Health
					{
						hitpoints = 1200;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_damage.rvmat"}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_body_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicleDmg_Fender0";
					transferToZonesNames[] = {"Front","Reflector_1_1","Engine"};
					transferToZonesCoefs[] = {0.3,0.6,0.2};
					inventorySlots[] = {"NivaHood","OKAwheel_1_1","Oka_doors_driver"};
					inventorySlotsCoefs[] = {0.5,0.7,0.3};
				};
				class Fender_2_1: Fender_1_1
				{
					memoryPoints[] = {"dmgZone_fender_2_1"};
					componentNames[] = {"dmgZone_fender_2_1"};
					transferToZonesNames[] = {"Front","Reflector_2_1","Engine"};
					transferToZonesCoefs[] = {0.3,0.6,0.2};
					inventorySlots[] = {"NivaHood","OKAwheel_2_1","Oka_doors_driver"};
					inventorySlotsCoefs[] = {0.5,0.7,0.3};
				};
				class Fender_1_2: Fender_1_1
				{
					memoryPoints[] = {"dmgZone_fender_1_2"};
					componentNames[] = {"dmgZone_fender_1_2"};
					transferToZonesNames[] = {"Back","FuelTank","WindowLR"};
					transferToZonesCoefs[] = {0.3,0.7,0.7};
					inventorySlots[] = {"NivaTrunk","OKAwheel_1_2","Oka_doors_driver"};
					inventorySlotsCoefs[] = {0.5,0.7,0.3};
				};
				class Fender_2_2: Fender_1_1
				{
					memoryPoints[] = {"dmgZone_fender_2_2"};
					componentNames[] = {"dmgZone_fender_2_2"};
					transferToZonesNames[] = {"Back","FuelTank","WindowRR"};
					transferToZonesCoefs[] = {0.3,0.7,0.7};
					inventorySlots[] = {"NivaTrunk","OKAwheel_2_2","Oka_doors_driver"};
					inventorySlotsCoefs[] = {0.5,0.7,0.3};
				};
				class WindowFront
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_windowFront"};
					componentNames[] = {"dmgZone_windowFront"};
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"}},{0,"hidden"}};
					};
					displayName = "$STR_CfgVehicleDmg_Window0";
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class WindowLR
				{
					fatalInjuryCoef = -1;
					memoryPoints[] = {"dmgZone_windowLeft"};
					componentNames[] = {"dmgZone_windowLeft"};
					class Health
					{
						hitpoints = 150;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"}},{0,"hidden"}};
					};
					displayName = "$STR_CfgVehicleDmg_Window0";
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
				class WindowRR: WindowLR
				{
					memoryPoints[] = {"dmgZone_windowRight"};
					componentNames[] = {"dmgZone_windowRight"};
				};
				class Engine
				{
					fatalInjuryCoef = 0.001;
					memoryPoints[] = {"dmgZone_engine"};
					componentNames[] = {"dmgZone_engine"};
					class Health
					{
						hitpoints = 10000;
						transferToGlobalCoef = 1;
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_damage.rvmat"}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\engine_niva_destruct.rvmat"}}};
					};
					displayName = "$STR_CfgVehicleDmg_Engine0";
					inventorySlots[] = {"CarBattery","SparkPlug"};
					inventorySlotsCoefs[] = {0.2,0.2};
				};
				class FuelTank
				{
					fatalInjuryCoef = -1;
					componentNames[] = {"dmgZone_fuelTank"};
					class Health
					{
						hitpoints = 500;
						transferToGlobalCoef = 0;
						healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
					};
					displayName = "$STR_CfgVehicleDmg_FuelTank0";
					inventorySlots[] = {};
					inventorySlotsCoefs[] = {};
				};
			};
		};
		class ObstacleGenerator
		{
			carve = 1;
			timeToStationary = 5;
			moveThreshold = 0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius = 1;
						height = 1.5;
						center[] = {0,0,0.7};
					};
					class Cyl3
					{
						radius = 1;
						height = 1.5;
						center[] = {0,0,-0.7};
					};
				};
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_engine";
				attachmentSlots[] = {"CarBattery","CarRadiator","SparkPlug"};
			};
			class Body
			{
				name = "$STR_attachment_Body0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_body";
				attachmentSlots[] = {"Reflector_1_1","Reflector_2_1","Oka_doors_driver","Oka_doors_codriver"};
			};
			class Chassis
			{
				name = "$STR_attachment_Chassis0";
				description = "";
				icon = "set:dayz_inventory image:cat_vehicle_chassis";
				attachmentSlots[] = {"OKAwheel_1_1","OKAwheel_1_2","OKAwheel_2_1","OKAwheel_2_2"};
			};
		};
	};
	class SFP_OkaWheel: CarWheel
	{
		scope = 2;
		displayName = "$STR_HatchbackWheel0";
		descriptionShort = "$STR_hatchbackwheel1";
		model = "\SFP\1_car\okaDrive\Proxy\OKAwheel_1_1.p3d";
		weight = 15000;
		inventorySlot[] = {"OKAwheel_1_1","OKAwheel_1_2","OKAwheel_2_1","OKAwheel_2_2"};
		rotationFlags = 4;
		repairableWithKits[] = {6};
		repairCosts[] = {30};
		radiusByDamage[] = {0,0.362,0.3,0.3,0.9998,0.25,0.9999,0.2};
		radius = 0.35;
		width = 0.18;
		tyreRollDrag = 5;
		tyreRollResistance = 0.015;
		tyreTread = 0.85;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"}},{0.7,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"}},{0.5,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_damage.rvmat"}},{0.3,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_damage.rvmat"}},{0,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFP_OkaWheel_ruined: SFP_OkaWheel
	{
		scope = 2;
		displayName = "$STR_HatchbackWheel0";
		descriptionShort = "$STR_hatchbackwheel1";
		model = "\SFP\1_car\okaDrive\Proxy\OKAwheel_ruined.p3d";
		weight = 14000;
		inventorySlot[] = {"OKAwheel_1_1","OKAwheel_1_2","OKAwheel_2_1","OKAwheel_2_2"};
		rotationFlags = 4;
		repairableWithKits[] = {6};
		repairCosts[] = {30};
		radiusByDamage[] = {0,0.362,0.3,0.3,0.9998,0.25,0.9999,0.2};
		radius = 0.35;
		width = 0.18;
		tyreRollDrag = 5;
		tyreRollResistance = 0.015;
		tyreTread = 0.85;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"}},{0.7,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"}},{0.5,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_damage.rvmat"}},{0.3,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_damage.rvmat"}},{0,{"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_destruct.rvmat"}}};
				};
			};
		};
	};
	class SFP_Oka_Doors: HatchbackDoors_Driver
	{
		scope = 2;
		displayName = "Oka Driver door";
		descriptionShort = "Oka Driver door";
		model = "\SFP\1_car\okaDrive\Proxy\Oka_doors_driver.p3d";
		weight = 15000;
		inventorySlot[] = {"Oka_doors_driver"};
		rotationFlags = 8;
		hiddenSelectionsMaterials[] = {"dz\vehicles\wheeled\OffroadHatchback\data\green\niva_door.rvmat"};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth{};
			class DamageZones: DamageZones
			{
				class Window: Window
				{
					class Health: Health
					{
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass.rvmat"}},{0.7,{}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\niva_glass_destruct.rvmat"}},{0,"hidden"}};
					};
				};
				class Doors: Doors
				{
					class Health: Health
					{
						RefTexsMats[] = {"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"};
						healthLevels[] = {{1,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"}},{0.7,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door.rvmat"}},{0.5,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_damage.rvmat"}},{0.3,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_damage.rvmat"}},{0,{"dz\vehicles\wheeled\offroadhatchback\data\green\niva_door_destruct.rvmat"}}};
					};
				};
			};
		};
	};
	class SFP_Oka_CoDoors: SFP_Oka_Doors
	{
		displayName = "CoDriver Doors";
		descriptionShort = "";
		model = "\SFP\1_car\okaDrive\Proxy\oka_doors_codriver.p3d";
		inventorySlot[] = {"Oka_doors_codriver"};
		rotationFlags = 4;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyVehiclePart: ProxyAttachment
	{
		scope = 2;
		simulation = "ProxyInventory";
		autocenter = 0;
		animated = 0;
		shadow = 1;
		reversed = 0;
	};
	class ProxyOKAwheel_1_1: ProxyVehiclePart
	{
		scope = 2;
		model = "SFP\1_car\okaDrive\Proxy\OKAwheel_1_1.p3d";
		inventorySlot[] = {"OKAwheel_1_1","OKAwheel_2_1","OKAwheel_1_2","OKAwheel_2_2"};
	};
	class ProxyOka_doors_driver: ProxyVehiclePart
	{
		scope = 2;
		model = "SFP\1_car\okaDrive\Proxy\Oka_doors_driver.p3d";
		inventorySlot[] = {"Oka_doors_driver"};
	};
	class ProxyOka_doors_codriver: ProxyVehiclePart
	{
		scope = 2;
		model = "SFP\1_car\okaDrive\Proxy\Oka_doors_codriver.p3d";
		inventorySlot[] = {"Oka_doors_codriver"};
	};
};
