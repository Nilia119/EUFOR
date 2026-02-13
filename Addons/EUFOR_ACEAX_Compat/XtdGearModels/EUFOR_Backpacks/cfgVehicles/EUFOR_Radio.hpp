class EUFOR_Backpacks_Radio
{
    options[] = { "camo", "equipment" };
    label="$STR_EUFOR_ACEAX_Compat_Backpacks_Radio_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class equipment
    {
        values[] = { "None", "PL" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
		class PL
        {
			label = "$STR_EUFOR_ACEAX_Compat_Backpacks_PL";
			description = "$STR_EUFOR_ACEAX_Compat_Backpacks_PL_desc";
        };
    };
};