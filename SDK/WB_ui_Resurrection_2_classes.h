// WidgetBlueprintGeneratedClass WB_ui_Resurrection_2.WB_ui_Resurrection_1_C
// Size: 0x4a0 (Inherited: 0x420)
struct UWB_ui_Resurrection_1_C : UUIResurrectionGauge {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UWidgetAnimation* Out_3; // 0x428(0x08)
	struct UWidgetAnimation* In_3; // 0x430(0x08)
	struct UWidgetAnimation* decision; // 0x438(0x08)
	struct UWidgetAnimation* select_out; // 0x440(0x08)
	struct UWidgetAnimation* select_in; // 0x448(0x08)
	struct UWidgetAnimation* select; // 0x450(0x08)
	struct UWidgetAnimation* Out; // 0x458(0x08)
	struct UWidgetAnimation* In; // 0x460(0x08)
	struct UWidgetAnimation* default_none; // 0x468(0x08)
	struct UWidgetAnimation* Default; // 0x470(0x08)
	struct UImage* guage_Bar; // 0x478(0x08)
	struct UImage* Icon_2; // 0x480(0x08)
	struct UREDImageBase* icon_font; // 0x488(0x08)
	struct USpacer* Spacer_99; // 0x490(0x08)
	struct UREDTextBlock* Text_Resurrection_2; // 0x498(0x08)

	void Construct(); // Function WB_ui_Resurrection_2.WB_ui_Resurrection_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Resurrection_2.WB_ui_Resurrection_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void setGauge(float guage); // Function WB_ui_Resurrection_2.WB_ui_Resurrection_1_C.setGauge // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Resurrection_2(int32_t EntryPoint); // Function WB_ui_Resurrection_2.WB_ui_Resurrection_1_C.ExecuteUbergraph_WB_ui_Resurrection_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

