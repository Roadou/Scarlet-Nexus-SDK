// Class FieldSystemEngine.FieldSystemActor
// Size: 0x238 (Inherited: 0x230)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x230(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x38 (Inherited: 0x28)
struct UFieldSystem : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x450 (Inherited: 0x410)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x408(0x08)
	char pad_418[0x8]; // 0x418(0x08)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x420(0x10)
	char pad_430[0x20]; // 0x430(0x20)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // @ game+0x30e4e70
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30e4cc0
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float magnitude, int32_t iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30e4b10
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30e49f0
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30e4880
	void ApplyRadialForce(bool Enabled, struct FVector Position, float magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30e4760
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x30e4610
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30e44f0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // @ game+0x30e43a0
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xc0 (Inherited: 0xc0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xc8 (Inherited: 0xc0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t iterations; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e51c0
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xc8 (Inherited: 0xc0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5250
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xc0 (Inherited: 0xc0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xc0 (Inherited: 0xc0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xc0 (Inherited: 0xc0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xc0 (Inherited: 0xc0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xc8 (Inherited: 0xc0)
struct UUniformInteger : UFieldNodeInt {
	int32_t magnitude; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e51c0
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0xe0 (Inherited: 0xc0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)
	int32_t InteriorValue; // 0xd0(0x04)
	int32_t ExteriorValue; // 0xd4(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e5a50
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xc8 (Inherited: 0xc0)
struct UUniformScalar : UFieldNodeFloat {
	float magnitude; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	struct UUniformScalar* SetUniformScalar(float magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5cf0
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0xe8 (Inherited: 0xc0)
struct URadialFalloff : UFieldNodeFloat {
	float magnitude; // 0xc0(0x04)
	float MinRange; // 0xc4(0x04)
	float MaxRange; // 0xc8(0x04)
	float Default; // 0xcc(0x04)
	float Radius; // 0xd0(0x04)
	struct FVector Position; // 0xd4(0x0c)
	enum class EFieldFalloffType Falloff; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)

	struct URadialFalloff* SetRadialFalloff(float magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e5830
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0xf0 (Inherited: 0xc0)
struct UPlaneFalloff : UFieldNodeFloat {
	float magnitude; // 0xc0(0x04)
	float MinRange; // 0xc4(0x04)
	float MaxRange; // 0xc8(0x04)
	float Default; // 0xcc(0x04)
	float Distance; // 0xd0(0x04)
	struct FVector Position; // 0xd4(0x0c)
	struct FVector Normal; // 0xe0(0x0c)
	enum class EFieldFalloffType Falloff; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)

	struct UPlaneFalloff* SetPlaneFalloff(float magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e55b0
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x110 (Inherited: 0xc0)
struct UBoxFalloff : UFieldNodeFloat {
	float magnitude; // 0xc0(0x04)
	float MinRange; // 0xc4(0x04)
	float MaxRange; // 0xc8(0x04)
	float Default; // 0xcc(0x04)
	struct FTransform Transform; // 0xd0(0x30)
	enum class EFieldFalloffType Falloff; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e4e90
};

// Class FieldSystemEngine.NoiseField
// Size: 0x100 (Inherited: 0xc0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xc0(0x04)
	float MaxRange; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FTransform Transform; // 0xd0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e52e0
};

// Class FieldSystemEngine.UniformVector
// Size: 0xd0 (Inherited: 0xc0)
struct UUniformVector : UFieldNodeVector {
	float magnitude; // 0xc0(0x04)
	struct FVector Direction; // 0xc4(0x0c)

	struct UUniformVector* SetUniformVector(float magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e5c10
};

// Class FieldSystemEngine.RadialVector
// Size: 0xd0 (Inherited: 0xc0)
struct URadialVector : UFieldNodeVector {
	float magnitude; // 0xc0(0x04)
	struct FVector Position; // 0xc4(0x0c)

	struct URadialVector* SetRadialVector(float magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x30e5c10
};

// Class FieldSystemEngine.RandomVector
// Size: 0xc8 (Inherited: 0xc0)
struct URandomVector : UFieldNodeVector {
	float magnitude; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)

	struct URandomVector* SetRandomVector(float magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5cf0
};

// Class FieldSystemEngine.OperatorField
// Size: 0xe0 (Inherited: 0xc0)
struct UOperatorField : UFieldNodeBase {
	float magnitude; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UFieldNodeBase* RightField; // 0xc8(0x08)
	struct UFieldNodeBase* LeftField; // 0xd0(0x08)
	enum class EFieldOperationType Operation; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct UOperatorField* SetOperatorField(float magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5460
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xc8 (Inherited: 0xc0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xc0(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5db0
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xc8 (Inherited: 0xc0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xc0(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5db0
};

// Class FieldSystemEngine.CullingField
// Size: 0xd8 (Inherited: 0xc0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xc0(0x08)
	struct UFieldNodeBase* Field; // 0xc8(0x08)
	enum class EFieldCullingOperationType Operation; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e50c0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xc0 (Inherited: 0xc0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x30e5d80
};

