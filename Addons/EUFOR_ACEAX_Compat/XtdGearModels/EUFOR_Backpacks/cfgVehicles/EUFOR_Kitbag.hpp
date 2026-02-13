class EUFOR_Backpacks_Kitbag
{
    options[] = { "camo", "medic" };
    label="$STR_EUFOR_ACEAX_Compat_Backpacks_Kitbag_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol", "BlueMed", "GreenMed", "OrangeMed", "RedMed" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class medic
    {
        values[] = { "None", "Medic" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_medic";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
		class Medic
        {
			label = "$STR_EUFOR_ACEAX_Compat_Backpacks_medic";
			description = "$STR_EUFOR_ACEAX_Compat_Backpacks_medic_desc";
			image = "EUFOR_ACEAX_Compat\data\Kristall.paa";
        };
    };
};