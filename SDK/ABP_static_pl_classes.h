// AnimBlueprintGeneratedClass ABP_static_pl.ABP_static_pl_C
// Size: 0x5d4 (Inherited: 0x270)
struct UABP_static_pl_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x278(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x290(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2d8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x308(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x350(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x408(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x430(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x458(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x518(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x540(0x48)
	struct UAnimMontage* beforeAnimMontage; // 0x588(0x08)
	struct UAnimMontage* CurrentAnimMontage; // 0x590(0x08)
	bool IsLoop; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	float PlayRate; // 0x59c(0x04)
	float StartPosition; // 0x5a0(0x04)
	bool isPlay; // 0x5a4(0x01)
	bool PlayToggle; // 0x5a5(0x01)
	bool IsPlayBefore; // 0x5a6(0x01)
	char pad_5A7[0x1]; // 0x5a7(0x01)
	struct FTimerHandle LoopMotionTimer; // 0x5a8(0x08)
	bool IsPlayBeforeAnimation; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct ABP_static_pl_C* BP_static_pl; // 0x5b8(0x08)
	bool IsGeneralStatic; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	float AddMotionBlendWeight; // 0x5c4(0x04)
	struct UAnimMontage* LoopAnimMontage; // 0x5c8(0x08)
	float ShaderAnimeMotionWeight; // 0x5d0(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_static_pl.ABP_static_pl_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPlayMontage(); // Function ABP_static_pl.ABP_static_pl_C.EventPlayMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBoardAnimation(); // Function ABP_static_pl.ABP_static_pl_C.StartBoardAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_StartPlayAnimation(); // Function ABP_static_pl.ABP_static_pl_C.AnimNotify_StartPlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_static_pl.ABP_static_pl_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_FinishBeforePlay(); // Function ABP_static_pl.ABP_static_pl_C.AnimNotify_FinishBeforePlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_FinishMotion(); // Function ABP_static_pl.ABP_static_pl_C.AnimNotify_FinishMotion // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SettingGenneralBoard(); // Function ABP_static_pl.ABP_static_pl_C.SettingGenneralBoard // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintBeginPlay(); // Function ABP_static_pl.ABP_static_pl_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnMontageEnd(struct UAnimMontage* Montage, bool bInterrupted); // Function ABP_static_pl.ABP_static_pl_C.OnMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_PlayShot(); // Function ABP_static_pl.ABP_static_pl_C.AnimNotify_PlayShot // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_static_pl(int32_t EntryPoint); // Function ABP_static_pl.ABP_static_pl_C.ExecuteUbergraph_ABP_static_pl // (Final|UbergraphFunction) // @ game+0x1685580
};

