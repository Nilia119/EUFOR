
/* ------- Normal Tarn------- */
class EUFOR_Soldat_Tarn_Multi: EUFOR_BW_Soldier
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Multitarn";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    uniformClass = "W_EUFOR_Uniform_Tarn_Multi";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
};
/* ------- Tarn Ärmel hoch ------- */
class EUFOR_Soldat_Tarn_Multi_Sleeves: EUFOR_BW_Soldier_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Multitarn hoch";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
    uniformClass = "W_EUFOR_Uniform_Tarn_Multi_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
};
/* ------- Tarn T-Shirt ------- */
class EUFOR_Soldat_Tarn_Multi_Shirt: EUFOR_BW_Soldier_Shirt
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Multitarn T-Shirt";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_02_F.p3d";
    uniformClass = "W_EUFOR_Uniform_Tarn_Multi_Shirt";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
};