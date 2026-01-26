class CfgPatches {
	class EUFOR_Interaction_Menu {
		name = "$STR_EUFOR_Interactions_Name";
		units[] = {};
		requiredAddons[] = {
                    "EUFOR_ACE_Compat"
                };
                skipWhenMissingDependencies = 1;    // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error
		author = "$STR_EUFOR_Interactions_Author";
		authorUrl = "https://www.eudef.eu";
		version = 0.0.1;
		versionStr = "0.0.1";
		versionAr[] = {0,0,1};
        weapons[] = {};			 //Nichts solange cfgWeapons.hpp in die Config.cpp geladen wird
        magazines[] = { };
	};
};