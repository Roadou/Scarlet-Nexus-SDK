// BlueprintGeneratedClass HUDMainGame.HUDMainGame_C
// Size: 0x900 (Inherited: 0x7a0)
struct AHUDMainGame_C : ARSHUDBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7a0(0x08)
	struct UPlayerInputComponent_C* PlayerInputComponent; // 0x7a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x7b0(0x08)
	struct FMulticastInlineDelegate BattleDamage2D; // 0x7b8(0x10)
	struct FMulticastInlineDelegate BattleDamage3D; // 0x7c8(0x10)
	bool DebugInvisibleFlag; // 0x7d8(0x01)
	char pad_7D9[0x7]; // 0x7d9(0x07)
	struct UWB_ui_Caption_1_C* caption; // 0x7e0(0x08)
	bool DebugBattleUIPlayFlag; // 0x7e8(0x01)
	char pad_7E9[0x3]; // 0x7e9(0x03)
	int32_t DebugLogCount; // 0x7ec(0x04)
	struct UWB_ui_Loading_1_C* LoadingWidget; // 0x7f0(0x08)
	bool DebugSystemMessageFlag; // 0x7f8(0x01)
	char pad_7F9[0x7]; // 0x7f9(0x07)
	struct UWB_ui_Info_window_1_C* WidgetSystemMessage; // 0x800(0x08)
	struct UWB_ui_Choice_window_C* UIGeneralChoice_1; // 0x808(0x08)
	bool DebugSystemWarningFlag; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct UWB_ui_CharaName_C* UICharaName; // 0x818(0x08)
	struct UWB_ui_TownName_C* UITownName; // 0x820(0x08)
	struct UWB_ui_Loading_chara_1_C* LoadingWidgetChara; // 0x828(0x08)
	struct UWB_ui_Loading_interlude_C* LoadingWidgetInterlude; // 0x830(0x08)
	struct UWB_ui_Loading_chapter_C* LoadingWidgetChapter; // 0x838(0x08)
	int32_t DebugLoadingIndex; // 0x840(0x04)
	bool DebugTownFlag; // 0x844(0x01)
	bool DebugKeyboardFlag; // 0x845(0x01)
	char pad_846[0x2]; // 0x846(0x02)
	struct UUIAutoSaving* UIAutoSave; // 0x848(0x08)
	bool DebugInitFlag; // 0x850(0x01)
	bool DebugMinimapDispAdd; // 0x851(0x01)
	char pad_852[0x6]; // 0x852(0x06)
	struct UUITutoOperation* HelpOperation; // 0x858(0x08)
	struct UUINoticeMessage* NoticeMessage; // 0x860(0x08)
	int32_t DebugHelpID; // 0x868(0x04)
	int32_t DebugTutoID; // 0x86c(0x04)
	int32_t DebugMessageNo; // 0x870(0x04)
	float InitDriveGaugePercent; // 0x874(0x04)
	bool IsInitDriveGaugePercent; // 0x878(0x01)
	char pad_879[0x3]; // 0x879(0x03)
	int32_t InitState; // 0x87c(0x04)
	int32_t DebugDriveGaugeState; // 0x880(0x04)
	float DebugDriveGaugePercent; // 0x884(0x04)
	bool DebugDriveGaugeUnlockFlag; // 0x888(0x01)
	char pad_889[0x3]; // 0x889(0x03)
	int32_t DebugDrawMessageCounter; // 0x88c(0x04)
	float _TempBrainTalkDelaySecond; // 0x890(0x04)
	float _TempBrainTalkDelaySecond_Work; // 0x894(0x04)
	float _TempBrainTalkDeltaSeconds; // 0x898(0x04)
	bool FlagLoadingSetupEvent; // 0x89c(0x01)
	bool FlagLoadingReserveEnd; // 0x89d(0x01)
	char pad_89E[0x2]; // 0x89e(0x02)
	float LogDrawTime; // 0x8a0(0x04)
	float LogWaitTime; // 0x8a4(0x04)
	struct FName TestItem0001; // 0x8a8(0x08)
	struct FName TestItem0002; // 0x8b0(0x08)
	struct FName TestItem0003; // 0x8b8(0x08)
	int32_t TestLoadingID; // 0x8c0(0x04)
	char pad_8C4[0x4]; // 0x8c4(0x04)
	struct UWB_ui_SasSkill_Popup_C* SasWindow; // 0x8c8(0x08)
	struct UWB_ui_Caption_Guide_1_C* CaptionGuide; // 0x8d0(0x08)
	struct FMulticastInlineDelegate OnMainContentsUIClose; // 0x8d8(0x10)
	struct FMulticastInlineDelegate OnPlayDecideAnimeBrainTuto; // 0x8e8(0x10)
	struct UWB_ui_Keyword_C* WidghetKeyword; // 0x8f8(0x08)

	struct FString getResultKeyword(); // Function HUDMainGame.HUDMainGame_C.getResultKeyword // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool isCancelKeyword(); // Function HUDMainGame.HUDMainGame_C.isCancelKeyword // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool isEndKeyword(); // Function HUDMainGame.HUDMainGame_C.isEndKeyword // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool StartKeyword(); // Function HUDMainGame.HUDMainGame_C.StartKeyword // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartCode(); // Function HUDMainGame.HUDMainGame_C.StartCode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetFlagBrainMessageTest(bool IsTest); // Function HUDMainGame.HUDMainGame_C.DebugSetFlagBrainMessageTest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnemyHpWidgetDisappearInstantly(struct ARSCharacterBase* InTarget); // Function HUDMainGame.HUDMainGame_C.EnemyHpWidgetDisappearInstantly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUUIVitalityEN02Visible(bool IsVisible); // Function HUDMainGame.HUDMainGame_C.SetUUIVitalityEN02Visible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayMessageOpenAnimationNative(); // Function HUDMainGame.HUDMainGame_C.IsPlayMessageOpenAnimationNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsPlayMessageOpenAnimation(bool isPlay); // Function HUDMainGame.HUDMainGame_C.IsPlayMessageOpenAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Is Players Brain Field(bool Return Value); // Function HUDMainGame.HUDMainGame_C.Is Players Brain Field // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CanEndLoading(bool Can End); // Function HUDMainGame.HUDMainGame_C.CanEndLoading // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemSetNoMotionUse(bool IsNoMotion); // Function HUDMainGame.HUDMainGame_C.ItemSetNoMotionUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckEndChoiceMessage(); // Function HUDMainGame.HUDMainGame_C.CheckEndChoiceMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsEnableOpenTips(); // Function HUDMainGame.HUDMainGame_C.IsEnableOpenTips // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PauseBrainTalkForEvent(bool IsPause); // Function HUDMainGame.HUDMainGame_C.PauseBrainTalkForEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CanPlayCutScene_FromNative(bool IsTipsCheck); // Function HUDMainGame.HUDMainGame_C.CanPlayCutScene_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFoundCustomTimeDilationRegistName_FromNative(struct FString RegistName, bool isFound, float CurrentCustomTimeDilation); // Function HUDMainGame.HUDMainGame_C.IsFoundCustomTimeDilationRegistName_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCurrentMessageWithChoices(); // Function HUDMainGame.HUDMainGame_C.IsCurrentMessageWithChoices // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Stop Town Name(); // Function HUDMainGame.HUDMainGame_C.Stop Town Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayTownName(bool Result); // Function HUDMainGame.HUDMainGame_C.IsPlayTownName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Set Pause Event Widgets(bool IsPause); // Function HUDMainGame.HUDMainGame_C.Set Pause Event Widgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopBrainTalkVoice(); // Function HUDMainGame.HUDMainGame_C.StopBrainTalkVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PkObjectTimerUpdate(struct ARSCharacterBase* Target, float MaxSecond, float CurrentSecond); // Function HUDMainGame.HUDMainGame_C.PkObjectTimerUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PkObjectTimerStop(struct ARSCharacterBase* Target); // Function HUDMainGame.HUDMainGame_C.PkObjectTimerStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PkObjectTimerStart(struct ARSCharacterBase* Target, float MaxSecond, float CurrentSecond); // Function HUDMainGame.HUDMainGame_C.PkObjectTimerStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLogBrainFieldAddTime(); // Function HUDMainGame.HUDMainGame_C.SetLogBrainFieldAddTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Player Wait Flag(bool IsWait); // Function HUDMainGame.HUDMainGame_C.Set Player Wait Flag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainField(); // Function HUDMainGame.HUDMainGame_C.IsBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDrawMessageGuide(); // Function HUDMainGame.HUDMainGame_C.IsDrawMessageGuide // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetDebugFlagDrawShortcutGuide(bool IsDraw); // Function HUDMainGame.HUDMainGame_C.GetDebugFlagDrawShortcutGuide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugFlagDrawShortcutGuide(bool IsDraw); // Function HUDMainGame.HUDMainGame_C.SetDebugFlagDrawShortcutGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseMessageGuide(); // Function HUDMainGame.HUDMainGame_C.CloseMessageGuide // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartMessageGuide(bool FlagSkip, bool FlagDecide, bool FlagCancel); // Function HUDMainGame.HUDMainGame_C.StartMessageGuide // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerSetState(int32_t Index); // Function HUDMainGame.HUDMainGame_C.PsychicTimerSetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void deleteCloseMessageGuide(); // Function HUDMainGame.HUDMainGame_C.deleteCloseMessageGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void deleteStartMessageGuide(bool FlagSkip, bool FlagDecide, bool FlagCancel); // Function HUDMainGame.HUDMainGame_C.deleteStartMessageGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndMinimapBrainField(); // Function HUDMainGame.HUDMainGame_C.EndMinimapBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartMinimapBrainField(); // Function HUDMainGame.HUDMainGame_C.StartMinimapBrainField // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MessageGetDebugDrawFlag(bool IsDraw); // Function HUDMainGame.HUDMainGame_C.MessageGetDebugDrawFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void MessageSetDebugDrawFlag(bool IsDraw); // Function HUDMainGame.HUDMainGame_C.MessageSetDebugDrawFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDrawMiniTipsSuccess(); // Function HUDMainGame.HUDMainGame_C.IsDrawMiniTipsSuccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool MiniTipsSuccessStopDraw(); // Function HUDMainGame.HUDMainGame_C.MiniTipsSuccessStopDraw // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MiniTipsSuccessStartDraw(); // Function HUDMainGame.HUDMainGame_C.MiniTipsSuccessStartDraw // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlaySasWindowNative(); // Function HUDMainGame.HUDMainGame_C.IsPlaySasWindowNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool StartSasWindowNative(enum class EPlayerID Target); // Function HUDMainGame.HUDMainGame_C.StartSasWindowNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLogUpdateGoal(); // Function HUDMainGame.HUDMainGame_C.SetLogUpdateGoal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlaySasWindow(bool isPlay); // Function HUDMainGame.HUDMainGame_C.IsPlaySasWindow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void StartSasWindow(enum class EPlayerID Target); // Function HUDMainGame.HUDMainGame_C.StartSasWindow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitSasWindow(); // Function HUDMainGame.HUDMainGame_C.InitSasWindow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemMenuGetCurrentItemID(struct FName ItemId); // Function HUDMainGame.HUDMainGame_C.ItemMenuGetCurrentItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetLoadingChapterID(int32_t ID); // Function HUDMainGame.HUDMainGame_C.SetLoadingChapterID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoadingInterludeID(int32_t ID); // Function HUDMainGame.HUDMainGame_C.SetLoadingInterludeID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoadingCharaID(int32_t ID); // Function HUDMainGame.HUDMainGame_C.SetLoadingCharaID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDebugLoadingID(int32_t ID); // Function HUDMainGame.HUDMainGame_C.GetDebugLoadingID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDebugLoadingID(int32_t ID); // Function HUDMainGame.HUDMainGame_C.SetDebugLoadingID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsLogMessageEmpty(); // Function HUDMainGame.HUDMainGame_C.IsLogMessageEmpty // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsCurrentMessageWithVoice(); // Function HUDMainGame.HUDMainGame_C.IsCurrentMessageWithVoice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Is Init Loading Chara(bool isinit); // Function HUDMainGame.HUDMainGame_C.Is Init Loading Chara // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLogWaitTime(float Time); // Function HUDMainGame.HUDMainGame_C.GetLogWaitTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetLogWaitTime(float Time); // Function HUDMainGame.HUDMainGame_C.SetLogWaitTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLogDrawTime(float Time); // Function HUDMainGame.HUDMainGame_C.GetLogDrawTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetLogDrawTime(float Time); // Function HUDMainGame.HUDMainGame_C.SetLogDrawTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsOpenLoadingUI(); // Function HUDMainGame.HUDMainGame_C.IsOpenLoadingUI // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLogGetMoneyFromNative(int32_t GetMoney); // Function HUDMainGame.HUDMainGame_C.SetLogGetMoneyFromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerSetGaugePercent(float percent); // Function HUDMainGame.HUDMainGame_C.PsychicTimerSetGaugePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerClose(); // Function HUDMainGame.HUDMainGame_C.PsychicTimerClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicTimerOpen(); // Function HUDMainGame.HUDMainGame_C.PsychicTimerOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoadingFlagEventSetup(bool IsSetup); // Function HUDMainGame.HUDMainGame_C.SetLoadingFlagEventSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MiniTipsStopDraw(enum class EHelpTutorial TipsID); // Function HUDMainGame.HUDMainGame_C.MiniTipsStopDraw // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float MiniTipsStartDraw(enum class EHelpTutorial TipsID); // Function HUDMainGame.HUDMainGame_C.MiniTipsStartDraw // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableOpenMenu(); // Function HUDMainGame.HUDMainGame_C.IsEnableOpenMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasFireRush(); // Function HUDMainGame.HUDMainGame_C.SasFireRush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasFireEnd(bool IsSuccess); // Function HUDMainGame.HUDMainGame_C.SasFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasFireStart(); // Function HUDMainGame.HUDMainGame_C.SasFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeEffect(int32_t Index, float Time); // Function HUDMainGame.HUDMainGame_C.SetPsychicGaugeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsValidMessageVoiceToMessageBuffer(); // Function HUDMainGame.HUDMainGame_C.IsValidMessageVoiceToMessageBuffer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsClose(); // Function HUDMainGame.HUDMainGame_C.MiniTipsClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MiniTipsOpen(int32_t TipsID); // Function HUDMainGame.HUDMainGame_C.MiniTipsOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetVisibleBrainKeyGuide(bool visibleflag); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetVisibleBrainKeyGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ChangeSoundState(enum class ESoundState State); // Function HUDMainGame.HUDMainGame_C.ChangeSoundState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetBrainChargePercent(float percent); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetBrainChargePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetRemainingSecond(int32_t second); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetRemainingSecond // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDisableFlag(bool DisableFlag); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetDisableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDownFlag(bool DownFlag); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetDownFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetStockFlag(bool StockFlag, bool UseItemFlag); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetStockFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetBrainPercent(float percent); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetBrainPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDrivePercent(float percent); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetDrivePercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExpBonusUpdate(float bonus); // Function HUDMainGame.HUDMainGame_C.ExpBonusUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExpBonusClose(); // Function HUDMainGame.HUDMainGame_C.ExpBonusClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExpBonusOpen(float bonus); // Function HUDMainGame.HUDMainGame_C.ExpBonusOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemShiftRight(); // Function HUDMainGame.HUDMainGame_C.ItemShiftRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemShiftLeft(); // Function HUDMainGame.HUDMainGame_C.ItemShiftLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnTitleBack(); // Function HUDMainGame.HUDMainGame_C.OnTitleBack // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemMenuSetRecastPercent(float percent); // Function HUDMainGame.HUDMainGame_C.ItemMenuSetRecastPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconButtonHold(bool IsHoldLeft, bool IsHoldCenter, bool IsHoldRight); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconButtonHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconButtonHoldPercent(float LeftPercent, float CenterPercent, float RightPercent); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconButtonHoldPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DroneGuideClose(); // Function HUDMainGame.HUDMainGame_C.DroneGuideClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DroneGuideOpen(enum class enum_ui_object_guide ObjectType); // Function HUDMainGame.HUDMainGame_C.DroneGuideOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ItemSetEnableUse(bool IsEnable); // Function HUDMainGame.HUDMainGame_C.ItemSetEnableUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickRollStart(bool FlagStartLeft, bool FlagStartCenter, bool FlagStartRight); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconStickRollStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconRushPercent(float LeftPercent, float CenterPercent, float RightPercent); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconRushPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickHold(bool FlagLeft, bool FlagCenter, bool FlagRight); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconStickHold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLogItemOverFlow(struct FString ItemName); // Function HUDMainGame.HUDMainGame_C.SetLogItemOverFlow // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickRoll(bool FlagLeft, bool FlagCenter, bool FlagRight); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconStickRoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPursuitIconStickHoldPercent(float LeftPercent, float CenterPercent, float RightPercent); // Function HUDMainGame.HUDMainGame_C.SetPursuitIconStickHoldPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeEnableComboFlag(bool IsEnable); // Function HUDMainGame.HUDMainGame_C.SetPsychicWeightGaugeEnableComboFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DecideSasHologram(); // Function HUDMainGame.HUDMainGame_C.DecideSasHologram // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSasHologram(); // Function HUDMainGame.HUDMainGame_C.StopSasHologram // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSasHologram(enum class EPlayerID CharaID); // Function HUDMainGame.HUDMainGame_C.StartSasHologram // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyHpWidgetVisible(bool IsVisible); // Function HUDMainGame.HUDMainGame_C.SetEnemyHpWidgetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeLevel(int32_t Level); // Function HUDMainGame.HUDMainGame_C.SetPsychicGaugeLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLogLevelUp(struct FName characterId); // Function HUDMainGame.HUDMainGame_C.SetLogLevelUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDriveGauge(); // Function HUDMainGame.HUDMainGame_C.DebugDriveGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMinimapEtcIcon(); // Function HUDMainGame.HUDMainGame_C.SetupMinimapEtcIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetLogGetItem(struct FString ItemName, int32_t itemNum); // Function HUDMainGame.HUDMainGame_C.SetLogGetItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PresentGetSelectFlag(bool SelectFlag); // Function HUDMainGame.HUDMainGame_C.PresentGetSelectFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PresentGetSelectItemID(struct FName ItemId); // Function HUDMainGame.HUDMainGame_C.PresentGetSelectItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RushPursuitIcon(bool Left, bool Center, bool Right); // Function HUDMainGame.HUDMainGame_C.RushPursuitIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitParameter(); // Function HUDMainGame.HUDMainGame_C.InitParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreatePresentWidget(); // Function HUDMainGame.HUDMainGame_C.CreatePresentWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetBrainFieldMode(bool IsBrainField); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetBrainFieldMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetDriveMode(bool IsDriveMode); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetDriveMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetUnlockBrainField(bool IsUnlock); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetUnlockBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DriveGaugeSetPercent(float percent); // Function HUDMainGame.HUDMainGame_C.DriveGaugeSetPercent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashEnable(struct ARSBattleCharacter_C* Target, bool IsEnable); // Function HUDMainGame.HUDMainGame_C.SetBrainCrashEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartAreaHere(int32_t LocationId, int32_t areaId, int32_t PortalID); // Function HUDMainGame.HUDMainGame_C.StartAreaHere // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartAreaNext(int32_t LocationId, int32_t areaId, int32_t PortalID, bool isWorldMap); // Function HUDMainGame.HUDMainGame_C.StartAreaNext // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isVisibleAreaNext(bool visibleflag); // Function HUDMainGame.HUDMainGame_C.isVisibleAreaNext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isVisibleAreaHere(bool visibleflag); // Function HUDMainGame.HUDMainGame_C.isVisibleAreaHere // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleAreaNext(bool visibleflag); // Function HUDMainGame.HUDMainGame_C.SetVisibleAreaNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleAreaHere(bool visibleflag); // Function HUDMainGame.HUDMainGame_C.SetVisibleAreaHere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool isTutoOperation(); // Function HUDMainGame.HUDMainGame_C.isTutoOperation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CloseTutoOperation(); // Function HUDMainGame.HUDMainGame_C.CloseTutoOperation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartTutoOperation(struct FName helpTutoID); // Function HUDMainGame.HUDMainGame_C.StartTutoOperation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasChangePage(int32_t Page); // Function HUDMainGame.HUDMainGame_C.SasChangePage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LevelUpMain(int32_t Level); // Function HUDMainGame.HUDMainGame_C.LevelUpMain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeEnableFlag(enum class enum_ui_pk_weight_gauge_button Button, bool IsEnable); // Function HUDMainGame.HUDMainGame_C.SetPsychicWeightGaugeEnableFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateNoticeQuest(); // Function HUDMainGame.HUDMainGame_C.CreateNoticeQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateNoticeMessage(); // Function HUDMainGame.HUDMainGame_C.CreateNoticeMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartOperation(); // Function HUDMainGame.HUDMainGame_C.StartOperation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateOperation(); // Function HUDMainGame.HUDMainGame_C.CreateOperation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartAutoSaveIcon(); // Function HUDMainGame.HUDMainGame_C.StartAutoSaveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopAutoSaveIcon(); // Function HUDMainGame.HUDMainGame_C.StopAutoSaveIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDebugMinimapDispAdd(bool DebugMinimapDispAdd); // Function HUDMainGame.HUDMainGame_C.GetDebugMinimapDispAdd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDebugMinimapDispAdd(bool DebugMinimapDispAdd); // Function HUDMainGame.HUDMainGame_C.SetDebugMinimapDispAdd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDebugInvisible(bool IsVisible); // Function HUDMainGame.HUDMainGame_C.GetDebugInvisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitDebugParam(); // Function HUDMainGame.HUDMainGame_C.InitDebugParam // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ErrorPsychicGauge(); // Function HUDMainGame.HUDMainGame_C.ErrorPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UsePsychicGauge(float UsePercent); // Function HUDMainGame.HUDMainGame_C.UsePsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartTutorial(); // Function HUDMainGame.HUDMainGame_C.StartTutorial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicWeightGaugeReverseFlag(bool IsReverse); // Function HUDMainGame.HUDMainGame_C.GetPsychicWeightGaugeReverseFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetPsychicWeightGaugeReverse(bool IsReverse); // Function HUDMainGame.HUDMainGame_C.SetPsychicWeightGaugeReverse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeVisible(enum class enum_ui_pk_weight_gauge_button Button, bool IsVisible); // Function HUDMainGame.HUDMainGame_C.SetPsychicWeightGaugeVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPursuitIcon(bool IsSuccess); // Function HUDMainGame.HUDMainGame_C.EndPursuitIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPursuitIcon(enum class EPsychicObjectUniqueInputType LeftInput, enum class EPsychicObjectUniqueInputButton LeftButton, enum class EPsychicObjectUniqueInputType CenterInput, enum class EPsychicObjectUniqueInputButton CenterButton, enum class EPsychicObjectUniqueInputType RightInput, enum class EPsychicObjectUniqueInputButton RightButton, enum class enum_ui_action_icon_device_type DeviceType, bool FlagDrawMouse); // Function HUDMainGame.HUDMainGame_C.StartPursuitIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGauge(enum class enum_ui_pk_weight_gauge_button Button, int32_t Level, float percent); // Function HUDMainGame.HUDMainGame_C.SetPsychicWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPsychicWeightGauge(enum class enum_ui_pk_weight_gauge_button Button, bool IsSuccess); // Function HUDMainGame.HUDMainGame_C.EndPsychicWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPsychicWeightGauge(enum class enum_ui_pk_weight_gauge_button Button, struct AActor* Target, bool IsExObject); // Function HUDMainGame.HUDMainGame_C.StartPsychicWeightGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicWeightGaugeStyle(enum class enum_ui_pk_weight_gauge_button Button, enum class enum_ui_pk_weight_gauge_size Size, int32_t maxLevel); // Function HUDMainGame.HUDMainGame_C.SetPsychicWeightGaugeStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGauge(float Param); // Function HUDMainGame.HUDMainGame_C.SetPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void initAutoSave(); // Function HUDMainGame.HUDMainGame_C.initAutoSave // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateSaveLoad(); // Function HUDMainGame.HUDMainGame_C.CreateSaveLoad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUIAnimationSpeed(float UIAnimationSpeed); // Function HUDMainGame.HUDMainGame_C.SetUIAnimationSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLoadingChapter(int32_t ID); // Function HUDMainGame.HUDMainGame_C.StartLoadingChapter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLoadingInterlude(int32_t ID); // Function HUDMainGame.HUDMainGame_C.StartLoadingInterlude // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLoadingChara(int32_t ID); // Function HUDMainGame.HUDMainGame_C.StartLoadingChara // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkipAllMessage(bool IsSkip); // Function HUDMainGame.HUDMainGame_C.SetSkipAllMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct URSAtomComponentBase* GetMessageVoice(); // Function HUDMainGame.HUDMainGame_C.GetMessageVoice // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateItemNum(); // Function HUDMainGame.HUDMainGame_C.UpdateItemNum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetIntercept(); // Function HUDMainGame.HUDMainGame_C.ResetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIntercept(struct AActor* Target); // Function HUDMainGame.HUDMainGame_C.SetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainTalkFinishedWait(); // Function HUDMainGame.HUDMainGame_C.IsBrainTalkFinishedWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ProcBattleMenu(); // Function HUDMainGame.HUDMainGame_C.ProcBattleMenu // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Init(); // Function HUDMainGame.HUDMainGame_C.Init // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartTownName(int32_t LocationId); // Function HUDMainGame.HUDMainGame_C.StartTownName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartCharaName(struct FString CharaID); // Function HUDMainGame.HUDMainGame_C.StartCharaName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitTownName(); // Function HUDMainGame.HUDMainGame_C.InitTownName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCharaName(); // Function HUDMainGame.HUDMainGame_C.InitCharaName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainTalkBugMode(bool isBug); // Function HUDMainGame.HUDMainGame_C.SetBrainTalkBugMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleMenuPlayDamageEffect(); // Function HUDMainGame.HUDMainGame_C.BattleMenuPlayDamageEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWorldMap(bool IsDetailMap); // Function HUDMainGame.HUDMainGame_C.StartWorldMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWorldMap(); // Function HUDMainGame.HUDMainGame_C.CreateWorldMap // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckEndAllMessage(bool IsEnd); // Function HUDMainGame.HUDMainGame_C.CheckEndAllMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckEndMessage(int32_t MessageIndex, bool IsEnd); // Function HUDMainGame.HUDMainGame_C.CheckEndMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLastChoiceResult(int32_t Result); // Function HUDMainGame.HUDMainGame_C.GetLastChoiceResult // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetChoiceResult(int32_t MessageIndex, int32_t Result); // Function HUDMainGame.HUDMainGame_C.GetChoiceResult // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool SkipMessage(); // Function HUDMainGame.HUDMainGame_C.SkipMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t DrawChoiceMessage(int32_t ChoiceNum, struct FString Choice0, struct FString Choice1, struct FString Choice2, struct FString Choice3, struct FString Choice4, int32_t DefaultIndex, int32_t CancelIndex, float DrawSecond, bool isEnableCancel); // Function HUDMainGame.HUDMainGame_C.DrawChoiceMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLogGetExperience(int32_t GetExp); // Function HUDMainGame.HUDMainGame_C.SetLogGetExperience // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLogGetMoney(int32_t GetMoney); // Function HUDMainGame.HUDMainGame_C.SetLogGetMoney // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool NextBrainTalkMessage(int32_t Index); // Function HUDMainGame.HUDMainGame_C.NextBrainTalkMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreatePartyWidget(); // Function HUDMainGame.HUDMainGame_C.CreatePartyWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecuteBrainTalkMessage(bool IsExecute); // Function HUDMainGame.HUDMainGame_C.IsExecuteBrainTalkMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsExecuteBrainTalkWidget(bool IsExecute); // Function HUDMainGame.HUDMainGame_C.IsExecuteBrainTalkWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupSAS(); // Function HUDMainGame.HUDMainGame_C.SetupSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t DrawMessage(struct FString Talker, struct FString Message, int32_t windowType, float DrawSecond, bool isEnableSkip, struct URSAtomComponentBase* Voice, bool isSkipVoiceEnd); // Function HUDMainGame.HUDMainGame_C.DrawMessage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CloseBrainTalk(); // Function HUDMainGame.HUDMainGame_C.CloseBrainTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenBrainTalk(int32_t characterId, int32_t ExpressionID, struct FString messageID, float DrawSecond); // Function HUDMainGame.HUDMainGame_C.OpenBrainTalk // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBrainTalk(); // Function HUDMainGame.HUDMainGame_C.InitBrainTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateItemMenuUI(); // Function HUDMainGame.HUDMainGame_C.UpdateItemMenuUI // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGameOverResult(enum class EGameOverResult Result); // Function HUDMainGame.HUDMainGame_C.GetGameOverResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEndGameOver(bool IsEnd); // Function HUDMainGame.HUDMainGame_C.IsEndGameOver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartGameOver(); // Function HUDMainGame.HUDMainGame_C.StartGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAreaNext(); // Function HUDMainGame.HUDMainGame_C.EndAreaNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitAreaHere(); // Function HUDMainGame.HUDMainGame_C.InitAreaHere // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitAreaNext(); // Function HUDMainGame.HUDMainGame_C.InitAreaNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateDetailMap(); // Function HUDMainGame.HUDMainGame_C.CreateDetailMap // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RemoveActionIcon(struct UUIActionIcon* ActionIcon); // Function HUDMainGame.HUDMainGame_C.RemoveActionIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UUIActionIcon* AddActionIcon(); // Function HUDMainGame.HUDMainGame_C.AddActionIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMinimapEnemyIcon(); // Function HUDMainGame.HUDMainGame_C.SetupMinimapEnemyIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicIconSetWeakShow(struct ARSBattleCharacter_C* Actor, int32_t WeakIndex, enum class PsychicGrabButtonType Button, bool IsShow); // Function HUDMainGame.HUDMainGame_C.PsychicIconSetWeakShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndLoading(); // Function HUDMainGame.HUDMainGame_C.EndLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLoading(bool IsFadeWhite); // Function HUDMainGame.HUDMainGame_C.StartLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitLoading(); // Function HUDMainGame.HUDMainGame_C.InitLoading // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerUseItem(bool IsUse); // Function HUDMainGame.HUDMainGame_C.PlayerUseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLogKillEnemy(struct FName characterId); // Function HUDMainGame.HUDMainGame_C.SetLogKillEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DrawDebugPsychicType(); // Function HUDMainGame.HUDMainGame_C.DrawDebugPsychicType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitMessageWidget(); // Function HUDMainGame.HUDMainGame_C.InitMessageWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashTarget(struct ARSBattleCharacter_C* Target, bool Success); // Function HUDMainGame.HUDMainGame_C.SetBrainCrashTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBattleMenu(); // Function HUDMainGame.HUDMainGame_C.InitBattleMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KeyboardReleaseInputEvent(struct FKey Key); // Function HUDMainGame.HUDMainGame_C.KeyboardReleaseInputEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KeyboardPressInputEvent(struct FKey Key); // Function HUDMainGame.HUDMainGame_C.KeyboardPressInputEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function HUDMainGame.HUDMainGame_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function HUDMainGame.HUDMainGame_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetCharacterDamage(struct AActor* Target, int32_t CurrentHp, int32_t BaseHp, bool IsAlways, float Time); // Function HUDMainGame.HUDMainGame_C.SetCharacterDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePlayerHpWidget(struct ARSBattlePlayer_C* Player, int32_t Index); // Function HUDMainGame.HUDMainGame_C.UpdatePlayerHpWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBossEnemyHpWidget(struct ARSBattleCharacter_C* Boss); // Function HUDMainGame.HUDMainGame_C.UpdateBossEnemyHpWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function HUDMainGame.HUDMainGame_C.ReceiveDrawHUD // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void DebugChangeVisible(bool visibleflag); // Function HUDMainGame.HUDMainGame_C.DebugChangeVisible // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginCursorOver(); // Function HUDMainGame.HUDMainGame_C.ReceiveActorBeginCursorOver // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function HUDMainGame.HUDMainGame_C.OnInitialized // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void Event_CrushBonus(struct AActor* Target, int32_t bonus); // Function HUDMainGame.HUDMainGame_C.Event_CrushBonus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_PlayBrainTalkVoice(float DelaySecond); // Function HUDMainGame.HUDMainGame_C.Event_PlayBrainTalkVoice // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOpenWorldmap(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function HUDMainGame.HUDMainGame_C.OnOpenWorldmap // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOpenMenu(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function HUDMainGame.HUDMainGame_C.OnOpenMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOpenDetailmap(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function HUDMainGame.HUDMainGame_C.OnOpenDetailmap // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleDamage2D_Event(int32_t Damage, struct FVector2D position2D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage); // Function HUDMainGame.HUDMainGame_C.BattleDamage2D_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleDamage_3D_Event(int32_t Damage, struct FVector position3D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, struct ARSBattleCharacter_C* crushTarget, int32_t crushBonus, struct FVector2D Offset); // Function HUDMainGame.HUDMainGame_C.BattleDamage_3D_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartStaffRoll(float Speed); // Function HUDMainGame.HUDMainGame_C.StartStaffRoll // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOpenBrainMessage(enum class ERSGamepadLayoutType layout, enum class ERSGamepadInputName Key); // Function HUDMainGame.HUDMainGame_C.OnOpenBrainMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenBrainTalkFromNative(int32_t characterId, int32_t ExpressionID, struct FString messageID, float DrawSecond); // Function HUDMainGame.HUDMainGame_C.OpenBrainTalkFromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void CloseBrainTalkFromNative(); // Function HUDMainGame.HUDMainGame_C.CloseBrainTalkFromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StopBrainTalkVoiceFromNative(); // Function HUDMainGame.HUDMainGame_C.StopBrainTalkVoiceFromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_SetPlayer(struct ARsBattleHero_C* Player); // Function HUDMainGame.HUDMainGame_C.Event_SetPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCustomTimeDilation_FromNative(struct FString Name, float CurrentCustomTimeDilation); // Function HUDMainGame.HUDMainGame_C.SetCustomTimeDilation_FromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RemoveCustomTimeDilation_FromNative(struct FString Name); // Function HUDMainGame.HUDMainGame_C.RemoveCustomTimeDilation_FromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PauseBrainTalkForEventFromNative(bool IsPause); // Function HUDMainGame.HUDMainGame_C.PauseBrainTalkForEventFromNative // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_HUDMainGame(int32_t EntryPoint); // Function HUDMainGame.HUDMainGame_C.ExecuteUbergraph_HUDMainGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void OnPlayDecideAnimeBrainTuto__DelegateSignature(); // Function HUDMainGame.HUDMainGame_C.OnPlayDecideAnimeBrainTuto__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMainContentsUIClose__DelegateSignature(); // Function HUDMainGame.HUDMainGame_C.OnMainContentsUIClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleDamage3D__DelegateSignature(int32_t Damage, struct FVector position3D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, struct ARSBattleCharacter_C* crushTarget, int32_t crushBonus, struct FVector2D Offset); // Function HUDMainGame.HUDMainGame_C.BattleDamage3D__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleDamage2D__DelegateSignature(int32_t Damage, struct FVector2D position2D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage); // Function HUDMainGame.HUDMainGame_C.BattleDamage2D__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

