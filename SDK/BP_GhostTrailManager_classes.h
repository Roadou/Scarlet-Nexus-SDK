// BlueprintGeneratedClass BP_GhostTrailManager.BP_GhostTrailManager_C
// Size: 0x3a8 (Inherited: 0x230)
struct ABP_GhostTrailManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UBP_GhostTrailComponent_C* GhostTrailOwnerComponent; // 0x240(0x08)
	struct UMaterialInterface* GhostMaterial; // 0x248(0x08)
	struct TArray<struct FE_GhostMaterialParam> MatParams; // 0x250(0x10)
	struct TArray<struct UStaticMeshComponent*> StaticMeshCompsToTrail; // 0x260(0x10)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshCompsToTrail; // 0x270(0x10)
	bool Active; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float GhostsLifetime; // 0x284(0x04)
	bool VelocityDepending; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float VelocityThreshold; // 0x28c(0x04)
	bool LastInvisible; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	float GhostSpawnDelay; // 0x294(0x04)
	float GhostSpawnTimer; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct FE_GhostInfo> Ghosts; // 0x2a0(0x10)
	bool ScaleGhost; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UCurveFloat* ScaleCurve; // 0x2b8(0x08)
	struct TArray<struct FVector> SkeletalVelocities; // 0x2c0(0x10)
	struct TArray<struct FVector> StaticVelocities; // 0x2d0(0x10)
	struct TArray<struct FVector> LastSkelLocations; // 0x2e0(0x10)
	struct TArray<struct FVector> LastStaticLocations; // 0x2f0(0x10)
	struct FMulticastInlineDelegate GhostSpawned; // 0x300(0x10)
	struct FVector SpawnRandomDistance; // 0x310(0x0c)
	bool RandomOffset; // 0x31c(0x01)
	char pad_31D[0x3]; // 0x31d(0x03)
	float RandomVelocityMax; // 0x320(0x04)
	struct FVector RandomVelocityRate; // 0x324(0x0c)
	bool IgnoreLastInvisible; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	struct FLinearColor TrailColor; // 0x334(0x10)
	bool bSetColor; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct TArray<struct UStaticMeshComponent*> StaticComponentCache; // 0x348(0x10)
	struct TArray<struct UPoseableMeshComponent*> SkeletalComponentCache; // 0x358(0x10)
	bool UseCache; // 0x368(0x01)
	char pad_369[0x3]; // 0x369(0x03)
	int32_t LastSelectCacheStatic; // 0x36c(0x04)
	int32_t LastSelectCacheSkeletal; // 0x370(0x04)
	bool bPauseSpawn; // 0x374(0x01)
	char pad_375[0x3]; // 0x375(0x03)
	struct TArray<struct FString> HiddenMaterialSlots; // 0x378(0x10)
	struct TArray<bool> SpawnStaticComponentCache; // 0x388(0x10)
	struct TArray<bool> SpawnSkeletalComponentCache; // 0x398(0x10)

	void ClearExternalCache(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.ClearExternalCache // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddExternalCache(struct TArray<struct UPoseableMeshComponent*> PoseableMeshComps); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddExternalCache // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyedComponents(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.DestroyedComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetColor(struct FLinearColor Color); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.GetColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetMaterialParams(struct TArray<struct FE_GhostMaterialParam> Params); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.ResetMaterialParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveMeshToTrail(struct UMeshComponent* Mesh); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.RemoveMeshToTrail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGhostDeltaSeconds(float DeltaSeconds); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.GetGhostDeltaSeconds // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PrivateSearchMaterialParamIndex(struct UMaterialInstanceDynamic* Mid, struct TArray<int32_t> Index); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.PrivateSearchMaterialParamIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRemoveComponent(struct UMeshComponent* Component); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.PrivateRemoveComponent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchOrAddSkeletalMeshCache(struct UPoseableMeshComponent* CachedMesh); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SearchOrAddSkeletalMeshCache // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchOrAddStaticMeshCache(struct UStaticMeshComponent* CachedMesh); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SearchOrAddStaticMeshCache // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSkeletalMeshCache(struct UPoseableMeshComponent* AddedMesh); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddSkeletalMeshCache // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddStaticMeshCache(struct UStaticMeshComponent* AddedMesh); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddStaticMeshCache // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateCalcVelocity(struct UMeshComponent* Mesh, int32_t Index, struct TArray<struct FVector> LastLocations, struct TArray<struct FVector> Velocities, float DeltaSeconds); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.PrivateCalcVelocity // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetColor(struct FLinearColor Color); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIgnoreLastInvisible(bool Flag); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SetIgnoreLastInvisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FTransform ChangeMasterRelative(struct FTransform InTransform, struct FVector A); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.ChangeMasterRelative // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcRandomOffsetLocation(struct FTransform BaseTransform, struct FVector OffsetLocation); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.CalcRandomOffsetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DestroyGhostAll(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.DestroyGhostAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddMeshToTrail(struct UMeshComponent* Mesh); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.AddMeshToTrail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGhostMaterialParams(struct FE_GhostInfo Ghost); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SetGhostMaterialParams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcVelocities(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.CalcVelocities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RevealLastGhosts(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.RevealLastGhosts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGhostVisual(struct FE_GhostInfo GhostInfo); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnGhosts(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnGhosts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGhostInfos(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.UpdateGhostInfos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnSkeletalGhost(struct USkeletalMeshComponent* MasterStaticMeshComponent, struct FE_GhostInfo GhostInfo); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnSkeletalGhost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnTimer(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnStaticGhost(struct UStaticMeshComponent* MasterStaticMeshComponent, struct FE_GhostInfo GhostInfo); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.SpawnStaticGhost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveDestroyed(); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GhostTrailManager(int32_t EntryPoint); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.ExecuteUbergraph_BP_GhostTrailManager // (Final|UbergraphFunction) // @ game+0x1685580
	void GhostSpawned__DelegateSignature(struct FE_GhostInfo GhostInfo); // Function BP_GhostTrailManager.BP_GhostTrailManager_C.GhostSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

