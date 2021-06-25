// WidgetBlueprintGeneratedClass WB_ui_LanguagePop.WB_ui_LanguagePop_C
// Size: 0x4e8 (Inherited: 0x480)
struct UWB_ui_LanguagePop_C : UUITitleFirstLangaugeChange {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UWidgetAnimation* Out; // 0x488(0x08)
	struct UWidgetAnimation* Default; // 0x490(0x08)
	struct UWidgetAnimation* In; // 0x498(0x08)
	struct UImage* BlackBand_L_2; // 0x4a0(0x08)
	struct UImage* BlackBand_R_2; // 0x4a8(0x08)
	struct UImage* Noise; // 0x4b0(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x4b8(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x4c0(0x08)
	struct UREDRetainerBox* REDRetainerBox_1; // 0x4c8(0x08)
	struct UREDTextBlock* Text_Language_Pop_2; // 0x4d0(0x08)
	struct UREDTextBlock* Text_Language_Pop_window_2; // 0x4d8(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_2; // 0x4e0(0x08)

	void Construct(); // Function WB_ui_LanguagePop.WB_ui_LanguagePop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_LanguagePop.WB_ui_LanguagePop_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_LanguagePop(int32_t EntryPoint); // Function WB_ui_LanguagePop.WB_ui_LanguagePop_C.ExecuteUbergraph_WB_ui_LanguagePop // (Final|UbergraphFunction) // @ game+0x1685580
};

