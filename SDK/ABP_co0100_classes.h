// AnimBlueprintGeneratedClass ABP_co0100.ABP_co0100_C
// Size: 0xa05 (Inherited: 0x300)
struct UABP_co0100_C : URSCableAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x308(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x328(0x10)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x338(0x30)
	char pad_368[0x8]; // 0x368(0x08)
	struct FAnimNode_RigidBodyRedCustom AnimGraphNode_RigidBodyRedCustom; // 0x370(0x610)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x980(0x48)
	enum class ERSCableGravityType GravityType; // 0x9c8(0x01)
	enum class ERSCableGravityType GravityTypeLow; // 0x9c9(0x01)
	char pad_9CA[0x2]; // 0x9ca(0x02)
	float PARAM_OverrideGravityTime; // 0x9cc(0x04)
	struct FGameTimer OverrideGravityTimer; // 0x9d0(0x0c)
	struct FGameTimer DisableOverrideGravityTimer; // 0x9dc(0x0c)
	bool bOverrideGravity; // 0x9e8(0x01)
	char pad_9E9[0x7]; // 0x9e9(0x07)
	struct ABP_CableBase_C* CableActor; // 0x9f0(0x08)
	struct FVector OverrideGravity; // 0x9f8(0x0c)
	enum class EBrainCodeType BrainCodeType; // 0xa04(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_co0100.ABP_co0100_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOwnerCableActor(struct ABP_CableBase_C* CableActor, enum class EBrainCodeType Type); // Function ABP_co0100.ABP_co0100_C.SetOwnerCableActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndOverrideGravity(enum class ERSCableGravityType Type); // Function ABP_co0100.ABP_co0100_C.EndOverrideGravity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BeginOverrideGravity(enum class ERSCableGravityType Type); // Function ABP_co0100.ABP_co0100_C.BeginOverrideGravity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_co0100.ABP_co0100_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_co0100(int32_t EntryPoint); // Function ABP_co0100.ABP_co0100_C.ExecuteUbergraph_ABP_co0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

