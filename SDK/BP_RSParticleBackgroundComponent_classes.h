// BlueprintGeneratedClass BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C
// Size: 0x7ba (Inherited: 0x6fb)
struct UBP_RSParticleBackgroundComponent_C : UBP_RSParticleSystemComponent_C {
	char pad_6FB[0x5]; // 0x6fb(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	bool isStopAtST; // 0x708(0x01)
	bool playAtGameStart; // 0x709(0x01)
	bool replayAtEventFinish; // 0x70a(0x01)
	bool UseDistanceCulling; // 0x70b(0x01)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct FEffectBackgroundParameter EmitterParameter; // 0x710(0x60)
	struct FTimerHandle TimerHandle; // 0x770(0x08)
	int32_t SpawnTimeIndex; // 0x778(0x04)
	char pad_77C[0x4]; // 0x77c(0x04)
	struct TArray<float> SpawnTimes; // 0x780(0x10)
	float endTime; // 0x790(0x04)
	bool UseRandomTransform; // 0x794(0x01)
	char pad_795[0x3]; // 0x795(0x03)
	struct TArray<struct FString> PlayEventName; // 0x798(0x10)
	struct TArray<struct FString> StopEventName; // 0x7a8(0x10)
	bool EventCulling; // 0x7b8(0x01)
	bool BrainFieldParticle; // 0x7b9(0x01)

	void IsBrainFieldParticle(bool BrainField); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.IsBrainFieldParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBrainFieldParticle(bool BrainField); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.SetBrainFieldParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlayCheckFlags(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivatePlayCheckFlags // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventCulling(bool Culling); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.SetEventCulling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSetupTransform(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateSetupTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateEndBGEmitterLoop(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateEndBGEmitterLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateSpawnBGEmitterLoop(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateSpawnBGEmitterLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStartBGEmitterLoop(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PrivateStartBGEmitterLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBGEmitterParameter(struct FEffectBackgroundParameter Parameter); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.SetBGEmitterParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayParticle(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PlayParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticle(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAndHideParticle(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.StopAndHideParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PlayCheckFlags(); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.PlayCheckFlags // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventOnSystemFinished(struct UParticleSystemComponent* PSystem); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.EventOnSystemFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RSParticleBackgroundComponent(int32_t EntryPoint); // Function BP_RSParticleBackgroundComponent.BP_RSParticleBackgroundComponent_C.ExecuteUbergraph_BP_RSParticleBackgroundComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

