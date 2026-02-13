class CfgPatches {
    class EUFOR_ACEAX_Compat {
        name = "$STR_EUFOR_ACEAX_Compat_name";
        requiredAddons[] = {
            "aceax_gearinfo",
            "EUFOR_Uniform",
            "EUFOR_Backpacks"
        };
        author = "$STR_EUFOR_ACEAX_Compat_Author";
        authorUrl = "https://www.eudef.eu";
        skipWhenMissingDependencies = 1;    // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error
        version = 0.0.1;
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
        units[] = {};
        weapons[] = {};
        magazines[] = { };
    };
};
