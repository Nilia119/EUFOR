/// Sample cfgPatches.hpp ///

class CfgPatches
{
	class EUFOR_Uniform
	{
        name = "$STR_EUFOR_Uniform_name";
		units[]=
		{
            "EUFOR_BW_Soldier",
            "EUFOR_soldat_Tropen",
            "EUFOR_soldat_Fleck",
            "EUFOR_soldat_Fleck1"
		};
		weapons[]=
		{
			"W_EUFOR_Uniform_Tropen",
            "W_EUFOR_Uniform_Fleck",
            "W_EUFOR_Uniform_Fleck1"
		};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
        author = "$STR_EUFOR_Uniform_Author";
        authorUrl = "https://www.eudef.eu";
        version = 0.0.1;
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
	};
};