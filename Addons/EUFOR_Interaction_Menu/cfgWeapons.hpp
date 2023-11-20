class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class EUFOR_Lexikon: ACE_ItemCore {
        scope = 2;
        author = "$STR_EUFOR_Interactions_Author";
        displayName = "$STR_EUFOR_Interactions_Lexikon";
        descriptionShort = "$STR_EUFOR_Interactions_Lexikon_Desc";
        picture = "\EUFOR_Interaction_Menu\ui\Lexikon.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
    class EUFOR_MedPanel: ACE_ItemCore {
        scope = 2;
        author = "$STR_EUFOR_Interactions_Author";
        displayName = "$STR_EUFOR_Interactions_Medpanel";
        descriptionShort = "$STR_EUFOR_Interactions_Medpanel_Desc";
        picture = "\EUFOR_Interaction_Menu\ui\MedPanel.paa";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
