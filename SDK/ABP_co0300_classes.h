// AnimBlueprintGeneratedClass ABP_co0300.ABP_co0300_C
// Size: 0x6b8 (Inherited: 0x270)
struct UABP_co0300_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2a8(0x48)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x2f0(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x300(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x320(0x108)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x428(0xb8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x4e0(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x528(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x550(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x578(0xc0)
	struct UAnimMontage* CurrentMontage; // 0x638(0x08)
	struct FTransform SocketTransform; // 0x640(0x30)
	struct UCurveFloat* Curve; // 0x670(0x08)
	bool IsResetBoneTransform; // 0x678(0x01)
	char pad_679[0x7]; // 0x679(0x07)
	struct FTransform DefaultSocketTransform; // 0x680(0x30)
	float SetBoneTransformCorrectionAlpha; // 0x6b0(0x04)
	float BlendWeight; // 0x6b4(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_co0300.ABP_co0300_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhaseChangeCameraTransform(struct ABP_SpecialStaticNodeActor_C* SpecialStaticNodeActor); // Function ABP_co0300.ABP_co0300_C.SetPhaseChangeCameraTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0300_AnimGraphNode_ModifyBone_333911AB464D2289FFC343B79B97D0F7(); // Function ABP_co0300.ABP_co0300_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0300_AnimGraphNode_ModifyBone_333911AB464D2289FFC343B79B97D0F7 // (BlueprintEvent) // @ game+0x1685580
	void BlueprintInitializeAnimation(); // Function ABP_co0300.ABP_co0300_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void EventMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function ABP_co0300.ABP_co0300_C.EventMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_StartResetBoneTransform(); // Function ABP_co0300.ABP_co0300_C.AnimNotify_StartResetBoneTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintBeginPlay(); // Function ABP_co0300.ABP_co0300_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_co0300.ABP_co0300_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_co0300(int32_t EntryPoint); // Function ABP_co0300.ABP_co0300_C.ExecuteUbergraph_ABP_co0300 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

