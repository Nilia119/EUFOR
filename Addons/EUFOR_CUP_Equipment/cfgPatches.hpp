class CfgPatches {
    class EUFOR_CUP_Equipment {
        name = "STR_EUFOR_CUP_Equipment";
        requiredAddons[] = {
            "EUFOR_Backpacks",
            "CUP_Weapons_Backpacks"
        };
        skipWhenMissingDependencies = 1;    // Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error
        author = "STR_EUFOR_CUP_Equipment_Author";
        authorUrl = "https://www.eudef.eu";
        version = 0.0.1;
        versionStr = "0.0.1";
        versionAr[] = {0,0,1};
        units[] = {
                "EUFOR_Backpacks_PredatorRadio_Base",
                "EUFOR_Backpacks_Predator_Base",

                "EUFOR_Backpacks_Predator_Fleck",
                "EUFOR_Backpacks_PredatorRadio_Fleck",

                "EUFOR_Backpacks_Predator_Multi",
                "EUFOR_Backpacks_PredatorRadio_Multi",

                "EUFOR_Backpacks_Predator_Schnee",
                "EUFOR_Backpacks_PredatorRadio_Schnee",

                "EUFOR_Backpacks_Predator_Tropen",
                "EUFOR_Backpacks_PredatorRadio_Tropen",

                "EUFOR_Backpacks_Predator_TropenD",
                "EUFOR_Backpacks_PredatorRadio_TropenD"
            };
        weapons[] = {};
        magazines[] = { };
    };
};
