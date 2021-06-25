// WidgetBlueprintGeneratedClass WB_ui_ControllerListParts_3.WB_ui_ControllerListParts_2_C
// Size: 0x410 (Inherited: 0x3c8)
struct UWB_ui_ControllerListParts_2_C : UUIConfigControllerSelect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* select_out; // 0x3d0(0x08)
	struct UWidgetAnimation* select_in; // 0x3d8(0x08)
	struct UWidgetAnimation* select; // 0x3e0(0x08)
	struct UWidgetAnimation* Default; // 0x3e8(0x08)
	struct UImage* icon_font; // 0x3f0(0x08)
	struct USpacer* Spacer; // 0x3f8(0x08)
	struct UREDTextBlock* text; // 0x400(0x08)
	struct UREDTextBlock* Text_controller_list_3; // 0x408(0x08)

	void Construct(); // Function WB_ui_ControllerListParts_3.WB_ui_ControllerListParts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ControllerListParts_3.WB_ui_ControllerListParts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ControllerListParts_3(int32_t EntryPoint); // Function WB_ui_ControllerListParts_3.WB_ui_ControllerListParts_2_C.ExecuteUbergraph_WB_ui_ControllerListParts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

