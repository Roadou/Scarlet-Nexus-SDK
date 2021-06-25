// WidgetBlueprintGeneratedClass WB_ui_Wish.WB_ui_Wish_C
// Size: 0x3d0 (Inherited: 0x3a0)
struct UWB_ui_Wish_C : UUIWishList {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UBorder* All_Color; // 0x3a8(0x08)
	struct UOverlay* Overlay_2; // 0x3b0(0x08)
	struct UWB_ui_Shop_EStatus_Parts_1_C* WB_ui_Shop_EStatus_Parts_2; // 0x3b8(0x08)
	struct UWB_ui_ShopIteminfo_Parts_1_C* WB_ui_ShopIteminfo_Parts_2; // 0x3c0(0x08)
	struct UWB_ui_Trade_C* WB_ui_Trade; // 0x3c8(0x08)

	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Wish.WB_ui_Wish_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Wish.WB_ui_Wish_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Wish.WB_ui_Wish_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Wish(int32_t EntryPoint); // Function WB_ui_Wish.WB_ui_Wish_C.ExecuteUbergraph_WB_ui_Wish // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

