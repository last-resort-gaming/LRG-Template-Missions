class Params
{
    class gameMode
    {
        title = $STR_params_game_mode_title;
        values[] = {1,2,3};
        texts[] = {$STR_params_game_mode_1,$STR_params_game_mode_2,$STR_params_game_mode_3};
        default = 1;
    };
    class autoSave
    {
        title = $STR_params_autosave_title;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class autoSaveInterval
    {
        title = $STR_params_time_between_autosave_title;
        values[] = {600,1200,1800,3600,5400};
        texts[] = {"10","20","30","60","90"};
        default = 3600;
    };
    class playerMarkersEnabled
    {
        title = $STR_params_server_friendlymarkers_title;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class limitedFT
    {
        title = $STR_params_allowFT;
        values[] = {0,1};
        texts[] = {$STR_params_allowFT_0, $STR_params_allowFT_1};
        default = 0;
    };
    class civTraffic
    {
        title = $STR_params_civ_traffic;
        values[] = {0,1,2,4};
        texts[] = {$STR_params_civ_traffic_none,$STR_params_civ_traffic_low,$STR_params_civ_traffic_medium,$STR_params_civ_traffic_high};
        default = 2;
    };
    class civPedestrians
    {
        title = $STR_params_civPedestrians;
        values[] = {0,1,3,5,7,10,15,20,25,30};
        texts[] = {"0","1","3","5","7","10","15","20","25","30"};
        default = 5;
    };
    class distanceMission
    {
        title = $STR_params_distanceMission;
        values[] = {2000,3000,4000,6000,8000,10000,12000};
        texts[] = {"2000","3000","4000","6000","8000","10000","12000"};
        default = 3000;
    };
    class distanceSPWN
    {
        title = $STR_params_spawnDistance;
        values[] = {700,800,900,1000,1100,1200,1300,1400,1500};
        texts[] = {"700","800","900","1000","1100","1200", "1300" ,"1400", "1500"};
        default = 1100;
    };
    class enemyNearDistance
    {
        title = $STR_params_enemyCheckDistance;
        values[] = {100,200,300,400,500};
        texts[] = {"100","200","300","400","500"};
        default = 300;
    };
    class initialPlayerMoney
    {
        title = $STR_params_playerStartingMoney;
        values[] = {0, 100, 200, 500, 1000, 2500};
        texts[] = {"0", "100", "200", "500","1000","2500"};
        default = 500;
    };
    class initialFactionMoney
    {
        title = $STR_params_rebelFactionStartingMoney;
        values[] = {0,1000,2500,5000,10000};
        texts[] = {"0","1000","2500","5000","10000"};
        default = 1000;
    };
    class initialHr
    {
        title = $STR_params_initialHr;
        values[] = {0, 8, 16, 24, 32, 50};
        texts[] = {"0","8","16","24","32","50"};
        default = 8;
    };
    class A3A_idleTimeout
    {
        title = $STR_params_afk;
        values[] = {120,300,900,1800,9999999};
        texts[] = {"2","5","15","30",$STR_params_afk_disabled};
        default = 300;
    };

    class Spacer60
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class Spacer51
    {
        title = $STR_params_antistasi_plus;
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class magRepack
    {
        title = $STR_params_magRepack;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class newCarTowing
    {
        title = $STR_params_newCarTowing;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class lootCratesEnabled
    {
        title = $STR_params_lootCrateHeli;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class playerIcons
    {
        title = $STR_params_playerIcons;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class settingsTimeMultiplier
    {
        title = $STR_params_timeMultiplier;
        values[] = {1, 4, 6, 8, 12, 24};
        texts[] = {$STR_params_timeMultiplier_0, $STR_params_timeMultiplier_1, $STR_params_timeMultiplier_2,$STR_params_timeMultiplier_3,$STR_params_timeMultiplier_4,$STR_params_timeMultiplier_5};
        default = 1;
    };
    class unflipPersonCount
    {
        title = $STR_params_unflipPersonCount;
        values[] = {1, 2, 3, 4};
        texts[] = {"1","2","3","4"};
        default = 3;
    };
    class fastTravelEnemyCheck
    {
        title = $STR_params_fastTravelEnemyCheck;
        values[] = {0,1};
        texts[] = {$STR_params_fastTravelEnemyCheck_0, $STR_params_fastTravelEnemyCheck_1};
        default = 0;
    };
    class rallyPointSpawnCount
    {
        title = $STR_params_rallyPointSpawnCount;
        values[] = {10, 15, 20, 30};
        texts[] = {"10", "15", "20","30"};
        default = 10;
    };
    class aiControlTime
    {
        title = $STR_params_aiControlTime;
        values[] = {60,120,300,900,1800};
        texts[] = {"60","120","300","900", "1800"};
        default = 60;
    };
    class aiAccuracyCeiling
    {
        title = $STR_params_aiAccuracyCeiling;
        values[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        texts[] = {"0.1", "0.2", "0.3", "0.4", "0.5", "0.6", "0.7", "0.8", "0.9", "1"};
        default = 50;
    };
    class deathPenalty
    {
        title = $STR_params_deathPenalty;
        values[] = {15, 30, 50, 75, 100};
        texts[] = {"15%", "30%", "50%", "75%", "100%"};
        default = 30;
    };
    class saveZeusBuildings
    {
        title = $STR_params_saveZeusBuildings;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class rebelGarrisonLimit
    {
        title = $STR_params_rebelGarrisonLimit;
        values[] = {10,20,30};
        texts[] = {"10", "20", "30"};
        default = 20;
    };
    //TODO: make this feature production-ready
    // class unconsciousPossessAi
    // {
    //     title = $STR_params_unconsciousAiPossess;
    //     values[] = {0};
    //     texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
    //     default = 0;
    // };
    class maxConstructions
    {
        title = $STR_params_maxConstructions;
        values[] = {0,50,100,250,300};
        texts[] = {"0","50","100","250","300"};
        default = 100;
    };
    class maxSupportPoints
    {
        title = $STR_params_maxSupportPoints;
        values[] = {1,2,3,4,5,6};
        texts[] = {"1","2","3","4","5","6","7","8","9"};
        default = 3;
    };
    // class maxUnits
    // {
    //     title = $STR_params_maxUnits;
    //     values[] = {70,80,100,120,140,160,180,200,225,250};
    //     texts[] = {"70","80","100","120","140","160","180","200","225","250"};
    //     default = 140;
    // };
    class areRandomEventsEnabled
    {
        attr[] = {"server"};
        title = $STR_params_randomEvents;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class areRivalsEnabled
    {
        title = $STR_params_areRivalsEnabled;
        values[] = {0,1};
        texts[] = {$STR_params_areRivalsEnabled_0, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class rivalsDifficulty
    {
        title = $STR_params_server_riv_difficulty;
        values[] = {1,2,3};
        texts[] = {$STR_params_server_riv_difficulty_easy, $STR_params_server_riv_difficulty_medium, $STR_params_server_riv_difficulty_hard};
        default = 2;
    };

    class SpacerMembership
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class TitleMembership
    {
        title = $STR_params_membership_header;
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class membershipEnabled
    {
        title = $STR_params_server_membership_title;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class A3A_guestCommander
    {
        title = $STR_params_guestCommander;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class tkPunish
    {
        title = $STR_params_server_teamkill_title;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };

    class SpacerBalance
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class TitleBalance
    {
        title = $STR_params_balance_header;
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class A3A_enemyBalanceMul
    {
        title = $STR_params_overall_enemy_res_balance;
        values[] = {3,5,7,10,14,20,28};
        texts[] =  {$STR_params_difficulty_trivial,$STR_params_difficulty_veasy,$STR_params_difficulty_easy,$STR_params_difficulty_medium,$STR_params_difficulty_hard,$STR_params_difficulty_vhard,$STR_params_difficulty_extreme};
        default = 10;
    };
    class A3A_enemyAttackMul
    {
        attr[] = {"server"};
        title = $STR_params_response_balance;
        values[] = {3,5,7,10,14,20,28};
        texts[] =  {$STR_params_difficulty_trivial,$STR_params_difficulty_veasy,$STR_params_difficulty_easy,$STR_params_difficulty_medium,$STR_params_difficulty_hard,$STR_params_difficulty_vhard,$STR_params_difficulty_extreme};
        default = 10;
    };
    class A3A_invaderBalanceMul
    {
        attr[] = {"server"};
        title = $STR_params_resource_balance_inv;
        values[] = {10,11,12,13,14,15};
        texts[] =  {"1.0x","1.1x","1.2x","1.3x","1.4x","1.5x"};
        default = 12;
    };
    class A3A_attackHQProximityMul
    {
        attr[] = {"server"};
        title = $STR_params_enemyPref;
        values[] = {1,2,3,5,8};
        texts[] =  {$STR_params_enemyPref_nc,"2x","3x","5x","8x"};
        default = 3;
    };
    class A3A_enemySkillMul
    {
        title = $STR_params_A3A_enemySkillMul;
        values[] = {0,1,2,3,4};
        texts[] = {$STR_params_A3A_enemySkillMul_veasy,$STR_params_A3A_enemySkillMul_easy,$STR_params_A3A_enemySkillMul_medium,$STR_params_A3A_enemySkillMul_hard,$STR_params_A3A_enemySkillMul_vhard};
        default = 2;
    };
    class A3A_rebelSkillMul
    {
        title = $STR_params_A3A_rebelSkillMul;
        values[] = {0,1,2,3,4};
        texts[] = {$STR_params_A3A_enemySkillMul_veasy,$STR_params_A3A_enemySkillMul_easy,$STR_params_A3A_enemySkillMul_medium,$STR_params_A3A_enemySkillMul_hard,$STR_params_A3A_enemySkillMul_vhard};
        default = 2;
    };
    class napalmEnabled
    {
        title = $STR_params_napalmEnabled;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class allowUnfairSupports
    {
        attr[] = {"server"};
        title = $STR_params_allowUnfairSupports;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 0;
    };
    class allowFuturisticSupports
    {
        attr[] = {"server"};
        title = $STR_params_allowFuturisticSupports;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text, $STR_antistasi_dialogs_generic_button_yes_text};
        default = 0;
    };

    class SpacerEquipment
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class TitleEquipment
    {
        title = $STR_params_equipment_header;
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class minWeaps
    {
        title = $STR_params_server_unlock_threshold;
        values[] = {10,15,20,25,30,35,40,45,50,100,200,500,-1};
        texts[] = {"10","15","20","25","30","35","40","45","50","100","200","500",$STR_params_server_unlock_no_unlocks};
        default = 25;
    };
    class A3A_guestItemLimit
    {
        title = $STR_params_A3A_guestItemLimit;
        values[] = {0,10,15,25,40};
        texts[] = {$STR_params_A3A_no_limit,"10","15","25","40"};
        default = 25;
    };
    class unlockedUnlimitedAmmo
    {
        attr[] = {"server"};
        title = $STR_params_unlockedUnlimitedAmmo;
        values[] = {1,0};
        texts[] = {$STR_antistasi_dialogs_generic_button_yes_text, $STR_antistasi_dialogs_generic_button_no_text};
        default = 0;
    };
    class allowGuidedLaunchers
    {
        attr[] = {"server"};
        title = $STR_params_allowGuidedLaunchers;
        values[] = {1,0};
        texts[] = {$STR_antistasi_dialogs_generic_button_yes_text, $STR_antistasi_dialogs_generic_button_no_text};
        default = 0;
    };
    class startWithLongRangeRadio
    {
        attr[] = {"server"};
        title = $STR_params_startWithLongRangeRadio;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 1;
    };
    class aceFood
    {
        attr[] = {"server"};
        title = $STR_params_aceFood;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 0;
    };
    class helmetLossChance
    {
        title = $STR_params_helmetLossChance;
        values[] = {0,33,66,100};
        texts[] = {$STR_params_helmetLossChance_0,$STR_params_helmetLossChance_1,$STR_params_helmetLossChance_2,$STR_params_helmetLossChance_3};
        default = 33;
    };


    class SpacerLoot
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class TitleLoot
    {
        title = $STR_params_TitleLoot;
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class bobChaosCrates
    {
        title = $STR_params_bobChaosCrates;
        values[] = {0, 1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 0;
    };
    class crateWepTypeMax
    {
        title = $STR_params_crateWepTypeMax;
        values[] = {0,2,4,6,8,12,16};
        texts[] = {"1","3","5","7","9","13","17"};
        default = 8;
    };
    class crateWepNumMax
    {
        title = $STR_params_crateWepNumMax;
        values[] = {0,1,3,5,8,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","8","10","15"};
        default = 8;
    };
    class crateItemTypeMax
    {
        title = $STR_params_crateItemTypeMax;
        values[] = {0,2,4,9};
        texts[] = {"1","3","5","10"};
        default = 4;
    };
    class crateItemNumMax
    {
        title = $STR_params_crateItemNumMax;
        values[] = {0,1,3,5,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15"};
        default = 5;
    };
    class crateAmmoTypeMax
    {
        title = $STR_params_crateAmmoTypeMax;
        values[] = {0,2,4,6,9,14,19};
        texts[] = {"1","3","5","7","10","15","20"};
        default = 6;
    };
    class crateAmmoNumMax
    {
        title = $STR_params_crateAmmoNumMax;
        values[] = {0,1,3,5,10,15,20,25,30};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15","20","25","30"};
        default = 20;
    };
    class crateExplosiveTypeMax
    {
        title = $STR_params_crateExplosiveTypeMax;
        values[] = {0,2,4,9};
        texts[] = {"1","3","5","10"};
        default = 4;
    };
    class crateExplosiveNumMax
    {
        title = $STR_params_crateExplosiveNumMax;
        values[] = {0,1,3,5,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15"};
        default = 5;
    };
    class crateAttachmentTypeMax
    {
        title = $STR_params_crateAttachmentTypeMax;
        values[] = {0,2,4,6,9,14,19};
        texts[] = {"1","3","5","7","10","15","20"};
        default = 6;
    };
    class crateAttachmentNumMax
    {
        title = $STR_params_crateAttachmentNumMax;
        values[] = {0,1,3,5,10,15,20,25,30};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15","20","25","30"};
        default = 15;
    };
    class crateBackpackTypeMax
    {
        title = $STR_params_crateBackpackTypeMax;
        values[] = {0,2,4,9};
        texts[] = {"1","3","5","10"};
        default = 0;
    };
    class crateBackpackNumMax
    {
        title = $STR_params_crateBackpackNumMax;
        values[] = {0,1,3,5,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15"};
        default = 3;
    };
    class crateVestTypeMax
    {
        title = $STR_params_crateVestTypeMax;
        values[] = {0,2,4,9};
        texts[] = {"1","3","5","10"};
        default = 0;
    };
    class crateVestNumMax
    {
        title = $STR_params_crateVestNumMax;
        values[] = {0,1,3,5,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15"};
        default = 3;
    };
    class crateHelmetTypeMax
    {
        title = $STR_params_crateHelmetTypeMax;
        values[] = {0,2,4,9};
        texts[] = {"1","3","5","10"};
        default = 0;
    };
    class crateHelmetNumMax
    {
        title = $STR_params_crateHelmetNumMax;
        values[] = {0,1,3,5,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15"};
        default = 3;
    };
    class crateDeviceTypeMax
    {
        title = $STR_params_crateDeviceTypeMax;
        values[] = {0,2,4,9};
        texts[] = {"1","3","5","10"};
        default = 2;
    };
    class crateDeviceNumMax
    {
        title = $STR_params_crateDeviceNumMax;
        values[] = {0,1,3,5,10,15};
        texts[] = {$STR_params_civ_traffic_none,"1","3","5","10","15"};
        default = 3;
    };

    class SpacerDevelopment
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class TitleDevelopment
    {
        title = $STR_params_dev_header;
        values[] = {""};
        texts[] = {""};
        default = "";
    };
    class LogLevel
    {
        title = $STR_params_LogLevel;
        values[] = {1,2,3,4};
        texts[] = {"Error", "Info", "Debug", "Verbose"};
        default = 2;
    };
    class A3A_logDebugConsole
    {
        title = $STR_params_A3A_logDebugConsole;
        values[] = {-1,1,2};
        texts[] = {$STR_params_A3A_logDebugConsole_none, $STR_params_A3A_logDebugConsole_allnondev, $STR_params_A3A_logDebugConsole_all};
        default = 1;
    };
    class A3A_GUIDevPreview
    {
        title = $STR_params_A3A_GUIDevPreview;
        values[] = {0,1};
        texts[] = {$STR_antistasi_dialogs_generic_button_no_text,$STR_antistasi_dialogs_generic_button_yes_text};
        default = 0;
    };
};
