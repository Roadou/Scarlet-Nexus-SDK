// BlueprintGeneratedClass AnimNotifyState_AutoAimTownNpc.AnimNotifyState_AutoAimTownNpc_C
// Size: 0x50 (Inherited: 0x30)
struct UAnimNotifyState_AutoAimTownNpc_C : UAnimNotifyState {
	float aimSpeed; // 0x30(0x04)
	float maxAimAngle; // 0x34(0x04)
	bool IsSocketRotation; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName SocketName; // 0x3c(0x08)
	float offsetDegree; // 0x44(0x04)
	enum class EDirectionOfRotation DirectionOfRotate; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float frontDegree; // 0x4c(0x04)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_AutoAimTownNpc.AnimNotifyState_AutoAimTownNpc_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AutoAimTownNpc.AnimNotifyState_AutoAimTownNpc_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

