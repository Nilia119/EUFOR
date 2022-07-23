
//==================================================================================================
//Class Parents names (Where to copy assets from (Base game)
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
// class ItemInfo; gehört hier nicht rein, gibt es nicht! = Error no entry iteninfo.scope

//==================================================================================================
//Class Custom Class
//Uniformen
//Tatsächliche Uniform als Item hier werden die Einstellungen für die Uniformen getätigt


	class W_BW2035_Uniform_Tropen: Uniform_Base
	{
		author = "Nilia";
		scope = 2;
		scopeArsenal = 2;
		displayName = "IdN Tropentarn";
		picture = "\WIP.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"Uniform\Tropen\TT_Uniform.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = BW2035_soldat_Tropen;
			containerClass = Supply80;
			mass = 40;
		};
	};
	
	class W_BW2035_Uniform_Tropen_1: Uniform_Base
	{
		author = "Nilia";
		scope = 2;
		scopeArsenal = 2;
		displayName = "IdN Tropentarn 1";
		picture = "\WIP.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"Uniform\Tropen\TT_Uniform1.paa"};
			
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = BW2035_soldat_Tropen_1;
			containerClass = Supply80;
			mass = 40;
		};
	};

class W_BW2035_Uniform_Fleck: Uniform_Base
{
    author = "Nilia";
    scope = 2;
    scopeArsenal = 2;
    displayName = "IdN Flecktarn";
    picture = "\WIP.paa";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
    hiddenSelections[] = {"camo", "insignia"};
    hiddenSelectionsTextures[] = {"Uniform\Fleck\BW2035_Fleck_Uniform.paa"};

    class ItemInfo: UniformItem
    {
        uniformModel = "-";
        uniformClass = BW2035_soldat_Fleck;
        containerClass = Supply80;
        mass = 40;
    };
};
