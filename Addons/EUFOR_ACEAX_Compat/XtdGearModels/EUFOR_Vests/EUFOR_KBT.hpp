class EUFOR_Vest_KBT
{
    options[] = { "camo", "equipment", "color" };
    label="$STR_EUFOR_ACEAX_Compat_Vest_KBT_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
	class equipment
	{
		values[] = { "Light", "Heavy", "None" };
		alwaysSelectable=0;
		label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
		class Light
		{
			label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Viper_light";
		};
		class Heavy
		{
			label = "$STR_EUFOR_ACEAX_Compat_Vest_Carrier_Heavy";
		};
		class None
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
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