// AnimBlueprintGeneratedClass ABP_em0610.ABP_em0610_C
// Size: 0x1260 (Inherited: 0x710)
struct UABP_em0610_C : URSEnemyAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x718(0x30)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x748(0x2b8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xa00(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0xab8(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0xae0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb28(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xbe0(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0xc08(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0xcc8(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0xcf0(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xd38(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xdd8(0x28)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xe00(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xec0(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xee8(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xf30(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xfd0(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1018(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1040(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x10e0(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1108(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1128(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1230(0x20)
	bool IsDown; // 0x1250(0x01)
	char pad_1251[0x3]; // 0x1251(0x03)
	struct FRotator FitGroundRotate; // 0x1254(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_em0610.ABP_em0610_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DownCheck(); // Function ABP_em0610.ABP_em0610_C.DownCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_em0610.ABP_em0610_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_em0610(int32_t EntryPoint); // Function ABP_em0610.ABP_em0610_C.ExecuteUbergraph_ABP_em0610 // (Final|UbergraphFunction) // @ game+0x1685580
};

