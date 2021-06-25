// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	None,
	X,
	Y,
	Z,
	EPlanarConstraint_MAX,
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x240 (Inherited: 0xc8)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	struct FBoneReference RootBone; // 0xc8(0x10)
	struct TArray<struct FBoneReference> ExcludeBones; // 0xd8(0x10)
	struct TArray<struct FExtraBoneSettings> OptionalSettings; // 0xe8(0x10)
	int32_t TargetFramerate; // 0xf8(0x04)
	bool OverrideTargetFramerate; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x100(0x18)
	struct UCurveFloat* DampingCurve; // 0x118(0x08)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x120(0x08)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x128(0x08)
	struct UCurveFloat* StiffnessCurve; // 0x130(0x08)
	struct UCurveFloat* RadiusCurve; // 0x138(0x08)
	struct UCurveFloat* LimitAngleCurve; // 0x140(0x08)
	bool bUpdatePhysicsSettingsInGame; // 0x148(0x01)
	bool bUseDummyRootBone; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	struct FVector DummyRootBoneLocation; // 0x14c(0x0c)
	bool bUseDummyEndBone; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	struct FVector DummyEndBoneLocation; // 0x15c(0x0c)
	float IdlingSeconds; // 0x168(0x04)
	enum class EPlanarConstraint PlanarConstraint; // 0x16c(0x01)
	char pad_16D[0x3]; // 0x16d(0x03)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x170(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x180(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x190(0x10)
	float TeleportDistanceThreshold; // 0x1a0(0x04)
	float TeleportRotationThreshold; // 0x1a4(0x04)
	struct FVector Gravity; // 0x1a8(0x0c)
	bool bEnableWind; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
	float WindScale; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0x1c0(0x10)
	float TotalBoneLength; // 0x1d0(0x04)
	char pad_1D4[0xc]; // 0x1d4(0x0c)
	struct FTransform PreSkelCompTransform; // 0x1e0(0x30)
	bool bInitPhysicsSettings; // 0x210(0x01)
	char pad_211[0x2f]; // 0x211(0x2f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0xd0 (Inherited: 0x00)
struct FKawaiiPhysicsModifyBone {
	struct FBoneReference BoneRef; // 0x00(0x10)
	int32_t ParentIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<int32_t> ChildIndexs; // 0x18(0x10)
	struct FKawaiiPhysicsBoneSettings PhysicsSettings; // 0x28(0x18)
	struct FVector Location; // 0x40(0x0c)
	struct FVector PrevLocation; // 0x4c(0x0c)
	char pad_58[0x8]; // 0x58(0x08)
	struct FQuat PrevRotation; // 0x60(0x10)
	struct FVector PoseLocation; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FQuat PoseRotation; // 0x80(0x10)
	struct FVector PoseScale; // 0x90(0x0c)
	float LengthFromRoot; // 0x9c(0x04)
	bool bDummy; // 0xa0(0x01)
	char pad_A1[0x2f]; // 0xa1(0x2f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsBoneSettings
// Size: 0x18 (Inherited: 0x00)
struct FKawaiiPhysicsBoneSettings {
	float Damping; // 0x00(0x04)
	float WorldDampingLocation; // 0x04(0x04)
	float WorldDampingRotation; // 0x08(0x04)
	float Stiffness; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float LimitAngle; // 0x14(0x04)
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x50 (Inherited: 0x00)
struct FCollisionLimitBase {
	struct FBoneReference DrivingBone; // 0x00(0x10)
	struct FVector OffsetLocation; // 0x10(0x0c)
	struct FRotator OffsetRotation; // 0x1c(0x0c)
	struct FVector Location; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat Rotation; // 0x40(0x10)
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0x60 (Inherited: 0x50)
struct FPlanarLimit : FCollisionLimitBase {
	struct FPlane Plane; // 0x50(0x10)
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x60 (Inherited: 0x50)
struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	float Length; // 0x54(0x04)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x60 (Inherited: 0x50)
struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x50(0x04)
	enum class ESphericalLimitType LimitType; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x18 (Inherited: 0x00)
struct FKawaiiPhysicsSettings {
	float Damping; // 0x00(0x04)
	float WorldDampingLocation; // 0x04(0x04)
	float WorldDampingRotation; // 0x08(0x04)
	float Stiffness; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float LimitAngle; // 0x14(0x04)
};

// ScriptStruct KawaiiPhysics.ExtraBoneSettings
// Size: 0x48 (Inherited: 0x00)
struct FExtraBoneSettings {
	struct FBoneReference SettingBone; // 0x00(0x10)
	struct FKawaiiPhysicsOptionalSettings PhysicsSettings; // 0x10(0x14)
	bool ApplyDummy; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FExtraBoneBetweenCollision> AdditionalBetweenCollision; // 0x28(0x10)
	struct TArray<struct FVector> AdditionalCollisionLocation; // 0x38(0x10)
};

// ScriptStruct KawaiiPhysics.ExtraBoneBetweenCollision
// Size: 0x20 (Inherited: 0x00)
struct FExtraBoneBetweenCollision {
	struct FBoneReference Target; // 0x00(0x10)
	struct TArray<struct FExtraBoneBetweenCollisionParam> CollisionParam; // 0x10(0x10)
};

// ScriptStruct KawaiiPhysics.ExtraBoneBetweenCollisionParam
// Size: 0x14 (Inherited: 0x00)
struct FExtraBoneBetweenCollisionParam {
	float BetweeenRate; // 0x00(0x04)
	float CrossOffsetRate; // 0x04(0x04)
	float UpperOffsetRate; // 0x08(0x04)
	float CapsuleSize; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsOptionalSettings
// Size: 0x14 (Inherited: 0x00)
struct FKawaiiPhysicsOptionalSettings {
	bool OverrideDamping; // 0x00(0x01)
	bool OverrideStiffness; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Damping; // 0x04(0x04)
	float WorldDampingLocation; // 0x08(0x04)
	float WorldDampingRotation; // 0x0c(0x04)
	float Stiffness; // 0x10(0x04)
};

// ScriptStruct KawaiiPhysics.ExtraBoneCapsuleCollision
// Size: 0x2c (Inherited: 0x00)
struct FExtraBoneCapsuleCollision {
	char pad_0[0x2c]; // 0x00(0x2c)
};

// ScriptStruct KawaiiPhysics.ExtraBoneSphereCollision
// Size: 0x10 (Inherited: 0x00)
struct FExtraBoneSphereCollision {
	char pad_0[0x10]; // 0x00(0x10)
};

