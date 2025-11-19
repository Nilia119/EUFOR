class ace_wardrobe_base_U_sleeves_down;
class ace_wardrobe_base_U_sleeves_up;
class ace_wardrobe_base_U_jacket_open;
class ace_wardrobe_base_U_jacket_closed;

class ace_wardrobe_base_U_sleeves_down_EUFOR: ace_wardrobe_base_U_sleeves_down {

    //duration = 1; // Minimum value: 1 - Anything above will produce a progressbar.
    //gesture = "Gear";
    alternativeActionName = "$STR_EUFOR_Uniform_Aktion_Basis";

};

class ace_wardrobe_base_U_sleeves_up_EUFOR: ace_wardrobe_base_U_sleeves_up {

    //duration = 1; // Minimum value: 1 - Anything above will produce a progressbar.
    //gesture = "Gear";
    alternativeActionName = "$STR_EUFOR_Uniform_Aktion_Runterkrempeln";

};

class ace_wardrobe_base_U_switch_gloves_EUFOR: ace_wardrobe_base_U_sleeves_down {

    //duration = 1; // Minimum value: 1 - Anything above will produce a progressbar.
    //gesture = "Gear";
    alternativeActionName = "$STR_EUFOR_Uniform_Aktion_Tauschehandschuh";

};

class ace_wardrobe_base_U_jacket_open_EUFOR: ace_wardrobe_base_U_jacket_open {

    //duration = 1; // Minimum value: 1 - Anything above will produce a progressbar.
    //gesture = "Gear";
    alternativeActionName = "$STR_EUFOR_Uniform_Aktion_Oberteilan";

};

class ace_wardrobe_base_U_jacket_closed_EUFOR: ace_wardrobe_base_U_jacket_closed {

    //duration = 1; // Minimum value: 1 - Anything above will produce a progressbar.
    //gesture = "Gear";
    alternativeActionName = "$STR_EUFOR_Uniform_Aktion_Oberteilaus";

};


    #include "\EUFOR_Uniform\Fleck\ACEW_Flecktarn.hpp"
    #include "\EUFOR_Uniform\Multi\ACEW_Multitarn.hpp"
    #include "\EUFOR_Uniform\Schnee\ACEW_Schneetarn.hpp"
    #include "\EUFOR_Uniform\Tropen\ACEW_Tropentarn.hpp"
    #include "\EUFOR_Uniform\TropenDigital\ACEW_TropentarnD.hpp"