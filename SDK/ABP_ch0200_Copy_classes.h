// AnimBlueprintGeneratedClass ABP_ch0200_Copy.ABP_ch0200_Copy_C
// Size: 0xad0 (Inherited: 0x300)
struct UABP_ch0200_Copy_C : UCopyPlayerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x338(0x140)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x478(0x48)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x4c0(0x1e0)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x6a0(0x1e0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x880(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8a0(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x8c0(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x908(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x9c8(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xa80(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xaa8(0x28)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ch0200_Copy.ABP_ch0200_Copy_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0200_Copy(int32_t EntryPoint); // Function ABP_ch0200_Copy.ABP_ch0200_Copy_C.ExecuteUbergraph_ABP_ch0200_Copy // (Final|UbergraphFunction) // @ game+0x1685580
};

