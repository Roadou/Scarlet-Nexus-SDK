// BlueprintGeneratedClass PlayerAnimNotifyState_SASCopyDir.PlayerAnimNotifyState_SASCopyDir_C
// Size: 0x3c (Inherited: 0x30)
struct UPlayerAnimNotifyState_SASCopyDir_C : UAnimNotifyState {
	float Angle; // 0x30(0x04)
	float InTime; // 0x34(0x04)
	float OutTime; // 0x38(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_SASCopyDir.PlayerAnimNotifyState_SASCopyDir_C.Received_NotifyEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_SASCopyDir.PlayerAnimNotifyState_SASCopyDir_C.Received_NotifyBegin // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

