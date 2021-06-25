// WidgetBlueprintGeneratedClass WB_ui_Fade.WB_ui_Fade_C
// Size: 0x3e0 (Inherited: 0x3b8)
struct UWB_ui_Fade_C : UUIFade {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UWidgetAnimation* default_out; // 0x3c0(0x08)
	struct UWidgetAnimation* default_in; // 0x3c8(0x08)
	struct UWidgetAnimation* Default; // 0x3d0(0x08)
	struct UImage* BG; // 0x3d8(0x08)

	void Construct(); // Function WB_ui_Fade.WB_ui_Fade_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Fade.WB_ui_Fade_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Fade(int32_t EntryPoint); // Function WB_ui_Fade.WB_ui_Fade_C.ExecuteUbergraph_WB_ui_Fade // (Final|UbergraphFunction) // @ game+0x1685580
};

