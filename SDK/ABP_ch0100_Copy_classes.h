// AnimBlueprintGeneratedClass ABP_ch0100_Copy.ABP_ch0100_Copy_C
// Size: 0x8c0 (Inherited: 0x300)
struct UABP_ch0100_Copy_C : UCopyPlayerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x338(0x140)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x478(0x48)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x4c0(0x1e0)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x6a0(0x1e0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x880(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8a0(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ch0100_Copy.ABP_ch0100_Copy_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0100_Copy(int32_t EntryPoint); // Function ABP_ch0100_Copy.ABP_ch0100_Copy_C.ExecuteUbergraph_ABP_ch0100_Copy // (Final|UbergraphFunction) // @ game+0x1685580
};

