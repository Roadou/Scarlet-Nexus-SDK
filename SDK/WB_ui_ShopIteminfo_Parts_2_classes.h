// WidgetBlueprintGeneratedClass WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C
// Size: 0x480 (Inherited: 0x3f8)
struct UWB_ui_ShopIteminfo_Parts_1_C : UUIShopItemDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UWidgetAnimation* default_notset; // 0x400(0x08)
	struct UWidgetAnimation* default_max; // 0x408(0x08)
	struct UWidgetAnimation* Default; // 0x410(0x08)
	struct UBorder* All_Color; // 0x418(0x08)
	struct UREDImageBase* icon_font; // 0x420(0x08)
	struct UImage* icon_item; // 0x428(0x08)
	struct UImage* icon_new; // 0x430(0x08)
	struct UImage* icon_rarity; // 0x438(0x08)
	struct UImage* item_icon_frame_2; // 0x440(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_2; // 0x448(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_3; // 0x450(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_4; // 0x458(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_5; // 0x460(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_1_num; // 0x468(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_2_num; // 0x470(0x08)
	struct UREDTextBlock* Text_shop_iteminfo_slash_2; // 0x478(0x08)

	bool SetItemInfo(struct FName ItemId, int32_t ItemIndex); // Function WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C.SetItemInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ClearItemInfo(); // Function WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C.ClearItemInfo // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ShopIteminfo_Parts_2(int32_t EntryPoint); // Function WB_ui_ShopIteminfo_Parts_2.WB_ui_ShopIteminfo_Parts_1_C.ExecuteUbergraph_WB_ui_ShopIteminfo_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

