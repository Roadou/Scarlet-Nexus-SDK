// BlueprintGeneratedClass AnimNotify_VibrationController.AnimNotify_VibrationController_C
// Size: 0x48 (Inherited: 0x38)
struct UAnimNotify_VibrationController_C : UAnimNotify {
	bool bOnlyMainPlayer; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UForceFeedbackEffect* VibrationParameterAsset; // 0x40(0x08)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_VibrationController.AnimNotify_VibrationController_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

