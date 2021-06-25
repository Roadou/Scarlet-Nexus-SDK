// WidgetBlueprintGeneratedClass WB_ui_MiniMes.WB_ui_MiniMes_C
// Size: 0x411 (Inherited: 0x388)
struct UWB_ui_MiniMes_C : UUIMiniTips {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UImage* CA_Image_Blue; // 0x3a8(0x08)
	struct UImage* CA_Image_Green; // 0x3b0(0x08)
	struct UImage* CA_Image_Red; // 0x3b8(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x3c0(0x08)
	struct UImage* Frame_Base; // 0x3c8(0x08)
	struct UImage* Frame_Grow; // 0x3d0(0x08)
	struct UImage* Frame_pattern; // 0x3d8(0x08)
	struct UREDImageBase* icon_font; // 0x3e0(0x08)
	struct UImage* Noise; // 0x3e8(0x08)
	struct USpacer* Spacer_311; // 0x3f0(0x08)
	struct UREDTextBlock* Text_mini_tips_2; // 0x3f8(0x08)
	struct UREDTextBlock* Text_mini_tips_title; // 0x400(0x08)
	struct UImage* Title_base; // 0x408(0x08)
	enum class EHelpTutorial dispID; // 0x410(0x01)

	void MiniTipsSetString(enum class EHelpTutorial Key, bool DisplayHelpMenu); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.MiniTipsSetString // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSpacer(); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.UpdateSpacer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTipsID(enum class EHelpTutorial ID); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.SetTipsID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTipsTitle(); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.SetTipsTitle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTipsIndex(int32_t Index); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.SetTipsIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void updateSpacerMiniTips(); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.updateSpacerMiniTips // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MiniMes(int32_t EntryPoint); // Function WB_ui_MiniMes.WB_ui_MiniMes_C.ExecuteUbergraph_WB_ui_MiniMes // (Final|UbergraphFunction) // @ game+0x1685580
};

