// BlueprintGeneratedClass BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C
// Size: 0x2c1 (Inherited: 0x230)
struct ABP_EventPlayerMaterialSingleBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct AActor* SubAttachActor01; // 0x240(0x08)
	struct AActor* SubAttachActor02; // 0x248(0x08)
	struct AActor* SubAttachActor03; // 0x250(0x08)
	struct AActor* SubAttachActor04; // 0x258(0x08)
	struct AActor* SubAttachActor05; // 0x260(0x08)
	struct AActor* SubAttachActor06; // 0x268(0x08)
	struct AActor* SubAttachActor07; // 0x270(0x08)
	struct AActor* SubAttachActor08; // 0x278(0x08)
	struct AActor* SubAttachActor09; // 0x280(0x08)
	struct AActor* SubAttachActor10; // 0x288(0x08)
	struct TArray<bool> FirstSet; // 0x290(0x10)
	struct TArray<bool> SetupActors; // 0x2a0(0x10)
	struct TArray<struct USkinnedMeshComponent*> TargetMeshes; // 0x2b0(0x10)
	bool RestoreParameter; // 0x2c0(0x01)

	void ProtectedRestore(int32_t Index, struct USkinnedMeshComponent* MeshComp); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ProtectedRestore // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Restore(); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.Restore // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetup(int32_t Index, struct USkinnedMeshComponent* MeshComp); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ProtectedSetup // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedCheckForceSet(bool ForceSet); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ProtectedCheckForceSet // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerMaterialSingleBase(int32_t EntryPoint); // Function BP_EventPlayerMaterialSingleBase.BP_EventPlayerMaterialSingleBase_C.ExecuteUbergraph_BP_EventPlayerMaterialSingleBase // (Final|UbergraphFunction) // @ game+0x1685580
};

