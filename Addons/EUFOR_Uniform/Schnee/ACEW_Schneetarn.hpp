/* ------- Normal ------- */
class EUFOR_Uniforms_Schnee_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Schnee {};
    };
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Schnee: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Schnee_Sleeves {};
    };
};
/* ------- Tarnuniform Normal ------- */
class EUFOR_Uniforms_Tarn_Schnee_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Schnee {};
    };
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Schnee: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Schnee_Sleeves {};
    };
};