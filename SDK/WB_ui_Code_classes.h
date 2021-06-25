// WidgetBlueprintGeneratedClass WB_ui_Code.WB_ui_Code_C
// Size: 0x488 (Inherited: 0x400)
struct UWB_ui_Code_C : UUICode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UWidgetAnimation* Out; // 0x408(0x08)
	struct UWidgetAnimation* Default; // 0x410(0x08)
	struct UWidgetAnimation* In; // 0x418(0x08)
	struct UBorder* All_Color; // 0x420(0x08)
	struct UOverlay* All_Set; // 0x428(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x430(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x438(0x08)
	struct UBorder* CodeList_Color; // 0x440(0x08)
	struct UREDImageBase* icon_font_2; // 0x448(0x08)
	struct UOverlay* List_Set; // 0x450(0x08)
	struct UOverlay* Overlay_3; // 0x458(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu_3; // 0x460(0x08)
	struct UREDScrollBox* ScrollBox_CodeList; // 0x468(0x08)
	struct UREDTextBlock* Text_code_contents_2; // 0x470(0x08)
	struct UREDTextBlock* Text_Code_Guide_2; // 0x478(0x08)
	struct UWB_ui_Code_List_Parts_1_C* WB_ui_Code_List_Parts_2; // 0x480(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Code.WB_ui_Code_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Code.WB_ui_Code_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Code.WB_ui_Code_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Code.WB_ui_Code_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Code.WB_ui_Code_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Code.WB_ui_Code_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Code.WB_ui_Code_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Code.WB_ui_Code_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Code(int32_t EntryPoint); // Function WB_ui_Code.WB_ui_Code_C.ExecuteUbergraph_WB_ui_Code // (Final|UbergraphFunction) // @ game+0x1685580
};

