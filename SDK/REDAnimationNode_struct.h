// ScriptStruct REDAnimationNode.AnimNode_AnimDynamicsRedCustom
// Size: 0x320 (Inherited: 0xc8)
struct FAnimNode_AnimDynamicsRedCustom : FAnimNode_SkeletalControlBase {
	float IdlingSeconds; // 0xc8(0x04)
	float LinearDampingOverride; // 0xcc(0x04)
	float AngularDampingOverride; // 0xd0(0x04)
	char pad_D4[0x6c]; // 0xd4(0x6c)
	struct FBoneReference RelativeSpaceBone; // 0x140(0x10)
	struct FBoneReference BoundBone; // 0x150(0x10)
	struct FBoneReference ChainEnd; // 0x160(0x10)
	struct FVector BoxExtents; // 0x170(0x0c)
	struct FVector LocalJointOffset; // 0x17c(0x0c)
	float GravityScale; // 0x188(0x04)
	struct FVector GravityOverride; // 0x18c(0x0c)
	float LinearSpringConstant; // 0x198(0x04)
	float AngularSpringConstant; // 0x19c(0x04)
	float WindScale; // 0x1a0(0x04)
	struct FVector ComponentLinearAccScale; // 0x1a4(0x0c)
	struct FVector ComponentLinearVelScale; // 0x1b0(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1bc(0x0c)
	float AngularBiasOverride; // 0x1c8(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x1cc(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x1d0(0x04)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1d4(0x48)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x220(0x10)
	float SphereCollisionRadius; // 0x230(0x04)
	struct FVector ExternalForce; // 0x234(0x0c)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x240(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x250(0x01)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	char bUseSphericalLimits : 1; // 0x254(0x01)
	char bUsePlanarLimit : 1; // 0x254(0x01)
	char bDoUpdate : 1; // 0x254(0x01)
	char bDoEval : 1; // 0x254(0x01)
	char bOverrideLinearDamping : 1; // 0x254(0x01)
	char bOverrideAngularBias : 1; // 0x254(0x01)
	char bOverrideAngularDamping : 1; // 0x254(0x01)
	char bEnableWind : 1; // 0x254(0x01)
	char pad_255_0 : 1; // 0x255(0x01)
	char bUseGravityOverride : 1; // 0x255(0x01)
	char bLinearSpring : 1; // 0x255(0x01)
	char bAngularSpring : 1; // 0x255(0x01)
	char bChain : 1; // 0x255(0x01)
	char pad_255_5 : 3; // 0x255(0x01)
	char pad_256[0xca]; // 0x256(0xca)
};

// ScriptStruct REDAnimationNode.AnimNode_RigidBodyRedCustom
// Size: 0x610 (Inherited: 0xc8)
struct FAnimNode_RigidBodyRedCustom : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	char pad_D0[0x98]; // 0xd0(0x98)
	struct FVector OverrideWorldGravity; // 0x168(0x0c)
	struct FVector ExternalForce; // 0x174(0x0c)
	struct FVector ComponentLinearAccScale; // 0x180(0x0c)
	struct FVector ComponentLinearVelScale; // 0x18c(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x198(0x0c)
	float CachedBoundsScale; // 0x1a4(0x04)
	struct FBoneReference BaseBoneRef; // 0x1a8(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1b8(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1b9(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ba(0x01)
	char pad_1BB[0x1]; // 0x1bb(0x01)
	char bEnableWorldGeometry : 1; // 0x1bc(0x01)
	char bOverrideWorldGravity : 1; // 0x1bc(0x01)
	char bTransferBoneVelocities : 1; // 0x1bc(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x1bc(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1bc(0x01)
	char pad_1BC_5 : 3; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	float DeltaSecondsScale; // 0x1c0(0x04)
	float SimulationSecondsMax; // 0x1c4(0x04)
	float IdlingSeconds; // 0x1c8(0x04)
	float LimitSimulationTranslate; // 0x1cc(0x04)
	float FrameSplitTranslate; // 0x1d0(0x04)
	bool bLengthLock; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
	struct FAnimNode_RigidBodyRedCustomInterpolateInfo InterpolateInfo; // 0x1d8(0x18)
	char pad_1F0[0x420]; // 0x1f0(0x420)
};

// ScriptStruct REDAnimationNode.AnimNode_RigidBodyRedCustomInterpolateInfo
// Size: 0x18 (Inherited: 0x00)
struct FAnimNode_RigidBodyRedCustomInterpolateInfo {
	struct UPhysicsAsset* InterpolatePhysicsAssetA; // 0x00(0x08)
	struct UPhysicsAsset* InterpolatePhysicsAssetB; // 0x08(0x08)
	float Alpha; // 0x10(0x04)
	bool OverrideBodyDamping; // 0x14(0x01)
	bool OverrideBodyMass; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct REDAnimationNode.AnimNode_RigidBodyWithIdling
// Size: 0x560 (Inherited: 0xc8)
struct FAnimNode_RigidBodyWithIdling : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	char pad_D0[0x98]; // 0xd0(0x98)
	struct FVector OverrideWorldGravity; // 0x168(0x0c)
	float IdlingSeconds; // 0x174(0x04)
	struct FVector ExternalForce; // 0x178(0x0c)
	struct FVector ComponentLinearAccScale; // 0x184(0x0c)
	struct FVector ComponentLinearVelScale; // 0x190(0x0c)
	struct FVector ComponentAppliedLinearAccClamp; // 0x19c(0x0c)
	float CachedBoundsScale; // 0x1a8(0x04)
	struct FBoneReference BaseBoneRef; // 0x1ac(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1bc(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x1bd(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1be(0x01)
	char pad_1BF[0x1]; // 0x1bf(0x01)
	char bEnableWorldGeometry : 1; // 0x1c0(0x01)
	char bOverrideWorldGravity : 1; // 0x1c0(0x01)
	char bTransferBoneVelocities : 1; // 0x1c0(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x1c0(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1c0(0x01)
	char pad_1C0_5 : 3; // 0x1c0(0x01)
	char pad_1C1[0x39f]; // 0x1c1(0x39f)
};

