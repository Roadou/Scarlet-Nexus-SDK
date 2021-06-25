// Class CableComponent.CableActor
// Size: 0x238 (Inherited: 0x230)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x230(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x4c0 (Inherited: 0x430)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x430(0x01)
	bool bAttachEnd; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct FComponentReference AttachEndTo; // 0x438(0x28)
	struct FName AttachEndToSocketName; // 0x460(0x08)
	struct FVector EndLocation; // 0x468(0x0c)
	float CableLength; // 0x474(0x04)
	int32_t NumSegments; // 0x478(0x04)
	float SubstepTime; // 0x47c(0x04)
	int32_t SolverIterations; // 0x480(0x04)
	bool bEnableStiffness; // 0x484(0x01)
	bool bEnableCollision; // 0x485(0x01)
	char pad_486[0x2]; // 0x486(0x02)
	float CollisionFriction; // 0x488(0x04)
	struct FVector CableForce; // 0x48c(0x0c)
	float CableGravityScale; // 0x498(0x04)
	float CableWidth; // 0x49c(0x04)
	int32_t NumSides; // 0x4a0(0x04)
	float TileMaterial; // 0x4a4(0x04)
	char pad_4A8[0x18]; // 0x4a8(0x18)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0xd698b0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0xd697b0
	void GetCableParticleLocations(struct TArray<struct FVector> locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xd69700
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd696d0
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd696a0
};

