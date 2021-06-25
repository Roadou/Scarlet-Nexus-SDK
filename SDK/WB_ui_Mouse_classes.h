// WidgetBlueprintGeneratedClass WB_ui_Mouse.WB_ui_Mouse_C
// Size: 0x410 (Inherited: 0x3c8)
struct UWB_ui_Mouse_C : UUIMouse {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* default_focus; // 0x3d0(0x08)
	struct UWidgetAnimation* out_focus; // 0x3d8(0x08)
	struct UWidgetAnimation* in_focus; // 0x3e0(0x08)
	struct UWidgetAnimation* Default; // 0x3e8(0x08)
	struct UWidgetAnimation* default_none; // 0x3f0(0x08)
	struct UImage* glow_2; // 0x3f8(0x08)
	struct UImage* icon_goal_Sub; // 0x400(0x08)
	struct UImage* icon_goal_Sub_2; // 0x408(0x08)

	void Construct(); // Function WB_ui_Mouse.WB_ui_Mouse_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Mouse.WB_ui_Mouse_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Mouse(int32_t EntryPoint); // Function WB_ui_Mouse.WB_ui_Mouse_C.ExecuteUbergraph_WB_ui_Mouse // (Final|UbergraphFunction) // @ game+0x1685580
};

