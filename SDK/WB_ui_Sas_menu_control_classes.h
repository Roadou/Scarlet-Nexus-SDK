// WidgetBlueprintGeneratedClass WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C
// Size: 0x5a0 (Inherited: 0x3a0)
struct UWB_ui_Sas_menu_control_C : UUISASMenuControl {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* chenge_page_3; // 0x3a8(0x08)
	struct UWidgetAnimation* chenge_page_2; // 0x3b0(0x08)
	struct UWidgetAnimation* Default_5; // 0x3b8(0x08)
	struct UWidgetAnimation* change_button_4_2; // 0x3c0(0x08)
	struct UWidgetAnimation* change_button_1_5; // 0x3c8(0x08)
	struct UWidgetAnimation* Out; // 0x3d0(0x08)
	struct UWidgetAnimation* In; // 0x3d8(0x08)
	struct UWidgetAnimation* default_none; // 0x3e0(0x08)
	struct UWidgetAnimation* Default_2; // 0x3e8(0x08)
	struct UImage* Button_1; // 0x3f0(0x08)
	struct UImage* Button_2; // 0x3f8(0x08)
	struct UImage* Button_3; // 0x400(0x08)
	struct UImage* Button_4; // 0x408(0x08)
	struct UWB_ui_Sas_frame_01_C* Icon_1; // 0x410(0x08)
	struct UWB_ui_Sas_frame_01_C* Icon_2; // 0x418(0x08)
	struct UWB_ui_Sas_frame_01_C* Icon_3; // 0x420(0x08)
	struct UWB_ui_Sas_frame_01_C* Icon_4; // 0x428(0x08)
	struct UOverlay* Name_1; // 0x430(0x08)
	struct UOverlay* Name_2; // 0x438(0x08)
	struct UOverlay* Name_3; // 0x440(0x08)
	struct UOverlay* Name_4; // 0x448(0x08)
	struct UImage* PG_FixGInvBug; // 0x450(0x08)
	struct UImage* SAS_Base_1; // 0x458(0x08)
	struct UImage* SAS_Base_2; // 0x460(0x08)
	struct UImage* SAS_Base_3; // 0x468(0x08)
	struct UImage* SAS_Base_4; // 0x470(0x08)
	struct UImage* sas_icon_font_1; // 0x478(0x08)
	struct UImage* sas_icon_font_2; // 0x480(0x08)
	struct UImage* sas_icon_font_3; // 0x488(0x08)
	struct UImage* sas_icon_font_4; // 0x490(0x08)
	struct UREDTextBlock* Text_SasName_1; // 0x498(0x08)
	struct UREDTextBlock* Text_SasName_2; // 0x4a0(0x08)
	struct UREDTextBlock* Text_SasName_3; // 0x4a8(0x08)
	struct UREDTextBlock* Text_SasName_4; // 0x4b0(0x08)
	struct TArray<struct UWB_ui_Sas_frame_01_C*> FrameList; // 0x4b8(0x10)
	struct TArray<struct UImage*> ButtonList; // 0x4c8(0x10)
	struct TArray<struct UTextBlock*> TextNameList; // 0x4d8(0x10)
	struct TArray<struct UREDTextBlock*> TextKeyList; // 0x4e8(0x10)
	struct TArray<struct UImage*> BaseList; // 0x4f8(0x10)
	struct TArray<struct UImage*> KeyIconList; // 0x508(0x10)
	int32_t Page; // 0x518(0x04)
	int32_t NewPage; // 0x51c(0x04)
	bool DebugActiveFlag; // 0x520(0x01)
	bool ActiveSasFlag; // 0x521(0x01)
	bool ActiveCvFlag; // 0x522(0x01)
	bool DebugHideLockIconFlag; // 0x523(0x01)
	char pad_524[0x4]; // 0x524(0x04)
	struct UWB_ui_Sas_page_01_C* PageObject; // 0x528(0x08)
	struct UWB_ui_Sas_button_02_C* SasButtonObject; // 0x530(0x08)
	struct UWB_ui_Sas_button_03_C* CvButtonObject; // 0x538(0x08)
	struct TArray<int32_t> TextColorBackupList; // 0x540(0x10)
	float BgFadeSpeed; // 0x550(0x04)
	char pad_554[0x4]; // 0x554(0x04)
	struct TArray<enum class E_SASButton> SasButtonList; // 0x558(0x10)
	struct TArray<struct UOverlay*> nameList; // 0x568(0x10)
	struct TArray<struct UImage*> CvUnAcquiredList; // 0x578(0x10)
	bool EnableCvFlag; // 0x588(0x01)
	bool WorkActiveSasFlag; // 0x589(0x01)
	bool WorkActiveCvFlag; // 0x58a(0x01)
	bool ChangeFlag; // 0x58b(0x01)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct TArray<bool> PageEnableFlag; // 0x590(0x10)

	void GetEnablePageNum(int32_t Num); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.GetEnablePageNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetupPage(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetupPage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFrameActiveFlag(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetFrameActiveFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Change Page Ready(bool ReadyFlagL, bool ReadyFlagR); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.Set Change Page Ready // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDecide(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.CheckDecide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCombinationVisionIcon(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetupCombinationVisionIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupDisableCombinationVision(bool isReset); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetupDisableCombinationVision // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateButtonIcon(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.UpdateButtonIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSasButton(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.UpdateSasButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMessageColor(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.UpdateMessageColor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIconVisible(bool IsVisible); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetIconVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePageReal(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.ChangePageReal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setObject(struct UWB_ui_Sas_frame_02_C* Frame0, struct UWB_ui_Sas_frame_02_C* Frame1, struct UWB_ui_Sas_frame_02_C* Frame2, struct UWB_ui_Sas_frame_02_C* Frame3, struct UImage* None0, struct UImage* None1, struct UImage* None2, struct UImage* None3, struct UWB_ui_Sas_page_01_C* Page, struct UWB_ui_Sas_button_02_C* SASButton, struct UWB_ui_Sas_button_03_C* CvButton, struct UImage* CvUnAcquired0, struct UImage* CvUnAcquired1, struct UImage* CvUnAcquired2, struct UImage* CvUnAcquired3); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.setObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActive(bool IsActive); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.IsActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetActiveVisible(bool IsVisible); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetActiveVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateActiveIconVisible(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.UpdateActiveIconVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetHideLockIconFlag(bool HideFlag); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.DebugSetHideLockIconFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateActiveFlag(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.UpdateActiveFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugIsPlay(bool isPlay); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.DebugIsPlay // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugSetActiveFlag(bool ActiveFlag); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.DebugSetActiveFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setIconScale(struct FVector2D Scale); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.setIconScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangePage(int32_t Page); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.ChangePage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup Skill Name(bool isCv); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.Setup Skill Name // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupIconList(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.SetupIconList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.StateClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.StateLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_menu_control(int32_t EntryPoint); // Function WB_ui_Sas_menu_control.WB_ui_Sas_menu_control_C.ExecuteUbergraph_WB_ui_Sas_menu_control // (Final|UbergraphFunction) // @ game+0x1685580
};

