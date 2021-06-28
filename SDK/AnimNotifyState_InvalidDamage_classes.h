// BlueprintGeneratedClass AnimNotifyState_InvalidDamage.AnimNotifyState_InvalidDamage_C
// Size: 0x3d (Inherited: 0x30)
struct UAnimNotifyState_InvalidDamage_C : UAnimNotifyState {
	int32_t Param; // 0x30(0x04)
	struct FName ClaimantName; // 0x34(0x08)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x3c(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_InvalidDamage.AnimNotifyState_InvalidDamage_C.Received_NotifyEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_InvalidDamage.AnimNotifyState_InvalidDamage_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

