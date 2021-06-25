// WidgetBlueprintGeneratedClass WB_ui_Log_parts_2.WB_ui_Log_parts_1_C
// Size: 0x438 (Inherited: 0x408)
struct UWB_ui_Log_parts_1_C : UUILogParts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* Out; // 0x410(0x08)
	struct UWidgetAnimation* In; // 0x418(0x08)
	struct UWidgetAnimation* Default; // 0x420(0x08)
	struct UREDImageBase* icon_font; // 0x428(0x08)
	struct UREDTextBlock* TextBlock_1; // 0x430(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Log_parts_2.WB_ui_Log_parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Log_parts_2.WB_ui_Log_parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Log_parts_2(int32_t EntryPoint); // Function WB_ui_Log_parts_2.WB_ui_Log_parts_1_C.ExecuteUbergraph_WB_ui_Log_parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

