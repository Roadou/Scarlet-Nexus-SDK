// BlueprintGeneratedClass BP_EventGhostTrail.BP_EventGhostTrail_C
// Size: 0x2e2 (Inherited: 0x269)
struct ABP_EventGhostTrail_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBP_GhostTrailComponent_C* BP_GhostTrailComponent; // 0x278(0x08)
	char Event; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float LifeTime; // 0x284(0x04)
	char LastEvent; // 0x288(0x01)
	bool SetupTrailMesh; // 0x289(0x01)
	char pad_28A[0x6]; // 0x28a(0x06)
	struct TArray<struct AActor*> SpawnActors; // 0x290(0x10)
	float StaticCutFirstFade; // 0x2a0(0x04)
	float StaticCutLastFade; // 0x2a4(0x04)
	float StaticColorScale; // 0x2a8(0x04)
	int32_t SpawnTrailNum; // 0x2ac(0x04)
	float StaticCutGhostFadeRate; // 0x2b0(0x04)
	bool UseOverrideColor; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FLinearColor OverrideColor; // 0x2b8(0x10)
	float StaticAlphaScale; // 0x2c8(0x04)
	int32_t EventCacheControlID; // 0x2cc(0x04)
	struct TArray<struct AActor*> ControlActors; // 0x2d0(0x10)
	bool UseStaticTrailCache; // 0x2e0(0x01)
	bool UseInfiniteBounds; // 0x2e1(0x01)

	void PrivateSetupGhostColor(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.PrivateSetupGhostColor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupStaticTrailInfo(struct ABPCaptureActor_C* CaptureActor, bool Valid, struct TArray<struct FGhostTrailInfo> GhostTrailInfo); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.PrivateSetupStaticTrailInfo // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupStaticTrailMesh(struct TArray<struct FGhostTrailInfo> TrailInfo); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.PrivateSetupStaticTrailMesh // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupDynamicTrailMesh(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.PrivateSetupDynamicTrailMesh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StaticCutGhostSpawned(struct FE_GhostInfo GhostInfo); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.StaticCutGhostSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DynamicCutGhostSpawned(struct FE_GhostInfo GhostInfo); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.DynamicCutGhostSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventGhostTrail(int32_t EntryPoint); // Function BP_EventGhostTrail.BP_EventGhostTrail_C.ExecuteUbergraph_BP_EventGhostTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

