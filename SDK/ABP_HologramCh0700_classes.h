// AnimBlueprintGeneratedClass ABP_HologramCh0700.ABP_HologramCh0700_C
// Size: 0x728 (Inherited: 0x2a0)
struct UABP_HologramCh0700_C : URSPlayerHologramAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2d8(0x48)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x320(0x2b8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5d8(0xa0)
	bool __CustomProperty_bKawaiiPhysics_E1B50F0249B3BB5C45D899B120EA19B6; // 0x678(0x01)
	char pad_679[0x3]; // 0x679(0x03)
	float __CustomProperty_PhysicsIdlingSec_E1B50F0249B3BB5C45D899B120EA19B6; // 0x67c(0x04)
	float __CustomProperty_PhysicsAlpha_E1B50F0249B3BB5C45D899B120EA19B6; // 0x680(0x04)
	char pad_684[0x4]; // 0x684(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x688(0xa0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_HologramCh0700.ABP_HologramCh0700_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_HologramCh0700(int32_t EntryPoint); // Function ABP_HologramCh0700.ABP_HologramCh0700_C.ExecuteUbergraph_ABP_HologramCh0700 // (Final|UbergraphFunction) // @ game+0x1685580
};
