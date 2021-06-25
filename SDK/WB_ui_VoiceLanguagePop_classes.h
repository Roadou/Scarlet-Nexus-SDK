// WidgetBlueprintGeneratedClass WB_ui_VoiceLanguagePop.WB_ui_VoiceLanguagePop_C
// Size: 0x4f8 (Inherited: 0x480)
struct UWB_ui_VoiceLanguagePop_C : UUITitleFirstConfigVoiceLanguage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UWidgetAnimation* Out; // 0x488(0x08)
	struct UWidgetAnimation* Default; // 0x490(0x08)
	struct UWidgetAnimation* In; // 0x498(0x08)
	struct UImage* BlackBand_L_2; // 0x4a0(0x08)
	struct UImage* BlackBand_R_2; // 0x4a8(0x08)
	struct UREDImageBase* icon_font_2; // 0x4b0(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x4b8(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x4c0(0x08)
	struct UREDRetainerBox* REDRetainerBox_1; // 0x4c8(0x08)
	struct USpacer* Spacer_101; // 0x4d0(0x08)
	struct UREDTextBlock* Text_Info_Guide_2; // 0x4d8(0x08)
	struct UREDTextBlock* Text_VoiceLanguage_Pop_2; // 0x4e0(0x08)
	struct UREDTextBlock* Text_VoiceLanguage_Pop_window_2; // 0x4e8(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_2; // 0x4f0(0x08)

	void Construct(); // Function WB_ui_VoiceLanguagePop.WB_ui_VoiceLanguagePop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_VoiceLanguagePop.WB_ui_VoiceLanguagePop_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_VoiceLanguagePop(int32_t EntryPoint); // Function WB_ui_VoiceLanguagePop.WB_ui_VoiceLanguagePop_C.ExecuteUbergraph_WB_ui_VoiceLanguagePop // (Final|UbergraphFunction) // @ game+0x1685580
};

