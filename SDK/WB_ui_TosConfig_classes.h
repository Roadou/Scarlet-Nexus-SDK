// WidgetBlueprintGeneratedClass WB_ui_TosConfig.WB_ui_TosConfig_C
// Size: 0x470 (Inherited: 0x3e8)
struct UWB_ui_TosConfig_C : UUITitleFirstConfirm {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UWidgetAnimation* Out; // 0x3f0(0x08)
	struct UWidgetAnimation* Default; // 0x3f8(0x08)
	struct UWidgetAnimation* In; // 0x400(0x08)
	struct UBorder* All_Color; // 0x408(0x08)
	struct UBackgroundBlur* BackgroundBlur_77; // 0x410(0x08)
	struct UImage* Base_black_3; // 0x418(0x08)
	struct UImage* BG_Shadow; // 0x420(0x08)
	struct UImage* BlackBand_L_2; // 0x428(0x08)
	struct UImage* BlackBand_R_2; // 0x430(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x438(0x08)
	struct UOverlay* Overlay_3; // 0x440(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x448(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x450(0x08)
	struct UWB_ui_TosConfig_Parts_1_2_C* WB_ui_TosConfig_Parts_1_3; // 0x458(0x08)
	struct UWB_ui_TosConfig_Parts_1_1_C* WB_ui_TosConfig_Parts_1_1a; // 0x460(0x08)
	struct UWB_ui_TosConfig_Parts_1_1_C* WB_ui_TosConfig_Parts_1_1b; // 0x468(0x08)

	void Construct(); // Function WB_ui_TosConfig.WB_ui_TosConfig_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_TosConfig.WB_ui_TosConfig_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_TosConfig.WB_ui_TosConfig_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetCeBank(bool Value); // Function WB_ui_TosConfig.WB_ui_TosConfig_C.SetCeBank // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_TosConfig(int32_t EntryPoint); // Function WB_ui_TosConfig.WB_ui_TosConfig_C.ExecuteUbergraph_WB_ui_TosConfig // (Final|UbergraphFunction) // @ game+0x1685580
};

