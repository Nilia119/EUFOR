//Flags
class FlagCarrier;
class FlagCarrier_Asym;

class EUFOR_Flag_EU: FlagCarrier
{
    author="$STR_EUFOR_Objects_Author";
    class SimpleObject
    {
        eden=0;
        animate[]=
        {

            {
                "flag",
                        0
            }
        };
        hide[]={};
        verticalOffset=3.977;
        verticalOffsetWorld=0;
        init="''";
    };
    editorPreview="EUFOR_Objects\flags\editor_pv\Europa_D.jpg";
    _generalMacro="Flag_EU_F";
    scope=2;
    scopeCurator=2;
    displayName="$STR_EUFOR_Objects_Flag_EU";
    hiddenSelectionsTextures[]=
    {
        "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
    };
    class EventHandlers
    {
        init="(_this select 0) setFlagTexture 'EUFOR_Objects\flags\Europa.paa'";
    };
};

class EUFOR_Flag_EU_H: FlagCarrier_Asym
{
    author="$STR_EUFOR_Objects_Author";
    class SimpleObject
    {
        eden=0;
        animate[]=
        {

            {
                "flag",
                        0
            }
        };
        hide[]={};
        verticalOffset=3.977;
        verticalOffsetWorld=0;
        init="''";
    };
    editorPreview="EUFOR_Objects\flags\editor_pv\Europa_H.jpg";
    _generalMacro="Flag_EU_F_H";
    scope=2;
    scopeCurator=2;
    displayName="$STR_EUFOR_Objects_Flag_EU_H";
    class EventHandlers
    {
        init="(_this select 0) setFlagTexture 'EUFOR_Objects\flags\Europa.paa'";
    };
};