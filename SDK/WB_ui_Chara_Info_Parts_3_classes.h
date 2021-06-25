// WidgetBlueprintGeneratedClass WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C
// Size: 0x548 (Inherited: 0x478)
struct UWB_ui_Chara_Info_Parts_2_C : UUICharaPresentWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* Default; // 0x488(0x08)
	struct UOverlay* All; // 0x490(0x08)
	struct UOverlay* All_Set; // 0x498(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x4a0(0x08)
	struct UImage* Face_a2; // 0x4a8(0x08)
	struct UImage* Icon_E; // 0x4b0(0x08)
	struct UREDImageBase* icon_font; // 0x4b8(0x08)
	struct UImage* icon_item; // 0x4c0(0x08)
	struct UImage* icon_rarity; // 0x4c8(0x08)
	struct UImage* item_icon_frame_2; // 0x4d0(0x08)
	struct UREDScrollBox* RedScrollBox_PresentName; // 0x4d8(0x08)
	struct UREDTextBlock* Text_books_chara_2; // 0x4e0(0x08)
	struct UREDTextBlock* Text_books_chara_4; // 0x4e8(0x08)
	struct UREDTextBlock* Text_books_chara_1_num; // 0x4f0(0x08)
	struct UREDTextBlock* Text_books_chara_2_num; // 0x4f8(0x08)
	struct UREDTextBlock* Text_books_chara_4_num; // 0x500(0x08)
	struct UREDTextBlock* Text_books_chara_contents_2; // 0x508(0x08)
	struct UREDTextBlock* Text_books_chara_iteminfo_2; // 0x510(0x08)
	struct UREDTextBlock* Text_books_chara_iteminfo_3; // 0x518(0x08)
	struct UBorder* Text_color_chara_1_num; // 0x520(0x08)
	struct UBorder* Text_color_chara_2_num; // 0x528(0x08)
	struct UImage* Thubnail_Present; // 0x530(0x08)
	struct UWB_ui_Chara_Info_Parts_3_C* WB_ui_Chara_Info_Parts_4; // 0x538(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x540(0x08)

	bool SetItemInfo(struct FName ItemId); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.SetItemInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFaceIcon(enum class EPlayerID characterId); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.SetFaceIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFavorabilityIcon(enum class EItemFavorability favorability); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.SetFavorabilityIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Chara_Info_Parts_3(int32_t EntryPoint); // Function WB_ui_Chara_Info_Parts_3.WB_ui_Chara_Info_Parts_2_C.ExecuteUbergraph_WB_ui_Chara_Info_Parts_3 // (Final|UbergraphFunction) // @ game+0x1685580
};

