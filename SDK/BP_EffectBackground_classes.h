// BlueprintGeneratedClass BP_EffectBackground.BP_EffectBackground_C
// Size: 0x330 (Inherited: 0x288)
struct ABP_EffectBackground_C : AEffectBackground {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBillboardComponent* Billboard; // 0x290(0x08)
	struct UArrowComponent* arrow; // 0x298(0x08)
	struct UBP_RSParticleBackgroundComponent_C* ParticleBackgroundComponent; // 0x2a0(0x08)
	struct UBP_RSParticleBackgroundComponent_C* Emitter; // 0x2a8(0x08)
	struct AActor* AttachParent; // 0x2b0(0x08)
	bool AttachmentParticle; // 0x2b8(0x01)
	bool UseDistanceCulling; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct FEffectBackgroundParameter EmitterParameter; // 0x2c0(0x60)
	struct FMulticastInlineDelegate SpawnBGEmitter; // 0x320(0x10)

	bool SetDitherValue(float Value); // Function BP_EffectBackground.BP_EffectBackground_C.SetDitherValue // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventCulling(bool Culling); // Function BP_EffectBackground.BP_EffectBackground_C.SetEventCulling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdateAttachParent(); // Function BP_EffectBackground.BP_EffectBackground_C.PrivateUpdateAttachParent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticle(); // Function BP_EffectBackground.BP_EffectBackground_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayParticle(); // Function BP_EffectBackground.BP_EffectBackground_C.PlayParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EffectBackground.BP_EffectBackground_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EffectBackground.BP_EffectBackground_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EffectBackground.BP_EffectBackground_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ProtectedDetachParticle(); // Function BP_EffectBackground.BP_EffectBackground_C.ProtectedDetachParticle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedAttachParticle(struct AActor* Parent); // Function BP_EffectBackground.BP_EffectBackground_C.ProtectedAttachParticle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticleImplements(); // Function BP_EffectBackground.BP_EffectBackground_C.StopParticleImplements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAndHideParticleImplements(); // Function BP_EffectBackground.BP_EffectBackground_C.StopAndHideParticleImplements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayParticleImplements(); // Function BP_EffectBackground.BP_EffectBackground_C.PlayParticleImplements // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateRetryRegistParticleManager(); // Function BP_EffectBackground.BP_EffectBackground_C.PrivateRetryRegistParticleManager // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EffectBackground.BP_EffectBackground_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void CallParticleSE(struct FName EventName, float EmitterTime, struct FVector Location, struct FVector Velocity); // Function BP_EffectBackground.BP_EffectBackground_C.CallParticleSE // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EffectBackground(int32_t EntryPoint); // Function BP_EffectBackground.BP_EffectBackground_C.ExecuteUbergraph_BP_EffectBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void SpawnBGEmitter__DelegateSignature(struct UBP_RSParticleBackgroundComponent_C* Emitter); // Function BP_EffectBackground.BP_EffectBackground_C.SpawnBGEmitter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

