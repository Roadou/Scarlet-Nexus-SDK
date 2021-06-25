// WidgetBlueprintGeneratedClass WB_ui_License.WB_ui_License_C
// Size: 0x478 (Inherited: 0x3c8)
struct UWB_ui_License_C : UUITitleLicense {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* Out; // 0x3d0(0x08)
	struct UWidgetAnimation* Default; // 0x3d8(0x08)
	struct UWidgetAnimation* In; // 0x3e0(0x08)
	struct UBorder* All_Color; // 0x3e8(0x08)
	struct UBackgroundBlur* BackgroundBlur_77; // 0x3f0(0x08)
	struct UImage* Base_black_3; // 0x3f8(0x08)
	struct UImage* BlackBand_L; // 0x400(0x08)
	struct UImage* BlackBand_R; // 0x408(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x410(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x418(0x08)
	struct UImage* Image_2; // 0x420(0x08)
	struct UImage* Image_License_text_2; // 0x428(0x08)
	struct UImage* Image_License_text_3; // 0x430(0x08)
	struct UImage* Image_License_text_4; // 0x438(0x08)
	struct UOverlay* Overlay_1; // 0x440(0x08)
	struct UOverlay* Overlay_3; // 0x448(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x450(0x08)
	struct UREDScrollBoxSimple* REDScrollBoxSimple_1; // 0x458(0x08)
	struct UREDTextBlock* Text_License_2; // 0x460(0x08)
	struct UREDTextBlock* Text_License_help_2; // 0x468(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x470(0x08)

	void Construct(); // Function WB_ui_License.WB_ui_License_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_License.WB_ui_License_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_License.WB_ui_License_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_License(int32_t EntryPoint); // Function WB_ui_License.WB_ui_License_C.ExecuteUbergraph_WB_ui_License // (Final|UbergraphFunction) // @ game+0x1685580
};

