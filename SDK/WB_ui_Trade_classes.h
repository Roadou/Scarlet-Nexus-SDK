// WidgetBlueprintGeneratedClass WB_ui_Trade.WB_ui_Trade_C
// Size: 0xe028 (Inherited: 0xdfa8)
struct UWB_ui_Trade_C : UUIItemTrade {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdfa8(0x08)
	struct UBorder* All_Color; // 0xdfb0(0x08)
	struct UOverlay* All_Set; // 0xdfb8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0xdfc0(0x08)
	struct UImage* Line_List; // 0xdfc8(0x08)
	struct UImage* Line_Trade_Item; // 0xdfd0(0x08)
	struct UREDScrollBox* ScrollBox_TradeList; // 0xdfd8(0x08)
	struct UREDTextBlock* Text_trade_contents_3; // 0xdfe0(0x08)
	struct UREDTextBlock* Text_trade_contents_4; // 0xdfe8(0x08)
	struct UREDTextBlock* Text_trade_contents_5; // 0xdff0(0x08)
	struct UREDTextBlock* Text_trade_contents_6; // 0xdff8(0x08)
	struct UREDTextBlock* Text_trade_contents_8; // 0xe000(0x08)
	struct UWB_ui_Trade_List_Parts_1_C* WB_ui_Trade_List_Parts_2; // 0xe008(0x08)
	struct UWB_ui_Trade_List_Parts_2_C* WB_ui_Trade_List_Parts_2_2; // 0xe010(0x08)
	struct UWB_ui_Trade_List_Parts_2_C* WB_ui_Trade_List_Parts_2_3; // 0xe018(0x08)
	struct UWB_ui_Trade_List_Parts_2_C* WB_ui_Trade_List_Parts_2_4; // 0xe020(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Trade.WB_ui_Trade_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Trade.WB_ui_Trade_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Trade.WB_ui_Trade_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Trade.WB_ui_Trade_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Trade.WB_ui_Trade_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Trade.WB_ui_Trade_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Trade.WB_ui_Trade_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Trade(int32_t EntryPoint); // Function WB_ui_Trade.WB_ui_Trade_C.ExecuteUbergraph_WB_ui_Trade // (Final|UbergraphFunction) // @ game+0x1685580
};

