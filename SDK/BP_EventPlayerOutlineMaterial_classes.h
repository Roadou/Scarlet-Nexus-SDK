// BlueprintGeneratedClass BP_EventPlayerOutlineMaterial.BP_EventPlayerOutlineMaterial_C
// Size: 0x259 (Inherited: 0x230)
struct ABP_EventPlayerOutlineMaterial_C : ARSActorSystemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_PlayerMaterialOutlineAccessorComponent_C* BP_PlayerMaterialOutlineAccessorComponent; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct AActor* SubAttachActor; // 0x248(0x08)
	struct AActor* SubAttachActor2; // 0x250(0x08)
	bool Initialized; // 0x258(0x01)

	void Initialize(struct USkeletalMeshComponent* SkeletalMesh); // Function BP_EventPlayerOutlineMaterial.BP_EventPlayerOutlineMaterial_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerOutlineMaterial.BP_EventPlayerOutlineMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPlayerOutlineMaterial.BP_EventPlayerOutlineMaterial_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerOutlineMaterial(int32_t EntryPoint); // Function BP_EventPlayerOutlineMaterial.BP_EventPlayerOutlineMaterial_C.ExecuteUbergraph_BP_EventPlayerOutlineMaterial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

