/* ------- Normal ------- */
class EUFOR_Uniforms_Multi: Uniform_Base
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
class W_EUFOR_Uniform_Multi: EUFOR_Uniforms_Multi {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Multi_Sleeves: EUFOR_Uniforms_Multi
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
class W_EUFOR_Uniform_Multi_Sleeves: EUFOR_Uniforms_Multi_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Multi_Shirt: EUFOR_Uniforms_Multi
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
class W_EUFOR_Uniform_Multi_Shirt: EUFOR_Uniforms_Multi_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Multi: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Multi";
    picture = "\EUFOR_Uniform\Multi\Icon_Multi.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Multi\EUFOR_Multi_Tarn_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Multi;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Multi: EUFOR_Uniforms_Tarn_Multi {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Multi_Sleeves: EUFOR_Uniforms_Tarn_Multi
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Multi_Sleeves";
    picture = "\EUFOR_Uniform\Multi\Icon_multi_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Multi_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Multi_Sleeves: EUFOR_Uniforms_Tarn_Multi_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Multi_Shirt: EUFOR_Uniforms_Tarn_Multi
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Multi_Shirt";
    picture = "\EUFOR_Uniform\Multi\Icon_multi_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Multi_Shirt;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Multi_Shirt: EUFOR_Uniforms_Tarn_Multi_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};