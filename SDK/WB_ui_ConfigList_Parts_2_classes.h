// WidgetBlueprintGeneratedClass WB_ui_ConfigList_Parts_2.WB_ui_ConfigList_Parts_1_C
// Size: 0x5e0 (Inherited: 0x550)
struct UWB_ui_ConfigList_Parts_1_C : UUIConfigSelect3 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* select_out; // 0x558(0x08)
	struct UWidgetAnimation* select_in; // 0x560(0x08)
	struct UWidgetAnimation* select; // 0x568(0x08)
	struct UWidgetAnimation* Default; // 0x570(0x08)
	struct UImage* Base_2; // 0x578(0x08)
	struct UImage* Frame_2; // 0x580(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x588(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x590(0x08)
	struct UREDTextBlock* Text_config_list_2; // 0x598(0x08)
	struct UWB_ui_Config_Parts_1_C* WB_ui_Config_Parts_1_2; // 0x5a0(0x08)
	struct UWB_ui_Config_Parts_1_C* WB_ui_Config_Parts_1_3; // 0x5a8(0x08)
	struct UWB_ui_Config_Parts_1_C* WB_ui_Config_Parts_1_4; // 0x5b0(0x08)
	struct UPaperFlipbook* defaultPF; // 0x5b8(0x08)
	struct UPaperFlipbook* selectPF; // 0x5c0(0x08)
	struct UPaperFlipbook* selectInPF; // 0x5c8(0x08)
	struct UPaperFlipbook* selectOutPF; // 0x5d0(0x08)
	struct UPaperFlipbook* decisionPF; // 0x5d8(0x08)

	void Construct(); // Function WB_ui_ConfigList_Parts_2.WB_ui_ConfigList_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ConfigList_Parts_2.WB_ui_ConfigList_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ConfigList_Parts_2(int32_t EntryPoint); // Function WB_ui_ConfigList_Parts_2.WB_ui_ConfigList_Parts_1_C.ExecuteUbergraph_WB_ui_ConfigList_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

