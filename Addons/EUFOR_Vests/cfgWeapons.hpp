//==================================================================================================
//Class Parents names (Where to copy assets from (Base game)
	class ItemCore;
    class VestItem;
// class ItemInfo; gehört hier nicht rein, gibt es nicht! = Error no entry iteninfo.scope

class EUFOR_Vest_Camo_Base : ItemCore
{
    author = "$STR_EUFOR_Vests_Author";
    scope = 0;
    weaponPoolAvailable = 1;
    allowedSlots[] = { 901 };			// This means the vest can be put into a backpack.
    picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
    model = "\A3\Weapons_F\Ammo\mag_univ.p3d";
    hiddenSelections[] = { "camo" };
    class ItemInfo : VestItem
    {
        uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
        hiddenSelections[] = { "camo" };
        containerClass = "Supply0";
        mass = 0;

        class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection
        {
            class Body
            {
                hitPointName = "HitBody";
                armor = 0;
                passThrough = 1;
            };
        };
    };
};

class EUFOR_Vest_Carrier_GL_Base: EUFOR_Vest_Camo_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=0;
    displayName="EUFOR WESTE GL Basis";
    picture="\EUFOR_Vests\WIP.paa";
    model="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
    //overviewName="$STR_B_SOLDIER_GL_F0";
    //overviewPicture="\A3\Data_F_Mark\Images\watermarkInfo_page09_ca.paa";
    descriptionShort="$STR_A3_SP_AL_V";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Fleck\EUFOR_Vest_Fleck_Carrier-GL_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
        containerClass="Supply250";
        mass=200;
        hiddenSelections[]=
        {
            "camo"
        };
        class HitpointsProtectionInfo
        {
            class Neck
            {
                hitpointName="HitNeck";
                armor=25;
                passThrough=0.5;
                material = -1;
            };
            class Arms
            {
                hitpointName="HitArms";
                armor=25;
                passThrough=0.5;
                material = -1;
            };
            class Chest
            {
                hitpointName="HitChest";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Pelvis
            {
                hitpointName="HitPelvis";
                armor=25;
                passThrough=0.1;
                material = -1;
            };
            class Body
            {
                hitpointName="HitBody";
                armor = 28;
                passThrough=0.1;
            };
        };
    };
};
class EUFOR_Vest_Carrier_Spec_Base: EUFOR_Vest_Camo_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=0;
    displayName="EUFOR WESTE Spec Basis";
    picture="\EUFOR_Vests\WIP.paa";
    model="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
    //overviewName="$STR_B_SOLDIER_GL_F0";
    //overviewPicture="\A3\Data_F_Mark\Images\watermarkInfo_page09_ca.paa";
    descriptionShort="$STR_A3_SP_AL_V";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Fleck\EUFOR_Vest_Fleck_Carrier-GL_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
        containerClass="Supply250";
        mass=180;
        hiddenSelections[]=
        {
            "camo"
        };
        class HitpointsProtectionInfo
        {
            class Neck
            {
                hitpointName="HitNeck";
                armor=25;
                passThrough=0.5;
                material = -1;
            };
            class Arms
            {
                hitpointName="HitArms";
                armor=25;
                passThrough=0.5;
                material = -1;
            };
            class Chest
            {
                hitpointName="HitChest";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Body
            {
                hitpointName="HitBody";
                armor = 28;
                passThrough=0.1;
            };
        };
    };
};
class EUFOR_Vest_TacVest_Base: EUFOR_Vest_Camo_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=0;
    displayName="EUFOR Taktische Weste Basis";
    picture="\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
    model="A3\Characters_F\Common\equip_tacticalvest";
    descriptionShort="$STR_A3_SP_AL_I";
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F\Common\Data\tacticalvest_khaki_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        uniformModel="A3\Characters_F\Common\equip_tacticalvest";
        containerClass="Supply250";
        mass=40;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=8;
                passThrough=0.5;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=8;
                passThrough=0.5;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=8;
                passThrough=0.5;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.5;
            };
        };
    };
};

//==================================================================================================
//Class Custom Class
//Uniformen
//Tatsächliche Uniform als Item hier werden die Einstellungen für die Uniformen getätigt

/* =======================================TROPEN====================================== */
    #include "\EUFOR_Vests\Tropen\W_Tropentarn.hpp"

/* =====================================TROPEN DIGITAL================================ */
    #include "\EUFOR_Vests\TropenDigital\W_TropentarnD.hpp"

/* ======================================FLECK======================================== */
    #include "\EUFOR_Vests\Fleck\W_Flecktarn.hpp"

/* ======================================SCHNEE======================================= */
    #include "\EUFOR_Vests\Schnee\W_Schneetarn.hpp"

/* ======================================MULTI======================================== */
    #include "\EUFOR_Vests\Multi\W_Multitarn.hpp"