// BlueprintGeneratedClass BP_LoadCommandComponent.BP_LoadCommandComponent_C
// Size: 0x1a8 (Inherited: 0xc0)
struct UBP_LoadCommandComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct FS_LoadQueueCommand> LoadCommandQueue; // 0xc8(0x10)
	bool IsExecNextQueue; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	int32_t CurrentCommandId; // 0xdc(0x04)
	struct FMulticastInlineDelegate EventFinishLoadAreaDispatcher; // 0xe0(0x10)
	struct FMulticastInlineDelegate EventFinishUnloadAreaDispatcher; // 0xf0(0x10)
	struct ABP_LevelManager_C* LevelManager; // 0x100(0x08)
	struct FMulticastInlineDelegate EventFinishLoadLevelDispatcher; // 0x108(0x10)
	struct FMulticastInlineDelegate EventFinishUnloadLevelDispatcher; // 0x118(0x10)
	struct FMulticastInlineDelegate EventFinishLoadPackDispatcher; // 0x128(0x10)
	struct FMulticastInlineDelegate EventFinishUnloadPackDispatcher; // 0x138(0x10)
	bool DebugVerbose; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct FMulticastInlineDelegate EventFinishVisibleLevelDispatcher; // 0x150(0x10)
	struct FMulticastInlineDelegate EventFinishUnvisibleLevelDispatcher; // 0x160(0x10)
	struct FMulticastInlineDelegate EventStartLoadLevel; // 0x170(0x10)
	struct TArray<bool> LoadingThread; // 0x180(0x10)
	int32_t MaxPararrelLoadNum; // 0x190(0x04)
	int32_t CurLoadThreadNum; // 0x194(0x04)
	struct TArray<struct TSoftObjectPtr<UObject>> LoadingLevels; // 0x198(0x10)

	void LDRequestLoadAreaLBPortalAsync(struct FName AreaName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestLoadAreaLBPortalAsync // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLoadingAnyLevels(bool IsLoading); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.IsLoadingAnyLevels // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetLoadThreadNum(int32_t LoadThreadNum); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.DebugSetLoadThreadNum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandUnloadAssetAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandUnloadAssetAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestUnloadAssetAsync(struct TSoftObjectPtr<UObject> Asset, struct FName AssetListName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestUnloadAssetAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestLoadAssetListAsync(struct FName AssetListName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestLoadAssetListAsync // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestLoadAssetAsync(struct TSoftObjectPtr<UObject> Asset, struct FName AssetListName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestLoadAssetAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadAssetAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandLoadAssetAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandCancelLoadLevelAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C._CommandCancelLoadLevelAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void __LDRequestSetAreaVisibleAsync(struct FName AreaName, bool Visible, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.__LDRequestSetAreaVisibleAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandSetAreaVisibleAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandSetAreaVisibleAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MakePrimaryAssetIdDependencies(struct TArray<struct FPrimaryAssetId> PAIs, struct TArray<struct FName> AssetNames); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.MakePrimaryAssetIdDependencies // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandChangeCurrentArea(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandChangeCurrentArea // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestChangeArea(struct FName AreaName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestChangeArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandSetAreaOnlyVisible(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandSetAreaOnlyVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDDebugPrint(struct FString str); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDDebugPrint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestSetAreaOnlyVisible(struct FName AreaName, bool Visible, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestSetAreaOnlyVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestSetAreaVisible(struct FName AreaName, bool Visible, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestSetAreaVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandSetAreaVisible(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandSetAreaVisible // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void __CommandSetAreaVisibleAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.__CommandSetAreaVisibleAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestSetVisibleAfterLoadAreaAsync(struct FName AreaName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestSetVisibleAfterLoadAreaAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLoadCommandQueue(int32_t ID, bool Error); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.StartLoadCommandQueue // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLoadCommandStatusInQueueByID(int32_t ID, enum class E_LevelCommandStatus Status, bool Error); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.UpdateLoadCommandStatusInQueueByID // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveLoadCommandQueueByID(int32_t ID, bool Error); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.RemoveLoadCommandQueueByID // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadLevelAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandLoadLevelAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void __LDRequestWaitUnloadAreaAsync(struct FName AreaName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.__LDRequestWaitUnloadAreaAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void __LDRequestWaitLoadAreaAsync(struct FName AreaName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.__LDRequestWaitLoadAreaAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExistAreaCommandInQueue(struct FName AreaName, enum class E_LoadQueueCommand Command, bool IsExist); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.IsExistAreaCommandInQueue // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestUnloadPackAsync(struct FPrimaryAssetType Pack); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestUnloadPackAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestLoadPackAsync(struct FPrimaryAssetType Pack, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestLoadPackAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLoadCommand(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.UpdateLoadCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExistAreaCommandInQueueWithoutID(struct FName AreaName, enum class E_LoadQueueCommand Command, int32_t ExcludeID, bool IsExist); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.IsExistAreaCommandInQueueWithoutID // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestUnloadLevelAsync(struct FName AreaName, struct TSoftObjectPtr<UObject> LevelRef, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestUnloadLevelAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestUnloadAreaAsync(struct FName AreaName, struct FName NextAreaName, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestUnloadAreaAsync // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintLoadCommand(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.DebugPrintLoadCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintLoadCommandLoading(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.DebugPrintLoadCommandLoading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintLoadCommandQueue(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.DebugPrintLoadCommandQueue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestLoadLevelAsync(struct FName AreaName, struct TSoftObjectPtr<UObject> LevelRef, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestLoadLevelAsync // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LDRequestLoadAreaAsync(struct FName AreaName, bool SkipEnemyLevel, bool SkipEventLevel, bool IsError); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.LDRequestLoadAreaAsync // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandWaitUnloadArea(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C._CommandWaitUnloadArea // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandWaitLoadArea(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C._CommandWaitLoadArea // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandUnloadPackAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandUnloadPackAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadPackAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandLoadPackAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandUnloadLevelAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.CommandUnloadLevelAsync // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishAsyncCommand(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.FinishAsyncCommand // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNewCommandID(int32_t NewID); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.GetNewCommandID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishWaitCommandAndExecNext(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.FinishWaitCommandAndExecNext // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishWaitCommand(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.FinishWaitCommand // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddLoadCommandToQueue(enum class E_LoadQueueCommand Command, struct FName AreaName, struct FName LevelName, struct FPrimaryAssetType PackName, struct TSoftObjectPtr<UObject> Asset, struct FName AssetPackName, bool Flag); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.AddLoadCommandToQueue // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecLoadCommandQueue(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.ExecLoadCommandQueue // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Completed_6A37619A4AAF51DD0A88479B9DF73E37(struct TArray<struct UObject*> Loaded); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.Completed_6A37619A4AAF51DD0A88479B9DF73E37 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLoaded_733FDC874866DE4E2E262C86B89DFADF(struct UObject* Loaded); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.OnLoaded_733FDC874866DE4E2E262C86B89DFADF // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadThread0(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadThread0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadThread1(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadThread1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadThread2(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadThread2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadThread3(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadThread3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventLoadLevelAsync(struct FS_LoadQueueCommand Command, int32_t LoadSlot); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadLevelAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventUnloadLevelAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventUnloadLevelAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadPackAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadPackAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventUnloadPackAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventUnloadPackAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventWaitLoadAreaAndSetVisible(struct FS_LoadQueueCommand Command, bool Visible); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventWaitLoadAreaAndSetVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishLoadLevelDispatcher_Event(struct TSoftObjectPtr<UObject> LevelName, struct FName AreaName); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishLoadLevelDispatcher_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSetCurrentArea(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventSetCurrentArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventSetAreaVisible(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventSetAreaVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventLoadAssetAsync(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventLoadAssetAsync // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_LoadCommandComponent(int32_t EntryPoint); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.ExecuteUbergraph_BP_LoadCommandComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void EventStartLoadLevel__DelegateSignature(struct FS_LoadQueueCommand Command); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventStartLoadLevel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishUnvisibleLevelDispatcher__DelegateSignature(struct TSoftObjectPtr<UObject> Level); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishUnvisibleLevelDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishVisibleLevelDispatcher__DelegateSignature(struct TSoftObjectPtr<UObject> Level); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishVisibleLevelDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishUnloadPackDispatcher__DelegateSignature(struct FPrimaryAssetType Pack); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishUnloadPackDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishLoadPackDispatcher__DelegateSignature(struct FPrimaryAssetType Pack); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishLoadPackDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishUnloadLevelDispatcher__DelegateSignature(struct TSoftObjectPtr<UObject> LevelName, struct FName AreaName); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishUnloadLevelDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishLoadLevelDispatcher__DelegateSignature(struct TSoftObjectPtr<UObject> LevelName, struct FName AreaName); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishLoadLevelDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishUnloadAreaDispatcher__DelegateSignature(struct FName AreaName); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishUnloadAreaDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventFinishLoadAreaDispatcher__DelegateSignature(struct FName AreaName); // Function BP_LoadCommandComponent.BP_LoadCommandComponent_C.EventFinishLoadAreaDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

