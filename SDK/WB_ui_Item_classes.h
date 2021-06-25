// WidgetBlueprintGeneratedClass WB_ui_Item.WB_ui_Item_C
// Size: 0x10280 (Inherited: 0x10188)
struct UWB_ui_Item_C : UUIItemMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10188(0x08)
	struct UWidgetAnimation* Out; // 0x10190(0x08)
	struct UWidgetAnimation* In; // 0x10198(0x08)
	struct UWidgetAnimation* Default; // 0x101a0(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x101a8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x101b0(0x08)
	struct UImage* Line_2; // 0x101b8(0x08)
	struct UImage* Line_3; // 0x101c0(0x08)
	struct UImage* Line_4; // 0x101c8(0x08)
	struct UImage* Line_5; // 0x101d0(0x08)
	struct UImage* Line_6; // 0x101d8(0x08)
	struct UImage* Line_7; // 0x101e0(0x08)
	struct UImage* Line_8; // 0x101e8(0x08)
	struct UOverlay* Overlay_3; // 0x101f0(0x08)
	struct UBorder* PG_All_Color; // 0x101f8(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x10200(0x08)
	struct UREDScrollBox* RedScrollBox_C_1; // 0x10208(0x08)
	struct UWB_ui_Item_EStatus_Parts_1_C* WB_ui_Item_EStatus_Parts_2; // 0x10210(0x08)
	struct UWB_ui_Item_Info_Parts_1_C* WB_ui_Item_Info_Parts_2; // 0x10218(0x08)
	struct UWB_ui_MainContents_Parts_4_C* WB_ui_MainContents_Parts_5; // 0x10220(0x08)
	struct UWB_ui_MainContents_Parts_5_C* WB_ui_MainContents_Parts_6; // 0x10228(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_2; // 0x10230(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_3; // 0x10238(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_4; // 0x10240(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_5; // 0x10248(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_6; // 0x10250(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_7; // 0x10258(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_8; // 0x10260(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_9; // 0x10268(0x08)
	struct TArray<struct UWB_ui_MainContents_Parts_6_C*> ChildItemCategory; // 0x10270(0x10)

	void Construct(); // Function WB_ui_Item.WB_ui_Item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Item.WB_ui_Item_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Item.WB_ui_Item_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Item.WB_ui_Item_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Item.WB_ui_Item_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Item.WB_ui_Item_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Item(int32_t EntryPoint); // Function WB_ui_Item.WB_ui_Item_C.ExecuteUbergraph_WB_ui_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

