/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 5000, "" },
            { "skn_u_nbc_indep_gre", "Combi AntiRad", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "skn_m04_gas_mask_gre", "Masque Antirad", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "T-shirt", 25, "" },
            { "U_B_CombatUniform_mcam", "Inter", 350, "call life_coplevel >= 2" },
            { "rds_uniform_Functionary1", "FBI", 350, "call life_coplevel >= 4" },
            { "U_Marshal", "Sherif", 350, "call life_coplevel >= 7" },
            { "rds_uniform_Functionary2", "Costard", 350, "call life_coplevel >= 7" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_MilCap_blue", "", 50, "call life_coplevel >= 2" },
            { "H_Beret_blk", "", 75, "call life_coplevel >= 3" },
            { "H_Watchcap_blk", "", 75, "call life_coplevel >= 3" },
            { "gign_Balaclava", "", 100, "call life_coplevel >= 4" },
            { "gign_helm", "", 120, "call life_coplevel >= 4" },
            { "gign_helm3", "", 120, "call life_coplevel >= 4" },
            { "gign_helm4", "", 120, "call life_coplevel >= 4" },
            { "ALE_H_Cowboy_Brown", "", 120, "call life_coplevel >= 7" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 3" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_blk", "", 500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "A3L_EMT1", "Infirmier", 50, "" },
            { "A3L_EMT2", "Rescue", 200, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_blu", "", 10, "" },
            { "H_Cap_red", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_blk", "", 3000, "" }
        };
    };

    class adac {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "adac";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_CTRG_Soldier_F", "", 50, "" },
            { "U_B_CTRG_Soldier_3_F", "", 50, "" },
            { "U_B_CTRG_Soldier_2_F", "", 50, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 50, "" },
            { "U_B_T_FullGhillie_tna_F", "", 50, "" },
            { "U_B_T_Soldier_F", "", 50, "" },
            { "U_B_T_Soldier_AR_F", "", 50, "" },
            { "U_B_T_Soldier_SL_F", "", 50, "" },
            { "U_I_G_resistanceLeader_F", "", 50, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Booniehat_oli", "", 10, "" },
            { "H_Watchcap_blk", "", 10, "" },
            { "H_HelmetB_TI_tna_F", "", 10, "" },
            { "H_Bandanna_khk", "", 10, "" },
            { "H_Watchcap_khk", "", 10, "" },
            { "H_PilotHelmetHeli_O", "", 10, "" },
            { "H_Cap_headphones", "", 10, "" },
            { "H_HelmetB_tna_F", "", 10, "" },
            { "H_HelmetB_Enh_tna_F", "", 10, "" },
            { "H_Cap_oli_hs", "", 10, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "", 10, "" },
            { "G_Combat_Goggles_tna_F", "", 10, "" },
            { "G_Balaclava_TI_tna_F", "", 10, "" },
            { "G_Balaclava_TI_G_tna_F", "", 10, "" },
            { "G_Tactical_Clear", "", 10, "" },
            { "G_Tactical_Black", "", 10, "" },
            { "G_Bandanna_oli", "", 10, "" },
            { "G_Shades_Green", "", 10, "" },
            { "G_Shades_Black", "", 10, "" },
            { "G_Lowprofile", "", 10, "" },
            { "G_Balaclava_blk", "", 10, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_PlateCarrier1_rgr_noflag_F", "", 10, "" },
            { "V_PlateCarrier1_blk", "", 10, "" },
            { "V_PlateCarrier2_rgr_noflag_F", "", 10, "" },
            { "V_PlateCarrier1_rgr", "", 10, "" },
            { "V_PlateCarrier1_tna_F", "", 10, "" },
            { "V_Chestrig_rgr", "", 10, "" },
            { "V_Rangemaster_belt", "", 10, "" },
            { "V_TacChestrig_oli_F", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_rgr_ReconMedic", "", 3000, "" },
            { "B_ViperLightHarness_blk_F", "", 3000, "" },
            { "B_Parachute", "", 3000, "" },
            { "B_AssaultPack_tna_F", "", 3000, "" },
            { "B_Kitbag_rgr", "", 3000, "" },
            { "B_ViperHarness_oli_F", "", 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Afghan05", "", 500, "" },
            { "U_Afghan06NH", "", 500, "" },
            { "U_O_T_Sniper_F", "", 500, "" },
            { "U_O_V_Soldier_Viper_F", "", 500, "" },
            { "U_O_V_Soldier_Viper_hex_F", "", 500, "" },
            { "U_BG_Guerrilla_6_1", "", 500, "" },
            { "U_O_T_Soldier_F", "", 500, "" },
            { "U_O_CombatUniform_ocamo", "", 500, "" },
            { "U_O_CombatUniform_oucamo", "", 500, "" },
            { "U_I_CombatUniform", "", 500, "" },
            { "U_I_CombatUniform_shortsleeve", "", 500, "" },
            { "U_I_OfficerUniform", "", 500, "" },
            { "U_O_T_Officer_F", "", 500, "" },
            { "U_O_OfficerUniform_ocamo", "", 500, "" },
            { "U_BG_leader", "", 500, "" },
            { "U_BG_Guerilla1_1", "", 500, "" },
            { "U_I_C_Soldier_Camo_F", "", 500, "" },
            { "U_I_C_Soldier_Para_3_F", "", 500, "" },
            { "U_I_C_Soldier_Para_4_F", "", 500, "" },
            { "U_AfghU_I_C_Soldier_Para_1_Fan05", "", 500, "" },
            { "U_I_C_Soldier_Para_2_F", "", 500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Shemag_khk", "", 500, "" },
            { "H_ShemagOpen_khk", "", 500, "" },
            { "H_ShemagOpen_tan", "", 500, "" },
            { "H_Shemag_olive", "", 500, "" },
            { "H_Shemag_tan", "", 500, "" },
            { "H_Shemag_olive_hs", "", 500, "" },
            { "H_Bandanna_cbr", "", 150, "" },
            { "H_Bandanna_khk", "", 150, "" },
            { "H_Bandanna_sand", "", 150, "" },
            { "H_Bandanna_khk_hs", "", 150, "" },
            { "H_Bandanna_sgg", "", 150, "" },
            { "H_Watchcap_cbr", "", 150, "" },
            { "H_Watchcap_camo", "", 150, "" },
            { "H_Watchcap_khk", "", 150, "" },
            { "H_HelmetSpecO_ghex_F", "", 150, "" },
            { "H_HelmetSpecO_ocamo", "", 150, "" },
            { "H_HelmetCrew_O_ghex_F", "", 150, "" },
            { "H_HelmetCrew_I", "", 150, "" },
            { "H_HelmetCrew_O", "", 150, "" },
            { "H_CrewHelmetHeli_I", "", 150, "" },
            { "H_CrewHelmetHeli_O", "", 150, "" },
            { "H_HelmetLeaderO_ghex_F", "", 150, "" },
            { "H_HelmetLeaderO_ocamo", "", 150, "" },
            { "H_HelmetLeaderO_oucamo", "", 150, "" },
            { "H_PilotHelmetHeli_I", "", 150, "" },
            { "H_PilotHelmetHeli_O", "", 150, "" },
            { "H_HelmetO_ghex_F", "", 150, "" },
            { "H_HelmetO_ocamo", "", 150, "" },
            { "H_HelmetO_oucamo", "", 150, "" },
            { "H_HelmetIA", "", 150, "" },
            { "H_Cap_blk_Raven", "", 150, "" },
            { "H_Cap_brn_SPECOPS", "", 150, "" },
            { "H_Booniehat_oli", "", 150, "" },
            { "H_Booniehat_tan", "", 150, "" },
            { "H_Booniehat_dgtl", "", 150, "" },
            { "H_MilCap_gry", "", 150, "" },
            { "H_MilCap_ghex_F", "", 150, "" },
            { "H_MilCap_ocamo", "", 150, "" },
            { "H_MilCap_dgtl", "", 150, "" },
            { "Masque_Alien1", "", 150, "" },
            { "Masque_Anonymous", "", 150, "" },
            { "Masque_Chains", "", 150, "" },
            { "Payday_GeneralO", "", 150, "" },
            { "Casque_Moto", "", 150, "" },
            { "Masque_Clinton", "", 150, "" },
            { "Masque_speedRunner", "", 150, "" },
            { "Masque_Unic", "", 150, "" },
            { "Masque_Aubrey", "", 150, "" },
            { "Masque_Bonnie", "", 150, "" },
            { "Masque_Bush", "", 150, "" },
            { "Masque_Mempo", "", 150, "" },
            { "Masque_Lincoln", "", 150, "" },
            { "Masque_Wolfv2", "", 150, "" },
            { "Masque_archNemesis", "", 150, "" },
            { "Masque_Arnold", "", 150, "" },
            { "Masque_Chuck", "", 150, "" },
            { "Masque_Clover", "", 150, "" },
            { "Masque_Fish", "", 150, "" },
            { "Masque_Hockey", "", 150, "" },
            { "Masque_Metalhead", "", 150, "" },
            { "Masque_Religieuse", "", 150, "" },
            { "Masque_Smiley", "", 150, "" },
            { "Masque_Santa", "", 150, "" },
            { "Masque_Momie", "", 150, "" },
            { "Masque_Optimiste", "", 150, "" },
            { "Masque_forceAlpha", "", 150, "" },
            { "Masque_GdG", "", 150, "" },
            { "Masque_Gombo", "", 150, "" },
            { "Masque_Lion", "", 150, "" },
            { "Masque_Orc", "", 150, "" },
            { "Masque_Mark", "", 150, "" },
            { "Masque_Macrilleuse", "", 150, "" },
            { "Masque_Hoxton", "", 150, "" },
            { "Masque_Incendiaire", "", 150, "" },
            { "Masque_Dallas", "", 150, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" }
		};
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_BandollierB_ghex_F", "", 4500, "" },
            { "V_BandollierB_khk", "", 4500, "" },
            { "V_BandollierB_blk", "", 4500, "" },
            { "V_BandollierB_oli", "", 4500, "" },
            { "V_BandollierB_rgr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_HarnessO_gry", "", 7500, "" },
            { "V_HarnessO_ghex_F", "", 7500, "" },
            { "V_HarnessOGL_brn", "", 7500, "" },
            { "V_HarnessOGL_gry", "", 7500, "" },
            { "V_HarnessOGL_ghex_F", "", 7500, "" },
            { "V_PlateCarrierIA1_dgtl", "", 10000, "" },
            { "V_Chestrig_khk", "", 10000, "" },
            { "V_Chestrig_blk", "", 10000, "" },
            { "V_Chestrig_oli", "", 10000, "" },
            { "V_Chestrig_rgr", "", 10000, "" },
            { "V_PlateCarrierIA2_dgtl", "", 12500, "" },
            { "V_PlateCarrierIAGL_dgtl", "", 12500, "" },
            { "V_TacChestrig_cbr_F", "", 17500, "" },
            { "V_TacChestrig_oli_F", "", 17500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" },
            { "V_TacVest_camo", "", 20000, "" },
            { "V_TacVest_khk", "", 20000, "" },
            { "V_TacVest_brn", "", 20000, "" },
            { "V_TacVest_blk", "", 20000, "" },
            { "V_TacVest_oli", "", 20000, "" },
            { "V_I_G_resistanceLeader_F", "", 20000, "" },
            { "V_TacVestIR_blk", "", 25000, "" },
            { "V_PlateCarrierIAGL_oli", "", 50000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_ocamo", "", 2000, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_TacticalPack_ocamo", "", 2500, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_TacticalPack_rgr", "", 2500, "" },
            { "B_FieldPack_ghex_F", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_cbr", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_hex_F", "", 6500, "" },
            { "B_Bergen_dgtl_F", "", 6500, "" },
            { "B_Bergen_tna_F", "", 6500, "" },
            { "B_Carryall_ghex_F", "", 7500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" }
		};
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};