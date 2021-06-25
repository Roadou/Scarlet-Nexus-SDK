// BlueprintGeneratedClass BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C
// Size: 0x2ac (Inherited: 0x230)
struct ABP_SplineMoveNPCSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct TArray<struct USplineComponent*> SplineRoute; // 0x240(0x10)
	float SpawnIntervalTime; // 0x250(0x04)
	float SpawnIntervalRandom; // 0x254(0x04)
	float NextSpawnIntervalTime; // 0x258(0x04)
	float NpcMoveSpeed; // 0x25c(0x04)
	float NpcRotSpeed; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UDataTable* CrowdTypeDataTable; // 0x268(0x08)
	struct TArray<struct AActor*> SpawnedActors; // 0x270(0x10)
	bool NoCollisionInFar; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float SpawnTimer; // 0x284(0x04)
	int32_t SpawnedActorNum; // 0x288(0x04)
	int32_t ActiveSpawnedActorNum; // 0x28c(0x04)
	bool IsActive; // 0x290(0x01)
	bool IsDebug; // 0x291(0x01)
	char pad_292[0x2]; // 0x292(0x02)
	int32_t MaxSpawnNum; // 0x294(0x04)
	struct ABP_TownPeopleCrowd_C* LastSpawnedActor; // 0x298(0x08)
	float NeedSpawnDistance; // 0x2a0(0x04)
	enum class ENpcAnimationKind AnimKind; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float NPCmoveUpDownSpeedMaxDelta; // 0x2a8(0x04)

	void CountNPC(); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.CountNPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAllNPC(); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.DestroyAllNPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveNPCDeadCallback(struct ABP_TownPeopleCrowd_C* dead); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.MoveNPCDeadCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomCrowdType(struct FNpcTownPeopleCrowdType CrowdType); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.GetRandomCrowdType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaxPathLength(float MaxPathLength); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.GetMaxPathLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitializeSpawn(int32_t SpawnActorNum); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.InitializeSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSpawnIntervalTime(); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.UpdateSpawnIntervalTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSplinePaths(); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.InitializeSplinePaths // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSplinePathAtRandom(struct USplineComponent* Spline); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.GetSplinePathAtRandom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SpawnTownPeopleCrowd(struct ABP_TownPeopleCrowd_C* Spawned); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.SpawnTownPeopleCrowd // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFlatSpline(struct USplineComponent* Spline, struct USplineComponent* Result); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.GetFlatSpline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRouteSplineAtRandom(struct USplineComponent* SplineComponent); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.GetRouteSplineAtRandom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SplineMoveNPCSpawner(int32_t EntryPoint); // Function BP_SplineMoveNPCSpawner.BP_SplineMoveNPCSpawner_C.ExecuteUbergraph_BP_SplineMoveNPCSpawner // (Final|UbergraphFunction) // @ game+0x1685580
};

