
//==================================================================================================
//Class Parents names (Where to copy assets from (Base game)
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
// class ItemInfo; gehört hier nicht rein, gibt es nicht! = Error no entry iteninfo.scope

//==================================================================================================
//Class Custom Class
//Uniformen
//Tatsächliche Uniform als Item hier werden die Einstellungen für die Uniformen getätigt

    /* =======================================TROPEN======================================= */

	class W_EUFOR_Uniform_Tropen: Uniform_Base
	{
        author = "$STR_EUFOR_Uniform_Author";
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_EUFOR_Uniform_Tropen";
		picture = "\EUFOR_Uniform\Tropen\Icon_tropen.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_co.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = EUFOR_soldat_Tropen;
			containerClass = Supply80;
			mass = 40;
		};
	};

class W_EUFOR_Uniform_Tropen_Digital: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tropen_Digital";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_Digi_co.paa"};

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_soldat_Tropen_Digi;
        containerClass = Supply80;
        mass = 40;
    };
};

    /* ======================================FLECK======================================== */

class W_EUFOR_Uniform_Fleck: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Flecktarn";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform_co.paa"};

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_soldat_Fleck;
        containerClass = Supply80;
        mass = 40;
    };
};

class W_EUFOR_Uniform_Fleck1: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Flecktarn_1";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Uniform1_co.paa"};

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_soldat_Fleck1;
        containerClass = Supply80;
        mass = 40;
    };
};

/* ======================================SCHNEE======================================== */

class W_EUFOR_Uniform_Schnee: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Schneetarn";
    picture = "\EUFOR_Uniform\Schnee\Icon_schnee.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Uniform_co.paa"};

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_soldat_Schnee;
        containerClass = Supply80;
        mass = 40;
    };
};