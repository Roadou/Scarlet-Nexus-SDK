// WidgetBlueprintGeneratedClass WB_ui_Sas_page_01.WB_ui_Sas_page_01_C
// Size: 0x458 (Inherited: 0x388)
struct UWB_ui_Sas_page_01_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* change_page_r_4; // 0x390(0x08)
	struct UWidgetAnimation* change_page_r_3; // 0x398(0x08)
	struct UWidgetAnimation* change_page_r_2; // 0x3a0(0x08)
	struct UWidgetAnimation* change_page_l_4; // 0x3a8(0x08)
	struct UWidgetAnimation* change_page_l_3; // 0x3b0(0x08)
	struct UWidgetAnimation* change_page_l_2; // 0x3b8(0x08)
	struct UWidgetAnimation* Out; // 0x3c0(0x08)
	struct UWidgetAnimation* In; // 0x3c8(0x08)
	struct UWidgetAnimation* change_page_r_l; // 0x3d0(0x08)
	struct UWidgetAnimation* change_page_l_r; // 0x3d8(0x08)
	struct UWidgetAnimation* default_r; // 0x3e0(0x08)
	struct UWidgetAnimation* default_l; // 0x3e8(0x08)
	struct UWidgetAnimation* default_none; // 0x3f0(0x08)
	struct UImage* frame_page_button; // 0x3f8(0x08)
	struct UImage* frame_page_button_2; // 0x400(0x08)
	struct UImage* frame_page_button_3; // 0x408(0x08)
	struct UImage* frame_page_button_4; // 0x410(0x08)
	struct UImage* frame_page_button_5; // 0x418(0x08)
	struct UImage* frame_page_button_6; // 0x420(0x08)
	struct UImage* frame_page_button_6_L3; // 0x428(0x08)
	struct UImage* frame_page_button_7_L3; // 0x430(0x08)
	struct UREDTextBlock* frame_page_font_L3; // 0x438(0x08)
	struct UImage* frame_page_icon_font; // 0x440(0x08)
	struct UImage* icon_font; // 0x448(0x08)
	int32_t Page; // 0x450(0x04)
	bool ReadyLFlag; // 0x454(0x01)
	bool ReadyRFlag; // 0x455(0x01)
	bool ReadyFlag; // 0x456(0x01)
	bool IsNewStyle; // 0x457(0x01)

	void SetReady(bool IsReadyL, bool IsReadyR); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.SetReady // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateButton(); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.UpdateButton // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPage(int32_t Page); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.SetPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopR(int32_t SubState); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.StateLoopR // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopL(int32_t SubState); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.StateLoopL // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Sas_page_01(int32_t EntryPoint); // Function WB_ui_Sas_page_01.WB_ui_Sas_page_01_C.ExecuteUbergraph_WB_ui_Sas_page_01 // (Final|UbergraphFunction) // @ game+0x1685580
};

