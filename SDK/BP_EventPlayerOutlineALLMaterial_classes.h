// BlueprintGeneratedClass BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C
// Size: 0x258 (Inherited: 0x230)
struct ABP_EventPlayerOutlineALLMaterial_C : ARSActorSystemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_PlayerMaterialOutlineAccessorComponent_C* BP_PlayerMaterialOutlineAccessorComponent; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct TArray<struct UBP_PlayerMaterialOutlineAccessorComponent_C*> OutlineAccessorList; // 0x248(0x10)

	void PrivateUpdate(); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.PrivateUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateIsPlayerMesh(struct AActor* Actor, struct USkeletalMeshComponent* SkeletalMeshComponent, bool PlayerMesh); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.PrivateIsPlayerMesh // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setup(); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.Setup // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct USkeletalMeshComponent* SkeletalMesh, struct UBP_PlayerMaterialOutlineAccessorComponent_C* MaterialAccesser); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerOutlineALLMaterial(int32_t EntryPoint); // Function BP_EventPlayerOutlineALLMaterial.BP_EventPlayerOutlineALLMaterial_C.ExecuteUbergraph_BP_EventPlayerOutlineALLMaterial // (Final|UbergraphFunction) // @ game+0x1685580
};

