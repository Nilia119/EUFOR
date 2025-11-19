/* ------- Normal ------- */

class EUFOR_Soldat_Tropen: EUFOR_BW_Soldier	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
{
    author = "$STR_EUFOR_Uniform_Author";			// The name of the author of the asset, which is displayed in the editor.
    scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
    scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
    scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
    displayName = "Soldat Tropentarn";		// The name of the soldier, which is displayed in the editor.
    model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
    uniformClass = "W_EUFOR_Uniform_Tropen";							// This links this soldier to a particular uniform. For the details, see below.
    hiddenSelections[] = {"camo","insignia"};								// List of model selections which can be changed with hiddenSelectionTextures[]
    // and hiddenSelectionMaterials[] properties. If empty, model textures are used.
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_co.paa"};	// The textures for the selections defined above.
    // If empty, no texture is used.
};

/* ------- Ärmel hoch ------- */

class EUFOR_Soldat_Tropen_Sleeves: EUFOR_BW_Soldier_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tropentarn hoch";
    model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
    uniformClass = "W_EUFOR_Uniform_Tropen_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_co.paa"};
};

/* ------- T-Shirt ------- */

class EUFOR_Soldat_Tropen_Shirt: EUFOR_BW_Soldier_Shirt
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tropentarn T-Shirt";
    model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
    uniformClass = "W_EUFOR_Uniform_Tropen_Shirt";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_co.paa"};
};

/* ------- Normal Tarn------- */
class EUFOR_Soldat_Tarn_Tropen: EUFOR_BW_Soldier
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Tropentarn";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
    uniformClass = "W_EUFOR_Uniform_Tarn_Tropen";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Tarn_Uniform_co.paa"};
};
/* ------- Tarn Ärmel hoch ------- */
class EUFOR_Soldat_Tarn_Tropen_Sleeves: EUFOR_BW_Soldier_Sleeves
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Tropentarn hoch";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_03_F.p3d";
    uniformClass = "W_EUFOR_Uniform_Tarn_Tropen_Sleeves";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Tarn_Uniform_co.paa"};
};
/* ------- Tarn T-Shirt ------- */
class EUFOR_Soldat_Tarn_Tropen_Shirt: EUFOR_BW_Soldier_Shirt
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 1;
    scopeCurator = 0;
    scopeArsenal = 2;
    identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
    displayName = "Soldat Tarnuniform Tropentarn T-Shirt";
    model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_02_F.p3d";
    uniformClass = "W_EUFOR_Uniform_Tarn_Tropen_Shirt";
    hiddenSelections[] = {"camo","insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Tarn_Uniform_co.paa"};
};