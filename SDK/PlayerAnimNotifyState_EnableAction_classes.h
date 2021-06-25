// BlueprintGeneratedClass PlayerAnimNotifyState_EnableAction.PlayerAnimNotifyState_EnableAction_C
// Size: 0x32 (Inherited: 0x30)
struct UPlayerAnimNotifyState_EnableAction_C : UAnimNotifyState {
	bool bNotOff; // 0x30(0x01)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x31(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_EnableAction.PlayerAnimNotifyState_EnableAction_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_EnableAction.PlayerAnimNotifyState_EnableAction_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

