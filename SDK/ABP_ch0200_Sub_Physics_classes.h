// AnimBlueprintGeneratedClass ABP_ch0200_Sub_Physics.ABP_ch0200_Sub_Physics_C
// Size: 0x38e4 (Inherited: 0x280)
struct UABP_ch0200_Sub_Physics_C : URSPlayerSubAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x288(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2b8(0x78)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_23; // 0x330(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_22; // 0x570(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_21; // 0x7b0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_20; // 0x9f0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_19; // 0xc30(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_18; // 0xe70(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_17; // 0x10b0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_16; // 0x12f0(0x240)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1530(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1550(0x20)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_15; // 0x1570(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_14; // 0x17b0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_13; // 0x19f0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_12; // 0x1c30(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_11; // 0x1e70(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_10; // 0x20b0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_9; // 0x22f0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_8; // 0x2530(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_7; // 0x2770(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_6; // 0x29b0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_5; // 0x2bf0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_4; // 0x2e30(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_3; // 0x3070(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics_2; // 0x32b0(0x240)
	struct FAnimNode_KawaiiPhysics AnimGraphNode_KawaiiPhysics; // 0x34f0(0x240)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x3730(0xb8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x37e8(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x3810(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x38b0(0x28)
	float kawaiiHair; // 0x38d8(0x04)
	float kawaiiScarf; // 0x38dc(0x04)
	float kawaiiWear; // 0x38e0(0x04)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function ABP_ch0200_Sub_Physics.ABP_ch0200_Sub_Physics_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_ch0200_Sub_Physics.ABP_ch0200_Sub_Physics_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_ch0200_Sub_Physics(int32_t EntryPoint); // Function ABP_ch0200_Sub_Physics.ABP_ch0200_Sub_Physics_C.ExecuteUbergraph_ABP_ch0200_Sub_Physics // (Final|UbergraphFunction) // @ game+0x1685580
};

