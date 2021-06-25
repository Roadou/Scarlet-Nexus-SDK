// AnimBlueprintGeneratedClass ABP_ch0400_Menu.ABP_ch0400_Menu_C
// Size: 0x368 (Inherited: 0x270)
struct UABP_ch0400_Menu_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2a8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f0(0x78)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ch0400_Menu.ABP_ch0400_Menu_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0400_Menu(int32_t EntryPoint); // Function ABP_ch0400_Menu.ABP_ch0400_Menu_C.ExecuteUbergraph_ABP_ch0400_Menu // (Final|UbergraphFunction) // @ game+0x1685580
};

