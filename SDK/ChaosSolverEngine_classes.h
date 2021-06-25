// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xc8 (Inherited: 0xc0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x280 (Inherited: 0xc8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_C8[0x110]; // 0xc8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1d8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x228(0x50)
	char pad_278[0x8]; // 0x278(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x30dd680
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x2b8 (Inherited: 0x230)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x230(0x04)
	int32_t CollisionIterations; // 0x234(0x04)
	int32_t PushOutIterations; // 0x238(0x04)
	int32_t PushOutPairIterations; // 0x23c(0x04)
	float ClusterConnectionFactor; // 0x240(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x244(0x01)
	bool DoGenerateCollisionData; // 0x245(0x01)
	char pad_246[0x2]; // 0x246(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x248(0x10)
	bool DoGenerateBreakingData; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x25c(0x10)
	bool DoGenerateTrailingData; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x270(0x10)
	bool bHasFloor; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	float FloorHeight; // 0x284(0x04)
	float MassScale; // 0x288(0x04)
	bool bGenerateContactGraph; // 0x28c(0x01)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x28d(0x03)
	struct UBillboardComponent* SpriteComponent; // 0x290(0x08)
	char pad_298[0x18]; // 0x298(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2b0(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0x117a280
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x30dd770
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

