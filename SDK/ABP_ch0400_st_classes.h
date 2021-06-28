// AnimBlueprintGeneratedClass ABP_ch0400_st.ABP_ch0400_st_C
// Size: 0x808 (Inherited: 0x280)
struct UABP_ch0400_st_C : URSStaticEventCharaAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2b8(0x78)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x330(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x378(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x430(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x458(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x480(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x4c8(0xc0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x588(0xe0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x668(0xe0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x748(0xc0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ch0400_st.ABP_ch0400_st_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0400_st(int32_t EntryPoint); // Function ABP_ch0400_st.ABP_ch0400_st_C.ExecuteUbergraph_ABP_ch0400_st // (Final|UbergraphFunction) // @ game+0x1685580
};

