//  Carrier GL
class EUFOR_Vest_Carrier_GL_Schnee: EUFOR_Vest_Carrier_GL_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Schnee_Carrier_GL";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Schnee\EUFOR_Vest_Schnee_Carrier_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        containerClass="Supply250";
        mass=200;
    };
};

//  Carrier Spec
class EUFOR_Vest_Carrier_Spec_Schnee: EUFOR_Vest_Carrier_Spec_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Schnee_Carrier_Spec";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Schnee\EUFOR_Vest_Schnee_Carrier_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        containerClass="Supply250";
        mass=180;
    };
};