// WidgetBlueprintGeneratedClass WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C
// Size: 0x430 (Inherited: 0x3d0)
struct UWB_ui_Get_List_Parts_2_C : UUIShopGetSubListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UWidgetAnimation* default_max; // 0x3d8(0x08)
	struct UWidgetAnimation* Default; // 0x3e0(0x08)
	struct UImage* icon_category_3; // 0x3e8(0x08)
	struct UREDImageBase* icon_mark; // 0x3f0(0x08)
	struct UImage* item_icon_frame; // 0x3f8(0x08)
	struct UOverlay* Owned_num_set; // 0x400(0x08)
	struct UREDTextBlock* Text_get_list_3; // 0x408(0x08)
	struct UREDTextBlock* Text_get_num_2; // 0x410(0x08)
	struct UREDTextBlock* Text_get_num_3; // 0x418(0x08)
	struct UREDTextBlock* Text_get_num_4; // 0x420(0x08)
	struct UREDTextBlock* Text_get_slash_2; // 0x428(0x08)

	void Construct(); // Function WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetBondsIcon(); // Function WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C.SetBondsIcon // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetQuestIcon(); // Function WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C.SetQuestIcon // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetItemIcon(struct FName ItemId); // Function WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C.SetItemIcon // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Get_List_Parts_3(int32_t EntryPoint); // Function WB_ui_Get_List_Parts_3.WB_ui_Get_List_Parts_2_C.ExecuteUbergraph_WB_ui_Get_List_Parts_3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

