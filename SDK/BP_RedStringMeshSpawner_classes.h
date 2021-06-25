// BlueprintGeneratedClass BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C
// Size: 0x280 (Inherited: 0x230)
struct ABP_RedStringMeshSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UInstancedStaticMeshComponent* InstancedStaticMesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	int32_t InstanceMax; // 0x248(0x04)
	struct FRandomStream RandomData; // 0x24c(0x08)
	float distanceMin; // 0x254(0x04)
	float DistanceMax; // 0x258(0x04)
	int32_t CameraDistance; // 0x25c(0x04)
	float MoveSpeed; // 0x260(0x04)
	struct FVector SpawnLocation; // 0x264(0x0c)
	float SpawnScale; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct AActor* TransformActor; // 0x278(0x08)

	void ResetTransform(); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.ResetTransform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FTransform RandomTransform(); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.RandomTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RandomAddInstances(int32_t instanceNum, struct UInstancedStaticMeshComponent* InstancedMesh); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.RandomAddInstances // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetTransformInstanceCheck(); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.ResetTransformInstanceCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_RedStringMeshSpawner(int32_t EntryPoint); // Function BP_RedStringMeshSpawner.BP_RedStringMeshSpawner_C.ExecuteUbergraph_BP_RedStringMeshSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

