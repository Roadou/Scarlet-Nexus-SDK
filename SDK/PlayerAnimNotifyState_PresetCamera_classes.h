// BlueprintGeneratedClass PlayerAnimNotifyState_PresetCamera.PlayerAnimNotifyState_PresetCamera_C
// Size: 0x40 (Inherited: 0x30)
struct UPlayerAnimNotifyState_PresetCamera_C : UAnimNotifyState {
	struct FName PresetName; // 0x30(0x08)
	bool bSetEndPitch; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float EndPitch; // 0x3c(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_PresetCamera.PlayerAnimNotifyState_PresetCamera_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_PresetCamera.PlayerAnimNotifyState_PresetCamera_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

