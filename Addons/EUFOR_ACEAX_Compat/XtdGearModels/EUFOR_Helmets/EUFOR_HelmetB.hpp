class EUFOR_Helmets_HelmetB
{
    options[] = { "camo", "equipment" };
    label="$STR_EUFOR_ACEAX_Compat_Helmets_HelmetB_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class equipment
    {
        values[] = { "None", "Special", "Camo", "Light" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
	    class Special
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Helmets_HelmetB_spec";
	    };
	    class Camo
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Helmets_HelmetB_camo";
	    };
		class Light
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Viper_light";
	    };
    };
};