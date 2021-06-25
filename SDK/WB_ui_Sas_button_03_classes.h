// WidgetBlueprintGeneratedClass WB_ui_Sas_button_03.WB_ui_Sas_button_03_C
// Size: 0x410 (Inherited: 0x3a0)
struct UWB_ui_Sas_button_03_C : UUISASButton3 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* delete_decision_page; // 0x3a8(0x08)
	struct UWidgetAnimation* delete_change_page_3; // 0x3b0(0x08)
	struct UWidgetAnimation* delete_default_page; // 0x3b8(0x08)
	struct UWidgetAnimation* delete_change_page_2; // 0x3c0(0x08)
	struct UWidgetAnimation* delete_decision_cv; // 0x3c8(0x08)
	struct UWidgetAnimation* change_cv_3; // 0x3d0(0x08)
	struct UWidgetAnimation* default_cv; // 0x3d8(0x08)
	struct UWidgetAnimation* change_cv_2; // 0x3e0(0x08)
	struct UWidgetAnimation* Out; // 0x3e8(0x08)
	struct UWidgetAnimation* In; // 0x3f0(0x08)
	struct UWidgetAnimation* Default; // 0x3f8(0x08)
	struct UImage* cv_button_2; // 0x400(0x08)
	struct UImage* cv_icon_font_2; // 0x408(0x08)

	void OnInitialized(); // Function WB_ui_Sas_button_03.WB_ui_Sas_button_03_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_button_03.WB_ui_Sas_button_03_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_button_03(int32_t EntryPoint); // Function WB_ui_Sas_button_03.WB_ui_Sas_button_03_C.ExecuteUbergraph_WB_ui_Sas_button_03 // (Final|UbergraphFunction) // @ game+0x1685580
};

