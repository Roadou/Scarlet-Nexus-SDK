// Class CascadeExtensionPlugin.AbstractParticleModule
// Size: 0x60 (Inherited: 0x30)
struct UAbstractParticleModule : UParticleModule {
	struct FParticleRandomSeedInfo RandomSeedInfo; // 0x30(0x20)
	int32_t StartDelay; // 0x50(0x04)
	int32_t MaxDuration; // 0x54(0x04)
	int32_t LoopAfter; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class CascadeExtensionPlugin.ForcePointDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UForcePointDataProvider : UInterface {

	struct FForcePoints GetForcePoints(); // Function CascadeExtensionPlugin.ForcePointDataProvider.GetForcePoints // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x652870
};

// Class CascadeExtensionPlugin.MeshDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UMeshDataProvider : UInterface {

	struct FMeshTriangleData GetMeshTriangleData(); // Function CascadeExtensionPlugin.MeshDataProvider.GetMeshTriangleData // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x653290
	int32_t GetDataRevision(); // Function CascadeExtensionPlugin.MeshDataProvider.GetDataRevision // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x653260
};

// Class CascadeExtensionPlugin.RSMeshDataProviderFL
// Size: 0x28 (Inherited: 0x28)
struct URSMeshDataProviderFL : UBlueprintFunctionLibrary {

	void GetStaticMeshProviderTriangleData(struct FMeshTriangleData OutTriangleData, struct UStaticMesh* StaticMesh, int32_t LODIndex, int32_t SectionIndex, struct FVector Scale3D); // Function CascadeExtensionPlugin.RSMeshDataProviderFL.GetStaticMeshProviderTriangleData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6532f0
};

// Class CascadeExtensionPlugin.ParticleDataProvider
// Size: 0x28 (Inherited: 0x28)
struct UParticleDataProvider : UInterface {

	struct FParticleProperties UpdateParticle(struct FParticleProperties currentParticleProperties); // Function CascadeExtensionPlugin.ParticleDataProvider.UpdateParticle // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x653b60
	struct FParticleProperties SpawnParticle(struct FParticleProperties currentParticleProperties); // Function CascadeExtensionPlugin.ParticleDataProvider.SpawnParticle // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x653a70
};

// Class CascadeExtensionPlugin.ParticleDecalComponent
// Size: 0x260 (Inherited: 0x240)
struct UParticleDecalComponent : UDecalComponent {
	int32_t ModuleID; // 0x240(0x04)
	float TimeLeftUntilDestruction; // 0x244(0x04)
	struct FVector BaseScale; // 0x248(0x0c)
	char pad_254[0xc]; // 0x254(0x0c)
};

// Class CascadeExtensionPlugin.ParticleModuleColorTexture
// Size: 0xb0 (Inherited: 0x60)
struct UParticleModuleColorTexture : UAbstractParticleModule {
	struct UTexture2D* ColorIndexTexture; // 0x60(0x08)
	bool UpdateWithTick; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FBox MapBounds; // 0x6c(0x1c)
	enum class ESpaceAxis ParticleAxisToTextureX; // 0x88(0x01)
	enum class ESpaceAxis ParticleAxisToTextureY; // 0x89(0x01)
	char pad_8A[0x2]; // 0x8a(0x02)
	float Intensity; // 0x8c(0x04)
	bool UseTextureAlpha; // 0x90(0x01)
	char pad_91[0x1f]; // 0x91(0x1f)
};

// Class CascadeExtensionPlugin.ParticleModuleCustomData
// Size: 0x70 (Inherited: 0x60)
struct UParticleModuleCustomData : UAbstractParticleModule {
	struct FName DataProviderParameterName; // 0x60(0x08)
	bool UpdatedSpawnedParticles; // 0x68(0x01)
	bool UpdatedTickedParticles; // 0x69(0x01)
	bool UseLocationFromProvider; // 0x6a(0x01)
	bool UseVelocityFromProvider; // 0x6b(0x01)
	bool UseSizeFromProvider; // 0x6c(0x01)
	bool UseColorFromProvider; // 0x6d(0x01)
	bool UseRotationFromProvider; // 0x6e(0x01)
	bool UseRotationRateFromProvider; // 0x6f(0x01)
};

// Class CascadeExtensionPlugin.ParticleModuleDecalComponent
// Size: 0x120 (Inherited: 0x60)
struct UParticleModuleDecalComponent : UAbstractParticleModule {
	struct TArray<struct UMaterialInterface*> DecalMaterials; // 0x60(0x10)
	struct FRawDistributionVector DecalScale; // 0x70(0x48)
	bool ScaleWithParticleSize; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FRawDistributionVector DecalRotation; // 0xc0(0x48)
	bool RotateToParticleVelocity; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32_t SortOrder; // 0x10c(0x04)
	bool OptimizeDecalComponentUsage; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	struct FName MaterialColorParameter; // 0x114(0x08)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class CascadeExtensionPlugin.ParticleModuleForcePoints
// Size: 0x88 (Inherited: 0x60)
struct UParticleModuleForcePoints : UAbstractParticleModule {
	float Intensity; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FVector> Points; // 0x68(0x10)
	enum class EDistanceWeight SeparationDistanceWeight; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float DistanceScale; // 0x7c(0x04)
	struct FName DynamicForcePointProviderName; // 0x80(0x08)
};

// Class CascadeExtensionPlugin.ParticleModuleLocationDonut
// Size: 0x78 (Inherited: 0x60)
struct UParticleModuleLocationDonut : UAbstractParticleModule {
	struct FVector Center; // 0x60(0x0c)
	float MinRadius; // 0x6c(0x04)
	float MaxRadius; // 0x70(0x04)
	bool SurfaceOnly; // 0x74(0x01)
	bool IsFlat; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
};

// Class CascadeExtensionPlugin.ParticleModuleLocationHeightmap
// Size: 0xa8 (Inherited: 0x60)
struct UParticleModuleLocationHeightmap : UAbstractParticleModule {
	struct UTexture2D* HeightmapTexture; // 0x60(0x08)
	bool UpdateWithTick; // 0x68(0x01)
	bool SmoothUpdate; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	struct FBox MapBounds; // 0x6c(0x1c)
	float Intensity; // 0x88(0x04)
	char pad_8C[0x1c]; // 0x8c(0x1c)
};

// Class CascadeExtensionPlugin.ParticleModuleLocationJiggle
// Size: 0xa8 (Inherited: 0x60)
struct UParticleModuleLocationJiggle : UAbstractParticleModule {
	struct FRawDistributionVector Intensity; // 0x60(0x48)
};

// Class CascadeExtensionPlugin.ParticleModuleLocationMesh
// Size: 0x170 (Inherited: 0x60)
struct UParticleModuleLocationMesh : UAbstractParticleModule {
	struct UStaticMesh* SurfaceMesh; // 0x60(0x08)
	struct FName DynamicMeshParameterName; // 0x68(0x08)
	struct FTransform MeshTransform; // 0x70(0x30)
	bool EqualTriangeWeight; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FRawDistributionFloat VelocityScale; // 0xa8(0x30)
	char pad_D8[0x98]; // 0xd8(0x98)

	void OnCachedActorDestroyed(struct AActor* DestroyedActor); // Function CascadeExtensionPlugin.ParticleModuleLocationMesh.OnCachedActorDestroyed // (Final|Native|Private) // @ game+0x654a00
};

// Class CascadeExtensionPlugin.ParticleModuleLocationSpiral
// Size: 0x120 (Inherited: 0x60)
struct UParticleModuleLocationSpiral : UAbstractParticleModule {
	struct FRawDistributionVector StartLocation; // 0x60(0x48)
	struct FRawDistributionFloat Radius; // 0xa8(0x30)
	float DeltaAngle; // 0xd8(0x04)
	float EllipseA; // 0xdc(0x04)
	float EllipseB; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FRawDistributionFloat DiscHeight; // 0xe8(0x30)
	float FalloffFactor; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// Class CascadeExtensionPlugin.ParticleModuleSizeBySpeedOverTime
// Size: 0xc8 (Inherited: 0x60)
struct UParticleModuleSizeBySpeedOverTime : UAbstractParticleModule {
	struct FRawDistributionVector Size; // 0x60(0x48)
	bool InvertSpeed; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FVector MaxSize; // 0xac(0x0c)
	struct FVector MinSize; // 0xb8(0x0c)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// Class CascadeExtensionPlugin.ParticleModuleSortOrder
// Size: 0x68 (Inherited: 0x60)
struct UParticleModuleSortOrder : UAbstractParticleModule {
	int32_t SortOrder; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class CascadeExtensionPlugin.ParticleModuleSwarmMovement
// Size: 0xa0 (Inherited: 0x60)
struct UParticleModuleSwarmMovement : UAbstractParticleModule {
	float PerceptionRadius; // 0x60(0x04)
	float MaxAcceleration; // 0x64(0x04)
	float MaxVelocity; // 0x68(0x04)
	float SeparationWeight; // 0x6c(0x04)
	float AlignmentWeight; // 0x70(0x04)
	float CohesionWeight; // 0x74(0x04)
	float BlindspotAngleDeg; // 0x78(0x04)
	enum class EDistanceWeight SeparationDistanceWeight; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct TArray<struct FVector> SteeringTargets; // 0x80(0x10)
	float SteeringWeight; // 0x90(0x04)
	enum class EDistanceWeight SteeringTargetDistanceWeight; // 0x94(0x01)
	char pad_95[0x3]; // 0x95(0x03)
	struct FName DynamicSteeringPointProviderName; // 0x98(0x08)
};

// Class CascadeExtensionPlugin.ParticleModuleVelocityTurbulence
// Size: 0x80 (Inherited: 0x60)
struct UParticleModuleVelocityTurbulence : UAbstractParticleModule {
	struct FVector Intensity; // 0x60(0x0c)
	float LengthScale; // 0x6c(0x04)
	float Tightness; // 0x70(0x04)
	float MaxAcceleration; // 0x74(0x04)
	float MaxVelocity; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

