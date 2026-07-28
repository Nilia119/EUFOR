/* ------- Normal ------- */
class EUFOR_Uniforms_Fleck: Uniform_Base
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Fleck: EUFOR_Uniforms_Fleck {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Fleck1: Uniform_Base
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Fleck1: EUFOR_Uniforms_Fleck1 {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Fleck_Sleeves: EUFOR_Uniforms_Fleck
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Fleck_Sleeves: EUFOR_Uniforms_Fleck_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Fleck1_Sleeves: EUFOR_Uniforms_Fleck1
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Fleck1_Sleeves: EUFOR_Uniforms_Fleck1_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Fleck_Shirt: EUFOR_Uniforms_Fleck
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Flecktarn_Shirt";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Fleck_Shirt;
        containerClass = Supply80;
        mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Fleck_Shirt: EUFOR_Uniforms_Fleck_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Fleck1_Shirt: EUFOR_Uniforms_Fleck1
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Flecktarn1_Shirt";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Fleck1_Shirt;
        containerClass = Supply80;
        mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Fleck1_Shirt: EUFOR_Uniforms_Fleck1_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Fleck: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Fleck";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Fleck\EUFOR_Fleck_Tarn_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Fleck;
        containerClass = Supply80;
        mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tarn_Fleck: EUFOR_Uniforms_Tarn_Fleck {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Fleck_Sleeves: EUFOR_Uniforms_Tarn_Fleck
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Fleck_Sleeves";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Fleck_Sleeves;
        containerClass = Supply80;
        mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tarn_Fleck_Sleeves: EUFOR_Uniforms_Tarn_Fleck_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Fleck_Shirt: EUFOR_Uniforms_Tarn_Fleck
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Fleck_Shirt";
    picture = "\EUFOR_Uniform\Fleck\Icon_fleck_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Fleck_Shirt;
        containerClass = Supply80;
        mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tarn_Fleck_Shirt: EUFOR_Uniforms_Tarn_Fleck_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};