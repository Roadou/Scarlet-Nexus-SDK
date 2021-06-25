// WidgetBlueprintGeneratedClass WB_ui_Enemy_List_Parts_2.WB_ui_Enemy_List_Parts_1_C
// Size: 0x3f8 (Inherited: 0x3c8)
struct UWB_ui_Enemy_List_Parts_1_C : UUIEnemyListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct UWidgetAnimation* select_in; // 0x3d0(0x08)
	struct UWidgetAnimation* select; // 0x3d8(0x08)
	struct UWidgetAnimation* Default; // 0x3e0(0x08)
	struct UImage* icon_new; // 0x3e8(0x08)
	struct UREDTextBlock* Text_enemy_name_3; // 0x3f0(0x08)

	void Construct(); // Function WB_ui_Enemy_List_Parts_2.WB_ui_Enemy_List_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Enemy_List_Parts_2.WB_ui_Enemy_List_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Enemy_List_Parts_2(int32_t EntryPoint); // Function WB_ui_Enemy_List_Parts_2.WB_ui_Enemy_List_Parts_1_C.ExecuteUbergraph_WB_ui_Enemy_List_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

