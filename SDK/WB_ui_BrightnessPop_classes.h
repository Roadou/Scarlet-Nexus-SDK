// WidgetBlueprintGeneratedClass WB_ui_BrightnessPop.WB_ui_BrightnessPop_C
// Size: 0x528 (Inherited: 0x4a0)
struct UWB_ui_BrightnessPop_C : UUITitleFirstConfigBrightness {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* Out; // 0x4a8(0x08)
	struct UWidgetAnimation* Default; // 0x4b0(0x08)
	struct UWidgetAnimation* In; // 0x4b8(0x08)
	struct UImage* BlackBand_L_2; // 0x4c0(0x08)
	struct UImage* BlackBand_R_2; // 0x4c8(0x08)
	struct UREDOverlay* Guage_Set; // 0x4d0(0x08)
	struct UREDImageBase* icon_font_2; // 0x4d8(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L_2; // 0x4e0(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R_2; // 0x4e8(0x08)
	struct UREDRetainerBox* REDRetainerBox_1; // 0x4f0(0x08)
	struct UImage* Slider_2; // 0x4f8(0x08)
	struct USpacer* Spacer_151; // 0x500(0x08)
	struct UREDTextBlock* Text_Brightness_Pop_window_2; // 0x508(0x08)
	struct UREDTextBlock* Text_BrightnessPop_instruct_2; // 0x510(0x08)
	struct UREDTextBlock* Text_Info_Guide_2; // 0x518(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_2; // 0x520(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_BrightnessPop.WB_ui_BrightnessPop_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void applyBrightness(float fValue); // Function WB_ui_BrightnessPop.WB_ui_BrightnessPop_C.applyBrightness // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_BrightnessPop.WB_ui_BrightnessPop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_BrightnessPop(int32_t EntryPoint); // Function WB_ui_BrightnessPop.WB_ui_BrightnessPop_C.ExecuteUbergraph_WB_ui_BrightnessPop // (Final|UbergraphFunction) // @ game+0x1685580
};

