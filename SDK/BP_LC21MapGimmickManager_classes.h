// BlueprintGeneratedClass BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C
// Size: 0x2c8 (Inherited: 0x268)
struct ABP_LC21MapGimmickManager_C : ALC21MapGimmickManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct UCameraShake* CameraShakeData; // 0x278(0x08)
	bool IsPlayEarthQuakeShake; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct ABlockingVolume* FloorWallFarAfterLaser; // 0x288(0x08)
	struct ABlockingVolume* FloorWallFarNormal; // 0x290(0x08)
	struct ABlockingVolume* FloorWallNear; // 0x298(0x08)
	struct TSoftObjectPtr<AActor> BossFloorActor; // 0x2a0(0x28)

	bool StartEventLaserSetWall(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartEventLaserSetWall // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartEventLaserCenter(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartEventLaserCenter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartEventLaserFar(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartEventLaserFar // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLaserWallCollision(struct ABlockingVolume* BlockActor, bool IsAfterLaser); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.SetLaserWallCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool FallLeftFloor(float OffsetY); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.FallLeftFloor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFallLeftAllFromNo(int32_t no); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartFallLeftAllFromNo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWallCollision(bool IsAfterLaser); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.SetWallCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeWall(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.InitializeWall // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartEventLaser(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartEventLaser // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIsFallToInfoFromActor(struct AActor* Actor); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.SetIsFallToInfoFromActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintFloorInfo(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.DebugPrintFloorInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFloorInfoFromActor(struct AActor* Actor, struct FBossFloorInfo FloorInfo, int32_t no); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.GetFloorInfoFromActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFallLeftAllFromActor(struct AActor* Actor); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartFallLeftAllFromActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ChangePhase(int32_t PhaseNo); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.ChangePhase // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEarthQuake(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.EndEarthQuake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEarthQuake(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartEarthQuake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool FindAllObjectsAndInitialize(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.FindAllObjectsAndInitialize // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartAllBlockFall_Event(struct AActor* Actor); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.OnStartAllBlockFall_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndAllBlockFall_Event(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.OnEndAllBlockFall_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Debug_TestLaser(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.Debug_TestLaser // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndLC21bossArea(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.EndLC21bossArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void StartLC21bossArea(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.StartLC21bossArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEarthQuakePlay(); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.UpdateEarthQuakePlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_LC21MapGimmickManager(int32_t EntryPoint); // Function BP_LC21MapGimmickManager.BP_LC21MapGimmickManager_C.ExecuteUbergraph_BP_LC21MapGimmickManager // (Final|UbergraphFunction) // @ game+0x1685580
};

