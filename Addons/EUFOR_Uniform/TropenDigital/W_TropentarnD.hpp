/* ------- Normal ------- */
class EUFOR_Uniforms_TropenD: Uniform_Base
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
        uniformClass = EUFOR_Soldat_TropenD;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tropen_Digital: EUFOR_Uniforms_TropenD {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_TropenD_Sleeves: EUFOR_Uniforms_TropenD
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tropen_Digital_Sleeves";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_TropenD_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tropen_Digital_Sleeves: EUFOR_Uniforms_TropenD_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_TropenD_Shirt: EUFOR_Uniforms_TropenD
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tropen_Digital_Shirt";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_TropenD_Shirt;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tropen_Digital_Shirt: EUFOR_Uniforms_TropenD_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_TropenD: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen_Digital";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\TropenDigital\EUFOR_Tropen_Tarn_Uniform_Digital_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_TropenD;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Tropen_Digital: EUFOR_Uniforms_Tarn_TropenD {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_TropenD_Sleeves: EUFOR_Uniforms_Tarn_TropenD
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen_Digital_Sleeves";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_TropenD_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Tropen_Digital_Sleeves: EUFOR_Uniforms_Tarn_TropenD_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_TropenD_Shirt: EUFOR_Uniforms_Tarn_TropenD
{
    author = "$STR_EUFOR_Uniform_Author";
    displayName = "$STR_EUFOR_Uniform_Tarn_Tropen_Digital_Shirt";
    picture = "\EUFOR_Uniform\TropenDigital\Icon_tropen_D_t.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_TropenD_Shirt;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Tropen_Digital_Shirt: EUFOR_Uniforms_Tarn_TropenD_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};