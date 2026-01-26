class CfgPatches {
    class EUFOR_ACE_Compat {
        name = "STR_EUFOR_ACE_Compat_name";
        requiredAddons[] = {
            "ace_wardrobe",
            "ace_hearing",
            "ace_logistics_wirecutter",
            "ace_trenches",
            "EUFOR_Uniform",
            "EUFOR_Helmets",
            "EUFOR_Backpacks"
        };
        skipWhenMissingDependencies = 1;    // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error
        author = "STR_EUFOR_ACE_Compat_Author";
        authorUrl = "https://www.eudef.eu";
        version = 0.0.1;
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
        units[] = {};
        weapons[] = {};
        magazines[] = { };
    };
};
