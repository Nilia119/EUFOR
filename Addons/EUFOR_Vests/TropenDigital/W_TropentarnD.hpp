//  Carrier GL
class EUFOR_Vest_Carrier_GL_Tropen_Digital: EUFOR_Vest_Carrier_GL_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Tropen_Digital_Carrier_GL";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\TropenDigital\EUFOR_Vest_Tropen_Digital_Carrier_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        containerClass="Supply250";
        mass=200;
    };
};

//  Carrier Spec
class EUFOR_Vest_Carrier_Spec_Tropen_Digital: EUFOR_Vest_Carrier_Spec_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Tropen_Digital_Carrier_Spec";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\TropenDigital\EUFOR_Vest_Tropen_Digital_Carrier_co.paa"
    };
    class ItemInfo: ItemInfo
    {
        containerClass="Supply250";
        mass=180;
    };
};
//  TacVest
class EUFOR_Vest_TacVest_Tropen_Digital: EUFOR_Vest_TacVest_Base
{
    author="$STR_EUFOR_Vests_Author";
    scope=2;
    displayName="$STR_EUFOR_Vests_Tropen_Digital_Tac";
    picture="\EUFOR_Vests\WIP.paa";
    hiddenSelectionsTextures[]=
    {
        "\EUFOR_Vests\TropenDigital\EUFOR_Vest_Tropen_Digital_TacVest_co.paa"
    };
};

