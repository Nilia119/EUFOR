class EUFOR_Vest_TacVest
{
    options[] = { "camo", "color" };
    label="$STR_EUFOR_ACEAX_Compat_Vest_TacVest_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class color
    {
        values[] = { "None", "Brown" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Vest_color";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
		class Brown
        {
			label = "$STR_EUFOR_ACEAX_Compat_Vest_color_brown";
			description = "$STR_EUFOR_ACEAX_Compat_Vest_color_desc";
			//image = "EUFOR_ACEAX_Compat\data\Kristall.paa";
        };
    };
};