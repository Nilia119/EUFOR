/* ------- Normal ------- */
class EUFOR_Soldat_Tropen_Digi: EUFOR_BW_Soldier
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tropentarn Digital";
    model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
    uniformClass = "W_EUFOR_Uniform_Tropen_Digi";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\TropenDigital\EUFOR_Tropen_Uniform_Digital_co.paa"};
};
/* ------- Ärmel hoch ------- */
class EUFOR_Soldat_Tropen_Digi_Sleeves: EUFOR_BW_Soldier_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tropentarn Digital hoch";
    model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    uniformClass = "W_EUFOR_Uniform_Tropen_Digi_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\TropenDigital\EUFOR_Tropen_Uniform_Digital_co.paa"};
};
/* ------- T-Shirt ------- */
class EUFOR_Soldat_Tropen_Digi_Shirt: EUFOR_BW_Soldier_Shirt
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tropentarn Digital hoch";
    model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    uniformClass = "W_EUFOR_Uniform_Tropen_Digi_Shirt";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\TropenDigital\EUFOR_Tropen_Uniform_Digital_co.paa"};
};
