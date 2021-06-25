// AnimBlueprintGeneratedClass ABP_Ajito_ch1000.ABP_Ajito_ch1000_C
// Size: 0x1090 (Inherited: 0x720)
struct UABP_Ajito_ch1000_C : URSAjitoAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x728(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x758(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x778(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x818(0x78)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x890(0x2b8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb48(0xb8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc00(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xc20(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xc68(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xd08(0x78)
	bool __CustomProperty_bKawaiiPhysics_FD7CF67E4A3806D1EC359F97A8E1F00F; // 0xd80(0x01)
	char pad_D81[0x3]; // 0xd81(0x03)
	float __CustomProperty_PhysicsIdlingSec_FD7CF67E4A3806D1EC359F97A8E1F00F; // 0xd84(0x04)
	float __CustomProperty_PhysicsAlpha_FD7CF67E4A3806D1EC359F97A8E1F00F; // 0xd88(0x04)
	char pad_D8C[0x4]; // 0xd8c(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xd90(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xe30(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xef0(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xf38(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf60(0x28)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf88(0x108)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Ajito_ch1000.ABP_Ajito_ch1000_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFromParentActor(); // Function ABP_Ajito_ch1000.ABP_Ajito_ch1000_C.InitializeFromParentActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintInitializeAnimation(); // Function ABP_Ajito_ch1000.ABP_Ajito_ch1000_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_Ajito_ch1000(int32_t EntryPoint); // Function ABP_Ajito_ch1000.ABP_Ajito_ch1000_C.ExecuteUbergraph_ABP_Ajito_ch1000 // (Final|UbergraphFunction) // @ game+0x1685580
};

