// BlueprintGeneratedClass AnimNotify_CameraShakeBP_SASCopy.AnimNotify_CameraShakeBP_SASCopy_C
// Size: 0x64 (Inherited: 0x44)
struct UAnimNotify_CameraShakeBP_SASCopy_C : UAnimNotify_CameraShakeBP_C {
	char pad_44[0x4]; // 0x44(0x04)
	struct UCameraShake* CameraShakeClass_Copy2; // 0x48(0x08)
	float Scale_Copy2; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct UCameraShake* CameraShakeClass_Copy1; // 0x58(0x08)
	float Scale_Copy1; // 0x60(0x04)

	void GetShakeData(struct USkeletalMeshComponent* MeshComp, struct UCameraShake* CameraShakeClass, float Scale); // Function AnimNotify_CameraShakeBP_SASCopy.AnimNotify_CameraShakeBP_SASCopy_C.GetShakeData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FString GetNotifyName(); // Function AnimNotify_CameraShakeBP_SASCopy.AnimNotify_CameraShakeBP_SASCopy_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

