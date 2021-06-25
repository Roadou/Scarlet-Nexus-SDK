// BlueprintGeneratedClass BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C
// Size: 0x16c (Inherited: 0x130)
struct UBP_EnemyAroundWeakEffectComponent_C : UEnemyAroundEffectComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x130(0x08)
	struct UParticleSystem* AroundWeakEffect; // 0x138(0x08)
	struct URSParticleSystemComponentBase* EffectHandle; // 0x140(0x08)
	struct FName VertSurfaceParameterName; // 0x148(0x08)
	bool bVisible; // 0x150(0x01)
	bool bUseEffect; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	float CommonRate; // 0x154(0x04)
	float AttachRate; // 0x158(0x04)
	struct FName VertSurfaceParameterCommonRateName; // 0x15c(0x08)
	struct FName VertSurfaceParameterAttachRateName; // 0x164(0x08)

	struct URSParticleSystemComponentBase* SpawnEmitter_FromNative(struct USkeletalMeshComponent* TargetMesh); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.SpawnEmitter_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsVisible(bool IsVisible); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.IsVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void HiddenEffect(bool NewHidden, bool dummy); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.HiddenEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEffectParam(float newCommonRate, float newAttachRate, bool dummy); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.SetEffectParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseEffect(bool Use); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.IsUseEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsVisibleEffect(bool bVisible); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.IsVisibleEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleEffect(bool Visible); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.SetVisibleEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAroundWeakEffect(int32_t Index); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.EndAroundWeakEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAroundWeakEffect(int32_t Index, bool bSuccess); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.StartAroundWeakEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RegisterCameraDitherParticleHandle_FromNative(struct AActor* Owner, struct URSParticleSystemComponentBase* AroundWeakEffect); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.RegisterCameraDitherParticleHandle_FromNative // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterCameraDitherParticleHandle_FromNative(struct AActor* Owner, struct URSParticleSystemComponentBase* EffectHandle); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.UnregisterCameraDitherParticleHandle_FromNative // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent(int32_t EntryPoint); // Function BP_EnemyAroundWeakEffectComponent.BP_EnemyAroundWeakEffectComponent_C.ExecuteUbergraph_BP_EnemyAroundWeakEffectComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

