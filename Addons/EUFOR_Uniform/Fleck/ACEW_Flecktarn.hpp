/* ------- Normal ------- */
class W_EUFOR_Uniform_Fleck: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
         class W_EUFOR_Uniform_Fleck_Shirt {};
         class W_EUFOR_Uniform_Fleck_Sleeves {};
         class W_EUFOR_Uniform_Fleck1 {};
    };
};
class W_EUFOR_Uniform_Fleck1: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Fleck1_Shirt {};
        class W_EUFOR_Uniform_Fleck1_Sleeves {};
        class W_EUFOR_Uniform_Fleck {};
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Fleck_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Fleck {};
        class W_EUFOR_Uniform_Fleck_Shirt {};
    };
};
class W_EUFOR_Uniform_Fleck1_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Fleck1 {};
        class W_EUFOR_Uniform_Fleck1_Shirt {};
    };
};
/* ------- Oberteil an ------ */
class W_EUFOR_Uniform_Fleck_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Fleck {};
        class W_EUFOR_Uniform_Fleck_Sleeves {};
    };
};
class W_EUFOR_Uniform_Fleck1_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Fleck1 {};
        class W_EUFOR_Uniform_Fleck1_Sleeves {};
    };
};

/* ------- Tarn-Uniform - */
/* ------- Normal ------- */
class W_EUFOR_Uniform_Tarn_Fleck: ace_wardrobe_base_U_sleeves_up_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Tarn_Fleck_Shirt {};
        class W_EUFOR_Uniform_Tarn_Fleck_Sleeves {};
    };
};
/* ------- Ärmel hoch ------- */
class W_EUFOR_Uniform_Tarn_Fleck_Sleeves: ace_wardrobe_base_U_sleeves_down_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Tarn_Fleck {};
        class W_EUFOR_Uniform_Tarn_Fleck_Shirt {};
    };
};
/* ------- Oberteil an ------ */
class W_EUFOR_Uniform_Tarn_Fleck_Shirt: ace_wardrobe_base_U_jacket_closed_EUFOR
{
    components[] = {};
    class modifiableTo {
        class W_EUFOR_Uniform_Tarn_Fleck {};
        class W_EUFOR_Uniform_Tarn_Fleck_Sleeves {};
    };
};