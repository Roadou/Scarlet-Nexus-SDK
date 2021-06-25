// AnimBlueprintGeneratedClass ABP_om0404.ABP_om0404_C
// Size: 0x308 (Inherited: 0x270)
struct UABP_om0404_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2a8(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c0(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_om0404.ABP_om0404_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_om0404(int32_t EntryPoint); // Function ABP_om0404.ABP_om0404_C.ExecuteUbergraph_ABP_om0404 // (Final|UbergraphFunction) // @ game+0x1685580
};

