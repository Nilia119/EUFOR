	class B_CTRG_Soldier_F;				// For inheritance to work, the base class has to be defined.
    class B_CTRG_Soldier_2_F;
    class B_CTRG_Soldier_3_F;


    class EUFOR_BW_Soldier: B_CTRG_Soldier_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;

    };

    class EUFOR_BW_Soldier_Shirt: B_CTRG_Soldier_2_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;

    };

    class EUFOR_BW_Soldier_Sleeves: B_CTRG_Soldier_3_F {

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

    class EUFOR_soldat_Tropen_Digi: EUFOR_BW_Soldier
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
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_Digi_co.paa"};
    };

    /* ------- Ärmel hoch ------- */

    class EUFOR_soldat_Tropen_Sleeves: EUFOR_BW_Soldier_Sleeves
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

    class EUFOR_soldat_Tropen_Digi_Sleeves: EUFOR_BW_Soldier_Sleeves
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
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_Digi_co.paa"};
    };

    /* ------- T-Shirt ------- */

    class EUFOR_soldat_Tropen_Shirt: EUFOR_BW_Soldier_Shirt
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

    class EUFOR_soldat_Tropen_Digi_Shirt: EUFOR_BW_Soldier_Shirt
    {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
        displayName = "Soldat Tropentarn Digital hoch";
        model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
        uniformClass = "W_EUFOR_Uniform_Tropen_Digi_Shirt";
        hiddenSelections[] = {"camo","insignia"}
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_Digi_co.paa"};
    };

    /* ============================Fleck====================================================== */
    class EUFOR_soldat_Fleck: EUFOR_BW_Soldier
    {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
        displayName = "Soldat Flecktarn";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass = "W_EUFOR_Uniform_Fleck";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform_co.paa"};
        //hiddenSelectionsMaterials[] = {"Uniform\Fleck\EUFOR_Fleck_Uniform.rvmat"};

    };

    class EUFOR_soldat_Fleck1: EUFOR_BW_Soldier
    {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
        displayName = "Soldat Flecktarn 1";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass = "W_EUFOR_Uniform_Fleck1";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform1_co.paa"};
        //hiddenSelectionsMaterials[] = {"Uniform\Fleck\EUFOR_Fleck_Uniform.rvmat"};

    };

    /* ------- Ärmel hoch ------- */

    class EUFOR_soldat_Fleck_Sleeves: EUFOR_BW_Soldier_Sleeves
    {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
        displayName = "Soldat Flecktarn hoch";
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        uniformClass = "W_EUFOR_Uniform_Fleck_Sleeves";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform_co.paa"};

    };

    class EUFOR_soldat_Fleck1_Sleeves: EUFOR_BW_Soldier_Sleeves
    {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
        displayName = "Soldat Flecktarn 1 hoch";
        model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
        uniformClass = "W_EUFOR_Uniform_Fleck1_Sleeves";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform1_co.paa"};

    };

    /* ============================Schnee====================================================== */

    class EUFOR_soldat_Schnee: EUFOR_BW_Soldier
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

    /* ============================Multi====================================================== */

    class EUFOR_soldat_Multi: EUFOR_BW_Soldier
    {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};
        displayName = "Soldat Multitarn";
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
        uniformClass = "W_EUFOR_Uniform_Multi";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Uniform_co.paa"};

    };
