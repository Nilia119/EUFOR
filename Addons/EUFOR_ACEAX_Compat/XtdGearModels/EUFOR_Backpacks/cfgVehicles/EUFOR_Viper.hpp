class EUFOR_Backpacks_ViperHarness
{
    options[] = { "camo", "equipment" };
    label="$STR_EUFOR_ACEAX_Compat_Backpacks_Viper_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class equipment
    {
        values[] = { "Light", "Heavy" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
	    class Light
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Viper_light";
	    };
		class Heavy
        {
			label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Viper_heavy";
        };
    };
};