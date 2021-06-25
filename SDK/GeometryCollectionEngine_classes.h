// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x430 (Inherited: 0x200)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x200(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x200(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x200(0x01)
	char pad_200_3 : 5; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x204(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x21c(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x234(0x18)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x250(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x2a0(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x2f0(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x300(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x310(0x10)
	char pad_320[0x110]; // 0x320(0x110)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData> TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x30fff90
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData> CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x30ffea0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData> BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x30ffdb0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x30ffd10
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x30ffc80
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x30ffb50
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x30ffac0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x30ffa20
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x30ff990
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x30ff910
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x79d490
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x30ff780
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x30ff4c0
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x79d490
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x240 (Inherited: 0x230)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x230(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x238(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x30ff7b0
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x860 (Inherited: 0x430)
struct UGeometryCollectionComponent : UMeshComponent {
	char pad_430[0x8]; // 0x430(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x438(0x08)
	char pad_440[0xe0]; // 0x440(0xe0)
	struct UGeometryCollection* RestCollection; // 0x520(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x528(0x10)
	bool Simulating; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x540(0x01)
	bool EnableClustering; // 0x541(0x01)
	char pad_542[0x2]; // 0x542(0x02)
	int32_t ClusterGroupIndex; // 0x544(0x04)
	int32_t MaxClusterLevel; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct TArray<float> DamageThreshold; // 0x550(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	int32_t CollisionGroup; // 0x564(0x04)
	float CollisionSampleFraction; // 0x568(0x04)
	float LinearEtherDrag; // 0x56c(0x04)
	float AngularEtherDrag; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x578(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x580(0x01)
	char pad_581[0x3]; // 0x581(0x03)
	struct FVector InitialLinearVelocity; // 0x584(0x0c)
	struct FVector InitialAngularVelocity; // 0x590(0x0c)
	char pad_59C[0x4]; // 0x59c(0x04)
	struct FGeomComponentCacheParameters CacheParameters; // 0x5a0(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x5f0(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x600(0x10)
	char pad_610[0x18]; // 0x610(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x628(0x10)
	float DesiredCacheTime; // 0x638(0x04)
	bool CachePlayback; // 0x63c(0x01)
	char pad_63D[0x3]; // 0x63d(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x640(0x10)
	bool bNotifyBreaks; // 0x650(0x01)
	bool bNotifyCollisions; // 0x651(0x01)
	char pad_652[0x1de]; // 0x652(0x1de)
	struct UBodySetup* DummyBodySetup; // 0x830(0x08)
	char pad_838[0x28]; // 0x838(0x28)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x30ffbf0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1685580
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x30ff610
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x30ff540
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x318 (Inherited: 0x230)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x238(0x18)
	bool bDebugDrawWholeCollection; // 0x250(0x01)
	bool bDebugDrawHierarchy; // 0x251(0x01)
	bool bDebugDrawClustering; // 0x252(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x253(0x01)
	bool bShowRigidBodyId; // 0x254(0x01)
	bool bShowRigidBodyCollision; // 0x255(0x01)
	bool bCollisionAtOrigin; // 0x256(0x01)
	bool bShowRigidBodyTransform; // 0x257(0x01)
	bool bShowRigidBodyInertia; // 0x258(0x01)
	bool bShowRigidBodyVelocity; // 0x259(0x01)
	bool bShowRigidBodyForce; // 0x25a(0x01)
	bool bShowRigidBodyInfos; // 0x25b(0x01)
	bool bShowTransformIndex; // 0x25c(0x01)
	bool bShowTransform; // 0x25d(0x01)
	bool bShowParent; // 0x25e(0x01)
	bool bShowLevel; // 0x25f(0x01)
	bool bShowConnectivityEdges; // 0x260(0x01)
	bool bShowGeometryIndex; // 0x261(0x01)
	bool bShowGeometryTransform; // 0x262(0x01)
	bool bShowBoundingBox; // 0x263(0x01)
	bool bShowFaces; // 0x264(0x01)
	bool bShowFaceIndices; // 0x265(0x01)
	bool bShowFaceNormals; // 0x266(0x01)
	bool bShowSingleFace; // 0x267(0x01)
	int32_t SingleFaceIndex; // 0x268(0x04)
	bool bShowVertices; // 0x26c(0x01)
	bool bShowVertexIndices; // 0x26d(0x01)
	bool bShowVertexNormals; // 0x26e(0x01)
	bool bUseActiveVisualization; // 0x26f(0x01)
	float PointThickness; // 0x270(0x04)
	float LineThickness; // 0x274(0x04)
	bool bTextShadow; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float TextScale; // 0x27c(0x04)
	float NormalScale; // 0x280(0x04)
	float AxisScale; // 0x284(0x04)
	float ArrowScale; // 0x288(0x04)
	struct FColor RigidBodyIdColor; // 0x28c(0x04)
	float RigidBodyTransformScale; // 0x290(0x04)
	struct FColor RigidBodyCollisionColor; // 0x294(0x04)
	struct FColor RigidBodyInertiaColor; // 0x298(0x04)
	struct FColor RigidBodyVelocityColor; // 0x29c(0x04)
	struct FColor RigidBodyForceColor; // 0x2a0(0x04)
	struct FColor RigidBodyInfoColor; // 0x2a4(0x04)
	struct FColor TransformIndexColor; // 0x2a8(0x04)
	float TransformScale; // 0x2ac(0x04)
	struct FColor LevelColor; // 0x2b0(0x04)
	struct FColor ParentColor; // 0x2b4(0x04)
	float ConnectivityEdgeThickness; // 0x2b8(0x04)
	struct FColor GeometryIndexColor; // 0x2bc(0x04)
	float GeometryTransformScale; // 0x2c0(0x04)
	struct FColor BoundingBoxColor; // 0x2c4(0x04)
	struct FColor FaceColor; // 0x2c8(0x04)
	struct FColor FaceIndexColor; // 0x2cc(0x04)
	struct FColor FaceNormalColor; // 0x2d0(0x04)
	struct FColor SingleFaceColor; // 0x2d4(0x04)
	struct FColor VertexColor; // 0x2d8(0x04)
	struct FColor VertexIndexColor; // 0x2dc(0x04)
	struct FColor VertexNormalColor; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x2e8(0x08)
	char pad_2F0[0x28]; // 0x2f0(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xd8 (Inherited: 0xc0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xc0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xd0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t MinLevelSetResolution; // 0x44(0x04)
	int32_t MaxLevelSetResolution; // 0x48(0x04)
	int32_t MinClusterLevelSetResolution; // 0x4c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x04)
	float CollisionObjectReductionPercentage; // 0x54(0x04)
	bool bMassAsDensity; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Mass; // 0x5c(0x04)
	float MinimumMassClamp; // 0x60(0x04)
	float CollisionParticlesFraction; // 0x64(0x04)
	int32_t MaximumCollisionParticles; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	bool EnableRemovePiecesOnFracture; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xa8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xb8(0x04)
	char pad_BC[0x14]; // 0xbc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2d0 (Inherited: 0x230)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x230(0x08)
	struct UMaterial* RayMarchMaterial; // 0x238(0x08)
	float SurfaceTolerance; // 0x240(0x04)
	float Isovalue; // 0x244(0x04)
	bool Enabled; // 0x248(0x01)
	bool RenderVolumeBoundingBox; // 0x249(0x01)
	char pad_24A[0x86]; // 0x24a(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x148 (Inherited: 0xc0)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_C0[0x8]; // 0xc0(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xc8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xd0(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd8(0x08)
	bool bSimulating; // 0xe0(0x01)
	bool bNotifyCollisions; // 0xe1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	float Density; // 0xe4(0x04)
	float MinMass; // 0xe8(0x04)
	float MaxMass; // 0xec(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0xf4(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0xf8(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0xfc(0x04)
	int32_t MinLevelSetResolution; // 0x100(0x04)
	int32_t MaxLevelSetResolution; // 0x104(0x04)
	int32_t CollisionGroup; // 0x108(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FVector InitialLinearVelocity; // 0x110(0x0c)
	struct FVector InitialAngularVelocity; // 0x11c(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x128(0x10)
	char pad_138[0x10]; // 0x138(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x148 (Inherited: 0xc0)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_C0[0x8]; // 0xc0(0x08)
	bool Simulating; // 0xc8(0x01)
	bool bNotifyCollisions; // 0xc9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xca(0x01)
	char pad_CB[0x1]; // 0xcb(0x01)
	float Mass; // 0xcc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xd0(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xd1(0x01)
	char pad_D2[0x2]; // 0xd2(0x02)
	int32_t MinLevelSetResolution; // 0xd4(0x04)
	int32_t MaxLevelSetResolution; // 0xd8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct FVector InitialLinearVelocity; // 0xe0(0x0c)
	struct FVector InitialAngularVelocity; // 0xec(0x0c)
	float DamageThreshold; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x100(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0x108(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x130(0x10)
	char pad_140[0x8]; // 0x140(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x30ff760
};

