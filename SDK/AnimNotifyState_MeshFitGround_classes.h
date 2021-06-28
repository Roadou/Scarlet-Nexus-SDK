// BlueprintGeneratedClass AnimNotifyState_MeshFitGround.AnimNotifyState_MeshFitGround_C
// Size: 0x35 (Inherited: 0x30)
struct UAnimNotifyState_MeshFitGround_C : UAnimNotifyState {
	float interpSpeed; // 0x30(0x04)
	bool bEndFit; // 0x34(0x01)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_MeshFitGround.AnimNotifyState_MeshFitGround_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FString GetNotifyName(); // Function AnimNotifyState_MeshFitGround.AnimNotifyState_MeshFitGround_C.GetNotifyName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool Received_NotifyTick(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float FrameDeltaTime); // Function AnimNotifyState_MeshFitGround.AnimNotifyState_MeshFitGround_C.Received_NotifyTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

