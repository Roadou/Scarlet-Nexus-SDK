// AnimBlueprintGeneratedClass ABP_ch0800.ABP_ch0800_C
// Size: 0x2048 (Inherited: 0x820)
struct UABP_ch0800_C : URSPlayerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x820(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x828(0x30)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x858(0x2b8)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0xb10(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xb58(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0xc10(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xc38(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0xc60(0xc0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xd20(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xe28(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xf30(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1038(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1058(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1160(0x20)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x1180(0x1e0)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x1360(0x1e0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x1540(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x15f8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x1620(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x1648(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x1690(0xc0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x1750(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x1810(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1858(0xb8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1910(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1958(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1a18(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x1ad0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x1af8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1b20(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1b48(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1b70(0xc0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1c30(0xe0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1d10(0xe0)
	bool __CustomProperty_bKawaiiPhysics_7038BEE2476747F417858BAF9FDF9938; // 0x1df0(0x01)
	char pad_1DF1[0x3]; // 0x1df1(0x03)
	float __CustomProperty_PhysicsIdlingSec_7038BEE2476747F417858BAF9FDF9938; // 0x1df4(0x04)
	float __CustomProperty_PhysicsAlpha_7038BEE2476747F417858BAF9FDF9938; // 0x1df8(0x04)
	char pad_1DFC[0x4]; // 0x1dfc(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x1e00(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1ea0(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1f40(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1ff8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2020(0x28)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_ch0800.ABP_ch0800_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0800(int32_t EntryPoint); // Function ABP_ch0800.ABP_ch0800_C.ExecuteUbergraph_ABP_ch0800 // (Final|UbergraphFunction) // @ game+0x1685580
};

