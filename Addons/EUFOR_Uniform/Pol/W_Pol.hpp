/* ------- Normal ------- */
class W_EUFOR_Uniform_Pol: Uniform_Base
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
	};
};

class W_EUFOR_Uniform_Pol1: Uniform_Base
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
	};
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Pol_Sleeves: W_EUFOR_Uniform_Pol
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
	};
};
class W_EUFOR_Uniform_Pol1_Sleeves: W_EUFOR_Uniform_Pol
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
	};
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Pol_Shirt: W_EUFOR_Uniform_Pol
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
	};
};

/* ------- Normal Tarn-Uniform------- */
class W_EUFOR_Uniform_Tarn_Pol: Uniform_Base
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
	};
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Tarn_Pol_Sleeves: W_EUFOR_Uniform_Tarn_Pol
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
	};
};
/* ------- T-Shirt ------- */
class W_EUFOR_Uniform_Tarn_Pol_Shirt: W_EUFOR_Uniform_Tarn_Pol
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
	};
};