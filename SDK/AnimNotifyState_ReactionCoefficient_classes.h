// BlueprintGeneratedClass AnimNotifyState_ReactionCoefficient.AnimNotifyState_ReactionCoefficient_C
// Size: 0x44 (Inherited: 0x30)
struct UAnimNotifyState_ReactionCoefficient_C : UAnimNotifyState {
	bool bNormalAttack; // 0x30(0x01)
	bool bPsychicAttack; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float ReactionSRate; // 0x34(0x04)
	float ReactionLRate; // 0x38(0x04)
	float DownRate; // 0x3c(0x04)
	float CrashRate; // 0x40(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_ReactionCoefficient.AnimNotifyState_ReactionCoefficient_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_ReactionCoefficient.AnimNotifyState_ReactionCoefficient_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

