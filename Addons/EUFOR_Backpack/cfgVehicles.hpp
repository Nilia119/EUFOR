//
// Created by Nilia on 27.12.2022.
//

class ReammoBox;
class Bag_Base : ReammoBox {
    scope = 1;
    class TransportMagazines {};
    class TransportWeapons {};
    isbackpack = 1;
    reversed = 1;
    vehicleClass = Backpacks;
    allowedSlots[] = {901};
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Small";
    displayName = "Bag";
    picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
    icon = "iconBackpack";
    transportMaxWeapons = 1;
    transportMaxMagazines = 20;
    class DestructionEffects {};
    hiddenSelections[] = {"Camo"};
    hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_small_co.paa"};
    maximumLoad = 0;
    side = 3;
};
//    ****************** Carryall ********************
//  Fleck

class EUFOR_Backpack_Fleck_Tortilia : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    displayName = "$STR_EUFOR_Backpack_Tortilia-Fleck";
    picture = "Backpack\Carryall\Fleck\ui\EUFOR_Fleck_Backpack_Tortilia_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Carryall\Fleck\EUFOR_Fleck_Backpack_Tortilia_co.paa"};
    maximumLoad = 320;
    mass = 60;
};

class EUFOR_Backpack_Fleck_Tortilia_Arzt : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    displayName = "$STR_EUFOR_Backpack_Tortilia-Fleck_Arzt";
    picture = "Backpack\Carryall\Fleck\ui\EUFOR_Fleck_Backpack_Tortilia-Arzt_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Carryall\Fleck\EUFOR_Fleck_Backpack_Tortilia_Arzt_co.paa"};
    maximumLoad = 820;
    mass = 60;
};

//  Tropen

class EUFOR_Backpack_Tropen_Tortilia : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    displayName = "$STR_EUFOR_Backpack_Tortilia-Tropen";
    picture = "Backpack\Carryall\Tropen\ui\EUFOR_Tropen_Backpack_Tortilia_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Carryall\Tropen\EUFOR_Tropen_Backpack_Tortilia_co.paa"};
    maximumLoad = 320;
    mass = 60;
};

class EUFOR_Backpack_Tropen_Tortilia_Arzt : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    displayName = "$STR_EUFOR_Backpack_Tortilia-Tropen_Arzt";
    picture = "Backpack\Carryall\Tropen\ui\EUFOR_Tropen_Backpack_Tortilia-Arzt_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Carryall\Tropen\EUFOR_Tropen_Backpack_Tortilia_Arzt_co.paa"};
    maximumLoad = 820;
    mass = 60;
};

//  Medic

class EUFOR_Backpack_San_Tortilia : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    displayName = "$STR_EUFOR_Backpack_Tortilia-San";
    picture = "Backpack\Carryall\San\ui\EUFOR_San_Backpack_Tortilia_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Carryall\San\EUFOR_San_Backpack_Tortilia_co.paa"};
    maximumLoad = 820;
    mass = 90;
};

//    ****************** Compact ********************
//  Fleck

class EUFOR_Backpack_Fleck_Compact : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
    displayName = "$STR_EUFOR_Backpack_Compact-Fleck";
    picture = "Backpack\Compact\Fleck\ui\EUFOR_Fleck_Backpack_Compact_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Compact\Fleck\EUFOR_Fleck_Backpack_Compact_co.paa"};
    maximumLoad = 160;
    mass = 20;
};

class EUFOR_Backpack_Fleck_Compact_Rk : Bag_Base {
    author = "$STR_EUFOR_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
    displayName = "$STR_EUFOR_Backpack_Compact-Fleck-Rk";
    picture = "Backpack\Compact\Fleck\ui\EUFOR_Fleck_Backpack_Compact_Rk_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Compact\Fleck\EUFOR_Fleck_Backpack_Compact_Rk_co.paa"};
    maximumLoad = 160;
    mass = 20;
};