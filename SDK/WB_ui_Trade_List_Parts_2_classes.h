// WidgetBlueprintGeneratedClass WB_ui_Trade_List_Parts_2.WB_ui_Trade_List_Parts_1_C
// Size: 0x540 (Inherited: 0x458)
struct UWB_ui_Trade_List_Parts_1_C : UUIItemTradeListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* change_trade_Item_out_max; // 0x460(0x08)
	struct UWidgetAnimation* change_trade_Item_in_max; // 0x468(0x08)
	struct UWidgetAnimation* select_2_max; // 0x470(0x08)
	struct UWidgetAnimation* select_1_in_max; // 0x478(0x08)
	struct UWidgetAnimation* select_1_max; // 0x480(0x08)
	struct UWidgetAnimation* default_max; // 0x488(0x08)
	struct UWidgetAnimation* change_trade_Item_enough_out; // 0x490(0x08)
	struct UWidgetAnimation* change_trade_Item_enough_in; // 0x498(0x08)
	struct UWidgetAnimation* select_2_enough; // 0x4a0(0x08)
	struct UWidgetAnimation* change_trade_Item_out; // 0x4a8(0x08)
	struct UWidgetAnimation* change_trade_Item_in; // 0x4b0(0x08)
	struct UWidgetAnimation* select_3; // 0x4b8(0x08)
	struct UWidgetAnimation* select_enough_in; // 0x4c0(0x08)
	struct UWidgetAnimation* select_enough; // 0x4c8(0x08)
	struct UWidgetAnimation* default_enough; // 0x4d0(0x08)
	struct UWidgetAnimation* select_1_in; // 0x4d8(0x08)
	struct UWidgetAnimation* select_2; // 0x4e0(0x08)
	struct UWidgetAnimation* Default; // 0x4e8(0x08)
	struct UImage* Base_2; // 0x4f0(0x08)
	struct UImage* Base_select; // 0x4f8(0x08)
	struct UImage* Frame_2; // 0x500(0x08)
	struct UImage* ghost_frame; // 0x508(0x08)
	struct UImage* icon_category; // 0x510(0x08)
	struct UImage* icon_new; // 0x518(0x08)
	struct UImage* icon_wish; // 0x520(0x08)
	struct UImage* item_icon_frame_3; // 0x528(0x08)
	struct UREDTextBlock* Text_trade_list_2; // 0x530(0x08)
	struct UREDTextBlock* Text_trade_list_1_num; // 0x538(0x08)

	bool SetItemInfo(struct FName ItemId, int32_t tradeItemIndex, bool canTrade, int32_t takeNum); // Function WB_ui_Trade_List_Parts_2.WB_ui_Trade_List_Parts_1_C.SetItemInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Trade_List_Parts_2.WB_ui_Trade_List_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Trade_List_Parts_2.WB_ui_Trade_List_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Trade_List_Parts_2(int32_t EntryPoint); // Function WB_ui_Trade_List_Parts_2.WB_ui_Trade_List_Parts_1_C.ExecuteUbergraph_WB_ui_Trade_List_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

