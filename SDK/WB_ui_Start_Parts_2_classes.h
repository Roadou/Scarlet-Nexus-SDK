// WidgetBlueprintGeneratedClass WB_ui_Start_Parts_2.WB_ui_Start_Parts_1_C
// Size: 0x4b0 (Inherited: 0x418)
struct UWB_ui_Start_Parts_1_C : UUITitleMenuParts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* unselect_select; // 0x420(0x08)
	struct UWidgetAnimation* unselect_in; // 0x428(0x08)
	struct UWidgetAnimation* unselect; // 0x430(0x08)
	struct UWidgetAnimation* decision; // 0x438(0x08)
	struct UWidgetAnimation* select; // 0x440(0x08)
	struct UWidgetAnimation* select_in; // 0x448(0x08)
	struct UWidgetAnimation* default_none; // 0x450(0x08)
	struct UWidgetAnimation* Default; // 0x458(0x08)
	struct UImage* Base_black; // 0x460(0x08)
	struct UImage* Cursor_2; // 0x468(0x08)
	struct UImage* Cursor_3; // 0x470(0x08)
	struct UImage* Cursor_4; // 0x478(0x08)
	struct UImage* cursor_4_add; // 0x480(0x08)
	struct UImage* Ghost; // 0x488(0x08)
	struct UImage* Image_ghost_size; // 0x490(0x08)
	struct UImage* press_any_button_glow; // 0x498(0x08)
	struct URetainerBox* RetainerBox_2; // 0x4a0(0x08)
	struct UREDTextBlock* Text_Start_2; // 0x4a8(0x08)

	void UpdateStartPartsMaterial(); // Function WB_ui_Start_Parts_2.WB_ui_Start_Parts_1_C.UpdateStartPartsMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Start_Parts_2.WB_ui_Start_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Start_Parts_2.WB_ui_Start_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Start_Parts_2(int32_t EntryPoint); // Function WB_ui_Start_Parts_2.WB_ui_Start_Parts_1_C.ExecuteUbergraph_WB_ui_Start_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

