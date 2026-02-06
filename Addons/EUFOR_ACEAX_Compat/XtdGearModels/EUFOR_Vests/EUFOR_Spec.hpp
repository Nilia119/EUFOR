class EUFOR_Vest_Spec
{
    options[] = { "camo", "equipment", "color" };
    label="$STR_EUFOR_ACEAX_Compat_Vest_Spec_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
	class equipment
	{
		values[] = { "None", "GL" };
		alwaysSelectable=0;
		label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
		class None
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
		};
		class GL
		{
			label = "$STR_EUFOR_ACEAX_Compat_Vest_Spec_GL";
		};
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