// WidgetBlueprintGeneratedClass WB_ui_ConfigList_Parts_5.WB_ui_ConfigList_Parts_4_C
// Size: 0x4d8 (Inherited: 0x448)
struct UWB_ui_ConfigList_Parts_4_C : UUIConfigSelectSlider {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UWidgetAnimation* select_out; // 0x450(0x08)
	struct UWidgetAnimation* select_in; // 0x458(0x08)
	struct UWidgetAnimation* select; // 0x460(0x08)
	struct UWidgetAnimation* Default; // 0x468(0x08)
	struct UImage* Base_2; // 0x470(0x08)
	struct UImage* Frame_2; // 0x478(0x08)
	struct UImage* guage_2; // 0x480(0x08)
	struct UREDOverlay* Guage_Set; // 0x488(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x490(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x498(0x08)
	struct UREDImage* Slider_2; // 0x4a0(0x08)
	struct UREDTextBlock* Text_config_list_2; // 0x4a8(0x08)
	struct UPaperFlipbook* defaultPF; // 0x4b0(0x08)
	struct UPaperFlipbook* selectPF; // 0x4b8(0x08)
	struct UPaperFlipbook* selectInPF; // 0x4c0(0x08)
	struct UPaperFlipbook* selectOutPF; // 0x4c8(0x08)
	struct UPaperFlipbook* decisionPF; // 0x4d0(0x08)

	void Construct(); // Function WB_ui_ConfigList_Parts_5.WB_ui_ConfigList_Parts_4_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ConfigList_Parts_5.WB_ui_ConfigList_Parts_4_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ConfigList_Parts_5(int32_t EntryPoint); // Function WB_ui_ConfigList_Parts_5.WB_ui_ConfigList_Parts_4_C.ExecuteUbergraph_WB_ui_ConfigList_Parts_5 // (Final|UbergraphFunction) // @ game+0x1685580
};

