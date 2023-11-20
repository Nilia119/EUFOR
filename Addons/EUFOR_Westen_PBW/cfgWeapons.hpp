class ItemCore;
class InventoryItem_Base_F;
class VestItem;

class Vest_Camo_Base: ItemCore
    {
     class ItemInfo;
    };

class PBW_splitterschutz_base: Vest_Camo_Base
{
    author="PBW-Team";
    scope=0;
    picture="\german_vests\UI\pbw_splitter_all.paa";
    hiddenSelections[]={};
    hiddenSelectionsTextures[]={};
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]={};
        model="german_vests\pbw_splitter_grpfhr.p3d";
        containerClass="Supply200";
        mass=120;
        class HitpointsProtectionInfo
        {
            class Neck
            {
                hitpointName="HitNeck";
                armor=28;
                passThrough=0.5;
                material = -1;
            };
            class Arms
            {
                hitpointName="HitArms";
                armor=28;
                passThrough=0.5;
                material = -1;
            };
            class Chest
            {
                hitpointName="HitChest";
                armor=30;
                passThrough=0.1;
                material = -1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=30;
                passThrough=0.1;
                material = -1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=30;
                passThrough=0.1;
                material = -1;
            };
            class Pelvis
            {
                hitpointName="HitPelvis";
                armor=28;
                passThrough=0.1;
                material = -1;
            };
            class Body
            {
                hitpointName="HitBody";
                armor = 1000;
                passThrough=0.1;
            };
        };
    };
};

class pbw_splitter_grpfhr: PBW_splitterschutz_base
{
    scope=2;
    author="PBW-Team";
    displayName="$STR_Splitter_GrpFhr_Fleck_name";
    model="german_vests\pbw_splitter_grpfhr.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel="german_vests\pbw_splitter_grpfhr.p3d";
    };
};
class pbw_splitter_mg: PBW_splitterschutz_base
{
    scope=2;
    author="PBW-Team";
    displayName="$STR_Splitter_MGSchuetze_Fleck_name";
    model="german_vests\pbw_splitter_mg.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel="german_vests\pbw_splitter_mg.p3d";
    };
};
class pbw_splitter_mg_h: PBW_splitterschutz_base
{
    scope=2;
    author="PBW-Team";
    displayName="$STR_Splitter_MGHilf_Fleck_name";
    model="german_vests\pbw_splitter_mg_h.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel="german_vests\pbw_splitter_mg_h.p3d";
    };
};
class pbw_splitter_sani: PBW_splitterschutz_base
{
    scope=2;
    author="PBW-Team";
    displayName="$STR_Splitter_Sanitaeter_Fleck_name";
    model="german_vests\pbw_splitter_sani.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel="german_vests\pbw_splitter_sani.p3d";
    };
};
class pbw_splitter_schtz: PBW_splitterschutz_base
{
    scope=2;
    author="PBW-Team";
    displayName="$STR_Splitter_Schuetze_Fleck_name";
    model="german_vests\pbw_splitter_schtz.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel="german_vests\pbw_splitter_schtz.p3d";
    };
};
class pbw_splitter_zivil: PBW_splitterschutz_base
{
    scope=2;
    author="PBW-Team";
    displayName="$STR_Splitter_Zivil_Fleck_name";
    picture="\german_vests\UI\pbw_splitter_zivil.paa";
    model="german_vests\pbw_splitter_zivil.p3d";
    class ItemInfo: ItemInfo
    {
        uniformModel="german_vests\pbw_splitter_zivil.p3d";
    };
};