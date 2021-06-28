// BlueprintGeneratedClass BP_EnemyFurComponent.BP_EnemyFurComponent_C
// Size: 0x12c (Inherited: 0xc0)
struct UBP_EnemyFurComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct FTransform> Transforms; // 0xc8(0x10)
	int32_t CacheFrame; // 0xd8(0x04)
	int32_t nowindex; // 0xdc(0x04)
	struct FTransform PreviousTransform; // 0xe0(0x30)
	struct USkeletalMeshComponent* TargetMesh; // 0x110(0x08)
	struct FName UseMovingBoneName; // 0x118(0x08)
	struct FName UseCenterBoneName; // 0x120(0x08)
	float FrameInterpolate; // 0x128(0x04)

	void PrivateUpdateMoving(float DeltaSeconds); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.PrivateUpdateMoving // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetUseMoving(bool Enable); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.SetUseMoving // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct USkeletalMeshComponent* TargetSkeletalMeshComponent); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateUpdate(float DeltaSeconds); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.PrivateUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyFurComponent(int32_t EntryPoint); // Function BP_EnemyFurComponent.BP_EnemyFurComponent_C.ExecuteUbergraph_BP_EnemyFurComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

