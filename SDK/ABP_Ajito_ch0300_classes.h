// AnimBlueprintGeneratedClass ABP_Ajito_ch0300.ABP_Ajito_ch0300_C
// Size: 0x1090 (Inherited: 0x720)
struct UABP_Ajito_ch0300_C : URSAjitoAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x728(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x758(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x778(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x818(0x78)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x890(0x2b8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb48(0xb8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc00(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xc20(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xcc0(0x78)
	bool __CustomProperty_bKawaiiPhysics_71F7E2C24FA675211019C799316084A9; // 0xd38(0x01)
	char pad_D39[0x3]; // 0xd39(0x03)
	float __CustomProperty_PhysicsIdlingSec_71F7E2C24FA675211019C799316084A9; // 0xd3c(0x04)
	float __CustomProperty_PhysicsAlpha_71F7E2C24FA675211019C799316084A9; // 0xd40(0x04)
	char pad_D44[0x4]; // 0xd44(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xd48(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xde8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xea8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xef0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf18(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xf40(0x48)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf88(0x108)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Ajito_ch0300.ABP_Ajito_ch0300_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFromParentActor(); // Function ABP_Ajito_ch0300.ABP_Ajito_ch0300_C.InitializeFromParentActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintInitializeAnimation(); // Function ABP_Ajito_ch0300.ABP_Ajito_ch0300_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_Ajito_ch0300(int32_t EntryPoint); // Function ABP_Ajito_ch0300.ABP_Ajito_ch0300_C.ExecuteUbergraph_ABP_Ajito_ch0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

