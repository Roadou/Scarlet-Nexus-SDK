// BlueprintGeneratedClass AnimNotify_TimeDilationUnaffected.AnimNotify_TimeDilationUnaffected_C
// Size: 0x46 (Inherited: 0x38)
struct UAnimNotify_TimeDilationUnaffected_C : UAnimNotify {
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float TimeDilation; // 0x3c(0x04)
	float TimeDilationTime; // 0x40(0x04)
	enum class EAnimNotifyTimeDilationMode TimeDilationMode; // 0x44(0x01)
	bool IsDeadOnly; // 0x45(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_TimeDilationUnaffected.AnimNotify_TimeDilationUnaffected_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

