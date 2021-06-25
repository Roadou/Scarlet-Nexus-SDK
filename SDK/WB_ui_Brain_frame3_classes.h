// WidgetBlueprintGeneratedClass WB_ui_Brain_frame3.WB_ui_Brain_frame3_C
// Size: 0x4f0 (Inherited: 0x388)
struct UWB_ui_Brain_frame3_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* out_lock; // 0x390(0x08)
	struct UWidgetAnimation* in_lock; // 0x398(0x08)
	struct UWidgetAnimation* default_lock; // 0x3a0(0x08)
	struct UWidgetAnimation* return_brain_lock; // 0x3a8(0x08)
	struct UWidgetAnimation* return_down; // 0x3b0(0x08)
	struct UWidgetAnimation* out_down; // 0x3b8(0x08)
	struct UWidgetAnimation* in_down; // 0x3c0(0x08)
	struct UWidgetAnimation* default_down; // 0x3c8(0x08)
	struct UWidgetAnimation* decision_down; // 0x3d0(0x08)
	struct UWidgetAnimation* return_brain; // 0x3d8(0x08)
	struct UWidgetAnimation* out_full; // 0x3e0(0x08)
	struct UWidgetAnimation* in_full; // 0x3e8(0x08)
	struct UWidgetAnimation* out_brain; // 0x3f0(0x08)
	struct UWidgetAnimation* in_brain; // 0x3f8(0x08)
	struct UWidgetAnimation* default_brain; // 0x400(0x08)
	struct UWidgetAnimation* decision_barin; // 0x408(0x08)
	struct UWidgetAnimation* full_in; // 0x410(0x08)
	struct UWidgetAnimation* full; // 0x418(0x08)
	struct UWidgetAnimation* Out; // 0x420(0x08)
	struct UWidgetAnimation* In; // 0x428(0x08)
	struct UWidgetAnimation* default_none; // 0x430(0x08)
	struct UWidgetAnimation* Default; // 0x438(0x08)
	struct UImage* BG; // 0x440(0x08)
	struct UImage* brain_button; // 0x448(0x08)
	struct UImage* brain_icon_font; // 0x450(0x08)
	struct UImage* frame_brain; // 0x458(0x08)
	struct UImage* frame_drive_2; // 0x460(0x08)
	struct UImage* frame_stock_2; // 0x468(0x08)
	struct UImage* frame_stock_3; // 0x470(0x08)
	struct UImage* frame_stock_4; // 0x478(0x08)
	struct UBorder* L3+R3_brain; // 0x480(0x08)
	struct UOverlay* Release; // 0x488(0x08)
	struct UImage* release_base1; // 0x490(0x08)
	struct UImage* release_base2; // 0x498(0x08)
	struct UImage* release_base3; // 0x4a0(0x08)
	struct UImage* release_button; // 0x4a8(0x08)
	struct UImage* release_icon_font; // 0x4b0(0x08)
	struct UOverlay* Set; // 0x4b8(0x08)
	struct UOverlay* stock_set; // 0x4c0(0x08)
	struct UREDTextBlock* Text_brain_number_2; // 0x4c8(0x08)
	struct UREDTextBlock* Text_brain_second_2; // 0x4d0(0x08)
	struct UREDTextBlock* text_brain_warning_2; // 0x4d8(0x08)
	struct UREDTextBlock* text_drive_name_2; // 0x4e0(0x08)
	struct UREDTextBlock* text_release_name_2; // 0x4e8(0x08)

	void SetVisibleReleaseGuide(bool visibleflag); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.SetVisibleReleaseGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleStockIcon(bool visibleflag); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.SetVisibleStockIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefaultMessage(); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.SetDefaultMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateButton(); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.UpdateButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleBrainKeyGuide(bool visibleflag); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.SetVisibleBrainKeyGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRemainingSecond(int32_t second); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.SetRemainingSecond // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brain_frame3(int32_t EntryPoint); // Function WB_ui_Brain_frame3.WB_ui_Brain_frame3_C.ExecuteUbergraph_WB_ui_Brain_frame3 // (Final|UbergraphFunction) // @ game+0x1685580
};

