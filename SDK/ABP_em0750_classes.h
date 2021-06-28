// AnimBlueprintGeneratedClass ABP_em0750.ABP_em0750_C
// Size: 0x1321 (Inherited: 0x710)
struct UABP_em0750_C : URSEnemyAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x718(0x30)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x748(0x2b8)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0xa00(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xa48(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xb00(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0xb28(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0xb50(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xc10(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xc38(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0xc60(0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xd20(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xdc0(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xe60(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xf18(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xf40(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xf68(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x1028(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1070(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1130(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x1158(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x11a0(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x11e8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1230(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1258(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x12f8(0x28)
	bool IsDown; // 0x1320(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_em0750.ABP_em0750_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DownCheck(); // Function ABP_em0750.ABP_em0750_C.DownCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_em0750.ABP_em0750_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_em0750(int32_t EntryPoint); // Function ABP_em0750.ABP_em0750_C.ExecuteUbergraph_ABP_em0750 // (Final|UbergraphFunction) // @ game+0x1685580
};

