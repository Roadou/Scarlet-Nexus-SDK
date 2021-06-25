// AnimBlueprintGeneratedClass ABP_Ajito_ch0200.ABP_Ajito_ch0200_C
// Size: 0x1090 (Inherited: 0x720)
struct UABP_Ajito_ch0200_C : URSAjitoAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x728(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x758(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x778(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x818(0x78)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x890(0x2b8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb48(0xb8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xc00(0x20)
	bool __CustomProperty_bKawaiiPhysics_7AFEDF7446F12DF2DA4E9EAA2AC17289; // 0xc20(0x01)
	char pad_C21[0x3]; // 0xc21(0x03)
	float __CustomProperty_PhysicsIdlingSec_7AFEDF7446F12DF2DA4E9EAA2AC17289; // 0xc24(0x04)
	float __CustomProperty_PhysicsAlpha_7AFEDF7446F12DF2DA4E9EAA2AC17289; // 0xc28(0x04)
	char pad_C2C[0x4]; // 0xc2c(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0xc30(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xcd0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xd70(0x78)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xde8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xea8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xef0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf18(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xf40(0x48)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf88(0x108)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Ajito_ch0200.ABP_Ajito_ch0200_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFromParentActor(); // Function ABP_Ajito_ch0200.ABP_Ajito_ch0200_C.InitializeFromParentActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintInitializeAnimation(); // Function ABP_Ajito_ch0200.ABP_Ajito_ch0200_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_Ajito_ch0200(int32_t EntryPoint); // Function ABP_Ajito_ch0200.ABP_Ajito_ch0200_C.ExecuteUbergraph_ABP_Ajito_ch0200 // (Final|UbergraphFunction) // @ game+0x1685580
};

