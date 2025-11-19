/* ------- Normal ------- */
class W_EUFOR_Uniform_Tropen_Digital: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tropen_Digital";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\TropenDigital\EUFOR_Tropen_Uniform_Digital_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tropen_Digi;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Tropen_Digital_Sleeves: W_EUFOR_Uniform_Tropen_Digital
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tropen_Digital_Sleeves";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tropen_Digi_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Tropen_Digital_Shirt: W_EUFOR_Uniform_Tropen_Digital
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tropen_Digital_Shirt";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tropen_Digi_Shirt;
        containerClass = Supply80;
        mass = 40;
    };
};
