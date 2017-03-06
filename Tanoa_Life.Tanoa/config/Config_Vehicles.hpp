class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Mrshounka_r5_rouge", "" },
            { "A3L_JeepGreenBlack", "" },
            { "Mrshounka_mercedes_190_p_civ", "" },
            { "Mrshounka_Volkswagen_Touareg_rose", "" },
            { "Mrshounka_Vandura_civ_grise", "" },
            { "Mrshounka_Bowler_c_orange", "" },
            { "Mrshounka_rs4_civ", "" },
            { "Mrshounka_yamaha_p_j", "" },
            { "Mrshounka_ducati_p_r", "" },
            { "shounka_buggy_bleufonce", "" },
            { "A8_blanc", "" },
            { "Dar_TahoeCivSilver", "" },
            { "shounka_avalanche_grise", "" },
            { "Mrshounka_cayenne_p_noir", "" },
            { "BMW235_noir", "" },
            { "A3L_Chargerrd", "" },
            { "Dar_ChallengerCivOrange", "" },
            { "shounka_monsteur_violet", "" },
            { "shounka_h2_orange", "" },
            { "Mrshounka_mustang_mat", "" },
            { "Mrshounka_bmwm1_civ_jaune", "" },
            { "Mrshounka_raptor2_civ", "" },
            { "shounka_a3_spr_civ_orange", "" },
            { "FTYPE_vertfonce", "" },
            { "BentleyGT_blanc", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class adac_car {
        side = "adac";
        conditions = "";
        vehicles[] = {
            { "B_CTRG_LSV_01_light_F", "" },
            { "B_CTRG_Heli_Transport_01_tropic_F", "" },
            { "B_Heli_Transport_03_F", "" }
		};
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "O_Truck_02_Ammo_F", "" },
            { "shounka_a3_dafxf_euro6_f", "" },
            { "shounka_a3_mantgs_f", "" },
            { "shounka_a3_renaultmagnum_f", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "C_Plane_Civil_01_F", "" },
            { "C_Plane_Civil_01_racing_F", "" },
            { "sab_FAAllegro_4", "" },
            { "sab_FAAllegro", "" },
            { "sab_stampe3", "" },
            { "sab_stampe4", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "Mrshounka_bmwm6_noir", "" },
            { "Mrshounka_c36_2015_mat_n", "" },
            { "shounka_clk_noir", "" },
            { "O_MRAP_02_F", "" },
            { "DAR_4X4", "" },
            { "DAR_MK27", "" },
            { "DAR_MK23", "" },
            { "DAR_LHS_16O_MRAP_02_F", "" },
            { "Mrshounka_veneno_c_noir", "" }
        };
    };

    class reb_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "EC635_Unarmed_CSAT", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "DAR_TahoeEMS", "" },
            { "B_Heli_Light_01_F", "call life_mediclevel >= 3" },			
            { "B_MRAP_01_F", "call life_mediclevel >= 5" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "Mrshounka_subaru08_police", "call life_coplevel >= 1" },
            { "DAR_ExplorerPolice", "call life_coplevel >= 2" },
            { "DAR_DAR_02FirebirdSSVPolice", "call life_coplevel >= 2" },
            { "shounka_avalanche_noir", "call life_coplevel >= 3" },
            { "shounka_buggy_noir", "call life_coplevel >= 3" },
            { "shounka_monsteur_noir", "call life_coplevel >= 3" },
            { "DAR_TahoePoliceDet", "call life_coplevel >= 4" },
            { "DAR_ExplorerPoliceStealth", "call life_coplevel >= 4" },
            { "shounka_rs6_noir", "call life_coplevel >= 5" },
            { "Mrshounka_a3_dodge15_civ_noir", "call life_coplevel >= 5" },
            { "Mrshounka_jeep_blinde_noir_mat", "call life_coplevel >= 6" },
            { "shounka_limo_civ_noir", "call life_coplevel >= 6" },
            { "Mrshounka_agera_p_noir", "call life_coplevel >= 7" },
            { "B_MRAP_01_F", "call life_coplevel >= 7" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "B_Heli_Light_01_F", "3" },
            { "EC635_Unarmed", "call life_coplevel >= 6" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat";
        price = 22000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking";
        price = 350000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 275000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver";
        price = 1000000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
            { "Blindé", "med", {
                "textures\hunter_med.jpg"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 60;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 100000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "Secours", "med", {
                "textures\heli_medic_512.jpg"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg}";
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_r5_rouge {
        vItemSpace = 25;
        conditions = "";
        price = 2500;
        textures[] = {};
    };

    class A3L_JeepGreenBlack {
        vItemSpace = 40;
        conditions = "";
        price = 4500;
        textures[] = {};
    };

    class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 30;
        conditions = "";
        price = 12000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_rose {
        vItemSpace = 50;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

    class Mrshounka_Vandura_civ_grise {
        vItemSpace = 100;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_Bowler_c_orange {
        vItemSpace = 50;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class Mrshounka_rs4_civ {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class Mrshounka_yamaha_p_j {
        vItemSpace = 5;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class Mrshounka_ducati_p_r {
        vItemSpace = 5;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class shounka_buggy_bleufonce {
        vItemSpace = 15;
        conditions = "";
        price = 80000;
        textures[] = {};
    };

    class A8_blanc {
        vItemSpace = 30;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class Dar_TahoeCivSilver {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class shounka_avalanche_grise {
        vItemSpace = 60;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class Mrshounka_cayenne_p_noir {
        vItemSpace = 50;
        conditions = "";
        price = 120000;
        textures[] = {};
    };

    class BMW235_noir {
        vItemSpace = 30;
        conditions = "";
        price = 120000;
        textures[] = {};
    };

    class A3L_Chargerrd {
        vItemSpace = 30;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class Dar_ChallengerCivOrange {
        vItemSpace = 30;
        conditions = "";
        price = 160000;
        textures[] = {};
    };

    class shounka_monsteur_violet {
        vItemSpace = 60;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class shounka_h2_orange {
        vItemSpace = 60;
        conditions = "";
        price = 230000;
        textures[] = {};
    };

    class Mrshounka_mustang_mat {
        vItemSpace = 30;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_bmwm1_civ_jaune {
        vItemSpace = 30;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_raptor2_civ {
        vItemSpace = 80;
        conditions = "";
        price = 300000;
        textures[] = {};
    };

    class shounka_a3_spr_civ_orange {
        vItemSpace = 140;
        conditions = "";
        price = 350000;
        textures[] = {};
    };

    class FTYPE_vertfonce {
        vItemSpace = 30;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class BentleyGT_blanc {
        vItemSpace = 30;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class O_Truck_02_Ammo_F {
        vItemSpace = 180;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class shounka_a3_dafxf_euro6_f {
        vItemSpace = 210;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class shounka_a3_mantgs_f {
        vItemSpace = 240;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class shounka_a3_renaultmagnum_f {
        vItemSpace = 280;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class C_Plane_Civil_01_F {
        vItemSpace = 25;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 25;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_FAAllegro_4 {
        vItemSpace = 25;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_FAAllegro {
        vItemSpace = 25;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_stampe3 {
        vItemSpace = 25;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_stampe4 {
        vItemSpace = 25;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class Mrshounka_subaru08_police {
        vItemSpace = 50;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

    class DAR_ExplorerPolice {
        vItemSpace = 50;
        conditions = "";
        price = 20000;
        textures[] = {};
    };

    class DAR_DAR_02FirebirdSSVPolice {
        vItemSpace = 50;
        conditions = "";
        price = 30000;
        textures[] = {};
    };

    class shounka_avalanche_noir {
        vItemSpace = 50;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class shounka_buggy_noir {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class shounka_monsteur_noir {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class B_Helipilot_F {
        vItemSpace = 50;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class shounka_nemo_pompier {
        vItemSpace = 50;
        conditions = "";
        price = 3500;
        textures[] = {};
    };

    class shounka_a3_pompier_sprinter {
        vItemSpace = 80;
        conditions = "";
        price = 12000;
        textures[] = {};
    };

    class mercedes_atego_pompier_ingame {
        vItemSpace = 120;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class DAR_TahoePoliceDet {
        vItemSpace = 50;
        conditions = "";
        price = 20000;
        textures[] = {};
    };

    class DAR_ExplorerPoliceStealth {
        vItemSpace = 50;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

    class shounka_rs6_noir {
        vItemSpace = 50;
        conditions = "";
        price = 50000;
        textures[] = {};
    };

    class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

    class Mrshounka_jeep_blinde_noir_mat {
        vItemSpace = 50;
        conditions = "";
        price = 120000;
        textures[] = {};
    };

    class shounka_limo_civ_noir {
        vItemSpace = 50;
        conditions = "";
        price = 250000;
        textures[] = {};
    };

    class Mrshounka_agera_p_noir {
        vItemSpace = 50;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class EC635_Unarmed {
        vItemSpace = 50;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class Mrshounka_bmwm6_noir {
        vItemSpace = 50;
        conditions = "";
        price = 350000;
        textures[] = {};
    };

    class Mrshounka_c36_2015_mat_n {
        vItemSpace = 50;
        conditions = "";
        price = 400000;
        textures[] = {};
    };

    class shounka_clk_noir {
        vItemSpace = 50;
        conditions = "";
        price = 450000;
        textures[] = {};
    };

    class DAR_4X4 {
        vItemSpace = 300;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };

    class DAR_MK27 {
        vItemSpace = 340;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };

    class DAR_MK23 {
        vItemSpace = 290;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };

    class DAR_LHS_16O_MRAP_02_F {
        vItemSpace = 450;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };

    class Mrshounka_veneno_c_noir {
        vItemSpace = 20;
        conditions = "";
        price = 5000000;
        textures[] = {};
    };

    class EC635_Unarmed_CSAT {
        vItemSpace = 90;
        conditions = "";
        price = 150000;
        textures[] = {};
    };

    class B_CTRG_LSV_01_light_F {
        vItemSpace = 20;
        conditions = "";
        price = 5000;
        textures[] = {};
    };

    class B_CTRG_Heli_Transport_01_tropic_F {
        vItemSpace = 50;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class B_Heli_Transport_03_F {
        vItemSpace = 75;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    class DAR_TahoeEMS {
        vItemSpace = 75;
        conditions = "";
        price = 5000;
        textures[] = {};
    };
};
