// WidgetBlueprintGeneratedClass WB_ui_ShopContents_Parts_3.WB_ui_ShopContents_Parts_2_C
// Size: 0x3e0 (Inherited: 0x388)
struct UWB_ui_ShopContents_Parts_2_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* select_out; // 0x390(0x08)
	struct UWidgetAnimation* select_in; // 0x398(0x08)
	struct UWidgetAnimation* select; // 0x3a0(0x08)
	struct UWidgetAnimation* decision; // 0x3a8(0x08)
	struct UWidgetAnimation* Default; // 0x3b0(0x08)
	struct UImage* Arrow_L; // 0x3b8(0x08)
	struct UImage* Arrow_L_add; // 0x3c0(0x08)
	struct UImage* icon_font_L1; // 0x3c8(0x08)
	struct UOverlay* Set_3; // 0x3d0(0x08)
	struct UREDTextBlock* Text_shop_Button_L1; // 0x3d8(0x08)

	void PressButton(); // Function WB_ui_ShopContents_Parts_3.WB_ui_ShopContents_Parts_2_C.PressButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_ShopContents_Parts_3.WB_ui_ShopContents_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_ShopContents_Parts_3.WB_ui_ShopContents_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_ShopContents_Parts_3(int32_t EntryPoint); // Function WB_ui_ShopContents_Parts_3.WB_ui_ShopContents_Parts_2_C.ExecuteUbergraph_WB_ui_ShopContents_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

