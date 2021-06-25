// WidgetBlueprintGeneratedClass WB_ui_Chara.WB_ui_Chara_C
// Size: 0x4e0 (Inherited: 0x460)
struct UWB_ui_Chara_C : UUICharaBooks {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UWidgetAnimation* present_out; // 0x468(0x08)
	struct UWidgetAnimation* present_in; // 0x470(0x08)
	struct UWidgetAnimation* Present; // 0x478(0x08)
	struct UWidgetAnimation* default_none; // 0x480(0x08)
	struct UWidgetAnimation* Out; // 0x488(0x08)
	struct UWidgetAnimation* In; // 0x490(0x08)
	struct UWidgetAnimation* Default; // 0x498(0x08)
	struct UOverlay* All_Set; // 0x4a0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x4a8(0x08)
	struct UImage* Cover_Black; // 0x4b0(0x08)
	struct UBorder* Info_Set; // 0x4b8(0x08)
	struct UREDScrollBox* RedScrollBox_CharaName; // 0x4c0(0x08)
	struct UWB_ui_Chara_Info_Parts_1_C* WB_ui_Chara_Info_Parts_2; // 0x4c8(0x08)
	struct UWB_ui_Chara_Info_Parts_2_C* WB_ui_Chara_Info_Parts_3; // 0x4d0(0x08)
	struct UWB_ui_Enemy_List_Parts_1_C* WB_ui_Enemy_List_Parts_2; // 0x4d8(0x08)

	void Construct(); // Function WB_ui_Chara.WB_ui_Chara_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Chara.WB_ui_Chara_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Chara.WB_ui_Chara_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Chara.WB_ui_Chara_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Chara.WB_ui_Chara_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Chara.WB_ui_Chara_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Chara.WB_ui_Chara_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Chara.WB_ui_Chara_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Chara.WB_ui_Chara_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Chara(int32_t EntryPoint); // Function WB_ui_Chara.WB_ui_Chara_C.ExecuteUbergraph_WB_ui_Chara // (Final|UbergraphFunction) // @ game+0x1685580
};

