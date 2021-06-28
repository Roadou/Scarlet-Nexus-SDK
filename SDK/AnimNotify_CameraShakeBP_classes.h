// BlueprintGeneratedClass AnimNotify_CameraShakeBP.AnimNotify_CameraShakeBP_C
// Size: 0x44 (Inherited: 0x38)
struct UAnimNotify_CameraShakeBP_C : UAnimNotify {
	struct UCameraShake* CameraShakeClass; // 0x38(0x08)
	float Scale; // 0x40(0x04)

	void GetShakeData(struct USkeletalMeshComponent* MeshComp, struct UCameraShake* CameraShakeClass, float Scale); // Function AnimNotify_CameraShakeBP.AnimNotify_CameraShakeBP_C.GetShakeData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FString GetNotifyName(); // Function AnimNotify_CameraShakeBP.AnimNotify_CameraShakeBP_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_CameraShakeBP.AnimNotify_CameraShakeBP_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

