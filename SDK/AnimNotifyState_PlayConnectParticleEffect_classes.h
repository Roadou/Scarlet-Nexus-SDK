// BlueprintGeneratedClass AnimNotifyState_PlayConnectParticleEffect.AnimNotifyState_PlayConnectParticleEffect_C
// Size: 0x58 (Inherited: 0x30)
struct UAnimNotifyState_PlayConnectParticleEffect_C : UAnimNotifyState {
	struct UParticleSystem* ParticleSystem; // 0x30(0x08)
	enum class EEffectConnectPoint SourceConnectPoint; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName SourceSocketName; // 0x3c(0x08)
	enum class EEffectConnectPoint TargetConnectPoint; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct FName TargetSocketName; // 0x48(0x08)
	struct USoundAtomCue* PlaySound; // 0x50(0x08)

	struct FString GetNotifyName(); // Function AnimNotifyState_PlayConnectParticleEffect.AnimNotifyState_PlayConnectParticleEffect_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_PlayConnectParticleEffect.AnimNotifyState_PlayConnectParticleEffect_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_PlayConnectParticleEffect.AnimNotifyState_PlayConnectParticleEffect_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

