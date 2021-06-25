// WidgetBlueprintGeneratedClass WB_ui_Item_EStatus_Parts_3.WB_ui_Item_EStatus_Parts_2_C
// Size: 0x448 (Inherited: 0x3e0)
struct UWB_ui_Item_EStatus_Parts_2_C : UUIItemPartyStatusIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* unselect_max; // 0x3e8(0x08)
	struct UWidgetAnimation* default_max; // 0x3f0(0x08)
	struct UWidgetAnimation* unselect; // 0x3f8(0x08)
	struct UWidgetAnimation* Default; // 0x400(0x08)
	struct UHorizonFlipbookWidget* arrow_2; // 0x408(0x08)
	struct UHorizonFlipbookWidget* arrow_3; // 0x410(0x08)
	struct UOverlay* Bond_Set; // 0x418(0x08)
	struct UImage* Face_a_4; // 0x420(0x08)
	struct UImage* Frame_Bond; // 0x428(0x08)
	struct UImage* Icon_done; // 0x430(0x08)
	struct UImage* Icon_E; // 0x438(0x08)
	struct UREDTextBlock* Text_Item_info_bond_1num; // 0x440(0x08)

	void Construct(); // Function WB_ui_Item_EStatus_Parts_3.WB_ui_Item_EStatus_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetFaceIcon(enum class EPlayerID characterId); // Function WB_ui_Item_EStatus_Parts_3.WB_ui_Item_EStatus_Parts_2_C.SetFaceIcon // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipOrLoveIcon(enum class EEquipOrLoveIcon Type); // Function WB_ui_Item_EStatus_Parts_3.WB_ui_Item_EStatus_Parts_2_C.SetEquipOrLoveIcon // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Item_EStatus_Parts_3(int32_t EntryPoint); // Function WB_ui_Item_EStatus_Parts_3.WB_ui_Item_EStatus_Parts_2_C.ExecuteUbergraph_WB_ui_Item_EStatus_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

