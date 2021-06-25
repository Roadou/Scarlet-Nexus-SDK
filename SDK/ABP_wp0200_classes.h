// AnimBlueprintGeneratedClass ABP_wp0200.ABP_wp0200_C
// Size: 0xea8 (Inherited: 0x3f0)
struct UABP_wp0200_C : UWp0200AnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x3f8(0x30)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x428(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x438(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x540(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x648(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x750(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x858(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x960(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xa68(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xb70(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xc78(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xd80(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe88(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_wp0200.ABP_wp0200_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_wp0200(int32_t EntryPoint); // Function ABP_wp0200.ABP_wp0200_C.ExecuteUbergraph_ABP_wp0200 // (Final|UbergraphFunction) // @ game+0x1685580
};

