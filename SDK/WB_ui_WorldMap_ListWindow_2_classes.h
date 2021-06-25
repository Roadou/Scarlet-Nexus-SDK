// WidgetBlueprintGeneratedClass WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C
// Size: 0x48b (Inherited: 0x388)
struct UWB_ui_WorldMap_ListWindow_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Out; // 0x390(0x08)
	struct UWidgetAnimation* In; // 0x398(0x08)
	struct UWidgetAnimation* default_none; // 0x3a0(0x08)
	struct UWidgetAnimation* Default; // 0x3a8(0x08)
	struct UBorder* All_Color; // 0x3b0(0x08)
	struct UVerticalBox* Choise_list; // 0x3b8(0x08)
	struct UOverlay* Map_ListWindow_set; // 0x3c0(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_2; // 0x3c8(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_3; // 0x3d0(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_4; // 0x3d8(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_5; // 0x3e0(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_6; // 0x3e8(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_7; // 0x3f0(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_8; // 0x3f8(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_9; // 0x400(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_10; // 0x408(0x08)
	struct UWB_ui_WorldMap_Parts_1_C* WB_ui_WorldMap_Parts_11; // 0x410(0x08)
	struct TArray<struct FWorldmapOpenAreaParam> areaList; // 0x418(0x10)
	int32_t CursorPos; // 0x428(0x04)
	bool FlagDecide; // 0x42c(0x01)
	bool FlagBattle; // 0x42d(0x01)
	char pad_42E[0x2]; // 0x42e(0x02)
	struct TArray<struct UWB_ui_WorldMap_Parts_1_C*> CellList; // 0x430(0x10)
	int32_t ListIndexBase; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct TArray<bool> IsMainQuestList; // 0x448(0x10)
	struct TArray<bool> IsSubQuestList; // 0x458(0x10)
	struct TArray<bool> IsSubQuestRequestList; // 0x468(0x10)
	struct TArray<struct FString> AreaNameList; // 0x478(0x10)
	bool FlagEnable; // 0x488(0x01)
	bool FlagAreaEnable; // 0x489(0x01)
	bool FlagKizuna; // 0x48a(0x01)

	void SetSubQuestRequestList(struct TArray<bool> list); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetSubQuestRequestList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCursorPos(int32_t AreaListIndex); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetCursorPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSubQuestList(struct TArray<bool> list); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetSubQuestList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetNewFlag(int32_t Index); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.ResetNewFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableArea(bool IsEnable); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.IsEnableArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentAreaName(struct FString AreaName); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetCurrentAreaName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsEnable(bool IsEnable); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.IsEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEnable(bool IsEnable); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaNameList(struct TArray<struct FString> list); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetAreaNameList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetListBaseIndex(int32_t Index); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetListBaseIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMainQuestList(struct TArray<bool> list); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetMainQuestList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetDecide(); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.ResetDecide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetList(); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.ResetList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentPortalName(struct FName Name); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetCurrentPortalName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentPortalID(int32_t ID); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetCurrentPortalID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentAreaID(int32_t ID); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetCurrentAreaID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentLocationID(int32_t ID); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetCurrentLocationID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsDecide(bool IsDecide); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.IsDecide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCursor(); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.UpdateCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPortalID(int32_t Index, int32_t ID); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetPortalID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAreaID(int32_t Index, int32_t ID); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetAreaID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLocationID(int32_t Index, int32_t ID); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.GetLocationID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetListElement(int32_t Index, struct UWB_ui_WorldMap_Parts_1_C* Widget); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetListElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetList(); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaList(struct TArray<struct FWorldmapOpenAreaParam> list); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.SetAreaList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  ƒžã‚¦  (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C. ƒžã‚¦   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_WorldMap_ListWindow_2(int32_t EntryPoint); // Function WB_ui_WorldMap_ListWindow_2.WB_ui_WorldMap_ListWindow_1_C.ExecuteUbergraph_WB_ui_WorldMap_ListWindow_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

