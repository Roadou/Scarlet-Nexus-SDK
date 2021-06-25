// AnimBlueprintGeneratedClass ABP_co0102.ABP_co0102_C
// Size: 0x1452 (Inherited: 0x300)
struct UABP_co0102_C : URSCableAnimInstance {
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
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1140(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1168(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1190(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1208(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1238(0x78)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x12b0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x12e0(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1390(0x48)
	float PhysicsAlpha; // 0x13d8(0x04)
	bool bStartAnim; // 0x13dc(0x01)
	char pad_13DD[0x3]; // 0x13dd(0x03)
	struct FGameTimer PhysicsAlphaTimer; // 0x13e0(0x0c)
	float PARAM_PhysicsAlphaTime; // 0x13ec(0x04)
	struct UAnimSequence* Anim01; // 0x13f0(0x08)
	struct UAnimSequence* Anim02; // 0x13f8(0x08)
	struct UAnimSequence* Anim03; // 0x1400(0x08)
	struct UAnimSequence* Anim04; // 0x1408(0x08)
	struct UAnimSequence* Anim05; // 0x1410(0x08)
	enum class ESASCodeAnimType SASAnimType; // 0x1418(0x01)
	char pad_1419[0x3]; // 0x1419(0x03)
	struct FGameTimer OverrideGravityTimer; // 0x141c(0x0c)
	struct ABP_CableBase_C* CableActor; // 0x1428(0x08)
	bool bOverrideGravity; // 0x1430(0x01)
	char pad_1431[0x3]; // 0x1431(0x03)
	float PARAM_OverrideGravityTime; // 0x1434(0x04)
	struct FVector OverrideGravity; // 0x1438(0x0c)
	struct FGameTimer DisableOverrideGravityTimer; // 0x1444(0x0c)
	enum class ERSCableGravityType GravityType; // 0x1450(0x01)
	enum class ERSCableGravityType GravityTypeLow; // 0x1451(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_co0102.ABP_co0102_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPhysics(); // Function ABP_co0102.ABP_co0102_C.StartPhysics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPhysicsDirect(); // Function ABP_co0102.ABP_co0102_C.SetPhysicsDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndOverrideGravity(enum class ERSCableGravityType Type); // Function ABP_co0102.ABP_co0102_C.EndOverrideGravity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BeginOverrideGravity(enum class ERSCableGravityType Type); // Function ABP_co0102.ABP_co0102_C.BeginOverrideGravity // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOwnerCableActor(struct ABP_CableBase_C* OwnerActor); // Function ABP_co0102.ABP_co0102_C.SetOwnerCableActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(bool bRestart, enum class ESASCodeAnimType AnimType); // Function ABP_co0102.ABP_co0102_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0102_AnimGraphNode_TwoWayBlend_F813ED304EA33E0904218291C51EC2B0(); // Function ABP_co0102.ABP_co0102_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0102_AnimGraphNode_TwoWayBlend_F813ED304EA33E0904218291C51EC2B0 // (BlueprintEvent) // @ game+0x1685580
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0102_AnimGraphNode_SequencePlayer_98D43F0E47FBD8FA4EFD92A1F72FFFB9(); // Function ABP_co0102.ABP_co0102_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0102_AnimGraphNode_SequencePlayer_98D43F0E47FBD8FA4EFD92A1F72FFFB9 // (BlueprintEvent) // @ game+0x1685580
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0102_AnimGraphNode_SequencePlayer_12097FA643F80EE22C808E837458AD6E(); // Function ABP_co0102.ABP_co0102_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_co0102_AnimGraphNode_SequencePlayer_12097FA643F80EE22C808E837458AD6E // (BlueprintEvent) // @ game+0x1685580
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_co0102.ABP_co0102_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void AnimNotify_OnBeginStartAnim(); // Function ABP_co0102.ABP_co0102_C.AnimNotify_OnBeginStartAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ABP_co0102(int32_t EntryPoint); // Function ABP_co0102.ABP_co0102_C.ExecuteUbergraph_ABP_co0102 // (Final|UbergraphFunction) // @ game+0x1685580
};

