class ItemCore;
class HeadgearItem;
class H_Beret_CSAT_01_F;
class NVGoggles;

class EUFOR_Helmets_Beret_Base: H_Beret_CSAT_01_F  {

    author = "$STR_EUFOR_Helmets_Author";
    scope = 0;
    weaponPoolAvailable = 1;
    displayName = "EUFOR Berets Base";
    picture = "\EUFOR_Helmets\Beret\ui\EUFOR_Helmets_Beret_EuDef_Icon.paa";
    model = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = {"EUFOR_Helmets\Beret\EUFOR_Helmets_Beret_EuDef_co.paa"};
    class ItemInfo: HeadgearItem
    {
        mass = 1;
        allowedSlots[]={801,901,701,605};
        uniformModel = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
        modelSides[] = {TCivilian, TWest};
        hiddenSelections[] = {"camo"};

        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName	= "HitHead";	// reference to the hit point class defined in the man base class
                armor			= 0;			// addition to armor of referenced hitpoint
                passThrough		= 1;			// multiplier of base passThrough defined in referenced hitpoint
            };
        };
    };
};



class EUFOR_Helmets_HelmetB_Base: ItemCore
	{
		author="$STR_EUFOR_Helmets_Author";
		scope=0;
		weaponPoolAvailable=1;
		displayName="EUFOR Helmet B Base";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
        ctab_camera=1;
        grad_slingHelmet_allow = true;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"
		};
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: HeadgearItem
		{
			mass=30;
            allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
					passThrough=0.5;
				};
			};
		};
	};

class EUFOR_Helmets_HelmetB_Light_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
    displayName="EUFOR Helmet B Light Base";
    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
    descriptionShort="$STR_A3_SP_AL_II";
    ace_hearing_hasEHP = 1;
    class ItemInfo: ItemInfo
    {
        mass=20;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=6;
                passThrough=0.5;
            };
        };
    };
};

class EUFOR_Helmets_HelmetB_Spec_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
    displayName="EUFOR Helmet B Special Base";
    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    descriptionShort="$STR_A3_SP_AL_IV";
    ace_hearing_hasEHP = 1;
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\BLUFOR\Data\equip1_co.paa"
    };
        class ItemInfo: ItemInfo
    {
        mass=50;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        modelSides[]={3,1};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=10;
                passThrough=0.5;
            };
        };
    };
};

class EUFOR_Helmets_HelmetB_Camo_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    displayName="EUFOR Helmet B Camo Base";
    model="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
    picture="\A3\Characters_F\data\ui\icon_H_HelmetB_camo_ca.paa";
    ace_hearing_hasEHP = 1;
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_f\BLUFOR\Data\equip1_co.paa",
                "\A3\characters_f\common\data\ghillie2_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        mass=40;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
        modelSides[]={3,1};
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=8;
                passThrough=0.5;
            };
        };
    };
};

class EUFOR_Helmets_HelmetIA_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    displayName="EUFOR Helmet IA Base";
    picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
    model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Beta\INDEP\Data\headgear_helmet_canvas_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        mass=30;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
        modelSides[]={2,3};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=8;
                passThrough=0.5;
            };
        };
    };
};

class EUFOR_Helmets_Boonie_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    scope=0;
    displayName="EUFOR Helmet Boonie Base";
    picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
    model="\A3\Characters_F\Common\booniehat";
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Bootcamp\Civil\Data\booniehat_khk_co.paa"
    };
    allowedFacewear[]=
    {
        "",
                6.5,
                "G_Aviator",
                1,
                "G_Bandanna_aviator",
                1,
                "G_Bandanna_beast",
                1,
                "G_Bandanna_blk",
                1,
                "G_Bandanna_khk",
                1,
                "G_Bandanna_oli",
                1,
                "G_Bandanna_shades",
                1,
                "G_Bandanna_sport",
                1,
                "G_Bandanna_tan",
                1,
                "G_Shades_Black",
                1,
                "G_Shades_Blue",
                1,
                "G_Shades_Red",
                1,
                "G_Shades_Green",
                1
    };
    class ItemInfo: ItemInfo
    {
        mass=2;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F\Common\booniehat";
        modelSides[]={6};
    };
};

class EUFOR_Helmets_MilCap_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    scope=0;
    displayName="EUFOR Military Cap Base";
    picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_ca.paa";
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\Common\Data\cappatrol_ocamo_co.paa"
    };
    model="\A3\Characters_F\Common\cappatrol";
    class ItemInfo: ItemInfo
    {
        mass=3;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F\Common\cappatrol.p3d";
        modelSides[]={6};
    };
};

// Viper Helm

class EUFOR_Integrated_NVG_TI_0: NVGoggles
{
    scope=1;
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    thermalMode[]={0};
    modelOptics="";
};
class EUFOR_Integrated_NVG_TI_1: NVGoggles
{
    scope=1;
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    thermalMode[]={0,1,2,3,4,5,6,7};
    modelOptics="";
};

class EUFOR_Helmets_Viper_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    scope=0;
    displayName="EUFOR Viper Helmet Base";
    picture="\A3\Characters_F_Exp\OPFOR\Data\UI\icon_H_HelmetO_ViperSP_hex_F_ca.paa";
    model="\A3\Characters_F_Exp\OPFOR\headgear_o_vipersp.p3d";
    ace_hearing_hasEHP = 1;
    descriptionShort="$STR_A3_SP_AL_V";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Exp\OPFOR\Data\headgear_vipersp_alt_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        mass=80;
        allowedSlots[]={801,901,701,605};
        uniformModel="\A3\Characters_F_Exp\OPFOR\headgear_o_vipersp.p3d";
        hiddenSelections[]=
        {
            "camo"
        };
        modelSides[]={0,3};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=14;
                passThrough=0.5;
            };
            class Face
            {
                hitpointName="HitFace";
                armor=10;
                passThrough=0.5;
            };
        };
    };
    subItems[]=
    {
        "EUFOR_Integrated_NVG_TI_0"
    };
};

//  Contact HBK

class EUFOR_Helmets_HBK_Base: EUFOR_Helmets_HelmetB_Base
{
    author="$STR_EUFOR_Helmets_Author";
    scope=0;
    displayName="EUFOR HBK Helmet Base";
    model="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
    hiddenSelections[]=
    {
        "Camo"
    };
    descriptionShort="$STR_A3_SP_AL_III";
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "Camo"
        };
        uniformModel="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
        modelSides[]={2};
        mass=30;
        allowedSlots[]={801,901,701,605};
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=8;
                passThrough=0.5;
            };
        };
    };
};
class EUFOR_Helmets_HBK_Headset_Base: EUFOR_Helmets_HBK_Base
{
    model="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
    ace_hearing_hasEHP = 1;
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
        allowedSlots[]={801,901,701,605};
        mass=32;
    };
};
class EUFOR_Helmets_HBK_Ear_Base: EUFOR_Helmets_HBK_Base
{
    model="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
    ace_hearing_hasEHP = 1;
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_ear_F.p3d";
        allowedSlots[]={801,901,701,605};
        mass=40;
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=9;
                passThrough=0.5;
            };
        };
    };
};
class EUFOR_Helmets_HBK_Chops_Base: EUFOR_Helmets_HBK_Base
{
    model="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
    ace_hearing_hasEHP = 1;
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_chops_F.p3d";
        allowedSlots[]={801,901,701,605};
        mass=50;
        class HitpointsProtectionInfo: HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=9;
                passThrough=0.5;
            };
            class Face
            {
                hitpointName="HitFace";
                armor=5;
                passThrough=0.1;
            };
        };
    };
};

