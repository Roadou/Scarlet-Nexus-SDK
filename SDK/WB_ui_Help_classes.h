// WidgetBlueprintGeneratedClass WB_ui_Help.WB_ui_Help_C
// Size: 0x508 (Inherited: 0x498)
struct UWB_ui_Help_C : UUIHelpMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* Out; // 0x4a0(0x08)
	struct UWidgetAnimation* In; // 0x4a8(0x08)
	struct UWidgetAnimation* defaultNone; // 0x4b0(0x08)
	struct UWidgetAnimation* Default; // 0x4b8(0x08)
	struct UOverlay* All_Set; // 0x4c0(0x08)
	struct UImage* Base_Info; // 0x4c8(0x08)
	struct UImage* Base_Info_Frame; // 0x4d0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x4d8(0x08)
	struct UREDScrollBox* RedScrollBox_HelpList; // 0x4e0(0x08)
	struct UWB_ui_Help_Arrow_C* WB_ui_Help_Arrow_2; // 0x4e8(0x08)
	struct UWB_ui_Help_Arrow_C* WB_ui_Help_Arrow_3; // 0x4f0(0x08)
	struct UWB_ui_Help_List_Parts_1_C* WB_ui_Help_List_Parts_2; // 0x4f8(0x08)
	struct UWB_ui_TutoTips_Parts_1_C* WB_ui_TutoTips_Parts_2; // 0x500(0x08)

	void Construct(); // Function WB_ui_Help.WB_ui_Help_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Help.WB_ui_Help_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_Help.WB_ui_Help_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Help.WB_ui_Help_C.ListUpdateElement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Help.WB_ui_Help_C.ListFocus // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Help.WB_ui_Help_C.ListUnFocus // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Help.WB_ui_Help_C.ListFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Help.WB_ui_Help_C.ListUnFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Help.WB_ui_Help_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Help.WB_ui_Help_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Help(int32_t EntryPoint); // Function WB_ui_Help.WB_ui_Help_C.ExecuteUbergraph_WB_ui_Help // (Final|UbergraphFunction) // @ game+0x1685580
};

