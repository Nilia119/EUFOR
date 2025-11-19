/* ------- Normal ------- */
class EUFOR_Soldat_Schnee: EUFOR_BW_Soldier
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Schneetarn";
    model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
    uniformClass = "W_EUFOR_Uniform_Schnee";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Uniform_co.paa"};
};

/* ------- Ärmel hoch ------- */
class EUFOR_Soldat_Schnee_Sleeves: EUFOR_BW_Soldier_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Schneetarn ärmel";
    model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    uniformClass = "W_EUFOR_Uniform_Schnee_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Uniform_co.paa"};

};
