// WidgetBlueprintGeneratedClass WB_ui_TosConfig_Parts_1_2.WB_ui_TosConfig_Parts_1_1_C
// Size: 0x490 (Inherited: 0x400)
struct UWB_ui_TosConfig_Parts_1_1_C : UUITitleFirstConfirmChildImage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Out; // 0x408(0x08)
	struct UWidgetAnimation* Default; // 0x410(0x08)
	struct UWidgetAnimation* In; // 0x418(0x08)
	struct UBorder* All_Color; // 0x420(0x08)
	struct UOverlay* All_Set; // 0x428(0x08)
	struct UBorder* Border_1; // 0x430(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x438(0x08)
	struct UREDScrollBoxSimple* REDScrollBoxSimple_1; // 0x440(0x08)
	struct UScaleBox* ScaleBox_1; // 0x448(0x08)
	struct UREDTextBlock* Text_TosConfig_2; // 0x450(0x08)
	struct UREDTextBlock* Text_TosConfig_help_2; // 0x458(0x08)
	struct UImage* Tos_Image_eula_1_2; // 0x460(0x08)
	struct UImage* Tos_Image_eula_1_3; // 0x468(0x08)
	struct UImage* Tos_Image_eula_2_2; // 0x470(0x08)
	struct UImage* Tos_Image_eula_2_3; // 0x478(0x08)
	struct UImage* Tos_Image_pp_2; // 0x480(0x08)
	struct UWB_ui_TosConfig_Parts_2_1_C* WB_ui_TosConfig_Parts_2_2; // 0x488(0x08)

	void Construct(); // Function WB_ui_TosConfig_Parts_1_2.WB_ui_TosConfig_Parts_1_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_TosConfig_Parts_1_2.WB_ui_TosConfig_Parts_1_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_TosConfig_Parts_1_2.WB_ui_TosConfig_Parts_1_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_TosConfig_Parts_1_2(int32_t EntryPoint); // Function WB_ui_TosConfig_Parts_1_2.WB_ui_TosConfig_Parts_1_1_C.ExecuteUbergraph_WB_ui_TosConfig_Parts_1_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

