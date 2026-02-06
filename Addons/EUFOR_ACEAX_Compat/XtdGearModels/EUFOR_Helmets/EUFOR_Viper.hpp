class EUFOR_Helmets_Viper
{
    options[] = { "camo", "spec" };
    label="$STR_EUFOR_ACEAX_Compat_Helmets_Viper_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class spec
    {
        values[] = { "None", "Special" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Helmets_spec";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
		class Special
        {
			label = "$STR_EUFOR_ACEAX_Compat_Helmets_spec";
			description = "$STR_EUFOR_ACEAX_Compat_Helmets_spec_desc";
			//image = "EUFOR_ACEAX_Compat\data\Kristall.paa";
        };
    };
};