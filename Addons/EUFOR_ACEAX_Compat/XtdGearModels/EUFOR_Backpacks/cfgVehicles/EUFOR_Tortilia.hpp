class EUFOR_Backpacks_Tortilia
{
    options[] = { "camo", "equipment" };
    label="$STR_EUFOR_ACEAX_Compat_Backpacks_Tortilia_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol", "BlueMed", "GreenMed", "OrangeMed", "RedMed" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class equipment
    {
        values[] = { "None", "Medic", "Ammo" };
        alwaysSelectable=0;
	    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_Equipment";
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
	    class Ammo
	    {
		    label = "$STR_EUFOR_ACEAX_Compat_Backpacks_ammo";
		    description = "$STR_EUFOR_ACEAX_Compat_Backpacks_ammo_desc";
		    //image = "EUFOR_ACEAX_Compat\data\Kristall.paa";
	    };
    };
};