// WidgetBlueprintGeneratedClass WB_ui_Trade_List_Parts_3.WB_ui_Trade_List_Parts_2_C
// Size: 0x470 (Inherited: 0x3f8)
struct UWB_ui_Trade_List_Parts_2_C : UUIItemTradeMaterialListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UWidgetAnimation* select_in_max; // 0x400(0x08)
	struct UWidgetAnimation* select_max; // 0x408(0x08)
	struct UWidgetAnimation* default_max; // 0x410(0x08)
	struct UWidgetAnimation* select_in_3; // 0x418(0x08)
	struct UWidgetAnimation* select_3; // 0x420(0x08)
	struct UWidgetAnimation* Default_3; // 0x428(0x08)
	struct UWidgetAnimation* select_in; // 0x430(0x08)
	struct UWidgetAnimation* select; // 0x438(0x08)
	struct UWidgetAnimation* Default; // 0x440(0x08)
	struct UImage* icon_category; // 0x448(0x08)
	struct UImage* item_icon_frame_3; // 0x450(0x08)
	struct UREDTextBlock* Text_trade_list_3; // 0x458(0x08)
	struct UREDTextBlock* Text_trade_list_2_num; // 0x460(0x08)
	struct UREDTextBlock* Text_trade_list_3_num; // 0x468(0x08)

	void UpdateTradeFontOutline2Material(); // Function WB_ui_Trade_List_Parts_3.WB_ui_Trade_List_Parts_2_C.UpdateTradeFontOutline2Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetItemInfo(struct FName ItemId, int32_t needNum, bool isLackMaterial); // Function WB_ui_Trade_List_Parts_3.WB_ui_Trade_List_Parts_2_C.SetItemInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Trade_List_Parts_3.WB_ui_Trade_List_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Trade_List_Parts_3.WB_ui_Trade_List_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Trade_List_Parts_3(int32_t EntryPoint); // Function WB_ui_Trade_List_Parts_3.WB_ui_Trade_List_Parts_2_C.ExecuteUbergraph_WB_ui_Trade_List_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

