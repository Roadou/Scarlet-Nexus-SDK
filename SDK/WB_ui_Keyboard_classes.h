// WidgetBlueprintGeneratedClass WB_ui_Keyboard.WB_ui_Keyboard_C
// Size: 0x418 (Inherited: 0x3e8)
struct UWB_ui_Keyboard_C : UUIConfigKeyboardMouse {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* Default; // 0x3f0(0x08)
	struct UBorder* All_Color; // 0x3f8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x400(0x08)
	struct UREDScrollBox* REDScrollBox_1; // 0x408(0x08)
	struct UWB_ui_KeyboardList_Parts_1_C* WB_ui_KeyboardList_Parts_2; // 0x410(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Keyboard(int32_t EntryPoint); // Function WB_ui_Keyboard.WB_ui_Keyboard_C.ExecuteUbergraph_WB_ui_Keyboard // (Final|UbergraphFunction) // @ game+0x1685580
};

