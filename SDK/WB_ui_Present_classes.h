// WidgetBlueprintGeneratedClass WB_ui_Present.WB_ui_Present_C
// Size: 0x57c (Inherited: 0x3a0)
struct UWB_ui_Present_C : UUIPresent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWidgetAnimation* default_none; // 0x3a8(0x08)
	struct UWidgetAnimation* Out; // 0x3b0(0x08)
	struct UWidgetAnimation* In; // 0x3b8(0x08)
	struct UWidgetAnimation* Default; // 0x3c0(0x08)
	struct UBorder* All_Color; // 0x3c8(0x08)
	struct UOverlay* All_Set; // 0x3d0(0x08)
	struct UImage* Base_Info; // 0x3d8(0x08)
	struct UImage* Bond_Base; // 0x3e0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x3e8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x3f0(0x08)
	struct UImage* Face_a2; // 0x3f8(0x08)
	struct UImage* Face_Noise; // 0x400(0x08)
	struct UImage* Frame; // 0x408(0x08)
	struct UImage* Frame_2; // 0x410(0x08)
	struct UImage* Frame_2_under; // 0x418(0x08)
	struct UImage* Frame_2_up; // 0x420(0x08)
	struct UImage* Frame_Item_2; // 0x428(0x08)
	struct UImage* Frame_Item_3; // 0x430(0x08)
	struct UImage* Icon_base; // 0x438(0x08)
	struct UImage* Icon_done; // 0x440(0x08)
	struct UImage* Icon_E; // 0x448(0x08)
	struct UREDImageBase* icon_font; // 0x450(0x08)
	struct UImage* icon_item; // 0x458(0x08)
	struct UImage* icon_new; // 0x460(0x08)
	struct UImage* icon_rarity; // 0x468(0x08)
	struct UImage* Image_1; // 0x470(0x08)
	struct UImage* item_icon_frame_2; // 0x478(0x08)
	struct UOverlay* Overlay_2; // 0x480(0x08)
	struct UOverlay* Overlay_3; // 0x488(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu_3; // 0x490(0x08)
	struct UREDScrollBox* ScrollBoxPresentlist; // 0x498(0x08)
	struct UBorder* Text_color_bond_1num; // 0x4a0(0x08)
	struct UBorder* Text_color_iteminfo_1_num; // 0x4a8(0x08)
	struct UREDTextBlock* Text_Present_contents_2; // 0x4b0(0x08)
	struct UREDTextBlock* Text_Present_info_bond_1num; // 0x4b8(0x08)
	struct UREDTextBlock* Text_Present_iteminfo_2; // 0x4c0(0x08)
	struct UREDTextBlock* Text_Present_iteminfo_3; // 0x4c8(0x08)
	struct UREDTextBlock* Text_Present_iteminfo_4; // 0x4d0(0x08)
	struct UREDTextBlock* Text_Present_iteminfo_1_num; // 0x4d8(0x08)
	struct UREDTextBlock* Text_Present_iteminfo_2_num; // 0x4e0(0x08)
	struct UREDTextBlock* Text_Present_iteminfo_slash_2; // 0x4e8(0x08)
	struct UREDTextBlock* Text_Present_Name_2; // 0x4f0(0x08)
	struct UImage* Thubnail_Present_BG; // 0x4f8(0x08)
	struct UImage* Thubnail_Shade; // 0x500(0x08)
	struct UImage* Thumbnail_Frame; // 0x508(0x08)
	struct UImage* Thumbnail_Noise; // 0x510(0x08)
	struct UImage* Thumbnail_Present; // 0x518(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x520(0x08)
	struct UWB_ui_Item_EStatus_Parts_1_C* WB_ui_Item_EStatus_Parts_2; // 0x528(0x08)
	int32_t CursorPos; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct TArray<bool> ItemNewFlagList; // 0x538(0x10)
	struct TArray<struct FPresentInfoData> ItemInfoList; // 0x548(0x10)
	bool isMouseDecide; // 0x558(0x01)
	char pad_559[0x3]; // 0x559(0x03)
	struct FLinearColor ColorMax; // 0x55c(0x10)
	struct FLinearColor ColorNormal; // 0x56c(0x10)

	void CheckAccessoryExtend(struct FName ItemId); // Function WB_ui_Present.WB_ui_Present_C.CheckAccessoryExtend // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupInfoWindow(); // Function WB_ui_Present.WB_ui_Present_C.SetupInfoWindow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDefaultInfo(); // Function WB_ui_Present.WB_ui_Present_C.SetDefaultInfo // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateItemInfo(); // Function WB_ui_Present.WB_ui_Present_C.UpdateItemInfo // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCursor(); // Function WB_ui_Present.WB_ui_Present_C.UpdateCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void getResult(struct FName PresentItem); // Function WB_ui_Present.WB_ui_Present_C.getResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSelect(bool SelectFlag); // Function WB_ui_Present.WB_ui_Present_C.IsSelect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CreateList(); // Function WB_ui_Present.WB_ui_Present_C.CreateList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTargetCharacter(); // Function WB_ui_Present.WB_ui_Present_C.UpdateTargetCharacter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetCharacter(enum class EPlayerID TargetID); // Function WB_ui_Present.WB_ui_Present_C.SetTargetCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Present.WB_ui_Present_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Present.WB_ui_Present_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Present.WB_ui_Present_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Present.WB_ui_Present_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Present.WB_ui_Present_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Present.WB_ui_Present_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Present.WB_ui_Present_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_List_UpdateElement(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_Present.WB_ui_Present_C.Event_List_UpdateElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_List_Focus(struct UUserWidget* pWidget); // Function WB_ui_Present.WB_ui_Present_C.Event_List_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_List_UnFocus(struct UUserWidget* pWidget); // Function WB_ui_Present.WB_ui_Present_C.Event_List_UnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_MouseFocus(int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Present.WB_ui_Present_C.Event_MouseFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_MouseUnFocus(int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Present.WB_ui_Present_C.Event_MouseUnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_MouseDown(int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Present.WB_ui_Present_C.Event_MouseDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Present.WB_ui_Present_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Present(int32_t EntryPoint); // Function WB_ui_Present.WB_ui_Present_C.ExecuteUbergraph_WB_ui_Present // (Final|UbergraphFunction) // @ game+0x1685580
};

