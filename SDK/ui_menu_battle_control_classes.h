// WidgetBlueprintGeneratedClass ui_menu_battle_control.ui_menu_battle_control_C
// Size: 0x8a4 (Inherited: 0x528)
struct Uui_menu_battle_control_C : UUIMenuBattleControl {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* Out; // 0x530(0x08)
	struct UWidgetAnimation* In; // 0x538(0x08)
	struct UWidgetAnimation* damage_critical; // 0x540(0x08)
	struct UWidgetAnimation* damage_normal; // 0x548(0x08)
	struct UWB_ui_Brain_gauge_en_C* brain_gauge_enemy_boss; // 0x550(0x08)
	struct UWB_ui_BrainCrash_gauge2_C* BrainCrash_gauge_boss; // 0x558(0x08)
	struct UWB_ui_Sas_button_03_C* cv_button; // 0x560(0x08)
	struct UImage* cv_Unacquired_1; // 0x568(0x08)
	struct UImage* cv_Unacquired_2; // 0x570(0x08)
	struct UImage* cv_Unacquired_3; // 0x578(0x08)
	struct UImage* cv_Unacquired_4; // 0x580(0x08)
	struct UWB_ui_Vitality_en_01_C* hp_enemy_boss; // 0x588(0x08)
	struct UWB_ui_Vitality_pl_01_C* hp_p0; // 0x590(0x08)
	struct UImage* hp_p0_base_set; // 0x598(0x08)
	struct UBorder* hp_p0_Icon_Status_set; // 0x5a0(0x08)
	struct UBorder* hp_p0_vitality_num_set; // 0x5a8(0x08)
	struct UWB_ui_Vitality_pl_02_C* hp_p1; // 0x5b0(0x08)
	struct UWB_ui_Vitality_pl_03_C* hp_p2; // 0x5b8(0x08)
	struct UImage* Icon_Status01; // 0x5c0(0x08)
	struct UImage* Icon_Status02; // 0x5c8(0x08)
	struct UImage* Icon_Status03; // 0x5d0(0x08)
	struct UImage* Icon_Status04; // 0x5d8(0x08)
	struct UImage* Icon_Status05; // 0x5e0(0x08)
	struct UWB_ui_Item_Menu_1_C* item_menu; // 0x5e8(0x08)
	struct UWB_ui_Parts_minimap_1_C* Minimap; // 0x5f0(0x08)
	struct UOverlay* OverlayShadow; // 0x5f8(0x08)
	struct UOverlay* overlayWidgets_2; // 0x600(0x08)
	struct UOverlay* overlayWidgets_3; // 0x608(0x08)
	struct UImage* SAS_Base; // 0x610(0x08)
	struct UWB_ui_Sas_button_02_C* sas_button; // 0x618(0x08)
	struct UImage* sas_none_1; // 0x620(0x08)
	struct UImage* sas_none_2; // 0x628(0x08)
	struct UImage* sas_none_3; // 0x630(0x08)
	struct UImage* sas_none_4; // 0x638(0x08)
	struct UWB_ui_Sas_page_01_C* Sas_page; // 0x640(0x08)
	struct UWB_ui_Sas_menu_control_C* sas_page_menu; // 0x648(0x08)
	struct USizeBox* Size_psychic_gauge; // 0x650(0x08)
	struct UREDTextBlock* Text_party_vitality_pl_1_num1; // 0x658(0x08)
	struct UREDTextBlock* Text_party_vitality_pl_1_num2; // 0x660(0x08)
	struct UREDTextBlock* Text_party_vitality_pl_1_slash; // 0x668(0x08)
	struct UREDTextBlock* Text_pl_01; // 0x670(0x08)
	struct UWB_ui_Brain_bonus1_C* WB_ui_Brain_bonus1; // 0x678(0x08)
	struct UWB_ui_Brain_frame3_C* WB_ui_Brain_frame3; // 0x680(0x08)
	struct UWB_ui_Brain_gauge3_C* WB_ui_Brain_gauge3; // 0x688(0x08)
	struct UWB_ui_Brain_gauge_en_frame_C* WB_ui_Brain_gauge_en_frame; // 0x690(0x08)
	struct UWB_ui_Item_Menu_2_C* WB_ui_Item_Menu_3; // 0x698(0x08)
	struct UWB_ui_LevelUp_C* WB_ui_LevelUp; // 0x6a0(0x08)
	struct UWB_ui_Log_C* WB_ui_Log; // 0x6a8(0x08)
	struct UWB_ui_MapGuide_C* WB_ui_MapGuide; // 0x6b0(0x08)
	struct UWB_ui_MiniMes_C* WB_ui_MiniMes; // 0x6b8(0x08)
	struct UWB_ui_ObjectGuide_C* WB_ui_ObjectGuide; // 0x6c0(0x08)
	struct UWB_ui_PK_action_icon_1_C* WB_ui_PK_action_icon; // 0x6c8(0x08)
	struct UWB_ui_PK_action_icon_1_C* WB_ui_PK_action_icon_L; // 0x6d0(0x08)
	struct UWB_ui_PK_action_icon_1_C* WB_ui_PK_action_icon_R; // 0x6d8(0x08)
	struct UWB_ui_PK_psychic_gauge_1_C* WB_ui_PK_psychic_gauge_2; // 0x6e0(0x08)
	struct UWB_ui_PK_psychic_gauge_2_C* WB_ui_PK_psychic_gauge_3; // 0x6e8(0x08)
	struct UWB_ui_PK_psychic_timer_1_C* WB_ui_PK_psychic_timer_2; // 0x6f0(0x08)
	struct UWB_ui_Sas_frame_02_C* WB_ui_Sas_frame_1; // 0x6f8(0x08)
	struct UWB_ui_Sas_frame_02_C* WB_ui_Sas_frame_2; // 0x700(0x08)
	struct UWB_ui_Sas_frame_02_C* WB_ui_Sas_frame_3; // 0x708(0x08)
	struct UWB_ui_Sas_frame_02_C* WB_ui_Sas_frame_4; // 0x710(0x08)
	struct UWB_ui_Sas_hologram_01_C* WB_ui_Sas_hologram_01; // 0x718(0x08)
	struct UWB_ui_Success_C* WB_ui_Success; // 0x720(0x08)
	struct UWB_ui_TeamKizuna_C* WB_ui_TeamKizuna; // 0x728(0x08)
	struct UWB_ui_Vitality_en_01_frame_C* WB_ui_Vitality_en_01_frame; // 0x730(0x08)
	struct UWB_ui_Vitality_pl_02_frame_C* WB_ui_Vitality_pl_02_frame; // 0x738(0x08)
	struct UWB_ui_Vitality_pl_03_frame_C* WB_ui_Vitality_pl_03_frame; // 0x740(0x08)
	struct UWB_ui_BrainCrash_gauge_C* BrainCrashGauge; // 0x748(0x08)
	struct ARSBattleCharacter_C* BackupBrainTarget; // 0x750(0x08)
	float BackupBrainRate; // 0x758(0x04)
	float BrainCrashGaugeDrawTime; // 0x75c(0x04)
	struct UWB_ui_Intercept_1_C* WB_Icon_Intercept; // 0x760(0x08)
	struct AActor* InterceptTarget; // 0x768(0x08)
	int32_t InterceptState; // 0x770(0x04)
	bool IsActiveIntercept; // 0x774(0x01)
	bool PsychicWeightGaugeInitFlag; // 0x775(0x01)
	bool FlagTown; // 0x776(0x01)
	char pad_777[0x1]; // 0x777(0x01)
	struct TArray<struct UWB_ui_PK_weight_gauge_1_C*> WbPsychicWeightGauge; // 0x778(0x10)
	struct TArray<int32_t> PsychicWeightGaugeCurrentIndex; // 0x788(0x10)
	struct TArray<struct AActor*> PsychicWeightGaugeCurrentTarget; // 0x798(0x10)
	int32_t PsychicWeightGaugeWorkNum; // 0x7a8(0x04)
	int32_t PsychicWeightGaugeButtonNum; // 0x7ac(0x04)
	bool DebugSasHidePsychicGauge; // 0x7b0(0x01)
	char pad_7B1[0x7]; // 0x7b1(0x07)
	struct TArray<bool> PsychicWeightGaugeEnableFlag; // 0x7b8(0x10)
	struct TArray<bool> PsychicWeightGaugeEnableFlagWork; // 0x7c8(0x10)
	struct TArray<struct AActor*> PsychicWeightGaugeTarget; // 0x7d8(0x10)
	struct TArray<struct AActor*> PsychicWeightGaugeTargetWork; // 0x7e8(0x10)
	struct TArray<bool> PsychicWeightGaugeSuccessFlag; // 0x7f8(0x10)
	struct TArray<enum class EPsychicWeightGaugeSize> PsychicWeightGaugeSize; // 0x808(0x10)
	struct TArray<int32_t> PsychicWeightGaugeMaxLevel; // 0x818(0x10)
	bool FlagAjito; // 0x828(0x01)
	bool FlagDroneGuide; // 0x829(0x01)
	bool FlagExpBonus; // 0x82a(0x01)
	bool FlagMiniTips; // 0x82b(0x01)
	char pad_82C[0x4]; // 0x82c(0x04)
	struct UWB_ui_Brain_tutorial1_C* WB_ui_Brain_tutorial1; // 0x830(0x08)
	enum class EHelpTutorial CurrentTipsID; // 0x838(0x01)
	bool FlagMiniTipsPrioTop; // 0x839(0x01)
	char pad_83A[0x6]; // 0x83a(0x06)
	struct TArray<enum class EHelpTutorial> MiniTipsWorkList; // 0x840(0x10)
	struct TArray<bool> MiniTipsWorkPrioList; // 0x850(0x10)
	int32_t MiniTipsNum; // 0x860(0x04)
	float MiniTipsDrawTime; // 0x864(0x04)
	float MiniTipsTime; // 0x868(0x04)
	int32_t MiniTipsState; // 0x86c(0x04)
	bool FlagPsychicTimerActive; // 0x870(0x01)
	char pad_871[0x7]; // 0x871(0x07)
	struct TArray<bool> PsychicWeightGaugeExFlag; // 0x878(0x10)
	struct UWB_ui_Success_C* WidgetMiniTipsSuccess; // 0x888(0x08)
	bool DebugFlagDrawShortcutGuide; // 0x890(0x01)
	bool FlagPlayerWait; // 0x891(0x01)
	char pad_892[0x2]; // 0x892(0x02)
	int32_t ShortcutGuideState; // 0x894(0x04)
	bool ShortcutGuideWaitFlag; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	float ShortcutGuideTimer; // 0x89c(0x04)
	bool FlagPsychicChaseCenter; // 0x8a0(0x01)
	bool FlagPsychicChaseL; // 0x8a1(0x01)
	bool FlagPsychicChaseR; // 0x8a2(0x01)
	bool FlagSasHologram; // 0x8a3(0x01)

	void MiniTipsSuccessUpdate(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsSuccessUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetSuccess(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetSuccess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetLevelUp(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetLevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeYuitosChildhood(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeYuitosChildhood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MiniMapModelDelete(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniMapModelDelete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetResurrection(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetResurrection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetHUD(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SasSetChangePageReady(bool ReadyFlagL, bool ReadyFlagR); // Function ui_menu_battle_control.ui_menu_battle_control_C.SasSetChangePageReady // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Draw Mode Brain Crash Nomal(bool isBrainCrash); // Function ui_menu_battle_control.ui_menu_battle_control_C.Set Draw Mode Brain Crash Nomal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetTutoOperation(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetTutoOperation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreatePkObjectTimer(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreatePkObjectTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetBrainTalk(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetBrainTalk // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateShortcutGuide(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateShortcutGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Player Wait Flag(bool IsWait); // Function ui_menu_battle_control.ui_menu_battle_control_C.Set Player Wait Flag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDebugFlagDrawShortcutGuide(bool IsDraw); // Function ui_menu_battle_control.ui_menu_battle_control_C.GetDebugFlagDrawShortcutGuide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDebugFlagDrawShortcutGuide(bool IsDraw); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDebugFlagDrawShortcutGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerSetState(int32_t Index); // Function ui_menu_battle_control.ui_menu_battle_control_C.PsychicTimerSetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartMinimapBrainField(); // Function ui_menu_battle_control.ui_menu_battle_control_C.StartMinimapBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndMinimapBrainField(); // Function ui_menu_battle_control.ui_menu_battle_control_C.EndMinimapBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWidgetMiniTipsSuccess(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateWidgetMiniTipsSuccess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDrawMiniTipsSuccess(bool IsDraw); // Function ui_menu_battle_control.ui_menu_battle_control_C.IsDrawMiniTipsSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void MiniTipsSuccessClose(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsSuccessClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsSuccessOpen(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsSuccessOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetShortcutGuide(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetShortcutGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemMenuGetCurrentItemID(struct FName ItemId); // Function ui_menu_battle_control.ui_menu_battle_control_C.ItemMenuGetCurrentItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateDrawWidgetHpEnemyBoss(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetHpEnemyBoss // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeBrainCrash(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeBrainCrash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsDecrementTips(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsDecrementTips // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsSwapList(int32_t Index0, int32_t Index1); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsSwapList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsSortList(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsSortList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EHelpTutorial GetCurrentMiniTipsID(); // Function ui_menu_battle_control.ui_menu_battle_control_C.GetCurrentMiniTipsID // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseMiniTips(enum class EHelpTutorial ID); // Function ui_menu_battle_control.ui_menu_battle_control_C.CloseMiniTips // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsClearCurrentTips(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsClearCurrentTips // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerSetGaugePercent(float percent); // Function ui_menu_battle_control.ui_menu_battle_control_C.PsychicTimerSetGaugePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerClose(); // Function ui_menu_battle_control.ui_menu_battle_control_C.PsychicTimerClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerOpen(); // Function ui_menu_battle_control.ui_menu_battle_control_C.PsychicTimerOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsCurrentTipsFlagResetCheck(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsCurrentTipsFlagResetCheck // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsSetCurrentTips(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsSetCurrentTips // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsUpdate(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsStopDraw(enum class EHelpTutorial TipsID); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsStopDraw // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsStartDraw(enum class EHelpTutorial TipsID); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsStartDraw // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RemoveDiscoverIndexList(int32_t Index); // Function ui_menu_battle_control.ui_menu_battle_control_C.RemoveDiscoverIndexList // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t CreateDiscoverIndexList(struct UUIDiscover* UIDiscover); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateDiscoverIndexList // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasFireRush(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SasFireRush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasFireEnd(bool IsSuccess); // Function ui_menu_battle_control.ui_menu_battle_control_C.SasFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasFireStart(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SasFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetEnemyLevel(struct ARSCharacterBase* Target); // Function ui_menu_battle_control.ui_menu_battle_control_C.GetEnemyLevel // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OpenMinimap(bool Force); // Function ui_menu_battle_control.ui_menu_battle_control_C.OpenMinimap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseMinimap(bool Force); // Function ui_menu_battle_control.ui_menu_battle_control_C.CloseMinimap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetMiniTips(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetMiniTips // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsClose(); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsOpen(int32_t TipsID); // Function ui_menu_battle_control.ui_menu_battle_control_C.MiniTipsOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetVisibleBrainKeyGuide(bool visibleflag); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetVisibleBrainKeyGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetBrainChargePercent(float percent); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetBrainChargePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetRemainingSecond(int32_t second); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetRemainingSecond // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDisableFlag(bool DisableFlag); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetDisableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeNaomi(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeNaomi // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeBattleBrainField(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeBattleBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetTeamBondLv(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetTeamBondLv // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDownFlag(bool DownFlag); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetDownFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetStockFlag(bool StockFlag, bool UseItemFlag); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetStockFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetBrainPercent(float percent); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetBrainPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDrivePercent(float percent); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetDrivePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isPlayBrainTuto(); // Function ui_menu_battle_control.ui_menu_battle_control_C.isPlayBrainTuto // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool OpenBrainTuto(); // Function ui_menu_battle_control.ui_menu_battle_control_C.OpenBrainTuto // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayDecideAnimeBrainTuto(); // Function ui_menu_battle_control.ui_menu_battle_control_C.PlayDecideAnimeBrainTuto // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWidgetBrainTutorial(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateWidgetBrainTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExpBonusUpdate(float bonus); // Function ui_menu_battle_control.ui_menu_battle_control_C.ExpBonusUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetExpBonus(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetExpBonus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExpBonusClose(); // Function ui_menu_battle_control.ui_menu_battle_control_C.ExpBonusClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExpBonusOpen(float bonus); // Function ui_menu_battle_control.ui_menu_battle_control_C.ExpBonusOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateDrawWidgetMiniMap(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetMiniMap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeEM1500(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeEM1500 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetBrainCrashGaugeEnemy(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetBrainCrashGaugeEnemy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetPsychicGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetPsychicGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetDroneGuide(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetDroneGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetLog(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetLog // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeKaren(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeKaren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeAjito(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeAjito // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetOther(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetOther // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetSasMenu(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetSasMenu // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetItemMenu(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetItemMenu // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetBrainCrashGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetBrainCrashGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetHpSub(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetHpSub // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidgetHpMain(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidgetHpMain // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDrawWidget(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateDrawWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeTown(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeTown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawModeBattle(); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetDrawModeBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconButtonHold(bool IsHoldLeft, bool IsHoldCenter, bool IsHoldRight); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconButtonHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconButtonHoldPercent(float LeftPercent, float CenterPercent, float RightPercent); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconButtonHoldPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DroneGuideClose(); // Function ui_menu_battle_control.ui_menu_battle_control_C.DroneGuideClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DroneGuideOpen(enum class enum_ui_object_guide ObjectID); // Function ui_menu_battle_control.ui_menu_battle_control_C.DroneGuideOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickRollStart(bool FlagStartLeft, bool FlagStartCenter, bool FlagStartRight); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconStickRollStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconRushPercent(float LeftPercent, float CenterPercent, float RightPercent); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconRushPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickHold(bool FlagLeft, bool FlagCenter, bool FlagRight); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconStickHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickRoll(bool FlagLeft, bool FlagCenter, bool FlagRight); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconStickRoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickHoldPercent(float LeftPercent, float CenterPercent, float RightPercent); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPursuitIconStickHoldPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeEnableComboFlag(bool IsEnable); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicWeightGaugeEnableComboFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSasHologram(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateSasHologram // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DecideSasHologram(); // Function ui_menu_battle_control.ui_menu_battle_control_C.DecideSasHologram // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSasHologram(); // Function ui_menu_battle_control.ui_menu_battle_control_C.StopSasHologram // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSasHologram(enum class EPlayerID CharaID); // Function ui_menu_battle_control.ui_menu_battle_control_C.StartSasHologram // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSASObject(); // Function ui_menu_battle_control.ui_menu_battle_control_C.InitSASObject // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeLevel(int32_t Level); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicGaugeLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeEffect(int32_t Index, float Time); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicGaugeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RushPursuitIcon(bool Left, bool Center, bool Right); // Function ui_menu_battle_control.ui_menu_battle_control_C.RushPursuitIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetBrainFieldMode(bool IsBrainField); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetBrainFieldMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDriveMode(bool IsDriveMode); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetDriveMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetUnlockBrainField(bool IsUnlock); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetUnlockBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetPercent(float percent); // Function ui_menu_battle_control.ui_menu_battle_control_C.DriveGaugeSetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPsychicWeightGaugeReal(enum class EPsychicWeightGaugeButton Button, bool IsSuccess); // Function ui_menu_battle_control.ui_menu_battle_control_C.EndPsychicWeightGaugeReal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPsychicWeightGaugeReal(enum class EPsychicWeightGaugeButton Button, struct AActor* Target, bool ExFlag); // Function ui_menu_battle_control.ui_menu_battle_control_C.StartPsychicWeightGaugeReal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicWeightGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdatePsychicWeightGauge // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSasSetHidePsychicGaugeFlag(bool Flag); // Function ui_menu_battle_control.ui_menu_battle_control_C.DebugSasSetHidePsychicGaugeFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSasSetHideLockIconFlag(bool Flag); // Function ui_menu_battle_control.ui_menu_battle_control_C.DebugSasSetHideLockIconFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasChangePage(int32_t Page); // Function ui_menu_battle_control.ui_menu_battle_control_C.SasChangePage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LevelUp(int32_t NewLevel); // Function ui_menu_battle_control.ui_menu_battle_control_C.LevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeEnableFlag(enum class enum_ui_pk_weight_gauge_button Button, bool IsEnable); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicWeightGaugeEnableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayDamageEffect(bool isCritical); // Function ui_menu_battle_control.ui_menu_battle_control_C.PlayDamageEffect // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetCrushBonus(struct ARSCharacterBase* Target, int32_t bonus); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetCrushBonus // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ErrorPsychicGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.ErrorPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UsePsychicGauge(float UsePercent); // Function ui_menu_battle_control.ui_menu_battle_control_C.UsePsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicWeightGaugeReverseFlag(bool IsReverse); // Function ui_menu_battle_control.ui_menu_battle_control_C.GetPsychicWeightGaugeReverseFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicWeightGaugeReverse(bool IsReverse); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicWeightGaugeReverse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeVisible(enum class enum_ui_pk_weight_gauge_button Button, bool IsVisible); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicWeightGaugeVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreatePsychicWeightGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreatePsychicWeightGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPursuitIcon(bool IsSuccess); // Function ui_menu_battle_control.ui_menu_battle_control_C.EndPursuitIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPursuitIcon(enum class EPsychicObjectUniqueInputType LeftInput, enum class EPsychicObjectUniqueInputButton LeftButton, enum class EPsychicObjectUniqueInputType CenterInput, enum class EPsychicObjectUniqueInputButton CenterButton, enum class EPsychicObjectUniqueInputType RightInput, enum class EPsychicObjectUniqueInputButton RightButton, bool FlagSasFire, enum class enum_ui_action_icon_device_type DeviceType, bool FlagDrawMouse); // Function ui_menu_battle_control.ui_menu_battle_control_C.StartPursuitIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPsychicWeightGauge(enum class enum_ui_pk_weight_gauge_button Button, bool IsSuccess); // Function ui_menu_battle_control.ui_menu_battle_control_C.EndPsychicWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGauge(enum class EPsychicWeightGaugeButton Button, int32_t Level, float percent); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeStyle(enum class EPsychicWeightGaugeButton Button, enum class EPsychicWeightGaugeSize Size, int32_t maxLevel); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicWeightGaugeStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPsychicWeightGauge(enum class enum_ui_pk_weight_gauge_button Button, struct AActor* Target, bool IsExObject); // Function ui_menu_battle_control.ui_menu_battle_control_C.StartPsychicWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGauge(float Param); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainCrashOverwrite(); // Function ui_menu_battle_control.ui_menu_battle_control_C.StartBrainCrashOverwrite // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ChangeTown(bool isTown, bool isAjito); // Function ui_menu_battle_control.ui_menu_battle_control_C.ChangeTown // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateCrushBonus(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateCrushBonus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptUpdatePosition(); // Function ui_menu_battle_control.ui_menu_battle_control_C.InterceptUpdatePosition // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptUpdate(); // Function ui_menu_battle_control.ui_menu_battle_control_C.InterceptUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetIntercept(); // Function ui_menu_battle_control.ui_menu_battle_control_C.ResetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIntercept(struct AActor* Target); // Function ui_menu_battle_control.ui_menu_battle_control_C.SetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReleaseInterceptIcon(); // Function ui_menu_battle_control.ui_menu_battle_control_C.ReleaseInterceptIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateInterceptIcon(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateInterceptIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ChangePlayUI(bool isPlay); // Function ui_menu_battle_control.ui_menu_battle_control_C.ChangePlayUI // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainCrashGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateBrainCrashGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateBrainCrashGauge(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateBrainCrashGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateBossName(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateBossName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateGameOver(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlagPlayUI(bool IsFlagPlayUI); // Function ui_menu_battle_control.ui_menu_battle_control_C.IsFlagPlayUI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CreateBrainTargetCursor(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateBrainTargetCursor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateTargetCursor(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateTargetCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWidgetEnemyHp(); // Function ui_menu_battle_control.ui_menu_battle_control_C.CreateWidgetEnemyHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function ui_menu_battle_control.ui_menu_battle_control_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_SasEquipExtend(bool bExtend); // Function ui_menu_battle_control.ui_menu_battle_control_C.Event_SasEquipExtend // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_ContentsOpened(enum class EContentsOpening Contents, bool bOpen); // Function ui_menu_battle_control.ui_menu_battle_control_C.Event_ContentsOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function ui_menu_battle_control.ui_menu_battle_control_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function ui_menu_battle_control.ui_menu_battle_control_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_ContentsRestricted(enum class EOperationRestriction Contents, bool bOpen); // Function ui_menu_battle_control.ui_menu_battle_control_C.Event_ContentsRestricted // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_SelectableChange(bool isNotSelectable); // Function ui_menu_battle_control.ui_menu_battle_control_C.Event_SelectableChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ui_menu_battle_control(int32_t EntryPoint); // Function ui_menu_battle_control.ui_menu_battle_control_C.ExecuteUbergraph_ui_menu_battle_control // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

