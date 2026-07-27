/* ------- Normal ------- */
class EUFOR_Uniforms_EMR: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_EMR";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\EMR\EUFOR_EMR_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_EMR;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_EMR: EUFOR_Uniforms_EMR {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_EMR1: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_EMR1";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\EMR\EUFOR_EMR1_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_EMR1;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_EMR1: EUFOR_Uniforms_EMR1 {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_EMR_Sleeves: EUFOR_Uniforms_EMR
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_EMR_Sleeves";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_EMR_Sleeves;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_EMR_Sleeves: EUFOR_Uniforms_EMR_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
class EUFOR_Uniforms_EMR1_Sleeves: EUFOR_Uniforms_EMR1
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_EMR1_Sleeves";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_EMR1_Sleeves;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_EMR1_Sleeves: EUFOR_Uniforms_EMR1_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_EMR_Shirt: EUFOR_Uniforms_EMR
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_EMR_Shirt";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR_T.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_EMR_shirt;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_EMR_Shirt: EUFOR_Uniforms_EMR_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Normal Tarn-Uniform------- */
class EUFOR_Uniforms_Tarn_EMR: Uniform_Base
{
	author = "$STR_EUFOR_Uniform_Author";
	scope = 2;
	scopeArsenal = 2;
	displayName = "$STR_EUFOR_Uniform_Tarn_EMR";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[] = {"camo", "insignia"};
	hiddenSelectionsTextures[] = {"EUFOR_Uniform\EMR\EUFOR_EMR_Tarn_Uniform_co.paa"};
	ace_fire_protection = 0.8;

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_EMR;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_Tarn_EMR: EUFOR_Uniforms_Tarn_EMR {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_EMR_Sleeves: EUFOR_Uniforms_Tarn_EMR
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Tarn_EMR_Sleeves";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR_H.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_EMR_Sleeves;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_Tarn_EMR_Sleeves: EUFOR_Uniforms_Tarn_EMR_Sleeves {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
/* ------- T-Shirt ------- */
class EUFOR_Uniforms_Tarn_EMR_Shirt: EUFOR_Uniforms_Tarn_EMR
{
	author = "$STR_EUFOR_Uniform_Author";
	displayName = "$STR_EUFOR_Uniform_Tarn_EMR_Shirt";
	picture = "\EUFOR_Uniform\EMR\Icon_EMR_T.paa";

	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = EUFOR_Soldat_Tarn_EMR_Shirt;
		containerClass = Supply80;
		mass = 40;
	};
};
class W_EUFOR_Uniform_Tarn_EMR_Shirt: EUFOR_Uniforms_Tarn_EMR_Shirt {
	scope = 1;
	scopeArsenal = 1;
	displayName = "$STR_EUFOR_Uniform_Warning";
	descriptionShort = "$STR_EUFOR_Uniform_Warning_desc";
};
	};
};