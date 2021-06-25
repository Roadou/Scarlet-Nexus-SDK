// AnimBlueprintGeneratedClass ABP_Ajito_ch0100.ABP_Ajito_ch0100_C
// Size: 0x13f8 (Inherited: 0x720)
struct UABP_Ajito_ch0100_C : URSAjitoAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x728(0xb8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x7e0(0x20)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x800(0x2b8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xab8(0x78)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xb30(0xa0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xbd0(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xc00(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xc20(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xcc0(0x78)
	bool __CustomProperty_bKawaiiPhysics_EAFF55494766C4924566A286457FC311; // 0xd38(0x01)
	char pad_D39[0x3]; // 0xd39(0x03)
	float __CustomProperty_PhysicsIdlingSec_EAFF55494766C4924566A286457FC311; // 0xd3c(0x04)
	float __CustomProperty_PhysicsAlpha_EAFF55494766C4924566A286457FC311; // 0xd40(0x04)
	char pad_D44[0x4]; // 0xd44(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xd48(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xde8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xea8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xef0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf18(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xf40(0x48)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xf88(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1090(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1198(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x12a0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x13a8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x13c8(0x20)
	struct UAnimSequence* OverrideAnim_1; // 0x13e8(0x08)
	struct UASStateMachine* StateMachine; // 0x13f0(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Ajito_ch0100.ABP_Ajito_ch0100_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFromParentActor(); // Function ABP_Ajito_ch0100.ABP_Ajito_ch0100_C.InitializeFromParentActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetASAnimationSet(struct UASAnimationSet* AnimationSet); // Function ABP_Ajito_ch0100.ABP_Ajito_ch0100_C.SetASAnimationSet // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetASStateMachine(struct UASStateMachine* StateMachine); // Function ABP_Ajito_ch0100.ABP_Ajito_ch0100_C.SetASStateMachine // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintInitializeAnimation(); // Function ABP_Ajito_ch0100.ABP_Ajito_ch0100_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_Ajito_ch0100(int32_t EntryPoint); // Function ABP_Ajito_ch0100.ABP_Ajito_ch0100_C.ExecuteUbergraph_ABP_Ajito_ch0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

