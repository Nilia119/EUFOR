/* ------- Normal ------- */
class W_EUFOR_Uniform_Black: Uniform_Base
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
  };
};

class W_EUFOR_Uniform_Black1: Uniform_Base
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
  };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Black_Sleeves: W_EUFOR_Uniform_Black
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
  };
};
class W_EUFOR_Uniform_Black1_Sleeves: W_EUFOR_Uniform_Black
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
  };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Black_Shirt: W_EUFOR_Uniform_Black
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
  };
};

/* ------- Normal Tarn-Uniform------- */
class W_EUFOR_Uniform_Tarn_Black: Uniform_Base
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
  };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Tarn_Black_Sleeves: W_EUFOR_Uniform_Tarn_Black
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
  };
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Tarn_Black_Shirt: W_EUFOR_Uniform_Tarn_Black
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
  };
};