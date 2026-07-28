/* ------- Normal ------- */
class EUFOR_Uniforms_Black: Uniform_Base
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Black";
  picture = "\EUFOR_Uniform\Black\Icon_Black.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {"EUFOR_Uniform\Black\EUFOR_Black_Uniform_co.paa"};
  ace_fire_protection = 0.8;
  
  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Black;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
//  TODO: REMOVE OLD "W_EUFOR_Uniform_" Compatibility Classes in 1.7
class W_EUFOR_Uniform_Black: EUFOR_Uniforms_Black {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};

class EUFOR_Uniforms_Black1: Uniform_Base
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Black1";
  picture = "\EUFOR_Uniform\Black\Icon_Black.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {"EUFOR_Uniform\Black\EUFOR_Black1_Uniform_co.paa"};
  ace_fire_protection = 0.8;

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Black1;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};

class W_EUFOR_Uniform_Black1: EUFOR_Uniforms_Black1 {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Black_Sleeves: EUFOR_Uniforms_Black
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Black_Sleeves";
  //picture = "\EUFOR_Uniform\Black\Icon_Black_H.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Black_Sleeves;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
class W_EUFOR_Uniform_Black_Sleeves: EUFOR_Uniforms_Black_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Black1_Sleeves: EUFOR_Uniforms_Black1
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Black1_Sleeves";
  picture = "\EUFOR_Uniform\Black\Icon_Black_H.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Black1_Sleeves;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
class W_EUFOR_Uniform_Black1_Sleeves: EUFOR_Uniforms_Black1_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Black_Shirt: EUFOR_Uniforms_Black
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Black_Shirt";
  picture = "\EUFOR_Uniform\Black\Icon_Black_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Black_shirt;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
class W_EUFOR_Uniform_Black_Shirt: EUFOR_Uniforms_Black_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Black: Uniform_Base
{
  author = "$STR_EUFOR_Uniform_Author";
  scope = 2;
  scopeArsenal = 2;
  displayName = "$STR_EUFOR_Uniform_Tarn_Black";
  picture = "\EUFOR_Uniform\Black\Icon_Black.paa";
  model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
  hiddenSelections[] = {"camo", "insignia"};
  hiddenSelectionsTextures[] = {"EUFOR_Uniform\Black\EUFOR_Black_Tarn_Uniform_co.paa"};
  ace_fire_protection = 0.8;

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Black;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
class W_EUFOR_Uniform_Tarn_Black: EUFOR_Uniforms_Tarn_Black {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Black_Sleeves: EUFOR_Uniforms_Tarn_Black
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Tarn_Black_Sleeves";
  picture = "\EUFOR_Uniform\Black\Icon_Black_H.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Black_Sleeves;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
class W_EUFOR_Uniform_Tarn_Black_Sleeves: EUFOR_Uniforms_Tarn_Black_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Black_Shirt: EUFOR_Uniforms_Tarn_Black
{
  author = "$STR_EUFOR_Uniform_Author";
  displayName = "$STR_EUFOR_Uniform_Tarn_Black_Shirt";
  picture = "\EUFOR_Uniform\Black\Icon_Black_T.paa";

  class ItemInfo: UniformItem
  {
    uniformModel = "-";
    uniformClass = EUFOR_Soldat_Tarn_Black_Shirt;
    containerClass = Supply80;
    mass = 40;
	modelSides[] = {0,1,2,3,4,5,6,7};
  };
};
class W_EUFOR_Uniform_Tarn_Black_Shirt: EUFOR_Uniforms_Tarn_Black_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
};