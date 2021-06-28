// BlueprintGeneratedClass AnimNotifyState_DirectionControllBP.AnimNotifyState_DirectionControllBP_C
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_DirectionControllBP_C : UAnimNotifyState {
	float RotateSpeed; // 0x30(0x04)
	bool bUseSocket; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FName SocketName; // 0x38(0x08)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_DirectionControllBP.AnimNotifyState_DirectionControllBP_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_DirectionControllBP.AnimNotifyState_DirectionControllBP_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

