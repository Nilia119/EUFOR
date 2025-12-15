class ItemCore;
class HeadgearItem;
class H_Beret_CSAT_01_F;

class EUFOR_Helmets_Beret_Base: H_Beret_CSAT_01_F  {

    author = "$STR_EUFOR_Helmets_Author";
    scope = 0;
    weaponPoolAvailable = 1;
    displayName = "EUFOR Berets Base";
    picture = "\EUFOR_Helmets\Beret\ui\EUFOR_Helmets_Beret_EuDef_Icon.paa";
    model = "\A3\Characters_F\OPFOR\H_Beret_CSAT_01_F.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = {"EUFOR_Helmets\Beret\EUFOR_Helmets_Beret_EuDef_co.paa"};
    class ItemInfo: HeadgearItem
    {
        mass = 1;
        allowedSlots[]={801,901,701,605};
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
