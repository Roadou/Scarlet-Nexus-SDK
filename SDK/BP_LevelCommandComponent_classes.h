// BlueprintGeneratedClass BP_LevelCommandComponent.BP_LevelCommandComponent_C
// Size: 0xd8 (Inherited: 0xc0)
struct UBP_LevelCommandComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ABP_LevelManager_C* LevelManager; // 0xc8(0x08)
	struct UBP_LoadCommandComponent_C* LoadCommandComponent; // 0xd0(0x08)

	void CommandWaitLoadAreaLBPortalWait(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitLoadAreaLBPortalWait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadAreaLBPortalAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandLoadAreaLBPortalAsync // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitAnyLoadEnd(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitAnyLoadEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitUnloadAllLevel(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitUnloadAllLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleCars(struct TSoftObjectPtr<UObject> Level, bool Visible); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.SetVisibleCars // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyLevelSpawnedNpc(struct TSoftObjectPtr<UObject> Level); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.DestroyLevelSpawnedNpc // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitLevelUnvisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitLevelUnvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandUnloadAssetAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandUnloadAssetAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandWaitAreaPreloadVisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C._CommandWaitAreaPreloadVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandSetLevelUnvisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandSetLevelUnvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitUnloadLevel(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitUnloadLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitLoadLevel(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitLoadLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandUnloadLevelAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandUnloadLevelAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadLevelAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandLoadLevelAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitLevelVisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitLevelVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandSetLevelVisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandSetLevelVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadAssetAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandLoadAssetAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadAssetPackAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandLoadAssetPackAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandCancelLoadAreaAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C._CommandCancelLoadAreaAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitAreaUnvisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitAreaUnvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitAreaVisible(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitAreaVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandWaitUnloadAreaAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C._CommandWaitUnloadAreaAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandWaitLoadAreaAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C._CommandWaitLoadAreaAsync // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadLevel(struct FName Name); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.LoadLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAreaLevelLoaded(struct FName Area, bool IsLoaded, bool IsError); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.IsAreaLevelLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandChangeArea(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandChangeArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void _CommandWaitUnloadAreaWait(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C._CommandWaitUnloadAreaWait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandWaitLoadAreaWait(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandWaitLoadAreaWait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandUnloadAreaAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandUnloadAreaAsync // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void __CommandSetAreaOnlyVisible(struct FS_LevelManagerCommand Command, bool Async); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.__CommandSetAreaOnlyVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FullPathToLevelName(struct FName FullPath, struct FName LevelName); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.FullPathToLevelName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandSetAreaVisible(struct FS_LevelManagerCommand Command, bool Async); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandSetAreaVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CommandLoadAreaAsync(struct FS_LevelManagerCommand Command); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.CommandLoadAreaAsync // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_LevelCommandComponent(int32_t EntryPoint); // Function BP_LevelCommandComponent.BP_LevelCommandComponent_C.ExecuteUbergraph_BP_LevelCommandComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

