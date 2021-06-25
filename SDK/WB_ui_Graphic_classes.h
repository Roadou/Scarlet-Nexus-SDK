// WidgetBlueprintGeneratedClass WB_ui_Graphic.WB_ui_Graphic_C
// Size: 0x480 (Inherited: 0x418)
struct UWB_ui_Graphic_C : UUIConfigGraphics {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWidgetAnimation* Default; // 0x420(0x08)
	struct UBorder* All_Color; // 0x428(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x430(0x08)
	struct UREDScrollBoxSimple* REDScrollBoxSimple_1; // 0x438(0x08)
	struct UWB_ui_ConfigList_Parts_1_C* WB_ui_ConfigList_Parts_1_2; // 0x440(0x08)
	struct UWB_ui_ConfigList_Parts_1_C* WB_ui_ConfigList_Parts_1_3; // 0x448(0x08)
	struct UWB_ui_ConfigList_Parts_1_C* WB_ui_ConfigList_Parts_1_4; // 0x450(0x08)
	struct UWB_ui_ConfigList_Parts_1_C* WB_ui_ConfigList_Parts_1_5; // 0x458(0x08)
	struct UWB_ui_ConfigList_Parts_1_C* WB_ui_ConfigList_Parts_1_6; // 0x460(0x08)
	struct UWB_ui_ConfigList_Parts_1_C* WB_ui_ConfigList_Parts_1_7; // 0x468(0x08)
	struct UWB_ui_ConfigList_Parts_2_C* WB_ui_ConfigList_Parts_2_2; // 0x470(0x08)
	struct UWB_ui_ConfigList_Parts_3_C* WB_ui_ConfigList_Parts_3_2; // 0x478(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Graphic.WB_ui_Graphic_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Graphic.WB_ui_Graphic_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Graphic.WB_ui_Graphic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Graphic(int32_t EntryPoint); // Function WB_ui_Graphic.WB_ui_Graphic_C.ExecuteUbergraph_WB_ui_Graphic // (Final|UbergraphFunction) // @ game+0x1685580
};

