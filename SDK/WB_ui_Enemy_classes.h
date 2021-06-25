// WidgetBlueprintGeneratedClass WB_ui_Enemy.WB_ui_Enemy_C
// Size: 0x4a8 (Inherited: 0x450)
struct UWB_ui_Enemy_C : UUIEnemyBooks {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UWidgetAnimation* defaultNone; // 0x458(0x08)
	struct UWidgetAnimation* Out; // 0x460(0x08)
	struct UWidgetAnimation* In; // 0x468(0x08)
	struct UWidgetAnimation* Default; // 0x470(0x08)
	struct UOverlay* All_Set; // 0x478(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x480(0x08)
	struct UBorder* Info_Set; // 0x488(0x08)
	struct UREDScrollBox* RedScrollBox_EnemyName; // 0x490(0x08)
	struct UWB_ui_Enemy_Info_Parts_1_C* WB_ui_Enemy_Info_Parts_2; // 0x498(0x08)
	struct UWB_ui_Enemy_List_Parts_1_C* WB_ui_Enemy_List_Parts_2; // 0x4a0(0x08)

	void Construct(); // Function WB_ui_Enemy.WB_ui_Enemy_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Enemy.WB_ui_Enemy_C.ListUpdateElement // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_Enemy.WB_ui_Enemy_C.ListFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_Enemy.WB_ui_Enemy_C.ListUnFocus // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Enemy.WB_ui_Enemy_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_Enemy.WB_ui_Enemy_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Enemy.WB_ui_Enemy_C.ListFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Enemy.WB_ui_Enemy_C.ListUnFocusMouse // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Enemy.WB_ui_Enemy_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Enemy.WB_ui_Enemy_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Enemy(int32_t EntryPoint); // Function WB_ui_Enemy.WB_ui_Enemy_C.ExecuteUbergraph_WB_ui_Enemy // (Final|UbergraphFunction) // @ game+0x1685580
};

