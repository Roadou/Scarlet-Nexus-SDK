// WidgetBlueprintGeneratedClass WB_ui_Chara_Info_Parts_2.WB_ui_Chara_Info_Parts_1_C
// Size: 0x55c (Inherited: 0x488)
struct UWB_ui_Chara_Info_Parts_1_C : UUICharaInfoWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	struct UWidgetAnimation* change_2_2; // 0x490(0x08)
	struct UWidgetAnimation* default_none; // 0x498(0x08)
	struct UWidgetAnimation* change_1_3; // 0x4a0(0x08)
	struct UWidgetAnimation* Default_3; // 0x4a8(0x08)
	struct UWidgetAnimation* Default_2; // 0x4b0(0x08)
	struct UBorder* All_Color; // 0x4b8(0x08)
	struct UImage* Base_Info; // 0x4c0(0x08)
	struct UImage* Base_Info_Frame; // 0x4c8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange_2; // 0x4d0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange_3; // 0x4d8(0x08)
	struct UOverlay* List_Set; // 0x4e0(0x08)
	struct UREDScrollBoxSimple* REDScrollBoxSimple_Details1; // 0x4e8(0x08)
	struct UREDScrollBoxSimple* REDScrollBoxSimple_Details2; // 0x4f0(0x08)
	struct UREDTextBlock* Text_books_chara_2; // 0x4f8(0x08)
	struct UREDTextBlock* Text_books_chara_info_2; // 0x500(0x08)
	struct UREDTextBlock* Text_books_chara_info_3; // 0x508(0x08)
	struct UREDTextBlock* Text_books_chara_name_2; // 0x510(0x08)
	struct UImage* Text_icon; // 0x518(0x08)
	struct UImage* Thubnail_Chara_M; // 0x520(0x08)
	struct UImage* Thubnail_Frame; // 0x528(0x08)
	struct UImage* Thubnail_Noise; // 0x530(0x08)
	struct UImage* Thubnail_Shade; // 0x538(0x08)
	struct UREDOverlay* Thumbnail_Set; // 0x540(0x08)
	struct TArray<struct Fstruct_ui_equip_item_list> itemList; // 0x548(0x10)
	int32_t CursorPos; // 0x558(0x04)

	void Construct(); // Function WB_ui_Chara_Info_Parts_2.WB_ui_Chara_Info_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Chara_Info_Parts_2.WB_ui_Chara_Info_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Chara_Info_Parts_2.WB_ui_Chara_Info_Parts_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Chara_Info_Parts_2.WB_ui_Chara_Info_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Chara_Info_Parts_2(int32_t EntryPoint); // Function WB_ui_Chara_Info_Parts_2.WB_ui_Chara_Info_Parts_1_C.ExecuteUbergraph_WB_ui_Chara_Info_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

