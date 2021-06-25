// WidgetBlueprintGeneratedClass WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C
// Size: 0x3f3 (Inherited: 0x388)
struct UWB_ui_Choise_parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UWidgetAnimation* select_out; // 0x398(0x08)
	struct UWidgetAnimation* select_in; // 0x3a0(0x08)
	struct UWidgetAnimation* select; // 0x3a8(0x08)
	struct UWidgetAnimation* default_none; // 0x3b0(0x08)
	struct UWidgetAnimation* Default; // 0x3b8(0x08)
	struct UImage* Cursor_2; // 0x3c0(0x08)
	struct UImage* Cursor_3; // 0x3c8(0x08)
	struct UImage* Cursor_4; // 0x3d0(0x08)
	struct UImage* cursor_4_add; // 0x3d8(0x08)
	struct UREDTextBlock* Text_choice_text_3; // 0x3e0(0x08)
	struct UImage* Text_grow; // 0x3e8(0x08)
	bool FocusFlag; // 0x3f0(0x01)
	bool decideFlag; // 0x3f1(0x01)
	bool DecideAnimationFlag; // 0x3f2(0x01)

	void IsDecideAnimation(bool IsAnimation); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.IsDecideAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Decide(); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Choice Focus(bool IsFocus); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.Set Choice Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetText(struct FText text); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopFocus(int32_t SubState); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.StateLoopFocus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopUnFocus(int32_t SubState); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.StateLoopUnFocus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Choise_parts_2(int32_t EntryPoint); // Function WB_ui_Choise_parts_2.WB_ui_Choise_parts_1_C.ExecuteUbergraph_WB_ui_Choise_parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

