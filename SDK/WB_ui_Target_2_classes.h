// WidgetBlueprintGeneratedClass WB_ui_Target_2.WB_ui_Target_1_C
// Size: 0x439 (Inherited: 0x3d8)
struct UWB_ui_Target_1_C : UUITarget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Out_3; // 0x3e0(0x08)
	struct UWidgetAnimation* Change; // 0x3e8(0x08)
	struct UWidgetAnimation* Out; // 0x3f0(0x08)
	struct UWidgetAnimation* default_none; // 0x3f8(0x08)
	struct UWidgetAnimation* Default; // 0x400(0x08)
	struct UWidgetAnimation* In; // 0x408(0x08)
	struct UImage* ghost_frame; // 0x410(0x08)
	struct UImage* Ghost_size; // 0x418(0x08)
	struct UImage* line_add; // 0x420(0x08)
	struct USizeBox* SizeBox_1; // 0x428(0x08)
	struct USizeBox* SizeBox_add; // 0x430(0x08)
	bool FlagChange; // 0x438(0x01)

	void Construct(); // Function WB_ui_Target_2.WB_ui_Target_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Target_2.WB_ui_Target_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Target_2(int32_t EntryPoint); // Function WB_ui_Target_2.WB_ui_Target_1_C.ExecuteUbergraph_WB_ui_Target_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

