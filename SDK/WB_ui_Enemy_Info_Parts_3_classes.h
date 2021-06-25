// WidgetBlueprintGeneratedClass WB_ui_Enemy_Info_Parts_3.WB_ui_Enemy_Info_Parts_2_C
// Size: 0x3c0 (Inherited: 0x398)
struct UWB_ui_Enemy_Info_Parts_2_C : UUIEnemyDropItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* Default; // 0x3a0(0x08)
	struct UImage* Frame_Icon; // 0x3a8(0x08)
	struct UImage* Icon; // 0x3b0(0x08)
	struct UREDTextBlock* Text_enemy_item_3; // 0x3b8(0x08)

	void Construct(); // Function WB_ui_Enemy_Info_Parts_3.WB_ui_Enemy_Info_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Enemy_Info_Parts_3.WB_ui_Enemy_Info_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetInfoBP(int32_t itemIconId, enum class EItemRarity itemRariy); // Function WB_ui_Enemy_Info_Parts_3.WB_ui_Enemy_Info_Parts_2_C.SetInfoBP // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Enemy_Info_Parts_3(int32_t EntryPoint); // Function WB_ui_Enemy_Info_Parts_3.WB_ui_Enemy_Info_Parts_2_C.ExecuteUbergraph_WB_ui_Enemy_Info_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

