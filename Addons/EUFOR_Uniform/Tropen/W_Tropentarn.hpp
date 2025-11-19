/* ------- Normal ------- */
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
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tropen;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Tropen_Sleeves: W_EUFOR_Uniform_Tropen
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tropen_Sleeves";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tropen_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Tropen_Shirt: W_EUFOR_Uniform_Tropen
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tropen_Shirt";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tropen_Shirt;
        containerClass = Supply80;
        mass = 40;
    };
};

/* ------- Normal Tarn-Uniform------- */
class W_EUFOR_Uniform_Tarn_Tropen: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Tropen;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Tarn_Tropen_Sleeves: W_EUFOR_Uniform_Tarn_Tropen
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen_Sleeves";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Tropen_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Tarn_Tropen_Shirt: W_EUFOR_Uniform_Tarn_Tropen
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen_Shirt";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Tropen_Shirt;
        containerClass = Supply80;
        mass = 40;
    };
};