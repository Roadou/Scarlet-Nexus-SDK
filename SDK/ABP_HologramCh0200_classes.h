// AnimBlueprintGeneratedClass ABP_HologramCh0200.ABP_HologramCh0200_C
// Size: 0x978 (Inherited: 0x2a0)
struct UABP_HologramCh0200_C : URSPlayerHologramAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2d8(0x48)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x320(0x2b8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5d8(0xa0)
	bool __CustomProperty_bKawaiiPhysics_1893F187450E25FDA55AAC97EF8A9D72; // 0x678(0x01)
	char pad_679[0x3]; // 0x679(0x03)
	float __CustomProperty_PhysicsIdlingSec_1893F187450E25FDA55AAC97EF8A9D72; // 0x67c(0x04)
	float __CustomProperty_PhysicsAlpha_1893F187450E25FDA55AAC97EF8A9D72; // 0x680(0x04)
	char pad_684[0x4]; // 0x684(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x688(0xa0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x728(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x830(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x850(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x870(0x48)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x8b8(0xc0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_HologramCh0200.ABP_HologramCh0200_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_HologramCh0200.ABP_HologramCh0200_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_HologramCh0200(int32_t EntryPoint); // Function ABP_HologramCh0200.ABP_HologramCh0200_C.ExecuteUbergraph_ABP_HologramCh0200 // (Final|UbergraphFunction) // @ game+0x1685580
};

