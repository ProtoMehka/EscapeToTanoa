/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 6500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 9850, -1, "" },
            { "hgun_ACPC2_F", "", 11500, -1, "" },
            { "hgun_PDW2000_F", "", 20000, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "hlc_rifle_ak74", "", 35000, 5000, "" },
            { "hlc_rifle_aks74", "", 35000, 5000, "" },
            { "hlc_rifle_ak12", "", 35000, 5000, "" },
            { "hlc_rifle_aks74u", "", 35000, 5000, "" },
            { "hlc_rifle_ak47", "", 35000, 5000, "" },
            { "hlc_rifle_akm", "", 35000, 5000, "" },
            { "hlc_rifle_akmgl", "", 35000, 5000, "" },
            { "hlc_rifle_rpk", "", 35000, 5000, "" },
            { "arifle_ARX_ghex_F", "", 35000, 5000, "" },
            { "arifle_CTAR_ghex_F", "", 35000, 5000, "" },
            { "arifle_CTARS_ghex_F", "", 65000, 5000, "" },
            { "srifle_DMR_07_ghex_F", "", 110000, 5000, "" },
            { "srifle_GM6_ghex_F", "", 200000, 5000, "" },
            { "HLC_Optic_PSO1", "", 2500, 625, "" },
            { "HLC_Optic_1p29", "", 2500, 625, "" },
            { "hlc_optic_kobra", "", 2500, 625, "" },
            { "optic_Arco_ghex_F", "", 2500, 625, "" },
            { "optic_Hamr", "", 2500, 625, "" },
            { "optic_DMS_ghex_F", "", 2500, 625, "" },
            { "optic_LRPS_ghex_F", "", 2500, 625, "" },
            { "hlc_muzzle_545SUP_AK", "", 2500, 625, "" },
            { "hlc_muzzle_762SUP_AK", "", 2500, 625, "" },
            { "muzzle_snds_58_ghex_F", "", 2500, 625, "" },
            { "muzzle_snds_58_wdm_F", "", 2500, 625, "" },
            { "muzzle_snds_65_TI_ghex_F", "", 2500, 625, "" },
            { "hlc_VOG25_AK", "", 100, 25, "" },
            { "hlc_GRD_Red", "", 100, 25, "" },
            { "hlc_GRD_blue", "", 100, 25, "" },
            { "hlc_GRD_green", "", 100, 25, "" },
            { "hlc_GRD_yellow", "", 100, 25, "" },
            { "hlc_GRD_white", "", 100, 25, "" },
            { "hlc_GRD_purple", "", 100, 25, "" },
            { "hlc_GRD_orange", "", 100, 25, "" }
        };
        mags[] = {
            { "hlc_10rnd_12g_buck_S12", "", 2000, 100, "" },
            { "hlc_10rnd_12g_slug_S12", "", 2000, 100, "" },
            { "hlc_30Rnd_545x39_B_AK", "", 2000, 100, "" },
            { "hlc_30Rnd_545x39_t_ak", "", 2000, 100, "" },
            { "hlc_45Rnd_545x39_t_rpk", "", 2000, 100, "" },
            { "hlc_30Rnd_545x39_EP_ak", "", 2000, 100, "" },
            { "hlc_30Rnd_762x39_b_ak", "", 2000, 100, "" },
            { "hlc_30Rnd_762x39_t_ak", "", 2000, 100, "" },
            { "hlc_45Rnd_762x39_t_rpk", "", 2000, 100, "" },
            { "hlc_45Rnd_762x39_m_rpk", "", 2000, 100, "" },
            { "hlc_75Rnd_762x39_m_rpk", "", 2000, 100, "" },
            { "hlc_30Rnd_545x39_S_AK", "", 2000, 100, "" },
            { "hlc_60Rnd_545x39_t_rpk", "", 2000, 100, "" },
            { "hlc_30rnd_762x39_s_ak", "", 2000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 2000, 100, "" },
            { "30Rnd_580x42_Mag_F", "", 2000, 100, "" },
            { "100Rnd_580x42_Mag_F", "", 2000, 100, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 2000, 100, "" },
            { "5Rnd_127x108_Mag", "", 2000, 100, "" }
        };
        accs[] = {};
    };

    class adac {
        name = "Armory Unity";
        side = "adac";
        conditions = "";
        items[] = {
            { "hgun_P07_khk_F", "", 5000, 2500, "" },
            { "arifle_SPAR_01_khk_F", "", 10000, 5000, "" },
            { "arifle_SPAR_03_khk_F", "", 25000, 12500, "" },
            { "arifle_SPAR_01_blk_F", "", 10000, 5000, "" },
            { "arifle_SPAR_03_blk_F", "", 25000, 12500, "" },
            { "srifle_DMR_02_camo_F", "", 50000, 25000, "" },
            { "arifle_MX_khk_F", "", 10000, 5000, "" },
            { "arifle_MXM_khk_F", "", 20000, 10000, "" },
            { "arifle_MXC_khk_F", "", 40000, 20000, "" },
            { "srifle_LRR_tna_F", "", 65000, 32500, "" }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 300, 100, "" },
            { "30Rnd_556x45_Stanag", "", 275, 100, "" },
            { "20Rnd_762x51_Mag", "", 500, 100, "" },
            { "10Rnd_338_Mag", "", 125, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 125, 100, "" },
            { "7Rnd_408_Mag", "", 125, 100, "" }
        };
        accs[] = {};
    };

    class adacg {
        name = "Unity Supply";
        side = "adac";
        conditions = "";
        items[] = {
            { "NVGogglesB_grn_F", "", 2500, 500, "" },
            { "NVGoggles_OPFOR", "", 2500, -1, "" },
            { "NVGoggles_INDEP", "", 2500, -1, "" },
            { "Laserdesignator_03", "", 2500, -1, "" },
            { "ItemGPS", "", 2500, -1, "" },
            { "FirstAidKit", "", 2500, -1, "" },
            { "acc_flashlight", "", 1000, 100, "" },
            { "optic_tws", "", 1000, 100, "" },
            { "optic_LRPS", "", 1000, 100, "" },
            { "optic_LRPS_tna_F", "", 1000, 100, "" },
            { "optic_Aco_smg", "", 1000, 100, "" },
            { "bipod_01_F_khk", "", 1000, 100, "" },
            { "bipod_01_F_blk", "", 1000, 100, "" },
            { "muzzle_snds_M", "", 1000, 100, "" },
            { "muzzle_snds_m_khk_F", "", 1000, 100, "" },
            { "muzzle_snds_H_khk_F", "", 1000, 100, "" },
            { "muzzle_snds_B", "", 1000, 100, "" },
            { "muzzle_snds_B_khk_F", "", 1000, 100, "" },
            { "muzzle_snds_L", "", 1000, 100, "" },
            { "muzzle_snds_338_black", "", 1000, 100, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "R3F_JIM_LR", "", 10000, 2500, "call life_coplevel >= 3" },
            { "HandGrenade_Stone", "Flashbang", 1700, -1, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "R3F_AIMPOINT", "", 650, 100, "" },
            { "R3F_EOTECH", "", 750, 100, "call life_coplevel >= 1" },
            { "R3F_J4", "", 1200, 100, "call life_coplevel >= 1" },
            { "R3F_J8", "", 1300, 100, "call life_coplevel >= 1" },
            { "R3F_J10", "", 1400, 100, "call life_coplevel >= 1" },
            { "R3F_NF", "", 1800, 100, "call life_coplevel >= 1" },
            { "R3F_NF42", "", 2000, 100, "call life_coplevel >= 1" },
            { "R3F_OB50", "", 2250, 100, "call life_coplevel >= 1" },
            { "R3F_LAMPE_SURB", "", 2750, 100, "call life_coplevel >= 1" },
            { "R3F_SILENCIEUX_FAMAS", "", 2750, 100, "call life_coplevel >= 1" },
            { "R3F_SILENCIEUX_HK417", "", 2750, 100, "call life_coplevel >= 1" },
            { "R3F_SILENCIEUX_HK416", "", 2750, 100, "call life_coplevel >= 1" },
            { "R3F_BIPIED_HK417", "", 2750, 100, "call life_coplevel >= 1" },
            { "R3F_SILENCIEUX_MINIMI", "", 2750, 100, "call life_coplevel >= 1" },
            { "R3F_PAMAS", "", 4500, 1125, "call life_coplevel >= 1" },
            { "R3F_MP5A5", "", 7500, 1750, "call life_coplevel >= 1" },
            { "R3F_Famas_F1", "", 12500, 3800, "call life_coplevel >= 2" },
            { "R3F_HK416M", "", 24000, 6000, "call life_coplevel >= 3" },
            { "R3F_Minimi", "", 30000, 7500, "call life_coplevel >= 4" },
            { "R3F_HK417M", "", 48000, 12000, "call life_coplevel >= 5" },
            { "R3F_PGM_Hecate_II", "", 80000, 20000, "call life_coplevel >= 6" },
            { "R3F_TAC50", "", 120000, 30000, "call life_coplevel >= 7" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "R3F_15Rnd_9x19_PAMAS", "", 45, 100, "" },
            { "R3F_30Rnd_9x19_MP5", "", 130, 100, "" },
            { "R3F_25Rnd_556x45_FAMAS", "", 250, 100, "" },
            { "R3F_30Rnd_556x45_FAMAS", "", 300, 100, "" },
            { "R3F_7Rnd_M4S90", "", 200, 100, "" },
            { "R3F_30Rnd_556x45_HK416", "", 325, 100, "" },
            { "R3F_200Rnd_556x45_MINIMI", "", 375, 100, "" },
            { "R3F_20Rnd_762x51_HK417", "", 410, 100, "" },
            { "R3F_7Rnd_127x99_PGM", "", 350, 100, "" },
            { "R3F_5Rnd_127x99_TAC50", "", 375, 100, "" }
        };
        accs[] = {};
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
