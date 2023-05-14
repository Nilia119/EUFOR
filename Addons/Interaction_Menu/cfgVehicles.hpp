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
            class Nilia_Bundeswehr2035 {
                displayName = "$STR_BW2035_Interactions_Main";
                condtion = "true";
                statement = "";
                icon = "Interaction_Menu\BW.paa";
                class Nilia_Huntercon {
                    displayName = "$STR_BW2035_Interactions_Lexikon";
                    condition = "('Nilia_Lexikon' in (uniformItems _player)) || ('Nilia_Lexikon' in (vestItems _player)) || ('Nilia_Lexikon' in (backpackItems _player))";
                    statement = "";
                    icon = "Interaction_Menu\WIP.paa";
                    class openMedPanel {
                        displayName = "$STR_BW2035_Interactions_Open_MedPanel";
                        condition = "true";
                        statement = createDialog "MedPanel_Dialog";
                        showDisabled = 0;
                        icon = "Interaction_Menu\WIP.paa";
                    };
                    class openPainPanel {
                        displayName = "$STR_BW2035_Interactions_Open_PainPanel";
                        condition = "true";
                        statement = createDialog "PainPanel_Dialog";
                        showDisabled = 0;
                        icon = "Interaction_Menu\WIP.paa";
                    };
                };
            };
        };
    };
};
