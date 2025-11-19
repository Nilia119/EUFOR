/* ------- Normal ------- */
class W_EUFOR_Uniform_Multi: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Multitarn";
    picture = "\EUFOR_Uniform\Multi\Icon_Multi.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Multi;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Multi_Sleeves: W_EUFOR_Uniform_Multi
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Multitarn_Sleeves";
    picture = "\EUFOR_Uniform\Multi\Icon_Multi_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Multi_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Multi_Shirt: W_EUFOR_Uniform_Multi
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Multitarn_Shirt";
    picture = "\EUFOR_Uniform\Multi\Icon_Multi_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Multi_shirt;
        containerClass = Supply80;
        mass = 40;
    };
};
