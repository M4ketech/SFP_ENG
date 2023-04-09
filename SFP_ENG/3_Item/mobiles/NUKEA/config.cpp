class CfgPatches
{
	class DZ_Gear_Tools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Powered_Base;
	class Flashlight;
	class SFP_Mobile_NUKEA: Flashlight
	{
		scope = 2;
		displayName = "Mobile Phone";
		descriptionShort = "Normal push-button cell phone. Sim card is inserted, no battery, but can be found. The phone has a built-in flashlight.";
		model = "\SFP\3_Item\mobiles\NUKEA\NUKEA.p3d";
		rotationFlags = 34;
		itemSize[] = {1,1};
		weight = 210;
		animClass = "Pistol";
		hiddenSelections[] = {"zbytek","reflector","glass","reflector_far"};
		hiddenSelectionsTextures[] = {"dz\gear\tools\data\flashlight_old_co.paa","dz\gear\tools\data\flashlight_old_co.paa","dz\gear\tools\data\flashlight_glass.paa","dz\gear\tools\data\flashlight_old_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\tools\data\flashlight_old.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 70;
					healthLevels[] = {{1,{"DZ\gear\tools\data\flashlight_old.rvmat"}},{0.7,{"DZ\gear\tools\data\flashlight_old.rvmat"}},{0.5,{"DZ\gear\tools\data\flashlight_old_damage.rvmat"}},{0.3,{"DZ\gear\tools\data\flashlight_old_damage.rvmat"}},{0,{"DZ\gear\tools\data\flashlight_old_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {5,7};
		repairCosts[] = {30,25};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 9.9999e-06;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 30;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Attack_flashlight_Light1
				{
					soundSet = "Char_Attack_pipemetal_light1_SoundSet";
					id = 806;
				};
				class Attack_flashlight_Light2
				{
					soundSet = "Char_Attack_pipemetal_light2_SoundSet";
					id = 807;
				};
				class Attack_flashlight_Heavy1
				{
					soundSet = "Char_Attack_pipemetal_heavy1_SoundSet";
					id = 808;
				};
				class Attack_flashlight_Heavy2
				{
					soundSet = "Char_Attack_pipemetal_heavy2_SoundSet";
					id = 809;
				};
			};
		};
	};
};
