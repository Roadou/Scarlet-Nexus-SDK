// AnimBlueprintGeneratedClass ABP_ch0400_Sub_Physics.ABP_ch0400_Sub_Physics_C
// Size: 0xbe0 (Inherited: 0x280)
struct UABP_ch0400_Sub_Physics_C : URSPlayerSubAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x288(0x78)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x300(0x30)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x330(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x570(0x240)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7b0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7d0(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x7f0(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x8a8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8d0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x8f8(0xa0)
	char pad_998[0x8]; // 0x998(0x08)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x9a0(0x240)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function ABP_ch0400_Sub_Physics.ABP_ch0400_Sub_Physics_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0400_Sub_Physics(int32_t EntryPoint); // Function ABP_ch0400_Sub_Physics.ABP_ch0400_Sub_Physics_C.ExecuteUbergraph_ABP_ch0400_Sub_Physics // (Final|UbergraphFunction) // @ game+0x1685580
};

