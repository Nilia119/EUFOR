/* ------- Normal ------- */
class EUFOR_Uniforms_Tropen: Uniform_Base
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tropen: EUFOR_Uniforms_Tropen {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tropen_Sleeves: EUFOR_Uniforms_Tropen
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tropen_Sleeves: EUFOR_Uniforms_Tropen_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tropen_Shirt: EUFOR_Uniforms_Tropen
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tropen_Shirt: EUFOR_Uniforms_Tropen_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Tropen: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen";
    picture = "\EUFOR_Uniform\Tropen\Icon_tropen.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Tropen\EUFOR_Tropen_Tarn_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Tropen;
        containerClass = Supply80;
        mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tarn_Tropen: EUFOR_Uniforms_Tarn_Tropen {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Tropen_Sleeves: EUFOR_Uniforms_Tarn_Tropen
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tarn_Tropen_Sleeves: EUFOR_Uniforms_Tarn_Tropen_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Tropen_Shirt: EUFOR_Uniforms_Tarn_Tropen
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
		modelSides[] = {0,1,2,3,4,5,6,7};
    };
};
class W_EUFOR_Uniform_Tarn_Tropen_Shirt: EUFOR_Uniforms_Tarn_Tropen_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};