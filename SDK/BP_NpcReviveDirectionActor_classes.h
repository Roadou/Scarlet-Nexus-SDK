// BlueprintGeneratedClass BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C
// Size: 0x2f1 (Inherited: 0x230)
struct ABP_NpcReviveDirectionActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct FVector ReviveTimeLine_CurveEnergyNPC_0FF3A189444B3AA21EF948BD4E273C1E; // 0x240(0x0c)
	struct FVector ReviveTimeLine_CableEnergy_0FF3A189444B3AA21EF948BD4E273C1E; // 0x24c(0x0c)
	enum class ETimelineDirection ReviveTimeLine__Direction_0FF3A189444B3AA21EF948BD4E273C1E; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	struct UTimelineComponent* ReviveTimeLine; // 0x260(0x08)
	struct ARSBattlePlayer_C* RevivePlayer; // 0x268(0x08)
	enum class EPlayerReviveCableStep ReviveCableStep; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct ABP_PlayerManager_C* PlayerManager; // 0x278(0x08)
	bool bExecReviveDirection; // 0x280(0x01)
	bool bBeginCameraDIrection; // 0x281(0x01)
	bool bSlow; // 0x282(0x01)
	char pad_283[0x1]; // 0x283(0x01)
	float CameraOffsetRate; // 0x284(0x04)
	struct FName CameraTargetSocketName; // 0x288(0x08)
	float CameraTargetHeightOffset; // 0x290(0x04)
	float CameraBeginLerpTime; // 0x294(0x04)
	enum class EEasingFunc CameraBeginEaseFunc; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float CameraBeginEaseBlendExp; // 0x29c(0x04)
	float CameraEndLerpTime; // 0x2a0(0x04)
	enum class EEasingFunc CameraEndEaseFunc; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float CameraEndEaseBlendExp; // 0x2a8(0x04)
	float CameraFov; // 0x2ac(0x04)
	float CameraFovLerpTime; // 0x2b0(0x04)
	enum class EEasingFunc CameraFovEaseFunc; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	float CameraFovEaseBlendExp; // 0x2b8(0x04)
	float SlowTimeDilation; // 0x2bc(0x04)
	struct FVector StoreRootOffset; // 0x2c0(0x0c)
	struct FVector ReticleParticleScale; // 0x2cc(0x0c)
	struct TArray<struct URSParticleSystemComponentBase*> ReticleParticleHandle; // 0x2d8(0x10)
	float ReticleParticleDelayTime; // 0x2e8(0x04)
	float CameraFovTargetHeightOffset; // 0x2ec(0x04)
	bool bFromNpc; // 0x2f0(0x01)

	void SetCableEnergy(struct FVector energy); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.SetCableEnergy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecRevive(bool bExec); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.IsExecRevive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetReticleParticleDelay(float DelayTime); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.GetReticleParticleDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndReticleParticle(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.EndReticleParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnReticleParticle(struct ARSBattlePlayer_C* InRevivePlayer); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.SpawnReticleParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnParticle(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.SpawnParticle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcRootOffset(struct ARSBattlePlayer_C* InHelpPlayer, struct ARSBattlePlayer_C* InRevivePlayer, struct FVector Offset); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.CalcRootOffset // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndReviveCamera(struct ARSBattlePlayer_C* Player); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.EndReviveCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginReviveCamera(struct ARSBattlePlayer_C* Player, struct ARSBattlePlayer_C* TargetPlayer); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.BeginReviveCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSlow(bool bInSlow); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.SetSlow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCameraDirection(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.EndCameraDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginCameraDirection(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.BeginCameraDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFinishRevive(bool bFinish); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.IsFinishRevive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateTimeDilation(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.UpdateTimeDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecCableEvent(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ExecCableEvent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishRevive(bool bCableOff); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.FinishRevive // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndDirection(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.EndDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginDirection(struct ARSBattlePlayer_C* InRevivePlayer, bool bInFromNpc); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.BeginDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__FinishedFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__UpdateFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__ControllerVibrationEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__ControllerVibrationEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__CameraShakeEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__CameraShakeEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__CablePhysicsEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__CablePhysicsEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__MotionEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__MotionEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__SlowEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__SlowEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__CameraEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__CameraEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__EffectEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__EffectEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__ReviveEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__ReviveEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__PostProcessEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__PostProcessEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void ReviveTimeLine__CableEvent__EventFunc(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReviveTimeLine__CableEvent__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void BeginTimeLine(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.BeginTimeLine // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndTimeLine(); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.EndTimeLine // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NpcReviveDirectionActor(int32_t EntryPoint); // Function BP_NpcReviveDirectionActor.BP_NpcReviveDirectionActor_C.ExecuteUbergraph_BP_NpcReviveDirectionActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

