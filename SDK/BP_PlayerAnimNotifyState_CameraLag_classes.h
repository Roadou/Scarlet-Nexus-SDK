// BlueprintGeneratedClass BP_PlayerAnimNotifyState_CameraLag.BP_PlayerAnimNotifyState_CameraLag_C
// Size: 0x38 (Inherited: 0x30)
struct UBP_PlayerAnimNotifyState_CameraLag_C : UAnimNotifyState {
	float CameraLagSpeed; // 0x30(0x04)
	float CameraLagMaxDistance; // 0x34(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_PlayerAnimNotifyState_CameraLag.BP_PlayerAnimNotifyState_CameraLag_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function BP_PlayerAnimNotifyState_CameraLag.BP_PlayerAnimNotifyState_CameraLag_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

