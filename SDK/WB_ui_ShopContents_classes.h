// WidgetBlueprintGeneratedClass WB_ui_ShopContents.WB_ui_ShopContents_C
// Size: 0x12538 (Inherited: 0x12348)
struct UWB_ui_ShopContents_C : UUIShop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x12348(0x08)
	struct UWidgetAnimation* info_window_out; // 0x12350(0x08)
	struct UWidgetAnimation* info_window_in; // 0x12358(0x08)
	struct UWidgetAnimation* info_window; // 0x12360(0x08)
	struct UWidgetAnimation* Change_3; // 0x12368(0x08)
	struct UWidgetAnimation* Change_2; // 0x12370(0x08)
	struct UWidgetAnimation* Out; // 0x12378(0x08)
	struct UWidgetAnimation* In; // 0x12380(0x08)
	struct UWidgetAnimation* Default; // 0x12388(0x08)
	struct UBorder* All_Color; // 0x12390(0x08)
	struct UOverlay* All_Set; // 0x12398(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x123a0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x123a8(0x08)
	struct UOverlay* Gold_Set; // 0x123b0(0x08)
	struct UImage* Line_2; // 0x123b8(0x08)
	struct UImage* Line_3; // 0x123c0(0x08)
	struct UImage* Line_4; // 0x123c8(0x08)
	struct UImage* Line_5; // 0x123d0(0x08)
	struct UImage* Line_6; // 0x123d8(0x08)
	struct UImage* Line_7; // 0x123e0(0x08)
	struct UOverlay* List_Set; // 0x123e8(0x08)
	struct UOverlay* Overlay_1; // 0x123f0(0x08)
	struct UOverlay* Overlay_2; // 0x123f8(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x12400(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu_3; // 0x12408(0x08)
	struct UREDScrollBox* ScrollBoxShopList; // 0x12410(0x08)
	struct UBorder* Shop_Gold_Set; // 0x12418(0x08)
	struct UBorder* Shop_List_Color; // 0x12420(0x08)
	struct UREDTextBlock* Text_shop_contents_2; // 0x12428(0x08)
	struct UREDTextBlock* Text_shop_contents_3; // 0x12430(0x08)
	struct UREDTextBlock* Text_shop_contents_4; // 0x12438(0x08)
	struct UREDTextBlock* Text_shop_contents_5; // 0x12440(0x08)
	struct UREDTextBlock* Text_shop_contents_6; // 0x12448(0x08)
	struct UREDTextBlock* Text_shop_help_2; // 0x12450(0x08)
	struct UWB_ui_Get_C* WB_ui_Get; // 0x12458(0x08)
	struct UWB_ui_Gold_Parts_1_C* WB_ui_Gold_Parts_2; // 0x12460(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x12468(0x08)
	struct UWB_ui_Shop_EStatus_Parts_1_C* WB_ui_Shop_EStatus_Parts_2; // 0x12470(0x08)
	struct UWB_ui_ShopChoice_Parts_1_C* WB_ui_ShopChoice_Parts_2; // 0x12478(0x08)
	struct UWB_ui_ShopContents_Parts_2_C* WB_ui_ShopContents_Parts_3; // 0x12480(0x08)
	struct UWB_ui_ShopContents_Parts_3_C* WB_ui_ShopContents_Parts_4; // 0x12488(0x08)
	struct UWB_ui_ShopContents_Parts_4_C* WB_ui_ShopContents_Parts_5; // 0x12490(0x08)
	struct UWB_ui_ShopContents_Parts_5_C* WB_ui_ShopContents_Parts_6; // 0x12498(0x08)
	struct UWB_ui_ShopContents_Parts_1_C* WB_ui_ShopContents_Parts_1_2; // 0x124a0(0x08)
	struct UWB_ui_ShopContents_Parts_1_C* WB_ui_ShopContents_Parts_1_3; // 0x124a8(0x08)
	struct UWB_ui_ShopContents_Parts_1_C* WB_ui_ShopContents_Parts_1_4; // 0x124b0(0x08)
	struct UWB_ui_ShopContents_Parts_1_C* WB_ui_ShopContents_Parts_1_5; // 0x124b8(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_2; // 0x124c0(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_3; // 0x124c8(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_4; // 0x124d0(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_5; // 0x124d8(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_6; // 0x124e0(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_7; // 0x124e8(0x08)
	struct UWB_ui_ShopContents_Parts_6_C* WB_ui_ShopContents_Parts_6_8; // 0x124f0(0x08)
	struct UWB_ui_ShopIteminfo_Parts_1_C* WB_ui_ShopIteminfo_Parts_2; // 0x124f8(0x08)
	struct UWB_ui_Trade_C* WB_ui_Trade; // 0x12500(0x08)
	struct TArray<struct UWB_ui_ShopContents_Parts_1_C*> ChildModeTab; // 0x12508(0x10)
	struct TArray<struct UWB_ui_ShopContents_Parts_6_C*> ChildItemCategory; // 0x12518(0x10)
	struct TArray<struct UImage*> imageSeparator; // 0x12528(0x10)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ShopContents(int32_t EntryPoint); // Function WB_ui_ShopContents.WB_ui_ShopContents_C.ExecuteUbergraph_WB_ui_ShopContents // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

