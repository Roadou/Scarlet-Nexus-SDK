// BlueprintGeneratedClass AnimNotifyState_TimeDilation.AnimNotifyState_TimeDilation_C
// Size: 0x47 (Inherited: 0x30)
struct UAnimNotifyState_TimeDilation_C : UAnimNotifyState {
	struct FString ClaimantName; // 0x30(0x10)
	float TimeDilation; // 0x40(0x04)
	enum class EAnimNotifyTimeDilationMode TimeDilationMode; // 0x44(0x01)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x45(0x01)
	bool IsDeadOnly; // 0x46(0x01)

	struct FString GetNotifyName(); // Function AnimNotifyState_TimeDilation.AnimNotifyState_TimeDilation_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_TimeDilation.AnimNotifyState_TimeDilation_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_TimeDilation.AnimNotifyState_TimeDilation_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

