// WidgetBlueprintGeneratedClass WB_ui_Guide.WB_ui_Guide_C
// Size: 0x3c0 (Inherited: 0x3a0)
struct UWB_ui_Guide_C : UUIGuide {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UREDImageBase* icon_font_2; // 0x3a8(0x08)
	struct USpacer* Spacer_2; // 0x3b0(0x08)
	struct UREDTextBlock* Text_Guide_2; // 0x3b8(0x08)

	void Construct(); // Function WB_ui_Guide.WB_ui_Guide_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Guide.WB_ui_Guide_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Guide(int32_t EntryPoint); // Function WB_ui_Guide.WB_ui_Guide_C.ExecuteUbergraph_WB_ui_Guide // (Final|UbergraphFunction) // @ game+0x1685580
};

