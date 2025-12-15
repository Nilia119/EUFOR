class None;

class EUFOR_Helmets_Balaclava_Base: None
{
    author="$STR_EUFOR_Helmets_Author";
    scope=0;
    displayName="EUFOR Balaclava Base";
    model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
    picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_blk_F_ca.paa";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa"
    };
    identityTypes[]={};
    mass=4;
};

class EUFOR_Helmets_Balaclava_G_Base: EUFOR_Helmets_Balaclava_Base
{
    author="$STR_EUFOR_Helmets_Author";
    scope=0;
    displayName="EUFOR Balaclava w Glasses Base";
    model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
    picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca.paa";
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Exp\BLUFOR\Data\G_Balaclava_TI_blk_F_co.paa",
        "\A3\Characters_F\Heads\Glasses\data\g_combat_ca.paa"
    };
    identityTypes[]={};
    mass=8;
};

