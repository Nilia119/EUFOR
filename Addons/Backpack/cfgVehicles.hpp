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

class BW2035_Backpack_Fleck_Tortilia : Bag_Base {
    author = "$STR_BW2035_Backpack_Author";
    scope = 2;
    model = "\A3\weapons_f\Ammoboxes\bags\backpack_tortila";
    displayName = "$STR_BW2035_Backpack_Tortilia-Fleck";
    picture = "Backpack\Fleck\ui\BW2035_Fleck_Backpack_Tortilia_Icon.paa";
    hiddenSelectionsTextures[]={"Backpack\Fleck\BW2035_Fleck_Backpack_Tortilia_co.paa"};
    maximumLoad = 320;
    mass = 60;
};