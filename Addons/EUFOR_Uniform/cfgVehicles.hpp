	class B_CTRG_Soldier_F;				// For inheritance to work, the base class has to be defined.
    class B_CTRG_Soldier_2_F;
    class B_CTRG_Soldier_3_F;


    class EUFOR_BW_Soldier: B_CTRG_Soldier_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;

    };

    class EUFOR_BW_Soldier_Shirt: B_CTRG_Soldier_2_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;

    };

    class EUFOR_BW_Soldier_Sleeves: B_CTRG_Soldier_3_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;

    };

	/* ============================Tropen===================================================== */
        #include "\EUFOR_Uniform\Tropen\V_Tropentarn.hpp"

    /* ============================TropenDigital============================================== */
        #include "\EUFOR_Uniform\TropenDigital\V_TropentarnD.hpp"

    /* ============================Fleck====================================================== */
        #include "\EUFOR_Uniform\Fleck\V_Flecktarn.hpp"

    /* ============================Schnee===================================================== */
        #include "\EUFOR_Uniform\Schnee\V_Schneetarn.hpp"

    /* ============================Multi====================================================== */
        #include "\EUFOR_Uniform\Multi\V_Multitarn.hpp"