/// Sample cfgPatches.hpp ///

class CfgPatches
{
	class Nilia_BW2035_Uniform
	{
        name = "$STR_BW2035_Uniform_name";
		units[]=
		{
            "BW2035_BW_Soldier",
            "BW2035_soldat_Tropen",
            "BW2035_soldat_Fleck",
            "BW2035_soldat_Fleck1"
		};
		weapons[]=
		{
			"W_BW2035_Uniform_Tropen",
            "W_BW2035_Uniform_Fleck",
            "W_BW2035_Uniform_Fleck1"
		};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
        author = "Nilia";
        authorUrl = "https://www.eudef.eu";
        version = 0.0.1;
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
	};
};