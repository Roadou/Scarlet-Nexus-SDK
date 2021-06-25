// AnimBlueprintGeneratedClass ABP_co0101.ABP_co0101_C
// Size: 0x1378 (Inherited: 0x300)
struct UABP_co0101_C : URSCableAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	char pad_308[0x8]; // 0x308(0x08)
	struct FAnimNode_RigidBodyRedCustom AnimGraphNode_RigidBodyRedCustom_2; // 0x310(0x610)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x920(0xc8)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x9e8(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_2; // 0xa08(0x10)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa18(0x30)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa48(0x10)
	char pad_A58[0x8]; // 0xa58(0x08)
	struct FAnimNode_RigidBodyRedCustom AnimGraphNode_RigidBodyRedCustom; // 0xa60(0x610)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1070(0x20)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1090(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1140(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x11b8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x11e8(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1298(0x48)
	float PhysicsAlpha; // 0x12e0(0x04)
	bool bStartAnim; // 0x12e4(0x01)
	char pad_12E5[0x3]; // 0x12e5(0x03)
	struct FGameTimer PhysicsDelayTimer; // 0x12e8(0x0c)
	float PARAM_PhysicsDelayTime; // 0x12f4(0x04)
	struct FGameTimer PhysicsAlphaTimer; // 0x12f8(0x0c)
	float PARAM_PhysicsAlphaTime; // 0x1304(0x04)
	struct UAnimSequence* Anim01; // 0x1308(0x08)
	struct UAnimSequence* Anim02; // 0x1310(0x08)
	struct UAnimSequence* Anim03; // 0x1318(0x08)
	struct UAnimSequence* Anim04; // 0x1320(0x08)
	struct UAnimSequence* Anim05; // 0x1328(0x08)
	enum class ESASCodeAnimType SASAnimType; // 0x1330(0x01)
	char pad_1331[0x3]; // 0x1331(0x03)
	struct FGameTimer OverrideGravityTimer; // 0x1334(0x0c)
	struct ABP_CableBase_C* CableActor; // 0x1340(0x08)
	bool bOverrideGravity; // 0x1348(0x01)
	char pad_1349[0x3]; // 0x1349(0x03)
	float PARAM_OverrideGravityTime; // 0x134c(0x04)
	struct FVector OverrideGravity; // 0x1350(0x0c)
	struct FGameTimer DisableOverrideGravityTimer; // 0x135c(0x0c)
	enum class ERSCableGravityType GravityType; // 0x1368(0x01)
	enum class ERSCableGravityType GravityTypeLow; // 0x1369(0x01)
	char pad_136A[0x2]; // 0x136a(0x02)
	float RigidIdlingSecFinal; // 0x136c(0x04)
	float AbnormalRigidIdlingSec; // 0x1370(0x04)
	float PARAM_ABNORMAL_CABLE_LENGTH; // 0x1374(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_co0101.ABP_co0101_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAbnormalCable(); // Function ABP_co0101.ABP_co0101_C.CheckAbnormalCable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASStartAnimSequence(enum class ESASCodeAnimType AnimType, struct UAnimSequence* AnimSequence); // Function ABP_co0101.ABP_co0101_C.GetSASStartAnimSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartBrainField(enum class ESASCodeAnimType SASAnimType); // Function ABP_co0101.ABP_co0101_C.StartBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhysicsDirect(); // Function ABP_co0101.ABP_co0101_C.SetPhysicsDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndOverrideGravity(enum class ERSCableGravityType Type); // Function ABP_co0101.ABP_co0101_C.EndOverrideGravity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BeginOverrideGravity(enum class ERSCableGravityType Type); // Function ABP_co0101.ABP_co0101_C.BeginOverrideGravity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSAS(); // Function ABP_co0101.ABP_co0101_C.EndSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOwnerCableActor(struct ABP_CableBase_C* OwnerActor); // Function ABP_co0101.ABP_co0101_C.SetOwnerCableActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSAS(bool bRestart, enum class ESASCodeAnimType AnimType); // Function ABP_co0101.ABP_co0101_C.StartSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0101_AnimGraphNode_TwoWayBlend_87EA9E9B44CE3BA2960365991485A2AF(); // Function ABP_co0101.ABP_co0101_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0101_AnimGraphNode_TwoWayBlend_87EA9E9B44CE3BA2960365991485A2AF // (BlueprintEvent) // @ game+0x1685580
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0101_AnimGraphNode_SequencePlayer_7491064045A92F8C18A09AAB99AA137E(); // Function ABP_co0101.ABP_co0101_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0101_AnimGraphNode_SequencePlayer_7491064045A92F8C18A09AAB99AA137E // (BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_co0101.ABP_co0101_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_OnBeginStartAnim(); // Function ABP_co0101.ABP_co0101_C.AnimNotify_OnBeginStartAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_co0101(int32_t EntryPoint); // Function ABP_co0101.ABP_co0101_C.ExecuteUbergraph_ABP_co0101 // (Final|UbergraphFunction) // @ game+0x1685580
};

