/* ------- Normal ------- */
class EUFOR_Uniforms_Pol: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Pol";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\Pol\EUFOR_Pol_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Pol;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Pol: EUFOR_Uniforms_Pol {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Pol1: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Pol1";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\Pol\EUFOR_Pol1_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Pol1;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Pol1: EUFOR_Uniforms_Pol1 {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Pol_Sleeves: EUFOR_Uniforms_Pol
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Pol_Sleeves";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Pol_Sleeves;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Pol_Sleeves: EUFOR_Uniforms_Pol_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_Pol1_Sleeves: EUFOR_Uniforms_Pol1
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Pol1_Sleeves";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Pol1_Sleeves;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Pol1_Sleeves: EUFOR_Uniforms_Pol1_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Pol_Shirt: EUFOR_Uniforms_Pol
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Pol_Shirt";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol_T.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Pol_shirt;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Pol_Shirt: EUFOR_Uniforms_Pol_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Pol: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Tarn_Pol";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\Pol\EUFOR_Pol_Tarn_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_Pol;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Tarn_Pol: EUFOR_Uniforms_Tarn_Pol {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Pol_Sleeves: EUFOR_Uniforms_Tarn_Pol
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Tarn_Pol_Sleeves";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_Pol_Sleeves;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Tarn_Pol_Sleeves: EUFOR_Uniforms_Tarn_Pol_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Pol_Shirt: EUFOR_Uniforms_Tarn_Pol
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Tarn_Pol_Shirt";
	picture = "\EUFOR_Uniform\Pol\Icon_Pol_T.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_Pol_Shirt;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Tarn_Pol_Shirt: EUFOR_Uniforms_Tarn_Pol_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
	};
};