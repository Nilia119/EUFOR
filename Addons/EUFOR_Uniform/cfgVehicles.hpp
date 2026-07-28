	class B_CTRG_Soldier_F;				// For inheritance to work, the base class has to be defined.
    class B_CTRG_Soldier_2_F;
    class B_CTRG_Soldier_3_F;

    class EUFOR_Soldat: B_CTRG_Soldier_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;
		modelSides[]={0,1,2,3,4,5,6,7};
    };

    class EUFOR_Soldat_Shirt: B_CTRG_Soldier_2_F {

        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;
	    modelSides[]={0,1,2,3,4,5,6,7};
    };

    class EUFOR_Soldat_Sleeves: B_CTRG_Soldier_3_F {
        author = "$STR_EUFOR_Uniform_Author";
        scope = 0;
        scopeCurator = 0;
	    modelSides[]={0,1,2,3,4,5,6,7};
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

    /* ============================Black====================================================== */
        #include "\EUFOR_Uniform\Black\V_Black.hpp"

    /* ============================Blue====================================================== */
        #include "\EUFOR_Uniform\Blue\V_Blue.hpp"

	/* ============================EMR====================================================== */
		#include "\EUFOR_Uniform\EMR\V_EMR.hpp"

	/* ============================Olive====================================================== */
		#include "\EUFOR_Uniform\Olive\V_Olive.hpp"

	/* ============================Pol====================================================== */
		#include "\EUFOR_Uniform\Pol\V_Pol.hpp"