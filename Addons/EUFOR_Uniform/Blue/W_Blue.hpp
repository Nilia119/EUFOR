/* ------- Normal ------- */
class EUFOR_Uniforms_Blue: Uniform_Base
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Blue";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {"EUFOR_Uniform\Blue\EUFOR_Blue_Uniform_co.paa"};
  ace_fire_protection = 0.8;
  
  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Blue;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Blue: EUFOR_Uniforms_Blue {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Blue1: Uniform_Base
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Blue1";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {"EUFOR_Uniform\Blue\EUFOR_Blue1_Uniform_co.paa"};
  ace_fire_protection = 0.8;

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Blue1;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Blue1: EUFOR_Uniforms_Blue1 {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Blue_Sleeves: EUFOR_Uniforms_Blue
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Blue_Sleeves";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue_H.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Blue_Sleeves;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Blue_Sleeves: EUFOR_Uniforms_Blue_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Blue1_Sleeves: EUFOR_Uniforms_Blue1
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Blue1_Sleeves";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Blue1_Sleeves;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Blue1_Sleeves: EUFOR_Uniforms_Blue1_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Blue_Shirt: EUFOR_Uniforms_Blue
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Blue_Shirt";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Blue_shirt;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Blue_Shirt: EUFOR_Uniforms_Blue_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};

/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Blue: Uniform_Base
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Tarn_Blue";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {"EUFOR_Uniform\Blue\EUFOR_Blue_Tarn_Uniform_co.paa"};
  ace_fire_protection = 0.8;

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Blue;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Tarn_Blue: EUFOR_Uniforms_Tarn_Blue {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Blue_Sleeves: EUFOR_Uniforms_Tarn_Blue
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Tarn_Blue_Sleeves";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue_H.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Blue_Sleeves;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Tarn_Blue_Sleeves: EUFOR_Uniforms_Tarn_Blue_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Blue_Shirt: EUFOR_Uniforms_Tarn_Blue
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Tarn_Blue_Shirt";
  picture = "\EUFOR_Uniform\Blue\Icon_Blue_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Blue_Shirt;
    containerClass = Supply80;
    mass = 40;
  };
};
class W_EUFOR_Uniform_Tarn_Blue_Shirt: EUFOR_Uniforms_Tarn_Blue_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};