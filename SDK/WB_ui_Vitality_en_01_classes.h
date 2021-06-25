// WidgetBlueprintGeneratedClass WB_ui_Vitality_en_01.WB_ui_Vitality_en_01_C
// Size: 0x458 (Inherited: 0x418)
struct UWB_ui_Vitality_en_01_C : UUIVitalityEN01 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* default_none; // 0x420(0x08)
	struct UWidgetAnimation* Out; // 0x428(0x08)
	struct UWidgetAnimation* In; // 0x430(0x08)
	struct UWidgetAnimation* Default; // 0x438(0x08)
	struct UImage* gauge_Bar_damage; // 0x440(0x08)
	struct UImage* gauge_Bar_nomal; // 0x448(0x08)
	struct UImage* gauge_Bar_nomal_add; // 0x450(0x08)

	void Construct(); // Function WB_ui_Vitality_en_01.WB_ui_Vitality_en_01_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Vitality_en_01.WB_ui_Vitality_en_01_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetIcon1(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_en_01.WB_ui_Vitality_en_01_C.SetIcon1 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetIcon2(struct UImage* Icon, int32_t Index); // Function WB_ui_Vitality_en_01.WB_ui_Vitality_en_01_C.SetIcon2 // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Vitality_en_01(int32_t EntryPoint); // Function WB_ui_Vitality_en_01.WB_ui_Vitality_en_01_C.ExecuteUbergraph_WB_ui_Vitality_en_01 // (Final|UbergraphFunction) // @ game+0x1685580
};

