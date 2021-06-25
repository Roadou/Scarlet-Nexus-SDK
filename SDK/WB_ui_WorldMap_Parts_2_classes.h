// WidgetBlueprintGeneratedClass WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C
// Size: 0x4a2 (Inherited: 0x388)
struct UWB_ui_WorldMap_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* cancel_2_here; // 0x390(0x08)
	struct UWidgetAnimation* decision_2_here; // 0x398(0x08)
	struct UWidgetAnimation* select_2_here; // 0x3a0(0x08)
	struct UWidgetAnimation* decision_here; // 0x3a8(0x08)
	struct UWidgetAnimation* unselect_select_in_here; // 0x3b0(0x08)
	struct UWidgetAnimation* unselect_select_here; // 0x3b8(0x08)
	struct UWidgetAnimation* unselect_here; // 0x3c0(0x08)
	struct UWidgetAnimation* select_in_here; // 0x3c8(0x08)
	struct UWidgetAnimation* select_here; // 0x3d0(0x08)
	struct UWidgetAnimation* default_here; // 0x3d8(0x08)
	struct UWidgetAnimation* Cancel_3; // 0x3e0(0x08)
	struct UWidgetAnimation* decision_3; // 0x3e8(0x08)
	struct UWidgetAnimation* select_3; // 0x3f0(0x08)
	struct UWidgetAnimation* decision; // 0x3f8(0x08)
	struct UWidgetAnimation* unselect_select_in; // 0x400(0x08)
	struct UWidgetAnimation* unselect_select; // 0x408(0x08)
	struct UWidgetAnimation* unselect; // 0x410(0x08)
	struct UWidgetAnimation* select_in; // 0x418(0x08)
	struct UWidgetAnimation* select; // 0x420(0x08)
	struct UWidgetAnimation* default_none; // 0x428(0x08)
	struct UWidgetAnimation* Default; // 0x430(0x08)
	struct UImage* Base_2; // 0x438(0x08)
	struct UImage* Base_black; // 0x440(0x08)
	struct UImage* Base_select; // 0x448(0x08)
	struct UImage* Frame_2; // 0x450(0x08)
	struct UImage* icon_kizuna_2; // 0x458(0x08)
	struct UImage* icon_main_2; // 0x460(0x08)
	struct UImage* icon_new; // 0x468(0x08)
	struct UImage* icon_sub_2; // 0x470(0x08)
	struct UImage* icon_sub_3; // 0x478(0x08)
	struct UREDTextBlock* Text_worldmap_mapname_2; // 0x480(0x08)
	bool IsEnable; // 0x488(0x01)
	bool IsEnableChange; // 0x489(0x01)
	bool IsSelect; // 0x48a(0x01)
	bool IsDecide; // 0x48b(0x01)
	bool isLock; // 0x48c(0x01)
	bool IsWait; // 0x48d(0x01)
	char pad_48E[0x2]; // 0x48e(0x02)
	struct TArray<struct FSlateColor> TextColorList; // 0x490(0x10)
	bool IsCurrent; // 0x4a0(0x01)
	bool IsChangeDirect; // 0x4a1(0x01)

	void SetSubQuestRequest(bool IsSubQuestRequest); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetSubQuestRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetKizunaQuest(bool IsKizunaQuest); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetKizunaQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopCurrentSelect(int32_t SubState); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.StateLoopCurrentSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopCurrent(int32_t SubState); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.StateLoopCurrent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentFontColor(); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetCurrentFontColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetWait(); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.ResetWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetLock(); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.ResetLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentArea(bool IsCurrent); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetCurrentArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDecideAnimation(bool IsDecide); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.IsDecideAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StateLoopSelect(int32_t SubState); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.StateLoopSelect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Decide(bool isLock, bool IsWait); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNew(bool IsNew); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetNew // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSubQuest(bool IsSubQuest); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetSubQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMainQuest(bool IsMainQuest); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetMainQuest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaText(struct FString text); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetAreaText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSelect(bool IsSelect); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnable(bool IsEnable); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.SetEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_WorldMap_Parts_2(int32_t EntryPoint); // Function WB_ui_WorldMap_Parts_2.WB_ui_WorldMap_Parts_1_C.ExecuteUbergraph_WB_ui_WorldMap_Parts_2 // (Final|UbergraphFunction) // @ game+0x1685580
};

