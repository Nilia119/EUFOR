class EUFOR_Helmets_HelmetHBK
{
    options[] = { "camo", "equipment" };
    label="$STR_EUFOR_ACEAX_Compat_Helmets_HelmetHBK_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class equipment
    {
        values[] = { "None", "Headset", "Chops", "Ear" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
	    class None
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
	    };
		class Headset
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Helmets_HelmetHBK_Headset";
	    };
		class Chops
        {
			label = "$STR_EUFOR_ACEAX_Compat_Helmets_HelmetHBK_Chops";
        };
	    class Ear
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Helmets_HelmetHBK_Ear";
	    };
    };
};