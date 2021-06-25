// WidgetBlueprintGeneratedClass WB_ui_ConfigList_Parts_6.WB_ui_ConfigList_Parts_5_C
// Size: 0x688 (Inherited: 0x5e8)
struct UWB_ui_ConfigList_Parts_5_C : UUIConfigSelect5 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct UWidgetAnimation* select_out; // 0x5f0(0x08)
	struct UWidgetAnimation* select_in; // 0x5f8(0x08)
	struct UWidgetAnimation* select; // 0x600(0x08)
	struct UWidgetAnimation* Default; // 0x608(0x08)
	struct UImage* Base_2; // 0x610(0x08)
	struct UImage* Frame_2; // 0x618(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x620(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x628(0x08)
	struct UREDTextBlock* Text_config_list_2; // 0x630(0x08)
	struct UWB_ui_Config_Parts_2_C* WB_ui_Config_Parts_2_2; // 0x638(0x08)
	struct UWB_ui_Config_Parts_2_C* WB_ui_Config_Parts_2_3; // 0x640(0x08)
	struct UWB_ui_Config_Parts_2_C* WB_ui_Config_Parts_2_4; // 0x648(0x08)
	struct UWB_ui_Config_Parts_2_C* WB_ui_Config_Parts_2_5; // 0x650(0x08)
	struct UWB_ui_Config_Parts_2_C* WB_ui_Config_Parts_2_6; // 0x658(0x08)
	struct UPaperFlipbook* defaultPF; // 0x660(0x08)
	struct UPaperFlipbook* selectPF; // 0x668(0x08)
	struct UPaperFlipbook* selectInPF; // 0x670(0x08)
	struct UPaperFlipbook* SelectOufPF; // 0x678(0x08)
	struct UPaperFlipbook* decisionPF; // 0x680(0x08)

	void Construct(); // Function WB_ui_ConfigList_Parts_6.WB_ui_ConfigList_Parts_5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ConfigList_Parts_6.WB_ui_ConfigList_Parts_5_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ConfigList_Parts_6(int32_t EntryPoint); // Function WB_ui_ConfigList_Parts_6.WB_ui_ConfigList_Parts_5_C.ExecuteUbergraph_WB_ui_ConfigList_Parts_6 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

