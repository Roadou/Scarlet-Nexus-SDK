// WidgetBlueprintGeneratedClass WB_ui_ShopList_Parts_2.WB_ui_ShopList_Parts_1_C
// Size: 0x528 (Inherited: 0x470)
struct UWB_ui_ShopList_Parts_1_C : UUIShopListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UWidgetAnimation* select_in; // 0x478(0x08)
	struct UWidgetAnimation* select; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UImage* Base_black; // 0x490(0x08)
	struct UImage* Base_select; // 0x498(0x08)
	struct UImage* Frame_2; // 0x4a0(0x08)
	struct UREDOverlay* Frame_Set; // 0x4a8(0x08)
	struct UImage* ghost_frame; // 0x4b0(0x08)
	struct UImage* icon_category; // 0x4b8(0x08)
	struct UImage* icon_new; // 0x4c0(0x08)
	struct UImage* item_icon_frame_3; // 0x4c8(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_L; // 0x4d0(0x08)
	struct UREDHorizonFlipbookWidget* PF_Arrow_R; // 0x4d8(0x08)
	struct UREDTextBlock* Text_shop_list_2; // 0x4e0(0x08)
	struct UREDTextBlock* Text_shop_list_1_num; // 0x4e8(0x08)
	struct UREDTextBlock* Text_shop_list_2_num; // 0x4f0(0x08)
	struct UREDTextBlock* Text_shop_list_3_num; // 0x4f8(0x08)
	struct UPaperFlipbook* defaultPF; // 0x500(0x08)
	struct UPaperFlipbook* selectPF; // 0x508(0x08)
	struct UPaperFlipbook* selectInPF; // 0x510(0x08)
	struct UPaperFlipbook* selectOutPF; // 0x518(0x08)
	struct UPaperFlipbook* decisionPF; // 0x520(0x08)

	bool SetItemInfo(struct FName ItemId, int32_t ItemIndex); // Function WB_ui_ShopList_Parts_2.WB_ui_ShopList_Parts_1_C.SetItemInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ShopList_Parts_2.WB_ui_ShopList_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_ShopList_Parts_2.WB_ui_ShopList_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_ShopList_Parts_2.WB_ui_ShopList_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ShopList_Parts_2(int32_t EntryPoint); // Function WB_ui_ShopList_Parts_2.WB_ui_ShopList_Parts_1_C.ExecuteUbergraph_WB_ui_ShopList_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

