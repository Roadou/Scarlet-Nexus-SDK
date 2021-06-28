// AnimBlueprintGeneratedClass ABP_em0320.ABP_em0320_C
// Size: 0x1586 (Inherited: 0x710)
struct UABP_em0320_C : URSEnemyAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x718(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x748(0xb8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x800(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_6; // 0x8c0(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x908(0xa0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x9a8(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_5; // 0xa68(0x48)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0xab0(0x2b8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xd68(0xc0)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0xe28(0x48)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xe70(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe90(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xeb0(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xfb8(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1058(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x1110(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x1138(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x1180(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x11a8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x11d0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x11f8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x1220(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1248(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1270(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1310(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1338(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x13f8(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x1420(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1468(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1490(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x14d8(0xa0)
	struct FRotator WaterTankRotation; // 0x1578(0x0c)
	bool IsWaterGunLoopAttack; // 0x1584(0x01)
	bool IsDown; // 0x1585(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_em0320.ABP_em0320_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WaterGunCheck(); // Function ABP_em0320.ABP_em0320_C.WaterGunCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WaterRotation(); // Function ABP_em0320.ABP_em0320_C.WaterRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DownCheck(); // Function ABP_em0320.ABP_em0320_C.DownCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_em0320.ABP_em0320_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_RepairStart(); // Function ABP_em0320.ABP_em0320_C.AnimNotify_RepairStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_RepairEnd(); // Function ABP_em0320.ABP_em0320_C.AnimNotify_RepairEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_WaterTankBreak(); // Function ABP_em0320.ABP_em0320_C.AnimNotify_WaterTankBreak // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_em0320(int32_t EntryPoint); // Function ABP_em0320.ABP_em0320_C.ExecuteUbergraph_ABP_em0320 // (Final|UbergraphFunction) // @ game+0x1685580
};

