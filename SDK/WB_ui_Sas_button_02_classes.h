// WidgetBlueprintGeneratedClass WB_ui_Sas_button_02.WB_ui_Sas_button_02_C
// Size: 0x410 (Inherited: 0x3a0)
struct UWB_ui_Sas_button_02_C : UUISASButton2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* delete_decision_page; // 0x3a8(0x08)
	struct UWidgetAnimation* delete_change_page_3; // 0x3b0(0x08)
	struct UWidgetAnimation* delete_default_page; // 0x3b8(0x08)
	struct UWidgetAnimation* delete_change_page_2; // 0x3c0(0x08)
	struct UWidgetAnimation* delete_decision_sas; // 0x3c8(0x08)
	struct UWidgetAnimation* change_sas_3; // 0x3d0(0x08)
	struct UWidgetAnimation* default_sas; // 0x3d8(0x08)
	struct UWidgetAnimation* change_sas_2; // 0x3e0(0x08)
	struct UWidgetAnimation* Out; // 0x3e8(0x08)
	struct UWidgetAnimation* In; // 0x3f0(0x08)
	struct UWidgetAnimation* Default; // 0x3f8(0x08)
	struct UImage* sas_button; // 0x400(0x08)
	struct UImage* sas_icon_font; // 0x408(0x08)

	void OnInitialized(); // Function WB_ui_Sas_button_02.WB_ui_Sas_button_02_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_button_02.WB_ui_Sas_button_02_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_button_02(int32_t EntryPoint); // Function WB_ui_Sas_button_02.WB_ui_Sas_button_02_C.ExecuteUbergraph_WB_ui_Sas_button_02 // (Final|UbergraphFunction) // @ game+0x1685580
};

