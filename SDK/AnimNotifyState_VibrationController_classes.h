// BlueprintGeneratedClass AnimNotifyState_VibrationController.AnimNotifyState_VibrationController_C
// Size: 0x40 (Inherited: 0x30)
struct UAnimNotifyState_VibrationController_C : UAnimNotifyState {
	bool bOnlyMainPlayer; // 0x30(0x01)
	bool bLooping; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct UForceFeedbackEffect* VibrationParameterAsset; // 0x38(0x08)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_VibrationController.AnimNotifyState_VibrationController_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_VibrationController.AnimNotifyState_VibrationController_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

