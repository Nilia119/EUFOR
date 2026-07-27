/* ------- Normal ------- */
class EUFOR_Soldat_Multi: EUFOR_Soldat
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Multitarn";
    model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
    uniformClass = "EUFOR_Uniforms_Multi";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Uniform_co.paa"};

};
/* ------- Ärmel hoch ------- */
class EUFOR_Soldat_Multi_Sleeves: EUFOR_Soldat_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Multitarn ärmel";
    model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    uniformClass = "EUFOR_Uniforms_Multi_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Uniform_co.paa"};

};
/* ------- T-Shirt ------- */
class EUFOR_Soldat_Multi_Shirt: EUFOR_Soldat_Shirt
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Multitarn T-Shirt";
    model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    uniformClass = "EUFOR_Uniforms_Multi_Shirt";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Uniform_co.paa"};
};

/* ------- Normal Tarn------- */
class EUFOR_Soldat_Tarn_Multi: EUFOR_Soldat
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Multitarn";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    uniformClass = "EUFOR_Uniforms_Tarn_Multi";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
};
/* ------- Tarn Ärmel hoch ------- */
class EUFOR_Soldat_Tarn_Multi_Sleeves: EUFOR_Soldat_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Multitarn hoch";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
    uniformClass = "EUFOR_Uniforms_Tarn_Multi_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
};
/* ------- Tarn T-Shirt ------- */
class EUFOR_Soldat_Tarn_Multi_Shirt: EUFOR_Soldat_Shirt
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Multitarn T-Shirt";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_02_F.p3d";
    uniformClass = "EUFOR_Uniforms_Tarn_Multi_Shirt";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
};