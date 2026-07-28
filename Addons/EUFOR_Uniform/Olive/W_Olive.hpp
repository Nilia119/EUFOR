/* ------- Normal ------- */
class EUFOR_Uniforms_Olive: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Olive";
	picture = "\EUFOR_Uniform\Olive\Icon_Olive.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\Olive\EUFOR_Olive_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Olive;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Olive: EUFOR_Uniforms_Olive {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Olive_Sleeves: EUFOR_Uniforms_Olive
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Olive_Sleeves";
	picture = "\EUFOR_Uniform\Olive\Icon_Olive_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Olive_Sleeves;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Olive_Sleeves: EUFOR_Uniforms_Olive_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Olive_Shirt: EUFOR_Uniforms_Olive
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Olive_Shirt";
	picture = "\EUFOR_Uniform\Olive\Icon_Olive_T.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Olive_shirt;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Olive_Shirt: EUFOR_Uniforms_Olive_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_Olive: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Tarn_Olive";
	picture = "\EUFOR_Uniform\Olive\Icon_Olive.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\Olive\EUFOR_Olive_Tarn_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_Olive;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Tarn_Olive: EUFOR_Uniforms_Tarn_Olive {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Olive_Sleeves: EUFOR_Uniforms_Tarn_Olive
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Tarn_Olive_Sleeves";
	picture = "\EUFOR_Uniform\Olive\Icon_Olive_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_Olive_Sleeves;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Tarn_Olive_Sleeves: EUFOR_Uniforms_Tarn_Olive_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_Olive_Shirt: EUFOR_Uniforms_Tarn_Olive
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Tarn_Olive_Shirt";
	picture = "\EUFOR_Uniform\Olive\Icon_Olive_T.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_Olive_Shirt;
		containerClass = Supply80;
		mass = 40;
		modelSides[] = {0,1,2,3,4,5,6,7};
	};
};
class W_EUFOR_Uniform_Tarn_Olive_Shirt: EUFOR_Uniforms_Tarn_Olive_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
	};
};