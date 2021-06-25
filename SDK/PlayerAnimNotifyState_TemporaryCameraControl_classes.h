// BlueprintGeneratedClass PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C
// Size: 0x6b (Inherited: 0x30)
struct UPlayerAnimNotifyState_TemporaryCameraControl_C : UAnimNotifyState {
	float BeginLerpTime; // 0x30(0x04)
	float EndLerpTime; // 0x34(0x04)
	bool bControlRootOffset; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FVector rootOffset; // 0x3c(0x0c)
	bool bControlDistance; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float DistanceOffset; // 0x4c(0x04)
	bool bControlFov; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FOV; // 0x54(0x04)
	enum class EEasingFunc BeginEaseFunc; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float BeginEaseBlendExp; // 0x5c(0x04)
	enum class EEasingFunc EndEaseFunc; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float EndEaseBlendExp; // 0x64(0x04)
	enum class EPlayerCameraActionPriority Priority; // 0x68(0x01)
	bool bEnemy; // 0x69(0x01)
	bool bHologram; // 0x6a(0x01)

	void GetCameraComponent(struct AActor* OwnerActor, struct UBP_PlayerCameraComponent_C* Camera); // Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.GetCameraComponent // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function PlayerAnimNotifyState_TemporaryCameraControl.PlayerAnimNotifyState_TemporaryCameraControl_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

