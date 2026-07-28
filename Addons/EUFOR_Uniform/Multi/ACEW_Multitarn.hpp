/* ------- Normal ------- */
class EUFOR_Uniforms_Multi: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
         class EUFOR_Uniforms_Multi_Shirt {};
         class EUFOR_Uniforms_Multi_Sleeves {};
    };
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Multi_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Multi {};
        class EUFOR_Uniforms_Multi_Shirt {};
    };
};
/* ------- Oberteil an ------ */
class EUFOR_Uniforms_Multi_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Multi {};
        class EUFOR_Uniforms_Multi_Sleeves {};
    };
};
/* ------- Tarn-Uniform - */
/* ------- Normal ------- */
class EUFOR_Uniforms_Tarn_Multi: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Multi_Shirt {};
        class EUFOR_Uniforms_Tarn_Multi_Sleeves {};
    };
};
/* ------- Ärmel hoch ------- */
class EUFOR_Uniforms_Tarn_Multi_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Multi {};
        class EUFOR_Uniforms_Tarn_Multi_Shirt {};
    };
};
/* ------- Oberteil an ------ */
class EUFOR_Uniforms_Tarn_Multi_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class EUFOR_Uniforms_Tarn_Multi {};
        class EUFOR_Uniforms_Tarn_Multi_Sleeves {};
    };
};