class EUFOR_Uniforms_CTRG
{
    options[] = { "camo", "gloves", "flag" };
    label="$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_desc";
    class camo
    {
        values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
	    label = "$STR_EUFOR_ACEAX_Compat_Color_desc";
    };
    class gloves
    {
      values[] = { "None", "Sand" };
      alwaysSelectable=0;
      label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_gloves";
      class None
      {
        label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
      };
      class Sand
      {
        label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_gloves_desc";
        image = "#(rgb,8,8,3)color(0.82,0.71,0.55,1)";
      };
    };
	class flag
	{
		values[] = { "EU", "None" };
		alwaysSelectable=0;
		label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_flag";
		class EU
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_flag_desc";
			image = "EUFOR_ACEAX_Compat\data\EU.paa";
		};
		class None
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_none_desc";
		};
	};
};

class EUFOR_Uniforms_CTRG_Sleeves
{
  options[] = { "camo", "gloves", "flag" };
  label="$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_Sleeves_desc";
  class camo
  {
    values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
  };
  class gloves
  {
    values[] = { "None", "Sand" };
    alwaysSelectable=0;
    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_gloves";
    class None
    {
      label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
    };
    class Sand
    {
      label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_gloves_desc";
      image = "#(rgb,8,8,3)color(0.82,0.71,0.55,1)";
    };
  };
	class flag
	{
		values[] = { "EU", "None" };
		alwaysSelectable=0;
		label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_flag";
		class EU
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_flag_desc";
			image = "EUFOR_ACEAX_Compat\data\EU.paa";
		};
		class None
		{
			label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_none_desc";
		};
	};
};

class EUFOR_Uniforms_CTRG_Shirt
{
  options[] = { "camo", "gloves" };
  label="$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_Shirt_desc";
  class camo
  {
    values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
  };
  class gloves
  {
    values[] = { "None", "Sand" };
    alwaysSelectable=0;
    label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_gloves";
    class None
    {
      label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_None_desc";
    };
    class Sand
    {
      label = "$STR_EUFOR_ACEAX_Compat_Uniforms_CTRG_gloves_desc";
      image = "#(rgb,8,8,3)color(0.82,0.71,0.55,1)";
    };
  };
};

//  Tarnuniform

class EUFOR_Uniforms_Camo
{
  options[] = { "camo" };
  label="$STR_EUFOR_ACEAX_Compat_Uniforms_Camo_desc";
  class camo
  {
    values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
  };
};

class EUFOR_Uniforms_Camo_Sleeves
{
  options[] = { "camo" };
  label="$STR_EUFOR_ACEAX_Compat_Uniforms_Camo_Sleeves_desc";
  class camo
  {
    values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
  };
};

class EUFOR_Uniforms_Camo_Shirt
{
  options[] = { "camo"};
  label="$STR_EUFOR_ACEAX_Compat_Uniforms_Camo_Shirt_desc";
  class camo
  {
    values[] = { "Fleck", "Multi", "Schnee", "TropenD", "Tropen", "Black", "Blue", "EMR", "Olive", "Pol" };
  };
};