// Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x04)
	float FixedAreaEnteringCost; // 0x34(0x04)
	struct FColor DrawColor; // 0x38(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x3c(0x04)
	char bSupportsAgent0 : 1; // 0x40(0x01)
	char bSupportsAgent1 : 1; // 0x40(0x01)
	char bSupportsAgent2 : 1; // 0x40(0x01)
	char bSupportsAgent3 : 1; // 0x40(0x01)
	char bSupportsAgent4 : 1; // 0x40(0x01)
	char bSupportsAgent5 : 1; // 0x40(0x01)
	char bSupportsAgent6 : 1; // 0x40(0x01)
	char bSupportsAgent7 : 1; // 0x40(0x01)
	char bSupportsAgent8 : 1; // 0x41(0x01)
	char bSupportsAgent9 : 1; // 0x41(0x01)
	char bSupportsAgent10 : 1; // 0x41(0x01)
	char bSupportsAgent11 : 1; // 0x41(0x01)
	char bSupportsAgent12 : 1; // 0x41(0x01)
	char bSupportsAgent13 : 1; // 0x41(0x01)
	char bSupportsAgent14 : 1; // 0x41(0x01)
	char bSupportsAgent15 : 1; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xc8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	struct UNavArea* Agent0Area; // 0x48(0x08)
	struct UNavArea* Agent1Area; // 0x50(0x08)
	struct UNavArea* Agent2Area; // 0x58(0x08)
	struct UNavArea* Agent3Area; // 0x60(0x08)
	struct UNavArea* Agent4Area; // 0x68(0x08)
	struct UNavArea* Agent5Area; // 0x70(0x08)
	struct UNavArea* Agent6Area; // 0x78(0x08)
	struct UNavArea* Agent7Area; // 0x80(0x08)
	struct UNavArea* Agent8Area; // 0x88(0x08)
	struct UNavArea* Agent9Area; // 0x90(0x08)
	struct UNavArea* Agent10Area; // 0x98(0x08)
	struct UNavArea* Agent11Area; // 0xa0(0x08)
	struct UNavArea* Agent12Area; // 0xa8(0x08)
	struct UNavArea* Agent13Area; // 0xb0(0x08)
	struct UNavArea* Agent14Area; // 0xb8(0x08)
	struct UNavArea* Agent15Area; // 0xc0(0x08)
};

// Class NavigationSystem.NavModifierVolume
// Size: 0x278 (Inherited: 0x268)
struct ANavModifierVolume : AVolume {
	char pad_268[0x8]; // 0x268(0x08)
	struct UNavArea* AreaClass; // 0x270(0x08)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x266fe30
};

// Class NavigationSystem.NavigationData
// Size: 0x410 (Inherited: 0x230)
struct ANavigationData : AActor {
	char pad_230[0x8]; // 0x230(0x08)
	struct UPrimitiveComponent* RenderingComp; // 0x238(0x08)
	struct FNavDataConfig NavDataConfig; // 0x240(0x78)
	char bEnableDrawing : 1; // 0x2b8(0x01)
	char bForceRebuildOnLoad : 1; // 0x2b8(0x01)
	char bAutoDestroyWhenNoNavigation : 1; // 0x2b8(0x01)
	char bCanBeMainNavData : 1; // 0x2b8(0x01)
	char bCanSpawnOnRebuild : 1; // 0x2b8(0x01)
	char bRebuildAtRuntime : 1; // 0x2b8(0x01)
	char pad_2B8_6 : 2; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	float ObservedPathsTickInterval; // 0x2c0(0x04)
	uint32_t DataVersion; // 0x2c4(0x04)
	char pad_2C8[0xe0]; // 0x2c8(0xe0)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x3a8(0x10)
	char pad_3B8[0x58]; // 0x3b8(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size: 0x410 (Inherited: 0x410)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavCollision
// Size: 0xd8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase {
	char pad_70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xa0(0x08)
	char bGatherConvexGeometry : 1; // 0xa8(0x01)
	char bCreateOnClient : 1; // 0xa8(0x01)
	char pad_A8_2 : 6; // 0xa8(0x01)
	char pad_A9[0x2f]; // 0xa9(0x2f)
};

// Class NavigationSystem.NavigationGraph
// Size: 0x410 (Inherited: 0x410)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size: 0x230 (Inherited: 0x230)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x230 (Inherited: 0x200)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x200(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x218(0x08)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x220(0x08)
	char pad_228[0x8]; // 0x228(0x08)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xc0(0x04)
	float TileRemovalRadius; // 0xc4(0x04)
};

// Class NavigationSystem.NavigationPath
// Size: 0x88 (Inherited: 0x28)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x01)
	char pad_49[0x3f]; // 0x49(0x3f)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x266d0a0
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x11b48c0
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x266d070
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x266c980
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x266c730
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x266c630
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // @ game+0x266c210
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x266c130
};

// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x04)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
};

// Class NavigationSystem.NavigationSystemV1
// Size: 0x538 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x28(0x08)
	struct ANavigationData* AbstractNavData; // 0x30(0x08)
	struct FName DefaultAgentName; // 0x38(0x08)
	struct TSoftClassPtr<UObject> CrowdManagerClass; // 0x40(0x28)
	char bAutoCreateNavigationData : 1; // 0x68(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x01)
	char bAllowClientSideNavigation : 1; // 0x68(0x01)
	char bShouldDiscardSubLevelNavData : 1; // 0x68(0x01)
	char bTickWhilePaused : 1; // 0x68(0x01)
	char bSupportRebuilding : 1; // 0x68(0x01)
	char bInitialBuildingLocked : 1; // 0x68(0x01)
	char pad_68_7 : 1; // 0x68(0x01)
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x01)
	char pad_69_1 : 7; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float ActiveTilesUpdateInterval; // 0x74(0x04)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x78(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x90(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xa0(0x10)
	char pad_B0[0x10]; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0(0x10)
	char pad_E0[0xdc]; // 0xe0(0xdc)
	enum class FNavigationSystemRunMode OperationMode; // 0x1bc(0x01)
	char pad_1BD[0x357]; // 0x1bd(0x357)
	float DirtyAreasUpdateFreq; // 0x514(0x04)
	char pad_518[0x20]; // 0x518(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x266def0
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x266de30
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x11d9ef0
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x266ddb0
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // @ game+0x266dd30
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // @ game+0x266dd10
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // @ game+0x266dc10
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266da40
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // @ game+0x266d9c0
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector RayStart, struct FVector RayEnd, struct FVector HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x266d7b0
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // @ game+0x266d6b0
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct FVector ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266d4d0
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266d2d0
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266d0d0
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x266d0d0
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x266cff0
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x266cf70
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266cda0
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266cbd0
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266c9b0
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x266c760
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x266c6b0
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x266c480
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x266c290
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x58 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50(0x01)
	char bCreateOnClient : 1; // 0x50(0x01)
	char bAutoSpawnMissingNavData : 1; // 0x50(0x01)
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x01)
	char pad_50_4 : 4; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class NavigationSystem.NavigationTestingActor
// Size: 0x320 (Inherited: 0x230)
struct ANavigationTestingActor : AActor {
	char pad_230[0x10]; // 0x230(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x240(0x08)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x248(0x08)
	char bActAsNavigationInvoker : 1; // 0x250(0x01)
	char pad_250_1 : 7; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FNavAgentProperties NavAgentProps; // 0x258(0x30)
	struct FVector QueryingExtent; // 0x288(0x0c)
	char pad_294[0x4]; // 0x294(0x04)
	struct ANavigationData* MyNavData; // 0x298(0x08)
	struct FVector ProjectedLocation; // 0x2a0(0x0c)
	char bProjectedLocationValid : 1; // 0x2ac(0x01)
	char bSearchStart : 1; // 0x2ac(0x01)
	char pad_2AC_2 : 6; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	float CostLimitFactor; // 0x2b0(0x04)
	float MinimumCostLimit; // 0x2b4(0x04)
	char bBacktracking : 1; // 0x2b8(0x01)
	char bUseHierarchicalPathfinding : 1; // 0x2b8(0x01)
	char bGatherDetailedInfo : 1; // 0x2b8(0x01)
	char bDrawDistanceToWall : 1; // 0x2b8(0x01)
	char bShowNodePool : 1; // 0x2b8(0x01)
	char bShowBestPath : 1; // 0x2b8(0x01)
	char bShowDiffWithPreviousStep : 1; // 0x2b8(0x01)
	char bShouldBeVisibleInGame : 1; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	enum class ENavCostDisplay CostDisplayMode; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct FVector2D TextCanvasOffset; // 0x2c0(0x08)
	char bPathExist : 1; // 0x2c8(0x01)
	char bPathIsPartial : 1; // 0x2c8(0x01)
	char bPathSearchOutOfNodes : 1; // 0x2c8(0x01)
	char pad_2C8_3 : 5; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float PathfindingTime; // 0x2cc(0x04)
	float PathCost; // 0x2d0(0x04)
	int32_t PathfindingSteps; // 0x2d4(0x04)
	struct ANavigationTestingActor* OtherActor; // 0x2d8(0x08)
	struct UNavigationQueryFilter* FilterClass; // 0x2e0(0x08)
	int32_t ShowStepIndex; // 0x2e8(0x04)
	float OffsetFromCornersDistance; // 0x2ec(0x04)
	char pad_2F0[0x30]; // 0x2f0(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size: 0x420 (Inherited: 0x410)
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x410(0x10)
};

// Class NavigationSystem.NavRelevantComponent
// Size: 0xf0 (Inherited: 0xc0)
struct UNavRelevantComponent : UActorComponent {
	char pad_C0[0x24]; // 0xc0(0x24)
	char bAttachToOwnersRoot : 1; // 0xe4(0x01)
	char pad_E4_1 : 7; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UObject* CachedNavParent; // 0xe8(0x08)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // @ game+0x266ff30
};

// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1a0 (Inherited: 0xf0)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	char pad_F0[0x8]; // 0xf0(0x08)
	uint32_t NavLinkUserId; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UNavArea* EnabledAreaClass; // 0x100(0x08)
	struct UNavArea* DisabledAreaClass; // 0x108(0x08)
	struct FNavAgentSelector SupportedAgents; // 0x110(0x04)
	struct FVector LinkRelativeStart; // 0x114(0x0c)
	struct FVector LinkRelativeEnd; // 0x120(0x0c)
	enum class ENavLinkDirection LinkDirection; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	char bLinkEnabled : 1; // 0x130(0x01)
	char bNotifyWhenEnabled : 1; // 0x130(0x01)
	char bNotifyWhenDisabled : 1; // 0x130(0x01)
	char bCreateBoxObstacle : 1; // 0x130(0x01)
	char pad_130_4 : 4; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	struct FVector ObstacleOffset; // 0x134(0x0c)
	struct FVector ObstacleExtent; // 0x140(0x0c)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UNavArea* ObstacleAreaClass; // 0x150(0x08)
	float BroadcastRadius; // 0x158(0x04)
	float BroadcastInterval; // 0x15c(0x04)
	enum class ECollisionChannel BroadcastChannel; // 0x160(0x01)
	char pad_161[0x3f]; // 0x161(0x3f)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x410 (Inherited: 0x410)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x270 (Inherited: 0x268)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x420 (Inherited: 0x410)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	char pad_410[0x10]; // 0x410(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size: 0x150 (Inherited: 0xf0)
struct UNavModifierComponent : UNavRelevantComponent {
	struct UNavArea* AreaClass; // 0xf0(0x08)
	struct FVector FailsafeExtent; // 0xf8(0x0c)
	char bIncludeAgentHeight : 1; // 0x104(0x01)
	char pad_104_1 : 7; // 0x104(0x01)
	char pad_105[0x4b]; // 0x105(0x4b)

	void SetAreaClass(struct UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // @ game+0x266feb0
};

// Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x240 (Inherited: 0x230)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x230(0x08)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x238(0x01)
	char bLoadOnClient : 1; // 0x239(0x01)
	char pad_239_1 : 7; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x410 (Inherited: 0x410)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size: 0x4c8 (Inherited: 0x410)
struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x410(0x01)
	char bDrawPolyEdges : 1; // 0x410(0x01)
	char bDrawFilledPolys : 1; // 0x410(0x01)
	char bDrawNavMeshEdges : 1; // 0x410(0x01)
	char bDrawTileBounds : 1; // 0x410(0x01)
	char bDrawPathCollidingGeometry : 1; // 0x410(0x01)
	char bDrawTileLabels : 1; // 0x410(0x01)
	char bDrawPolygonLabels : 1; // 0x410(0x01)
	char bDrawDefaultPolygonCost : 1; // 0x411(0x01)
	char bDrawLabelsOnPathNodes : 1; // 0x411(0x01)
	char bDrawNavLinks : 1; // 0x411(0x01)
	char bDrawFailedNavLinks : 1; // 0x411(0x01)
	char bDrawClusters : 1; // 0x411(0x01)
	char bDrawOctree : 1; // 0x411(0x01)
	char bDrawOctreeDetails : 1; // 0x411(0x01)
	char bDrawMarkedForbiddenPolys : 1; // 0x411(0x01)
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x412(0x01)
	char bDrawNavMesh : 1; // 0x412(0x01)
	char pad_412_2 : 6; // 0x412(0x01)
	char pad_413[0x1]; // 0x413(0x01)
	float DrawOffset; // 0x414(0x04)
	char bFixedTilePoolSize : 1; // 0x418(0x01)
	char pad_418_1 : 7; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32_t TilePoolSize; // 0x41c(0x04)
	float TileSizeUU; // 0x420(0x04)
	float CellSize; // 0x424(0x04)
	float CellHeight; // 0x428(0x04)
	float AgentRadius; // 0x42c(0x04)
	float AgentHeight; // 0x430(0x04)
	float AgentMaxHeight; // 0x434(0x04)
	float AgentMaxSlope; // 0x438(0x04)
	float AgentMaxStepHeight; // 0x43c(0x04)
	float MinRegionArea; // 0x440(0x04)
	float MergeRegionSize; // 0x444(0x04)
	float MaxSimplificationError; // 0x448(0x04)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x44c(0x04)
	int32_t TileNumberHardLimit; // 0x450(0x04)
	int32_t PolyRefTileBits; // 0x454(0x04)
	int32_t PolyRefNavPolyBits; // 0x458(0x04)
	int32_t PolyRefSaltBits; // 0x45c(0x04)
	struct FVector NavMeshOriginOffset; // 0x460(0x0c)
	float DefaultDrawDistance; // 0x46c(0x04)
	float DefaultMaxSearchNodes; // 0x470(0x04)
	float DefaultMaxHierarchicalSearchNodes; // 0x474(0x04)
	enum class ERecastPartitioning RegionPartitioning; // 0x478(0x01)
	enum class ERecastPartitioning LayerPartitioning; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	int32_t RegionChunkSplits; // 0x47c(0x04)
	int32_t LayerChunkSplits; // 0x480(0x04)
	char bSortNavigationAreasByCost : 1; // 0x484(0x01)
	char bPerformVoxelFiltering : 1; // 0x484(0x01)
	char bMarkLowHeightAreas : 1; // 0x484(0x01)
	char bFilterLowSpanSequences : 1; // 0x484(0x01)
	char bFilterLowSpanFromTileCache : 1; // 0x484(0x01)
	char bDoFullyAsyncNavDataGathering : 1; // 0x484(0x01)
	char bUseBetterOffsetsFromCorners : 1; // 0x484(0x01)
	char bStoreEmptyTileLayers : 1; // 0x484(0x01)
	char bUseVirtualFilters : 1; // 0x485(0x01)
	char bAllowNavLinkAsPathEnd : 1; // 0x485(0x01)
	char bUseVoxelCache : 1; // 0x485(0x01)
	char pad_485_3 : 5; // 0x485(0x01)
	char pad_486[0x2]; // 0x486(0x02)
	float TileSetUpdateInterval; // 0x488(0x04)
	float HeuristicScale; // 0x48c(0x04)
	float VerticalDeviationFromGroundCompensation; // 0x490(0x04)
	char pad_494[0x34]; // 0x494(0x34)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x266fca0
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	char pad_30[0x10]; // 0x30(0x10)
};

