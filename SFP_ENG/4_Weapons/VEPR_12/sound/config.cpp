class CfgPatches
{
	class DZ_Sounds_Effects
	{
		units[] = {"Sound_Owl","Sound_Stream","Sound_Frog","Sound_Frogs","Sound_Alarm","Sound_Alarm2","Sound_Fire","Sound_BirdSinging","Sound_Crickets1","Sound_Crickets2","Sound_Crickets3","Sound_Crickets4","Sound_Chicken","Sound_Cock","Sound_Cow","Sound_Crow","Sound_Wolf","Sound_Dog","Sound_BadDog","Sound_SorrowDog","Sound_LittleDog","Sound_Music","Sound_Factory01","Sound_Factory02","Sound_Factory03","Sound_Factory04","Sound_Factory05","Sound_Factory06","Sound_Factory07","Sound_Factory08","Sound_Factory09","Sound_Factory10","Sound_Factory11","Sound_Factory12","Sound_Factory13","Sound_Factory14","Sound_Factory15","Sound_Factory16","Sound_Factory17","Sound_Factory18","Sound_Flies"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Vehicles_Wheeled"};
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class SFP_vepr12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"SFP_vepr12_Shot_SoundShader"};
	};
};
class CfgSoundShaders
{
	class SFP_vepr12_Shot_SoundShader
	{
		samples[] = {{"SFP\4_Weapons\VEPR_12\sound\shot1",0.825},{"SFP\4_Weapons\VEPR_12\sound\shot2",0.825},{"SFP\4_Weapons\VEPR_12\sound\shot3",0.825}};
		volume = 1.1;
		range = 575;
	};
};
