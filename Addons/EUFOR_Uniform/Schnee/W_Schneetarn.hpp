/* ------- Normal ------- */
class EUFOR_Uniforms_Schnee: Uniform_Base
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
class W_EUFOR_Uniform_Schnee: EUFOR_Uniforms_Schnee {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Schnee_Sleeves: EUFOR_Uniforms_Schnee
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
class W_EUFOR_Uniform_Schnee_Sleeves: EUFOR_Uniforms_Schnee_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Schnee_Shirt: EUFOR_Uniforms_Schnee
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Schneetarn_Shirt";
  picture = "\EUFOR_Uniform\Schnee\Icon_schnee_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Schnee_Shirt;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Schnee_Shirt: EUFOR_Uniforms_Schnee_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Schnee: Uniform_Base
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Schneetarn";
    picture = "\EUFOR_Uniform\Schnee\Icon_schnee.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"EUFOR_Uniform\Schnee\EUFOR_Schnee_Tarn_Uniform_co.paa"};
    ace_fire_protection = 0.8;

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Schnee;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Schnee: EUFOR_Uniforms_Tarn_Schnee {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Schnee_Sleeves: EUFOR_Uniforms_Tarn_Schnee
{
    author = "$STR_EUFOR_Uniform_Author";
    scope = 2;
    scopeArsenal = 2;
    displayName = "$STR_EUFOR_Uniform_Tarn_Schneetarn_Sleeves";
    picture = "\EUFOR_Uniform\Schnee\Icon_schnee_h.paa";

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = EUFOR_Soldat_Tarn_Schnee_Sleeves;
        containerClass = Supply80;
        mass = 40;
    };
};
class W_EUFOR_Uniform_Tarn_Schnee_Sleeves: EUFOR_Uniforms_Tarn_Schnee_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Schnee_Shirt: EUFOR_Uniforms_Tarn_Schnee
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Tarn_Schneetarn_Shirt";
  picture = "\EUFOR_Uniform\Schnee\Icon_schnee_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Schnee_Shirt;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Tarn_Schnee_Shirt: EUFOR_Uniforms_Tarn_Schnee_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};