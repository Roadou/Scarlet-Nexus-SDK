// WidgetBlueprintGeneratedClass WB_ui_ShopContents_Parts_7.WB_ui_ShopContents_Parts_6_C
// Size: 0x3d0 (Inherited: 0x388)
struct UWB_ui_ShopContents_Parts_6_C : UUIBase {
	struct UWidgetAnimation* unselect; // 0x388(0x08)
	struct UWidgetAnimation* decision; // 0x390(0x08)
	struct UWidgetAnimation* select_out; // 0x398(0x08)
	struct UWidgetAnimation* select_in; // 0x3a0(0x08)
	struct UWidgetAnimation* select; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* Base_2_select; // 0x3b8(0x08)
	struct UImage* Frame; // 0x3c0(0x08)
	struct UREDTextBlock* Text_main_category_sub_2; // 0x3c8(0x08)

	void UpdateShopFontOutlineMaterial(); // Function WB_ui_ShopContents_Parts_7.WB_ui_ShopContents_Parts_6_C.UpdateShopFontOutlineMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_ShopContents_Parts_7.WB_ui_ShopContents_Parts_6_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_ShopContents_Parts_7.WB_ui_ShopContents_Parts_6_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

