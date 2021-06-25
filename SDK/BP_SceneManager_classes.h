// BlueprintGeneratedClass BP_SceneManager.BP_SceneManager_C
// Size: 0x399 (Inherited: 0x2c0)
struct ABP_SceneManager_C : ASceneManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct ABP_LevelManager_C* LevelManager; // 0x2d0(0x08)
	bool bInitialized; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct AHUDMainGame_C* HudManager; // 0x2e0(0x08)
	int32_t CurrentLocationID; // 0x2e8(0x04)
	int32_t CurrentAreaID; // 0x2ec(0x04)
	int32_t CurrentPortalID; // 0x2f0(0x04)
	int32_t CurrentVariationID; // 0x2f4(0x04)
	struct TArray<struct FName> CurrentSceneArgs; // 0x2f8(0x10)
	int32_t BeforeLocationID; // 0x308(0x04)
	int32_t BeforeAreaID; // 0x30c(0x04)
	enum class E_SceneManagerStatus CurrentStatus; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	int32_t BeforePortalID; // 0x314(0x04)
	enum class ELoadingScreenType LoadingScreenType; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	int32_t LoadingScreenParam; // 0x31c(0x04)
	int32_t BeforeVariationID; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FMulticastInlineDelegate OnFinishWaitAreaVisible; // 0x328(0x10)
	struct Ubp_ui_map_icon_manager_C* UiMapIconManager; // 0x338(0x08)
	struct FName DebugStartedScenerioJumpRowName; // 0x340(0x08)
	struct FName LastPortalName; // 0x348(0x08)
	struct FTransform LastPortalTransform; // 0x350(0x30)
	struct TArray<struct APlayerStart*> AllPlayerStart; // 0x380(0x10)
	bool IsToOtherLocationFlagForDispatcher; // 0x390(0x01)
	char pad_391[0x3]; // 0x391(0x03)
	int32_t WaitedCountUnloadDynamicLevels; // 0x394(0x04)
	bool CalledForceGCUnloadDynamicLevels; // 0x398(0x01)

	void GetCurrentLocationID(int32_t LocationId); // Function BP_SceneManager.BP_SceneManager_C.GetCurrentLocationID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class E_SceneManagerStatus GetCurrentStatus(); // Function BP_SceneManager.BP_SceneManager_C.GetCurrentStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsChangeLocation(); // Function BP_SceneManager.BP_SceneManager_C.IsChangeLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInitialized(bool Initialized); // Function BP_SceneManager.BP_SceneManager_C.IsInitialized // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IRequestChangeSceneImmediate(int32_t LocationId, int32_t areaId, int32_t VariationID, int32_t PortalID, struct TArray<struct FName> SceneArgs, bool NoFade, enum class ELoadingScreenType LoadingScreenType, int32_t LoadingScreenParam, bool isSaveDataLoadFlow, bool Error); // Function BP_SceneManager.BP_SceneManager_C.IRequestChangeSceneImmediate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLastDungeon(bool LastDungeon); // Function BP_SceneManager.BP_SceneManager_C.IsLastDungeon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void BeforeAreaName(struct FName AreaName); // Function BP_SceneManager.BP_SceneManager_C.BeforeAreaName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Is Coat Moat(bool Need); // Function BP_SceneManager.BP_SceneManager_C.Is Coat Moat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetGimmickScenarioFlag(); // Function BP_SceneManager.BP_SceneManager_C.ResetGimmickScenarioFlag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_SceneManager.BP_SceneManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FName GetCurrentLocationName(); // Function BP_SceneManager.BP_SceneManager_C.GetCurrentLocationName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentLocationInfo(int32_t LocationId, int32_t areaId, int32_t VariationID, int32_t PortalID); // Function BP_SceneManager.BP_SceneManager_C.GetCurrentLocationInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FName GetBeforeLocationName(); // Function BP_SceneManager.BP_SceneManager_C.GetBeforeLocationName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug Set Current Status Internal(enum class E_SceneManagerStatus CurrentStatus); // Function BP_SceneManager.BP_SceneManager_C.Debug Set Current Status Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartLoadingChara_Local(struct AHUDMainGame_C* HudManager, int32_t nextLocation); // Function BP_SceneManager.BP_SceneManager_C.StartLoadingChara_Local // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAcceptRequest(bool IsAccept); // Function BP_SceneManager.BP_SceneManager_C.IsAcceptRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool OnEndGameMenu(); // Function BP_SceneManager.BP_SceneManager_C.OnEndGameMenu // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLocationRestaurant(bool InAjito); // Function BP_SceneManager.BP_SceneManager_C.IsLocationRestaurant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void MoveLiftFloorForce(int32_t floor); // Function BP_SceneManager.BP_SceneManager_C.MoveLiftFloorForce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLiftFloorAtLoad(); // Function BP_SceneManager.BP_SceneManager_C.UpdateLiftFloorAtLoad // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLocationAjito(bool InAjito); // Function BP_SceneManager.BP_SceneManager_C.IsLocationAjito // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitializeAjito(); // Function BP_SceneManager.BP_SceneManager_C.InitializeAjito // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsChangeLocation_Internal(); // Function BP_SceneManager.BP_SceneManager_C.IsChangeLocation_Internal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function BP_SceneManager.BP_SceneManager_C.EventManagerEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function BP_SceneManager.BP_SceneManager_C.EventManagerStart // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLastPlayerSpawnInfo(struct FName PortalName, struct FTransform LastSpawnTransform); // Function BP_SceneManager.BP_SceneManager_C.SetLastPlayerSpawnInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDebugAlphaROMScenerio(bool bAlphaScenerio); // Function BP_SceneManager.BP_SceneManager_C.IsDebugAlphaROMScenerio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDebugStartedScenarioJumpRowName(struct FName ScenerioJumpRowName); // Function BP_SceneManager.BP_SceneManager_C.SetDebugStartedScenarioJumpRowName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDebugStartedScenarioJumpRowName(struct FName ScenerioJumpRowName); // Function BP_SceneManager.BP_SceneManager_C.GetDebugStartedScenarioJumpRowName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPlayerInEventTrigger(bool InEvent); // Function BP_SceneManager.BP_SceneManager_C.CheckPlayerInEventTrigger // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitAreaLBPortalLevelVisible(); // Function BP_SceneManager.BP_SceneManager_C.TickWaitAreaLBPortalLevelVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPortalTransform(int32_t LocationNo, int32_t AreaNo, struct FName PortalName, struct FTransform Transform, bool found); // Function BP_SceneManager.BP_SceneManager_C.GetPortalTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitAreaLBPortalLevelLoading(); // Function BP_SceneManager.BP_SceneManager_C.TickWaitAreaLBPortalLevelLoading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MovePlayerAtNewArea(); // Function BP_SceneManager.BP_SceneManager_C.MovePlayerAtNewArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBeforeLocationAndArea(int32_t LocationId, int32_t areaId); // Function BP_SceneManager.BP_SceneManager_C.GetBeforeLocationAndArea // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetStartPortalName(struct FName PortalName); // Function BP_SceneManager.BP_SceneManager_C.GetStartPortalName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPreviousLocationAndArea(int32_t LocationId, int32_t areaId, int32_t PortalID); // Function BP_SceneManager.BP_SceneManager_C.GetPreviousLocationAndArea // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitUnloadDynamicLevels(); // Function BP_SceneManager.BP_SceneManager_C.TickWaitUnloadDynamicLevels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentLocationAndArea(int32_t LocationId, int32_t areaId); // Function BP_SceneManager.BP_SceneManager_C.GetCurrentLocationAndArea // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectLoadingUI(int32_t LocationId, enum class ELoadingScreenType LoadingScreenType, int32_t LoadingScreenParam); // Function BP_SceneManager.BP_SceneManager_C.SelectLoadingUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWaitLoadScene(bool IsWaitLoad); // Function BP_SceneManager.BP_SceneManager_C.IsWaitLoadScene // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAllTownPeopleState(); // Function BP_SceneManager.BP_SceneManager_C.UpdateAllTownPeopleState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStatusInScene(bool IsInScene); // Function BP_SceneManager.BP_SceneManager_C.IsStatusInScene // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestChangeScene(int32_t LocationId, int32_t areaId, int32_t PortalID, struct TArray<struct FName> SceneArgs, bool NoFade, bool Error, enum class ELoadingScreenType LoadingScreenType, int32_t LoadingScreenParam, bool IsAutoSaveEnable, struct FName BattleSimulatorLevelInfosName); // Function BP_SceneManager.BP_SceneManager_C.RequestChangeScene // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeleteAllWalkingNPC(); // Function BP_SceneManager.BP_SceneManager_C.DeleteAllWalkingNPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Tick Wait Event Asset Load(); // Function BP_SceneManager.BP_SceneManager_C.Tick Wait Event Asset Load // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestChangeSceneImmediateByName(struct FName AreaInfoName, int32_t PortalID, struct TArray<struct FName> SceneArgs, bool NoFade, enum class ELoadingScreenType LoadingScreenType, int32_t LoadingScreenParam); // Function BP_SceneManager.BP_SceneManager_C.RequestChangeSceneImmediateByName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CurrentAreaName(struct FName AreaName); // Function BP_SceneManager.BP_SceneManager_C.CurrentAreaName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCurrentArea(int32_t Location, int32_t Area, int32_t Variation, int32_t Portal, bool UpdateBeforeID); // Function BP_SceneManager.BP_SceneManager_C.SetCurrentArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestChangeSceneImmediate(int32_t LocationId, int32_t areaId, int32_t VariationID, int32_t PortalID, struct TArray<struct FName> SceneArgs, bool NoFade, enum class ELoadingScreenType LoadingScreenType, int32_t LoadingScreenParam, bool isSaveDataLoadFlow, bool Error); // Function BP_SceneManager.BP_SceneManager_C.RequestChangeSceneImmediate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetChapterInfo(struct FName RowName, struct FS_ScenarioJump Info, bool found); // Function BP_SceneManager.BP_SceneManager_C.GetChapterInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestChapterJump(struct FName ChapterName, bool Debug, bool Error); // Function BP_SceneManager.BP_SceneManager_C.RequestChapterJump // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBoot_(); // Function BP_SceneManager.BP_SceneManager_C.InitBoot_ // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNextAreaInfo(int32_t LocationId, int32_t areaId, int32_t PortalID, struct FName AreaName, struct FName PortalName); // Function BP_SceneManager.BP_SceneManager_C.GetNextAreaInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBeforeLoadLevels(); // Function BP_SceneManager.BP_SceneManager_C.InitBeforeLoadLevels // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitOnStartFade(); // Function BP_SceneManager.BP_SceneManager_C.InitOnStartFade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickStartNoFade(); // Function BP_SceneManager.BP_SceneManager_C.TickStartNoFade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickStartFade(); // Function BP_SceneManager.BP_SceneManager_C.TickStartFade // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaSoundSetting_(); // Function BP_SceneManager.BP_SceneManager_C.SetAreaSoundSetting_ // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitFadeOut(); // Function BP_SceneManager.BP_SceneManager_C.TickWaitFadeOut // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickInitialize(); // Function BP_SceneManager.BP_SceneManager_C.TickInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickInScene(); // Function BP_SceneManager.BP_SceneManager_C.TickInScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickSceneStarting(); // Function BP_SceneManager.BP_SceneManager_C.TickSceneStarting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitAreaVisible(); // Function BP_SceneManager.BP_SceneManager_C.TickWaitAreaVisible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitAreaLoading(); // Function BP_SceneManager.BP_SceneManager_C.TickWaitAreaLoading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSceneManagerStatus(enum class E_SceneManagerStatus Status); // Function BP_SceneManager.BP_SceneManager_C.ChangeSceneManagerStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBoot(); // Function BP_SceneManager.BP_SceneManager_C.InitBoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAreaSoundSetting(); // Function BP_SceneManager.BP_SceneManager_C.SetAreaSoundSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug Set Current Status(enum class E_SceneManagerStatus CurrentStatus); // Function BP_SceneManager.BP_SceneManager_C.Debug Set Current Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SceneManager.BP_SceneManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SceneManager.BP_SceneManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_ReVisibleNaviLevel(); // Function BP_SceneManager.BP_SceneManager_C.Event_ReVisibleNaviLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_SceneManager.BP_SceneManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallFuncFromCode_UpdateAllTownPeopleState(); // Function BP_SceneManager.BP_SceneManager_C.CallFuncFromCode_UpdateAllTownPeopleState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RequestChangeSceneBattleSimulator(struct FName BattleSimulatorRowName); // Function BP_SceneManager.BP_SceneManager_C.RequestChangeSceneBattleSimulator // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SceneManager(int32_t EntryPoint); // Function BP_SceneManager.BP_SceneManager_C.ExecuteUbergraph_BP_SceneManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void OnFinishWaitAreaVisible__DelegateSignature(); // Function BP_SceneManager.BP_SceneManager_C.OnFinishWaitAreaVisible__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

