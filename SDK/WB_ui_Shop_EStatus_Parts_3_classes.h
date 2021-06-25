// WidgetBlueprintGeneratedClass WB_ui_Shop_EStatus_Parts_3.WB_ui_Shop_EStatus_Parts_2_C
// Size: 0x550 (Inherited: 0x4a0)
struct UWB_ui_Shop_EStatus_Parts_2_C : UUIShopPartyStatusIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct UWidgetAnimation* unselect_max; // 0x4a8(0x08)
	struct UWidgetAnimation* default_max; // 0x4b0(0x08)
	struct UWidgetAnimation* unselect; // 0x4b8(0x08)
	struct UWidgetAnimation* default_none; // 0x4c0(0x08)
	struct UWidgetAnimation* Default; // 0x4c8(0x08)
	struct UHorizonFlipbookWidget* Arrow_1_L; // 0x4d0(0x08)
	struct UHorizonFlipbookWidget* Arrow_1_R; // 0x4d8(0x08)
	struct UHorizonFlipbookWidget* Arrow_2_L; // 0x4e0(0x08)
	struct UHorizonFlipbookWidget* Arrow_2_R; // 0x4e8(0x08)
	struct UOverlay* Bond_Set; // 0x4f0(0x08)
	struct UOverlay* EStatus_L; // 0x4f8(0x08)
	struct UOverlay* EStatus_R; // 0x500(0x08)
	struct UImage* Face_a2; // 0x508(0x08)
	struct UImage* Frame; // 0x510(0x08)
	struct UImage* Icon_done; // 0x518(0x08)
	struct UImage* Icon_E; // 0x520(0x08)
	struct UImage* Icon_Parameter_L; // 0x528(0x08)
	struct UImage* Icon_Parameter_R; // 0x530(0x08)
	struct UREDTextBlock* Text_Shop_info_bond_1num; // 0x538(0x08)
	struct UREDTextBlock* Text_shop_param_num_2; // 0x540(0x08)
	struct UREDTextBlock* Text_shop_param_num_3; // 0x548(0x08)

	void SetFaceIcon(enum class EPlayerID characterId); // Function WB_ui_Shop_EStatus_Parts_3.WB_ui_Shop_EStatus_Parts_2_C.SetFaceIcon // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetParameterIcon(int32_t Index, int32_t Icon); // Function WB_ui_Shop_EStatus_Parts_3.WB_ui_Shop_EStatus_Parts_2_C.SetParameterIcon // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipOrLoveIcon(enum class EEquipOrLoveIcon Type); // Function WB_ui_Shop_EStatus_Parts_3.WB_ui_Shop_EStatus_Parts_2_C.SetEquipOrLoveIcon // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Shop_EStatus_Parts_3.WB_ui_Shop_EStatus_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Shop_EStatus_Parts_3(int32_t EntryPoint); // Function WB_ui_Shop_EStatus_Parts_3.WB_ui_Shop_EStatus_Parts_2_C.ExecuteUbergraph_WB_ui_Shop_EStatus_Parts_3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

