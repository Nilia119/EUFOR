	class B_CTRG_Soldier_F;				// For inheritance to work, the base class has to be defined.


    class EUFOR_BW_Soldier: B_CTRG_Soldier_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;

    };
	
	/* =============================Tropen=============================================== */
	class EUFOR_soldat_Tropen: EUFOR_BW_Soldier	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
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

    class EUFOR_soldat_Tropen_Digi: EUFOR_BW_Soldier	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "$STR_EUFOR_Uniform_Author";			// The name of the author of the asset, which is displayed in the editor.
        scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldat Tropentarn Digital";		// The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
        uniformClass = "W_EUFOR_Uniform_Tropen_Digi";							// This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","insignia"};								// List of model selections which can be changed with hiddenSelectionTextures[]
        // and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_Digi_co.paa"};	// The textures for the selections defined above.
        // If empty, no texture is used.
    };

    /* ============================Fleck====================================================== */
    class EUFOR_soldat_Fleck: EUFOR_BW_Soldier	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "$STR_EUFOR_Uniform_Author";			// The name of the author of the asset, which is displayed in the editor.
        scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldat Flecktarn";		// The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
        uniformClass = "W_EUFOR_Uniform_Fleck";							// This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","insignia"};								// List of model selections which can be changed with hiddenSelectionTextures[]
        // and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform_co.paa"};	// The textures for the selections defined above.
        //hiddenSelectionsMaterials[] = {"Uniform\Fleck\EUFOR_Fleck_Uniform.rvmat"};
        // If empty, no texture is used.

    };

    class EUFOR_soldat_Fleck1: EUFOR_BW_Soldier	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "$STR_EUFOR_Uniform_Author";		// The name of the author of the asset, which is displayed in the editor.
        scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldat Flecktarn 1";		// The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
        uniformClass = "W_EUFOR_Uniform_Fleck1";							// This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","insignia"};								// List of model selections which can be changed with hiddenSelectionTextures[]
        // and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform1_co.paa"};	// The textures for the selections defined above.
        //hiddenSelectionsMaterials[] = {"Uniform\Fleck\EUFOR_Fleck_Uniform.rvmat"};
        // If empty, no texture is used.

    };

    /* ============================Schnee====================================================== */

    class EUFOR_soldat_Schnee: EUFOR_BW_Soldier	// Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "$STR_EUFOR_Uniform_Author";		// The name of the author of the asset, which is displayed in the editor.
        scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 0;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};		// Identity Types are explained in the Headgear section of this guide.
        displayName = "Soldat Schneetarn";		// The name of the soldier, which is displayed in the editor.
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";			// The path to the model this character uses.
        uniformClass = "W_EUFOR_Uniform_Schnee";							// This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo","insignia"};								// List of model selections which can be changed with hiddenSelectionTextures[]
        // and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Uniform_co.paa"};	// The textures for the selections defined above.

    };
