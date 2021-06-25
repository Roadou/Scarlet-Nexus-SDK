// AnimBlueprintGeneratedClass ABP_Ajito_ch0400.ABP_Ajito_ch0400_C
// Size: 0x1090 (Inherited: 0x720)
struct UABP_Ajito_ch0400_C : URSAjitoAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x728(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x7c8(0x78)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x840(0x2b8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xaf8(0xb8)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xbb0(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xbd0(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xc70(0x78)
	bool __CustomProperty_bKawaiiPhysics_4A8383624000D2B6E96D838E9D8AA1ED; // 0xce8(0x01)
	char pad_CE9[0x3]; // 0xce9(0x03)
	float __CustomProperty_PhysicsIdlingSec_4A8383624000D2B6E96D838E9D8AA1ED; // 0xcec(0x04)
	float __CustomProperty_PhysicsAlpha_4A8383624000D2B6E96D838E9D8AA1ED; // 0xcf0(0x04)
	char pad_CF4[0x4]; // 0xcf4(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph; // 0xcf8(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xd98(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xe58(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xea0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xec8(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xef0(0x48)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xf38(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xf58(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf88(0x108)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Ajito_ch0400.ABP_Ajito_ch0400_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFromParentActor(); // Function ABP_Ajito_ch0400.ABP_Ajito_ch0400_C.InitializeFromParentActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Ajito_ch0400.ABP_Ajito_ch0400_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BlueprintInitializeAnimation(); // Function ABP_Ajito_ch0400.ABP_Ajito_ch0400_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_Ajito_ch0400(int32_t EntryPoint); // Function ABP_Ajito_ch0400.ABP_Ajito_ch0400_C.ExecuteUbergraph_ABP_Ajito_ch0400 // (Final|UbergraphFunction) // @ game+0x1685580
};

