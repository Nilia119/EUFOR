//  Bases

class EUFOR_Backpacks_Radiobag_Base;
class EUFOR_Backpacks_Tortilia_Base;

//  CUP Predator

class EUFOR_Backpacks_PredatorRadio_Base: EUFOR_Backpacks_Radiobag_Base
{
    scope=0;
    picture = "EUFOR_CUP_Equipment\WIP.paa";
    model= "\CUP\Weapons\CUP_Weapons_Backpacks\predator_radio.p3d";
    hiddenSelections[]={"Camo"};
    hiddenSelectionsTextures[]={"\CUP\Weapons\CUP_Weapons_Backpacks\data\tecmac_co.paa"};
};

class EUFOR_Backpacks_Predator_Base: EUFOR_Backpacks_Tortilia_Base
{
    scope=0;
    picture = "EUFOR_CUP_Equipment\WIP.paa";
    model = "\CUP\Weapons\CUP_Weapons_Backpacks\predator.p3d";
    hiddenSelections[]={"Camo"};
    hiddenSelectionsTextures[]={"\CUP\Weapons\CUP_Weapons_Backpacks\data\tecmac_co.paa"};
};


#include "\EUFOR_CUP_Equipment\Backpacks\Fleck\V_Fleck.hpp"
#include "\EUFOR_CUP_Equipment\Backpacks\Multi\V_Multi.hpp"
#include "\EUFOR_CUP_Equipment\Backpacks\Schnee\V_Schnee.hpp"
#include "\EUFOR_CUP_Equipment\Backpacks\Tropen\V_Tropen.hpp"
#include "\EUFOR_CUP_Equipment\Backpacks\TropenD\V_TropenD.hpp"

