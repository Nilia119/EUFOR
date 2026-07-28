/* ------- Normal ------- */
class EUFOR_Uniforms_Fleck: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
         class EUFOR_Uniforms_Fleck_Shirt {};
         class EUFOR_Uniforms_Fleck_Sleeves {};
         class EUFOR_Uniforms_Fleck1 {};
    };
};
class EUFOR_Uniforms_Fleck1: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Fleck1_Shirt {};
        class EUFOR_Uniforms_Fleck1_Sleeves {};
        class EUFOR_Uniforms_Fleck {};
    };
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Fleck_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Fleck {};
        class EUFOR_Uniforms_Fleck_Shirt {};
    };
};
class EUFOR_Uniforms_Fleck1_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Fleck1 {};
        class EUFOR_Uniforms_Fleck1_Shirt {};
    };
};
/* ------- Oberteil an ------ */
class EUFOR_Uniforms_Fleck_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Fleck {};
        class EUFOR_Uniforms_Fleck_Sleeves {};
    };
};
class EUFOR_Uniforms_Fleck1_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Fleck1 {};
        class EUFOR_Uniforms_Fleck1_Sleeves {};
    };
};

/* ------- Tarn-Uniform - */
/* ------- Normal ------- */
class EUFOR_Uniforms_Tarn_Fleck: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Fleck_Shirt {};
        class EUFOR_Uniforms_Tarn_Fleck_Sleeves {};
    };
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Fleck_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Fleck {};
        class EUFOR_Uniforms_Tarn_Fleck_Shirt {};
    };
};
/* ------- Oberteil an ------ */
class EUFOR_Uniforms_Tarn_Fleck_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Fleck {};
        class EUFOR_Uniforms_Tarn_Fleck_Sleeves {};
    };
};