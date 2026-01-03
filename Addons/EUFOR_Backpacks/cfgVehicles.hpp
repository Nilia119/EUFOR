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
    ace_trenches_entrenchingTool = 1;
};

class EUFOR_Backpacks_Tortilia_Base_Ammo : EUFOR_Backpacks_Tortilia_Base {
    maximumLoad = 440;
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

class EUFOR_Backpacks_Compact_Base_Medic : EUFOR_Backpacks_Compact_Base {
    maximumLoad = 240;
    mass = 20;
    ace_trenches_entrenchingTool = 1;
};

//  Kitbag

class EUFOR_Backpacks_Kitbag_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope = 0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
    hiddenSelectionsTextures[]={"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};
    maximumLoad=280;
    mass=50;
};

class EUFOR_Backpacks_Kitbag_Base_Medic: EUFOR_Backpacks_Kitbag_Base
{
    maximumLoad=420;
    mass=50;
    ace_trenches_entrenchingTool = 1;
};

//  ENOCH RADIO

class EUFOR_Backpacks_Radiobag_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_A3_Bohemia_Interactive";
    scope=0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
    hiddenSelections[]={"Camo1"};
    hiddenSelectionsTextures[]={"a3\supplies_f_enoch\bags\data\B_RadioBag_01_WDL_CO.paa"};
    maximumLoad=480;
    mass=60;
    ace_trenches_entrenchingTool = 1;
};

class EUFOR_Backpacks_Radiobag_Base_PL: EUFOR_Backpacks_Tortilia_Base_Medic
{
    author="$STR_A3_Bohemia_Interactive";
    scope=0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
    hiddenSelections[]={"Camo1"};
    hiddenSelectionsTextures[]={"a3\supplies_f_enoch\bags\data\B_RadioBag_01_WDL_CO.paa"};
};

//  Fieldpack

class EUFOR_Backpacks_FieldPack_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope = 0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="\A3\weapons_f\Ammoboxes\bags\Backpack_Gorod";
    hiddenSelectionsTextures[]={"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"};
    maximumLoad=200;
    mass=30;
};

class EUFOR_Backpacks_FieldPack_Base_Medic: EUFOR_Backpacks_FieldPack_Base
{
    maximumLoad=300;
    mass=30;
};

//  Tacticalpack

class EUFOR_Backpacks_TacticalPack_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope = 0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
    hiddenSelectionsTextures[]={"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
    maximumLoad=240;
    mass=40;
};

class EUFOR_Backpacks_TacticalPack_Base_Medic: EUFOR_Backpacks_TacticalPack_Base
{
    maximumLoad=360;
    mass=40;
};

//  LegStrapBag

class EUFOR_Backpacks_LegStrapBag_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope = 0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="\A3\Characters_F_Orange\Vests\V_LegStrapBag_F.p3d";
    hiddenSelectionsTextures[]={"\A3\Characters_F_Orange\Vests\Data\V_LegStrapBag_black_CO.paa"};
    maximumLoad=80;
    mass=8;
};

//  ViperOP

class EUFOR_Backpacks_ViperHarness_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope = 0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="\A3\Supplies_F_Exp\Bags\B_ViperHarness_F.p3d";
    hiddenSelectionsTextures[]={"\A3\Supplies_F_Exp\Bags\Data\Backpack_ViperOp_blk_co.paa"};
    maximumLoad=300;
    mass=55;
};

class EUFOR_Backpacks_ViperHarnessLight_Base: EUFOR_Backpacks_ViperHarness_Base
{
    model="\A3\Supplies_F_Exp\Bags\B_ViperLightHarness_F.p3d";
    maximumLoad=260;
    mass=45;
};

//  Civilian

class EUFOR_Backpacks_Civ_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope = 0;
    picture = "EUFOR_Backpacks\WIP.paa";
    model="\a3\Supplies_F_AoW\Bags\B_CivilianBackpack_01_F.p3d";
    hiddenSelectionsTextures[]={"a3\Supplies_F_AoW\Bags\Data\CivilianBackpack_01_Sport_Blue_F_co.paa"};
    maximumLoad=240;
    mass=50;
};

//  UAV-Bag

class EUFOR_Backpacks_UAV_Base: EUFOR_Backpacks_Bag_Base
{
    author="$STR_EUFOR_Backpack_Author";
    scope=0;
    model="\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
    picture = "EUFOR_Backpacks\WIP.paa";
    hiddenSelectionsTextures[]={"\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UAV_backpack_rgr_co.paa"};
    maximumLoad=400;
    mass=50;
    ace_trenches_entrenchingTool = 1;
};


/*

*/

#include "\EUFOR_Backpacks\Fleck\V_Fleck.hpp"
#include "\EUFOR_Backpacks\Medic\V_Medic.hpp"
#include "\EUFOR_Backpacks\Multi\V_Multi.hpp"
#include "\EUFOR_Backpacks\Schnee\V_Schnee.hpp"
#include "\EUFOR_Backpacks\Tropen\V_Tropen.hpp"
#include "\EUFOR_Backpacks\TropenD\V_TropenD.hpp"