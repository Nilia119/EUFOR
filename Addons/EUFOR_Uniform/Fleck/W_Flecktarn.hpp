/* ------- Normal ------- */
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
        uniformClass = EUFOR_Soldat_Fleck;
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
        uniformClass = EUFOR_Soldat_Fleck1;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Fleck_Sleeves: W_EUFOR_Uniform_Fleck
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Flecktarn_Sleeves";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Fleck_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};

class W_EUFOR_Uniform_Fleck1_Sleeves: W_EUFOR_Uniform_Fleck1
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Flecktarn_1_Sleeves";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_h.paa";
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Fleck1_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Fleck_Shirt: W_EUFOR_Uniform_Fleck
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Flecktarn_Shirt";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Fleck_shirt;
        containerClass = Supply80;
        mass = 40;
    };
};

class W_EUFOR_Uniform_Fleck1_Shirt: W_EUFOR_Uniform_Fleck1
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Flecktarn1_Shirt";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Fleck1_shirt;
        containerClass = Supply80;
        mass = 40;
    };
};
