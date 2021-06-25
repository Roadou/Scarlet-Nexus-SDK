// WidgetBlueprintGeneratedClass WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C
// Size: 0x520 (Inherited: 0x450)
struct UWB_ui_Item_List_Parts_1_C : UUIItemListIndex {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* change_r; // 0x458(0x08)
	struct UWidgetAnimation* change_l; // 0x460(0x08)
	struct UWidgetAnimation* select_in_r; // 0x468(0x08)
	struct UWidgetAnimation* select_R; // 0x470(0x08)
	struct UWidgetAnimation* select_in_l; // 0x478(0x08)
	struct UWidgetAnimation* select_L; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UREDImage* Base_L; // 0x490(0x08)
	struct UREDImage* Base_R; // 0x498(0x08)
	struct UBorder* Color_item_list_L_num; // 0x4a0(0x08)
	struct UBorder* Color_item_list_R_num; // 0x4a8(0x08)
	struct UImage* Frame_L; // 0x4b0(0x08)
	struct UImage* Frame_R; // 0x4b8(0x08)
	struct UImage* icon_category_L; // 0x4c0(0x08)
	struct UImage* icon_category_R; // 0x4c8(0x08)
	struct UImage* icon_new_L; // 0x4d0(0x08)
	struct UImage* icon_new_R; // 0x4d8(0x08)
	struct UImage* item_icon_frame_L; // 0x4e0(0x08)
	struct UImage* item_icon_frame_R; // 0x4e8(0x08)
	struct UREDOverlay* List_L_set; // 0x4f0(0x08)
	struct UREDOverlay* List_R_set; // 0x4f8(0x08)
	struct UREDTextBlock* Text_item_list_L; // 0x500(0x08)
	struct UREDTextBlock* Text_item_list_L_num; // 0x508(0x08)
	struct UREDTextBlock* Text_item_list_R; // 0x510(0x08)
	struct UREDTextBlock* Text_item_list_R_num; // 0x518(0x08)

	bool SetItemInfoR(struct FName ItemId, int32_t ItemIndex); // Function WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C.SetItemInfoR // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetItemInfoL(struct FName ItemId, int32_t ItemIndex); // Function WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C.SetItemInfoL // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Item_List_Parts_2(int32_t EntryPoint); // Function WB_ui_Item_List_Parts_2.WB_ui_Item_List_Parts_1_C.ExecuteUbergraph_WB_ui_Item_List_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

