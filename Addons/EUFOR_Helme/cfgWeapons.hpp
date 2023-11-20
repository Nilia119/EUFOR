class ItemCore;
class HeadgearItem;
class H_Beret_CSAT_01_F;


class H_Barett_EuDeF: H_Beret_CSAT_01_F  {

    author = "$STR_EUFOR_Helmet_Author";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "$STR_EUFOR_Helmet_Barett_EuDef";
    picture = "\EUFOR_Helme\Barett\ui\EUFOR_Helmet_Barett_EuDef_Icon.paa";
    model = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = {"EUFOR_Helme\Barett\EUFOR_Helmet_Barett_EuDef_co.paa"};
    class ItemInfo: HeadgearItem
    {
        mass = 1;
        uniformModel = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
        modelSides[] = {TCivilian, TWest};
        hiddenSelections[] = {"camo"};

        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName	= "HitHead";	// reference to the hit point class defined in the man base class
                armor			= 0;			// addition to armor of referenced hitpoint
                passThrough		= 1;			// multiplier of base passThrough defined in referenced hitpoint
            };
        };
    };
};
