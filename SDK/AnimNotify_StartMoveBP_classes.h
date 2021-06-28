// BlueprintGeneratedClass AnimNotify_StartMoveBP.AnimNotify_StartMoveBP_C
// Size: 0x58 (Inherited: 0x38)
struct UAnimNotify_StartMoveBP_C : UAnimNotify {
	struct FName CustomName; // 0x38(0x08)
	struct FVector Direction; // 0x40(0x0c)
	float InitialSpeed; // 0x4c(0x04)
	float Acceleration; // 0x50(0x04)
	float endSpeed; // 0x54(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_StartMoveBP.AnimNotify_StartMoveBP_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

