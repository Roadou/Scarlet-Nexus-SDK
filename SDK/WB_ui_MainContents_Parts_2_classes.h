// WidgetBlueprintGeneratedClass WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C
// Size: 0x40b (Inherited: 0x388)
struct UWB_ui_MainContents_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* unselect; // 0x390(0x08)
	struct UWidgetAnimation* decision; // 0x398(0x08)
	struct UWidgetAnimation* select_out; // 0x3a0(0x08)
	struct UWidgetAnimation* select_in; // 0x3a8(0x08)
	struct UWidgetAnimation* select; // 0x3b0(0x08)
	struct UWidgetAnimation* default_none; // 0x3b8(0x08)
	struct UWidgetAnimation* Default; // 0x3c0(0x08)
	struct UImage* Base_2_select; // 0x3c8(0x08)
	struct UImage* Base_Neon_2; // 0x3d0(0x08)
	struct UImage* Frame_2; // 0x3d8(0x08)
	struct UImage* Frame_1_select; // 0x3e0(0x08)
	struct UImage* neon_2; // 0x3e8(0x08)
	struct UImage* neon_1_add; // 0x3f0(0x08)
	struct UImage* neon_2_add; // 0x3f8(0x08)
	struct UREDTextBlock* Text_main_category_2; // 0x400(0x08)
	bool SelectFlag; // 0x408(0x01)
	bool SelectFlagNext; // 0x409(0x01)
	bool UnSelectFlag; // 0x40a(0x01)

	void SetUnSelect(bool IsUnSelect); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.SetUnSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTabIndex(int32_t Index, bool IsUnlock); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.SetTabIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MainContents_Parts_2(int32_t EntryPoint); // Function WB_ui_MainContents_Parts_2.WB_ui_MainContents_Parts_1_C.ExecuteUbergraph_WB_ui_MainContents_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

