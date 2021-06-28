// BlueprintGeneratedClass PlayerAnimNotifyState_CameraRootLerpActionType.PlayerAnimNotifyState_CameraRootLerpActionType_C
// Size: 0x44 (Inherited: 0x30)
struct UPlayerAnimNotifyState_CameraRootLerpActionType_C : UAnimNotifyState {
	bool UseActionType; // 0x30(0x01)
	enum class EPlayerCameraActionType ActionType; // 0x31(0x01)
	enum class EPlayerCameraActionPriority Priority; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	float InterpolationTimeStart; // 0x34(0x04)
	float InterpolationTimeEnd; // 0x38(0x04)
	float LerpValue; // 0x3c(0x04)
	float MaxDistance; // 0x40(0x04)

	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_CameraRootLerpActionType.PlayerAnimNotifyState_CameraRootLerpActionType_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_CameraRootLerpActionType.PlayerAnimNotifyState_CameraRootLerpActionType_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

