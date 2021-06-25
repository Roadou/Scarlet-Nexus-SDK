// WidgetBlueprintGeneratedClass WB_ui_Tips.WB_ui_Tips_C
// Size: 0x4d0 (Inherited: 0x440)
struct UWB_ui_Tips_C : UUITips {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* Out; // 0x448(0x08)
	struct UWidgetAnimation* In; // 0x450(0x08)
	struct UWidgetAnimation* default_none; // 0x458(0x08)
	struct UWidgetAnimation* Default; // 0x460(0x08)
	struct UImage* CA_Image_Blue; // 0x468(0x08)
	struct UImage* CA_Image_Green; // 0x470(0x08)
	struct UImage* CA_Image_Red; // 0x478(0x08)
	struct UREDRetainerBox* CA_RetainerBox; // 0x480(0x08)
	struct UImage* Frame_Base; // 0x488(0x08)
	struct UImage* Frame_Grow; // 0x490(0x08)
	struct UImage* Frame_pattern; // 0x498(0x08)
	struct UImage* Noise; // 0x4a0(0x08)
	struct UImage* PG_Cover_Black; // 0x4a8(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide_1; // 0x4b0(0x08)
	struct UWB_ui_Help_Arrow_C* WB_ui_Help_Arrow_2; // 0x4b8(0x08)
	struct UWB_ui_Help_Arrow_C* WB_ui_Help_Arrow_3; // 0x4c0(0x08)
	struct UWB_ui_TutoTips_Parts_1_C* WB_ui_Tutorial_Parts_2; // 0x4c8(0x08)

	void Construct(); // Function WB_ui_Tips.WB_ui_Tips_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Tips.WB_ui_Tips_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_Tips.WB_ui_Tips_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Tips.WB_ui_Tips_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Tips(int32_t EntryPoint); // Function WB_ui_Tips.WB_ui_Tips_C.ExecuteUbergraph_WB_ui_Tips // (Final|UbergraphFunction) // @ game+0x1685580
};

