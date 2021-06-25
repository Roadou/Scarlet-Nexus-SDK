// WidgetBlueprintGeneratedClass WB_ui_ConfigList_Parts_3.WB_ui_ConfigList_Parts_2_C
// Size: 0x578 (Inherited: 0x4f0)
struct UWB_ui_ConfigList_Parts_2_C : UUIConfigSelect2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f0(0x08)
	struct UWidgetAnimation* select_out; // 0x4f8(0x08)
	struct UWidgetAnimation* select_in; // 0x500(0x08)
	struct UWidgetAnimation* select; // 0x508(0x08)
	struct UWidgetAnimation* Default; // 0x510(0x08)
	struct UImage* Base_2; // 0x518(0x08)
	struct UImage* Frame_2; // 0x520(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x528(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x530(0x08)
	struct UREDTextBlock* Text_config_list_2; // 0x538(0x08)
	struct UWB_ui_Config_Parts_1_C* WB_ui_Config_Parts_1_2; // 0x540(0x08)
	struct UWB_ui_Config_Parts_1_C* WB_ui_Config_Parts_1_3; // 0x548(0x08)
	struct UPaperFlipbook* defaultPF; // 0x550(0x08)
	struct UPaperFlipbook* selectPF; // 0x558(0x08)
	struct UPaperFlipbook* selectInPF; // 0x560(0x08)
	struct UPaperFlipbook* selectOutPF; // 0x568(0x08)
	struct UPaperFlipbook* decisionPF; // 0x570(0x08)

	void Construct(); // Function WB_ui_ConfigList_Parts_3.WB_ui_ConfigList_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ConfigList_Parts_3.WB_ui_ConfigList_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ConfigList_Parts_3(int32_t EntryPoint); // Function WB_ui_ConfigList_Parts_3.WB_ui_ConfigList_Parts_2_C.ExecuteUbergraph_WB_ui_ConfigList_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

