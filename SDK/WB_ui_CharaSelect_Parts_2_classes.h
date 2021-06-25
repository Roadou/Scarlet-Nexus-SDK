// WidgetBlueprintGeneratedClass WB_ui_CharaSelect_Parts_2.WB_ui_CharaSelect_Parts_1_C
// Size: 0x3d8 (Inherited: 0x3a8)
struct UWB_ui_CharaSelect_Parts_1_C : UUICharaSelectParts {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UWidgetAnimation* default_none; // 0x3b8(0x08)
	struct UWidgetAnimation* select; // 0x3c0(0x08)
	struct UImage* Arrow1; // 0x3c8(0x08)
	struct UImage* glow; // 0x3d0(0x08)

	void Construct(); // Function WB_ui_CharaSelect_Parts_2.WB_ui_CharaSelect_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_CharaSelect_Parts_2.WB_ui_CharaSelect_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_CharaSelect_Parts_2(int32_t EntryPoint); // Function WB_ui_CharaSelect_Parts_2.WB_ui_CharaSelect_Parts_1_C.ExecuteUbergraph_WB_ui_CharaSelect_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

