// BlueprintGeneratedClass AnimNotify_OnRadialBlue_SASCopy.AnimNotify_OnRadialBlue_SASCopy_C
// Size: 0x79 (Inherited: 0x68)
struct UAnimNotify_OnRadialBlue_SASCopy_C : UAnimNotify_OnRadialBlur {
	struct UCurveVector* CurveData_Copy1; // 0x68(0x08)
	struct UCurveVector* CurveData_Copy2; // 0x70(0x08)
	enum class ECharaExecuteNotifyKind ExecuteKind; // 0x78(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_OnRadialBlue_SASCopy.AnimNotify_OnRadialBlue_SASCopy_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct UCurveVector* GetUseCurveData(struct USkeletalMeshComponent* MeshComp); // Function AnimNotify_OnRadialBlue_SASCopy.AnimNotify_OnRadialBlue_SASCopy_C.GetUseCurveData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

