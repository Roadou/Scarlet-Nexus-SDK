// BlueprintGeneratedClass BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C
// Size: 0x160 (Inherited: 0xc0)
struct UBP_EnemyVisionFogComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float StartSeconds; // 0xc8(0x04)
	float LoopSeconds; // 0xcc(0x04)
	float EndSeconds; // 0xd0(0x04)
	float TotalDeltaSeconds; // 0xd4(0x04)
	int32_t State; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct ABP_PostProcessManager_C* PostProcessMng; // 0xe0(0x08)
	struct FVector EffectLocation; // 0xe8(0x0c)
	float SmokeApplyR; // 0xf4(0x04)
	float Alpha; // 0xf8(0x04)
	enum class EVisionFogID VisionFogID; // 0xfc(0x01)
	bool isAllArea; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
	float CheckFogStateSeconds; // 0x100(0x04)
	float VisibleLengthRate; // 0x104(0x04)
	float AppearLengthDiff; // 0x108(0x04)
	float SubAlpha; // 0x10c(0x04)
	struct UCurveFloat* VisionFogRateCurveData; // 0x110(0x08)
	struct USoundAtomCue* VisionFogLoopSE; // 0x118(0x08)
	struct URSAtomComponentBase* AtomComponent; // 0x120(0x08)
	float ForceEnableTime; // 0x128(0x04)
	float CurrentForceEnableTime; // 0x12c(0x04)
	bool bEndVisionFog; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FString VisionFogAreaName; // 0x138(0x10)
	float SmokeApplyH; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FMulticastInlineDelegate OnEndVisionFog; // 0x150(0x10)

	void SetFogParam(float InAppearLengthDiff, float InSmokeApplyR, float InSmokeApplyH); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.SetFogParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceEndFog(); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.ForceEndFog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleActor(struct ARSBattleEnemy_C* Enemy, bool Visible); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.SetVisibleActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearActorFog(); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.ClearActorFog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAllActorFog(bool IsVisionFog); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.SetAllActorFog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcAlpha(float DeltaSeconds, bool isApply, bool IsStart, bool IsEnd); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.CalcAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsVisionFog(bool IsVisionFog); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.IsVisionFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Exit(); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitNext(bool bForce, int32_t NextState); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.InitNext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(float FogStartSeconds, float FogLoopSeconds, float FogEndSeconds, struct FVector SpawnLocation, bool ArgIsAllArea, float ForceEnableTime); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyVisionFogComponent(int32_t EntryPoint); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.ExecuteUbergraph_BP_EnemyVisionFogComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void OnEndVisionFog__DelegateSignature(); // Function BP_EnemyVisionFogComponent.BP_EnemyVisionFogComponent_C.OnEndVisionFog__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

