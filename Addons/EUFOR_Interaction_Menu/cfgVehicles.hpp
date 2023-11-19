/*
class CfgVehicles {
    class Man;
    class CAManBase: Man {
            class ACE_SelfActions {
				class ACE_Equipment {
                    class openMedPanel {
                        displayName = MedPanel Oeffnen;
                        condition = "('Nilia_MedPanel' in (uniformItems _player)) || ('Nilia_MedPanel' in (vestItems _player))";
                        statement = createDialog "MedPanel_Dialog";
                        showDisabled = 0;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        icon = "Nilia_Medpanel\WIP.paa";
                    };
                };
        };
    };
};
 */
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class Nilia_EUFOR {
                displayName = "$STR_EUFOR_Interactions_Main";
                condtion = "true";
                statement = "";
                icon = "EUFOR_Interaction_Menu\EU.paa";
                class EUFOR_Lexicon {
                    displayName = "$STR_EUFOR_Interactions_Lexikon";
                    condition = "('EUFOR_Lexikon' in (uniformItems _player)) || ('EUFOR_Lexikon' in (vestItems _player)) || ('EUFOR_Lexikon' in (backpackItems _player))";
                    statement = "";
                    icon = "EUFOR_Interaction_Menu\ui\Lexikon.paa";
                    class openMedPanel {
                        displayName = "$STR_EUFOR_Interactions_Open_MedPanel";
                        condition = "true";
                        statement = createDialog "MedPanel_Dialog";
                        showDisabled = 0;
                        icon = "EUFOR_Interaction_Menu\WIP.paa";
                    };
                    class openPainPanel {
                        displayName = "$STR_EUFOR_Interactions_Open_PainPanel";
                        condition = "true";
                        statement = createDialog "PainPanel_Dialog";
                        showDisabled = 0;
                        icon = "EUFOR_Interaction_Menu\WIP.paa";
                    };
                };
            };
        };
    };
};
