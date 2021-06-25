// BlueprintGeneratedClass AnimNotifyState_AutoAimBP.AnimNotifyState_AutoAimBP_C
// Size: 0x5f (Inherited: 0x30)
struct UAnimNotifyState_AutoAimBP_C : UAnimNotifyState {
	float aimSpeed; // 0x30(0x04)
	float aimSpeedInternalLock; // 0x34(0x04)
	float maxAimAngle; // 0x38(0x04)
	bool ToTargetBrainCrash; // 0x3c(0x01)
	bool isInternalLock; // 0x3d(0x01)
	bool isToCamera; // 0x3e(0x01)
	bool isToWeakPoint; // 0x3f(0x01)
	bool IsSocketRotation; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FName SocketName; // 0x44(0x08)
	bool bHologram; // 0x4c(0x01)
	bool bToTalkLocation; // 0x4d(0x01)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	float offsetDegree; // 0x50(0x04)
	enum class EDirectionOfRotation DirectionOfRotate; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float frontDegree; // 0x58(0x04)
	bool bUseCharacterRate; // 0x5c(0x01)
	bool FindTargetWhenNoTarget; // 0x5d(0x01)
	bool isDetectTargetChange; // 0x5e(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_AutoAimBP.AnimNotifyState_AutoAimBP_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AutoAimBP.AnimNotifyState_AutoAimBP_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

