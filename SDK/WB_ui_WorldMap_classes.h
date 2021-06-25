// WidgetBlueprintGeneratedClass WB_ui_WorldMap.WB_ui_WorldMap_C
// Size: 0x5f9 (Inherited: 0x398)
struct UWB_ui_WorldMap_C : UUIWorldMap {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* Out; // 0x3a0(0x08)
	struct UWidgetAnimation* In; // 0x3a8(0x08)
	struct UWidgetAnimation* default_none; // 0x3b0(0x08)
	struct UWidgetAnimation* Default; // 0x3b8(0x08)
	struct UBorder* All_Color; // 0x3c0(0x08)
	struct UOverlay* All_Set; // 0x3c8(0x08)
	struct UImage* Base_Gradation_G; // 0x3d0(0x08)
	struct UImage* Base_Gradation_G_2; // 0x3d8(0x08)
	struct UImage* Base_Gradation_G_3; // 0x3e0(0x08)
	struct UImage* Base_Gradation_G_4; // 0x3e8(0x08)
	struct UImage* BG_Grid; // 0x3f0(0x08)
	struct UImage* BG_Shadow; // 0x3f8(0x08)
	struct UImage* BlackBand_L; // 0x400(0x08)
	struct UImage* BlackBand_R; // 0x408(0x08)
	struct UImage* BlackBand_Un; // 0x410(0x08)
	struct UImage* BlackBand_Up; // 0x418(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x420(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x428(0x08)
	struct UImage* Ghost_size; // 0x430(0x08)
	struct UImage* Goal_Line1; // 0x438(0x08)
	struct UImage* Help; // 0x440(0x08)
	struct UImage* Help_base; // 0x448(0x08)
	struct UImage* Icon; // 0x450(0x08)
	struct UImage* Icon_2; // 0x458(0x08)
	struct UImage* icon_Frame; // 0x460(0x08)
	struct UImage* icon_Frame_2; // 0x468(0x08)
	struct UImage* icon_Frame_3; // 0x470(0x08)
	struct UImage* icon_Frame_4; // 0x478(0x08)
	struct UImage* icon_frame_6_add; // 0x480(0x08)
	struct UImage* icon_frame_6_add_2; // 0x488(0x08)
	struct UOverlay* icon_kizuna; // 0x490(0x08)
	struct UOverlay* icon_main; // 0x498(0x08)
	struct UInvalidationBox* InvalidationBox_6; // 0x4a0(0x08)
	struct UOverlay* List_Set; // 0x4a8(0x08)
	struct UImage* Noise; // 0x4b0(0x08)
	struct UOverlay* Overlay_3; // 0x4b8(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x4c0(0x08)
	struct UREDScrollBox* RedScrollBox_C_1; // 0x4c8(0x08)
	struct UImage* RT_map; // 0x4d0(0x08)
	struct UREDTextBlock* Text_worldmap_goal_2; // 0x4d8(0x08)
	struct UREDTextBlock* Text_worldmap_help_2; // 0x4e0(0x08)
	struct UImage* viewer_noise; // 0x4e8(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x4f0(0x08)
	struct UWB_ui_WorldMap_ListWindow_1_C* WB_ui_WorldMap_ListWindow_2; // 0x4f8(0x08)
	struct UWB_ui_WorldMap_Window_1_C* WB_ui_WorldMap_Window_2; // 0x500(0x08)
	bool FlagDecide; // 0x508(0x01)
	bool FlagCancel; // 0x509(0x01)
	bool FlagBattle; // 0x50a(0x01)
	bool FlagKizuna; // 0x50b(0x01)
	int32_t CursorPos; // 0x50c(0x04)
	int32_t CursorPosBackup; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct ABP_ui_SceneWorldMap_C* SceneWorldMap; // 0x518(0x08)
	int32_t CurrentLocation; // 0x520(0x04)
	int32_t CurrentArea; // 0x524(0x04)
	int32_t CurrentPortal; // 0x528(0x04)
	int32_t CurrentIndex; // 0x52c(0x04)
	int32_t MessageIndex; // 0x530(0x04)
	bool DebugUnlockFlag; // 0x534(0x01)
	char pad_535[0x3]; // 0x535(0x03)
	struct TArray<struct FWorldmapOpenLCParam> AllLocationList; // 0x538(0x10)
	bool FlagChange; // 0x548(0x01)
	char pad_549[0x7]; // 0x549(0x07)
	struct TArray<struct FString> LocationNameList; // 0x550(0x10)
	struct TArray<struct FString> AreaNameList; // 0x560(0x10)
	struct TArray<bool> IsMainQuestList; // 0x570(0x10)
	struct TArray<bool> IsMainQuestList2; // 0x580(0x10)
	struct TArray<bool> LocationNewFlag; // 0x590(0x10)
	bool FlagBrainField; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct TArray<bool> IsSubQuestList; // 0x5a8(0x10)
	struct TArray<bool> IsSubQuestList2; // 0x5b8(0x10)
	struct TArray<bool> IsSubQuestRequestList; // 0x5c8(0x10)
	struct TArray<bool> IsSubQuestRequestList2; // 0x5d8(0x10)
	bool HasMemory; // 0x5e8(0x01)
	char pad_5E9[0x3]; // 0x5e9(0x03)
	int32_t MemoryLocationNo; // 0x5ec(0x04)
	int32_t MemoryAreaNo; // 0x5f0(0x04)
	int32_t MemoryPortalNo; // 0x5f4(0x04)
	bool MemoryAtSubList; // 0x5f8(0x01)

	void Decide(struct UObject* Object); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearMemory(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.ClearMemory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMemory(bool CallSubList); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetMemory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLocationAreaParam(int32_t LocationNo, int32_t AreaNo, int32_t PortalNo, struct FName CurrentLocationID, int32_t AllLocationListIndex, int32_t AreaListIndex); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetLocationAreaParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCurrentArea(int32_t Index, int32_t LocationNo, bool Result); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.IsCurrentArea // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupSubQuestFlag(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetupSubQuestFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateDebugLocationList(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.CreateDebugLocationList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNewLocation(int32_t Index, bool IsNew); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.IsNewLocation // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCurrentLocationNewFlag(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.UpdateCurrentLocationNewFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenDisableAreaChange(bool IsArea); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.OpenDisableAreaChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenCheckAreaChange(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.OpenCheckAreaChange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAreaList(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.UpdateAreaList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateAreaNameList(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.CreateAreaNameList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMainQuestFlag(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetupMainQuestFlag // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsChange(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.IsChange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckInputCancel(bool IsCancel); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.CheckInputCancel // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitText(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.InitText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitGuide(bool IsUpdate); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.InitGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentArea(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetCurrentArea // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeDetailWindow(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.ChangeDetailWindow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetListLocationName(int32_t Index, struct FString Name); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetListLocationName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CreateCurrentAreaList(struct TArray<struct FWorldmapOpenAreaParam> list); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.CreateCurrentAreaList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAreaName(int32_t Index, struct FString Name); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetAreaName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopSubList(int32_t SubState); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.StateLoopSubList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentAreaID(int32_t areaId); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetCurrentAreaID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentLocationID(int32_t LocationId); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetCurrentLocationID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentLocationName(struct FString Name); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetCurrentLocationName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentPortalID(int32_t PortalID); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetCurrentPortalID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentPortalName(struct FName Name); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetCurrentPortalName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLocationName(int32_t Index, struct FString Name); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetLocationName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetPortalName(int32_t Index, struct FName Name); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetPortalName // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsDecide(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.IsDecide // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetPortalID(int32_t Index, int32_t ID); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetPortalID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAreaID(int32_t Index, int32_t ID); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetAreaID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetLocationID(int32_t Index, int32_t ID); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.GetLocationID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateTextDetail(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.UpdateTextDetail // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCursorPosition(bool isinit); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.UpdateCursorPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReleaseWorldMap(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.ReleaseWorldMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateWorldMap(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.CreateWorldMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveCursor(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.MoveCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupListElement(int32_t Index, struct UWB_ui_WorldMap_Parts_1_C* Widget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetupListElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupList(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetupList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCancel(bool IsCancel); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.IsCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_ListUpdateElement(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.Event_ListUpdateElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_ListFocus(struct UUserWidget* pWidget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.Event_ListFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_ListUnFocus(struct UUserWidget* pWidget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.Event_ListUnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugUnlockFlag(bool UnlockFlag); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.SetDebugUnlockFlag // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  ƒžã‚¦ã‚¹ (int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C. ƒžã‚¦ã‚¹  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ƒžã‚¦  (int32_t isMouseScroll, int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C. ƒžã‚¦   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ƒžã‚¦(int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_WorldMap.WB_ui_WorldMap_C. ƒžã‚¦ // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ClearCursorMemory(); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.ClearCursorMemory // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_WorldMap(int32_t EntryPoint); // Function WB_ui_WorldMap.WB_ui_WorldMap_C.ExecuteUbergraph_WB_ui_WorldMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

