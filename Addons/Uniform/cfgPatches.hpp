/// Sample cfgPatches.hpp ///

class CfgPatches
{
	class A3_MyAddon
	{
		units[]=
		{
			"BW2035_soldat_Tropen",
            "BW2035_soldat_Tropen_1",
            "BW2035_soldat_Fleck"
		};
		weapons[]=
		{
			"W_BW2035_Uniform_Tropen",
            "W_BW2035_Uniform_Tropen_1",
            "W_BW2035_Uniform_Fleck"
		};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
	};
};