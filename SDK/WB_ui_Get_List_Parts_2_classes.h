// WidgetBlueprintGeneratedClass WB_ui_Get_List_Parts_2.WB_ui_Get_List_Parts_1_C
// Size: 0x428 (Inherited: 0x3d8)
struct UWB_ui_Get_List_Parts_1_C : UUIShopGetListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d8(0x08)
	struct UWidgetAnimation* select_lock; // 0x3e0(0x08)
	struct UWidgetAnimation* select_lock_in; // 0x3e8(0x08)
	struct UWidgetAnimation* default_lock; // 0x3f0(0x08)
	struct UWidgetAnimation* select; // 0x3f8(0x08)
	struct UWidgetAnimation* select_in; // 0x400(0x08)
	struct UWidgetAnimation* Default; // 0x408(0x08)
	struct UImage* icon_new; // 0x410(0x08)
	struct UImage* icon_quest; // 0x418(0x08)
	struct UREDTextBlock* Text_get_list_2; // 0x420(0x08)

	void Construct(); // Function WB_ui_Get_List_Parts_2.WB_ui_Get_List_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Get_List_Parts_2.WB_ui_Get_List_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetProgressIcon(int32_t Progress); // Function WB_ui_Get_List_Parts_2.WB_ui_Get_List_Parts_1_C.SetProgressIcon // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Get_List_Parts_2(int32_t EntryPoint); // Function WB_ui_Get_List_Parts_2.WB_ui_Get_List_Parts_1_C.ExecuteUbergraph_WB_ui_Get_List_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

