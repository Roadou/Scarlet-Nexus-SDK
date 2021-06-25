// BlueprintGeneratedClass BP_GhostTrailComponent.BP_GhostTrailComponent_C
// Size: 0x139 (Inherited: 0xc0)
struct UBP_GhostTrailComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	bool ActiveAtStart; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float GhostSpawnDelay; // 0xcc(0x04)
	float GhostLifetime; // 0xd0(0x04)
	bool GhostAllMeshes; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct TArray<struct FName> TagsToGhost; // 0xd8(0x10)
	struct UMaterialInterface* GhostMaterial; // 0xe8(0x08)
	struct TArray<struct FE_GhostMaterialParam> MatParams; // 0xf0(0x10)
	bool ScaleOverTime; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UCurveFloat* ScaleCurve; // 0x108(0x08)
	bool LastIsInvisible; // 0x110(0x01)
	bool VelocityDepending; // 0x111(0x01)
	char pad_112[0x2]; // 0x112(0x02)
	float VelocityThreshold; // 0x114(0x04)
	bool ActiveTrail; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct ABP_GhostTrailManager_C* GhostTrailManager; // 0x120(0x08)
	bool RandomOffset; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FVector SpawnRandomDistance; // 0x12c(0x0c)
	bool CreateManager; // 0x138(0x01)

	void SetVelocityDepending(bool bVelocityDepending); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetVelocityDepending // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTrailPause(bool bPauseSpawn); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveTrailMesh(struct UMeshComponent* Mesh); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.RemoveTrailMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddTrailMesh(struct UMeshComponent* Mesh); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddTrailMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetColor(struct FLinearColor Color); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnManager(struct ABP_GhostTrailManager_C* GhostTrailManager); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SpawnManager // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceSpawnGhost(float GhostLifetime); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ForceSpawnGhost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpawnRandomDistance(struct FVector SpawnRandomDistance); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetSpawnRandomDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyGhostAll(); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.DestroyGhostAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTrailActive(bool Active); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.GetTrailActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTrailActive(bool Active); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.SetTrailActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool MeshMustCastTrails(struct USceneComponent* Component); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.MeshMustCastTrails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void AddMeshesToGhost(); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.AddMeshesToGhost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitManager(); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.InitManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_GhostTrailComponent(int32_t EntryPoint); // Function BP_GhostTrailComponent.BP_GhostTrailComponent_C.ExecuteUbergraph_BP_GhostTrailComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

