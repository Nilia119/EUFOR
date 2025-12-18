//  Bases

class ReammoBox;
class EUFOR_Backpacks_Bag_Base : ReammoBox {
    scope = 0;
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    reversed = 1;
    vehicleClass = Backpacks;
    allowedSlots[] = {901};
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
    picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
    icon = "iconBackpack";
    transportMaxWeapons = 1;    //3den Attribut kein einfluss!
    transportMaxMagazines = 20; //3den Attribut
    class DestructionEffects {};
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
    maximumLoad = 0;
    side = 3;
};
//  Carryall

class EUFOR_Backpacks_Tortilia_Base : EUFOR_Backpacks_Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 0;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    picture = "EUFOR_Backpacks\WIP.paa";
    hiddenSelectionsTextures[]={"EUFOR_Backpacks\Fleck\EUFOR_Backpacks_Tortilia_Fleck_co.paa"};
    maximumLoad = 320;
    mass = 60;
};

class EUFOR_Backpacks_Tortilia_Base_Medic : EUFOR_Backpacks_Tortilia_Base {
    maximumLoad = 820;
    mass = 60;
};

//   Compact

class EUFOR_Backpacks_Compact_Base : EUFOR_Backpacks_Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 0;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
    picture = "EUFOR_Backpacks\WIP.paa";
    hiddenSelectionsTextures[]={"EUFOR_Backpacks\Fleck\EUFOR_Backpacks_Compact_Fleck_co.paa"};
    maximumLoad = 160;
    mass = 20;
};

class EUFOR_Backpack_Fleck_Compact_Rk : Bag_Base {
class EUFOR_Backpacks_Compact_Base_Medic : EUFOR_Backpacks_Compact_Base {
    maximumLoad = 300;
    mass = 20;
};



#include "\EUFOR_Backpacks\Fleck\V_Fleck.hpp"
#include "\EUFOR_Backpacks\Medic\V_Medic.hpp"
#include "\EUFOR_Backpacks\Multi\V_Multi.hpp"
#include "\EUFOR_Backpacks\Schnee\V_Schnee.hpp"
#include "\EUFOR_Backpacks\Tropen\V_Tropen.hpp"