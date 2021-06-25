// WidgetBlueprintGeneratedClass WB_ui_Quest.WB_ui_Quest_C
// Size: 0x12b8 (Inherited: 0x11e0)
struct UWB_ui_Quest_C : UUIQuestMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11e0(0x08)
	struct UWidgetAnimation* info_window_out; // 0x11e8(0x08)
	struct UWidgetAnimation* info_window_in; // 0x11f0(0x08)
	struct UWidgetAnimation* info_window; // 0x11f8(0x08)
	struct UWidgetAnimation* Out; // 0x1200(0x08)
	struct UWidgetAnimation* In; // 0x1208(0x08)
	struct UWidgetAnimation* Default; // 0x1210(0x08)
	struct UCanvasPanel* CanvasPanel_2; // 0x1218(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x1220(0x08)
	struct UOverlay* List_Set; // 0x1228(0x08)
	struct UOverlay* Overlay_3; // 0x1230(0x08)
	struct UBorder* PG_All_Color; // 0x1238(0x08)
	struct UImage* PG_Cover_Black; // 0x1240(0x08)
	struct UBorder* Quest_List_Color; // 0x1248(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x1250(0x08)
	struct UREDScrollBox* ScrollBox_ShopList; // 0x1258(0x08)
	struct UWB_ui_MainChoice_Parts_1_C* WB_ui_MainChoice_Parts_2; // 0x1260(0x08)
	struct UWB_ui_MainContents_Parts_4_C* WB_ui_MainContents_Parts_5; // 0x1268(0x08)
	struct UWB_ui_MainContents_Parts_5_C* WB_ui_MainContents_Parts_6; // 0x1270(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_2; // 0x1278(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_3; // 0x1280(0x08)
	struct UWB_ui_MainContents_Parts_6_C* WB_ui_MainContents_Parts_6_4; // 0x1288(0x08)
	struct UWB_ui_Quest_Bond_Parts_1_C* WB_ui_Quest_Bond_Parts_2; // 0x1290(0x08)
	struct UWB_ui_Quest_Main_Parts_1_C* WB_ui_Quest_Main_Parts_2; // 0x1298(0x08)
	struct UWB_ui_Quest_Parts_1_C* WB_ui_Quest_Parts_1_2; // 0x12a0(0x08)
	struct UWB_ui_Quest_PopUp_1_C* WB_ui_Quest_PopUp_2; // 0x12a8(0x08)
	struct UWB_ui_Quest_Sub_Parts_1_C* WB_ui_Quest_Sub_Parts_2; // 0x12b0(0x08)

	bool isEndErrorPopup(); // Function WB_ui_Quest.WB_ui_Quest_C.isEndErrorPopup // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Quest.WB_ui_Quest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Quest.WB_ui_Quest_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Quest.WB_ui_Quest_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Quest.WB_ui_Quest_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Quest.WB_ui_Quest_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Quest.WB_ui_Quest_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Quest.WB_ui_Quest_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Quest.WB_ui_Quest_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Quest(int32_t EntryPoint); // Function WB_ui_Quest.WB_ui_Quest_C.ExecuteUbergraph_WB_ui_Quest // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

