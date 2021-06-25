// AnimBlueprintGeneratedClass ABP_HologramCh0500.ABP_HologramCh0500_C
// Size: 0x978 (Inherited: 0x2a0)
struct UABP_HologramCh0500_C : URSPlayerHologramAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2a8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2d8(0x48)
	struct FASAnimNode_StateMachine ASAnimGraphNode_StateMachine; // 0x320(0x2b8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x5d8(0xa0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x678(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x780(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x888(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8a8(0x20)
	bool __CustomProperty_bKawaiiPhysics_7378891C40C805C7F07C65B8FE47BFE5; // 0x8c8(0x01)
	char pad_8C9[0x3]; // 0x8c9(0x03)
	float __CustomProperty_PhysicsIdlingSec_7378891C40C805C7F07C65B8FE47BFE5; // 0x8cc(0x04)
	float __CustomProperty_PhysicsAlpha_7378891C40C805C7F07C65B8FE47BFE5; // 0x8d0(0x04)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x8d8(0xa0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_HologramCh0500.ABP_HologramCh0500_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_HologramCh0500(int32_t EntryPoint); // Function ABP_HologramCh0500.ABP_HologramCh0500_C.ExecuteUbergraph_ABP_HologramCh0500 // (Final|UbergraphFunction) // @ game+0x1685580
};

