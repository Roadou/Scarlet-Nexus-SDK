// WidgetBlueprintGeneratedClass WB_ui_ControllerListParts_2.WB_ui_ControllerListParts_1_C
// Size: 0x478 (Inherited: 0x430)
struct UWB_ui_ControllerListParts_1_C : UUIConfigControllerSelectMulti {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UWidgetAnimation* select_out; // 0x438(0x08)
	struct UWidgetAnimation* select_in; // 0x440(0x08)
	struct UWidgetAnimation* select; // 0x448(0x08)
	struct UWidgetAnimation* Default; // 0x450(0x08)
	struct UImage* icon_font; // 0x458(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x460(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x468(0x08)
	struct UREDTextBlock* Text_controller_list_2; // 0x470(0x08)

	void Construct(); // Function WB_ui_ControllerListParts_2.WB_ui_ControllerListParts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ControllerListParts_2.WB_ui_ControllerListParts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ControllerListParts_2(int32_t EntryPoint); // Function WB_ui_ControllerListParts_2.WB_ui_ControllerListParts_1_C.ExecuteUbergraph_WB_ui_ControllerListParts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

