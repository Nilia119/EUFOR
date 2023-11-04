class ItemCore;
class HeadgearItem;
class H_Beret_CSAT_01_F;


class H_Barett_EuDeF: H_Beret_CSAT_01_F  {

    author = "$STR_BW2035_Helmet_Author";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "$STR_BW2035_Helmet_Barett_EuDef";
    picture = "BW2035_Helme\Barett\ui\BW2035_Helmet_Barett_EuDef_Icon.paa";
    model = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = {"BW2035_Helme\Barett\BW2035_Helmet_Barett_EuDef_co.paa"};
    class ItemInfo: HeadgearItem
    {
        mass = 1;
        uniformModel = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F";
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
