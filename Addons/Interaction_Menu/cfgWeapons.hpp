class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class Nilia_Lexikon: ACE_ItemCore {
        scope = 2;
        author = "Nilia";
        displayName = "$STR_BW2035_Interactions_Lexikon";
        descriptionShort = "$STR_BW2035_Interactions_Lexikon_Desc";
        picture = "\Interaction_Menu\ui\Lexikon.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
    class Nilia_MedPanel: ACE_ItemCore {
        scope = 2;
        author = "Nilia";
        displayName = Medpanel GER;
        descriptionShort = "Uebersicht und wirkungen aller Medikamente, die durch KAT und ACE Eingefuegt werden.";
        picture = "\Interaction_Menu\ui\MedPanel.paa";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
