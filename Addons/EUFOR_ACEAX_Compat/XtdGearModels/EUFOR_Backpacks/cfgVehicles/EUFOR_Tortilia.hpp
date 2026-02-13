class EUFOR_Backpacks_Tortilia
{
    options[] = { "camo", "medic", "ammo" };
    label="$STR_EUFOR_ACEAX_Compat_Backpacks_Tortilia_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol", "BlueMed", "GreenMed", "OrangeMed", "RedMed" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class medic
    {
        values[] = { "None", "Medic", "ammo" };
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
	class ammo
	{
		values[] = { "None", "Ammo" };
		alwaysSelectable=0;
		label = "$STR_EUFOR_ACEAX_Compat_Backpacks_ammo";
		class None
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
		};
		class Ammo
		{
			label = "$STR_EUFOR_ACEAX_Compat_Backpacks_ammo";
			description = "$STR_EUFOR_ACEAX_Compat_Backpacks_ammo_desc";
			//image = "EUFOR_ACEAX_Compat\data\Kristall.paa";
		};
	};
};