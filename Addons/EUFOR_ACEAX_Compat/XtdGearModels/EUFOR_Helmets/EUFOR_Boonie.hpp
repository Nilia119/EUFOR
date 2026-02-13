class EUFOR_Helmets_Boonie
{
    options[] = { "camo", "armor" };
    label="$STR_EUFOR_ACEAX_Compat_Helmets_Boonie_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class armor
    {
        values[] = { "None", "Armored" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Helmets_armored";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
		class Armored
        {
			label = "$STR_EUFOR_ACEAX_Compat_Helmets_armored";
			description = "$STR_EUFOR_ACEAX_Compat_Helmets_armored_desc";
			//image = "EUFOR_ACEAX_Compat\data\Kristall.paa";
        };
    };
};