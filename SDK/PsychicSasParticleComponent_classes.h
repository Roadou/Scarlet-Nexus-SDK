// BlueprintGeneratedClass PsychicSasParticleComponent.PsychicSasParticleComponent_C
// Size: 0x125 (Inherited: 0xc0)
struct UPsychicSasParticleComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct ABP_PsychicObjectBasic_C* Owner Object; // 0xc8(0x08)
	struct URSParticleSystemComponentBase* CaptureParticle; // 0xd0(0x08)
	struct URSParticleSystemComponentBase* CaptureFireParticle; // 0xd8(0x08)
	struct URSParticleSystemComponentBase* CaptureElectricParticle; // 0xe0(0x08)
	struct URSParticleSystemComponentBase* AttackParticle; // 0xe8(0x08)
	struct TArray<struct UMeshComponent*> MeshCompList; // 0xf0(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> MeshCaptureParticleList; // 0x100(0x10)
	struct TArray<struct URSParticleSystemComponentBase*> MeshAttackParticleList; // 0x110(0x10)
	bool bOldParticleProc; // 0x120(0x01)
	bool bDebugPrintSpawnExist; // 0x121(0x01)
	bool bDebugPrintDeletetExist; // 0x122(0x01)
	bool bDebugPrintSpawn; // 0x123(0x01)
	bool bDebugPrintDelete; // 0x124(0x01)

	void GetAttackEmitterTemplate(enum class E_SASKind SasKind, bool IsCapture, bool IsSkeletalMesh, struct UParticleSystem* Template); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.GetAttackEmitterTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCaptureEmitterTemplate(enum class E_SASKind SasKind, bool IsCapture, bool IsSkeletalMesh, struct UParticleSystem* Template); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.GetCaptureEmitterTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetParticleComponent(enum class E_SASKind SasKind, bool Capture, bool Attack, struct UMeshComponent* MeshComp, struct URSParticleSystemComponentBase* ParticleComponent); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.GetParticleComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetParticleComponent(enum class E_SASKind kind, bool Capture, bool Attack, struct UMeshComponent* mesh comp, struct URSParticleSystemComponentBase* Component, struct URSParticleSystemComponentBase* ReturnComponent); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.SetParticleComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOwnerObject(struct ABP_PsychicObjectBasic_C* Owner); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.GetOwnerObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DestroyEffectAll(); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.DestroyEffectAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyEffect(enum class E_SASKind SasKind, bool Capture, bool Attack, struct UMeshComponent* MeshComp); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.DestroyEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeactivateEffectAll(); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.DeactivateEffectAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeactivateEffect(enum class E_SASKind SasKind, bool Capture, bool Attack, struct UMeshComponent* MeshComp); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.DeactivateEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnMeshEffect(struct UMeshComponent* mesh in, enum class E_SASKind sas kind in, bool capture in, float rate in, struct FVector size in, float rateAura in, struct FVector sizeAura in, struct URSParticleSystemComponentBase* particle system); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.SpawnMeshEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnEffectOld(enum class E_SASKind SasKind, bool Force, bool Capture, float Rate, struct FVector Size, float rateAura, struct FVector sizeAura); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.SpawnEffectOld // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnParticleEffect(enum class E_SASKind SasKind, bool Force, bool Capture, bool Attack, struct UMeshComponent* MeshComp, float Rate, struct FVector Size, float rateAura, struct FVector sizeAura, struct URSParticleSystemComponentBase* ParticleSystem); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.SpawnParticleEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_PsychicSasParticleComponent(int32_t EntryPoint); // Function PsychicSasParticleComponent.PsychicSasParticleComponent_C.ExecuteUbergraph_PsychicSasParticleComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

