//  Carrier GL
class EUFOR_Vest_Carrier_GL_Tropen: EUFOR_Vest_Carrier_GL_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Tropen_Carrier_GL";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Tropen\EUFOR_Vest_Tropen_Carrier_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        containerClass="Supply250";
        mass=200;
    };
};

//  Carrier Spec
class EUFOR_Vest_Carrier_Spec_Tropen: EUFOR_Vest_Carrier_Spec_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Tropen_Carrier_Spec";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Tropen\EUFOR_Vest_Tropen_Carrier_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        containerClass="Supply250";
        mass=180;
    };
};
//  TacVest
class EUFOR_Vest_TacVest_Tropen: EUFOR_Vest_TacVest_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Tropen_Tac";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\Tropen\EUFOR_Vest_Tropen_TacVest_co.paa"
    };
};

