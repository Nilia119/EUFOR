/* ------- Normal ------- */
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
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Schnee;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Schnee_Sleeves: W_EUFOR_Uniform_Schnee
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Schneetarn_Sleeves";
    picture = "\EUFOR_Uniform\Schnee\Icon_schnee_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Schnee_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};

/* ------- Normal Tarn-Uniform------- */
class W_EUFOR_Uniform_Tarn_Schnee: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Schneetarn";
    picture = "\EUFOR_Uniform\Schnee\Icon_schnee.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Schnee;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Normal ------- */
class W_EUFOR_Uniform_Tarn_Schnee_Sleeves: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Schneetarn_Sleeves";
    picture = "\EUFOR_Uniform\Schnee\Icon_schnee.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Schnee_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};