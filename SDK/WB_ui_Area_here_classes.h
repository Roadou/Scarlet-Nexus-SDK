// WidgetBlueprintGeneratedClass WB_ui_Area_here.WB_ui_Area_here_C
// Size: 0x3d0 (Inherited: 0x3b0)
struct UWB_ui_Area_here_C : UUIAreaHere {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* Out; // 0x3b8(0x08)
	struct UWidgetAnimation* In; // 0x3c0(0x08)
	struct UREDTextBlock* Text_Area_here_2; // 0x3c8(0x08)

	void Construct(); // Function WB_ui_Area_here.WB_ui_Area_here_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Area_here.WB_ui_Area_here_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Area_here(int32_t EntryPoint); // Function WB_ui_Area_here.WB_ui_Area_here_C.ExecuteUbergraph_WB_ui_Area_here // (Final|UbergraphFunction) // @ game+0x1685580
};

