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
