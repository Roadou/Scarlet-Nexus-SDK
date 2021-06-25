// WidgetBlueprintGeneratedClass WB_ui_Brightness.WB_ui_Brightness_C
// Size: 0x500 (Inherited: 0x428)
struct UWB_ui_Brightness_C : UUIConfigBrightness {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct UWidgetAnimation* default_none; // 0x430(0x08)
	struct UWidgetAnimation* Default; // 0x438(0x08)
	struct UImage* Base; // 0x440(0x08)
	struct UImage* Base_L; // 0x448(0x08)
	struct UImage* Base_R; // 0x450(0x08)
	struct UImage* Frame_L; // 0x458(0x08)
	struct UImage* Frame_R; // 0x460(0x08)
	struct UImage* Gradation_2; // 0x468(0x08)
	struct UImage* Gradation_Base; // 0x470(0x08)
	struct UImage* guage_2; // 0x478(0x08)
	struct UREDOverlay* Guage_Set; // 0x480(0x08)
	struct UImage* Mark_L; // 0x488(0x08)
	struct UImage* Mark_R; // 0x490(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x498(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x4a0(0x08)
	struct UImage* Slider_2; // 0x4a8(0x08)
	struct UREDTextBlock* Text_Brightness_instruct_2; // 0x4b0(0x08)
	struct TArray<struct UWB_ui_ShopContents_Parts_1_C*> ChildBuySell; // 0x4b8(0x10)
	struct TArray<struct UWB_ui_ShopContents_Parts_6_C*> ChildItemCategory; // 0x4c8(0x10)
	struct UPaperFlipbook* defaultPF; // 0x4d8(0x08)
	struct UPaperFlipbook* selectPF; // 0x4e0(0x08)
	struct UPaperFlipbook* selectInPF; // 0x4e8(0x08)
	struct UPaperFlipbook* selectOutPF; // 0x4f0(0x08)
	struct UPaperFlipbook* decisionPF; // 0x4f8(0x08)

	void Construct(); // Function WB_ui_Brightness.WB_ui_Brightness_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Brightness.WB_ui_Brightness_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void applyBrightness(float fValue); // Function WB_ui_Brightness.WB_ui_Brightness_C.applyBrightness // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Brightness(int32_t EntryPoint); // Function WB_ui_Brightness.WB_ui_Brightness_C.ExecuteUbergraph_WB_ui_Brightness // (Final|UbergraphFunction) // @ game+0x1685580
};

