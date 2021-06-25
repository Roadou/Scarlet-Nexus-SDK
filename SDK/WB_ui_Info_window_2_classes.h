// WidgetBlueprintGeneratedClass WB_ui_Info_window_2.WB_ui_Info_window_1_C
// Size: 0x480 (Inherited: 0x3d8)
struct UWB_ui_Info_window_1_C : UUIInfoWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* Out; // 0x3e0(0x08)
	struct UWidgetAnimation* In; // 0x3e8(0x08)
	struct UWidgetAnimation* default_none; // 0x3f0(0x08)
	struct UWidgetAnimation* Default; // 0x3f8(0x08)
	struct UImage* CA_Image_Blue; // 0x400(0x08)
	struct UImage* CA_Image_Green; // 0x408(0x08)
	struct UImage* CA_Image_Red; // 0x410(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x418(0x08)
	struct UImage* Frame_Base; // 0x420(0x08)
	struct UImage* Frame_Grow; // 0x428(0x08)
	struct UImage* Frame_pattern; // 0x430(0x08)
	struct UREDImageBase* Guide_Line_2; // 0x438(0x08)
	struct UOverlay* Guide_Set; // 0x440(0x08)
	struct UREDImageBase* icon_font; // 0x448(0x08)
	struct UREDImageBase* icon_font_2; // 0x450(0x08)
	struct UImage* Noise; // 0x458(0x08)
	struct UImage* PG_Cover_Black; // 0x460(0x08)
	struct USpacer* Spacer_101; // 0x468(0x08)
	struct UREDTextBlock* Text_Info_Guide_2; // 0x470(0x08)
	struct UREDTextBlock* Text_Info_window; // 0x478(0x08)

	void Construct(); // Function WB_ui_Info_window_2.WB_ui_Info_window_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Info_window_2.WB_ui_Info_window_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void setStyleWarning(); // Function WB_ui_Info_window_2.WB_ui_Info_window_1_C.setStyleWarning // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setStyleNormal(); // Function WB_ui_Info_window_2.WB_ui_Info_window_1_C.setStyleNormal // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Info_window_2(int32_t EntryPoint); // Function WB_ui_Info_window_2.WB_ui_Info_window_1_C.ExecuteUbergraph_WB_ui_Info_window_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

