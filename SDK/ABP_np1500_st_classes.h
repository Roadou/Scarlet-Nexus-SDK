// AnimBlueprintGeneratedClass ABP_np1500_st.ABP_np1500_st_C
// Size: 0x578 (Inherited: 0x270)
struct UABP_np1500_st_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2a8(0x78)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x320(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x368(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x420(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x448(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x470(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x4b8(0xc0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_np1500_st.ABP_np1500_st_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_np1500_st(int32_t EntryPoint); // Function ABP_np1500_st.ABP_np1500_st_C.ExecuteUbergraph_ABP_np1500_st // (Final|UbergraphFunction) // @ game+0x1685580
};

