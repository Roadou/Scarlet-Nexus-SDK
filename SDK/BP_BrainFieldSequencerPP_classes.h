// BlueprintGeneratedClass BP_BrainFieldSequencerPP.BP_BrainFieldSequencerPP_C
// Size: 0x261 (Inherited: 0x230)
struct ABP_BrainFieldSequencerPP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UPostProcessComponent* PostProcess; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UMaterialInstanceDynamic* ConnectCableMaterial; // 0x248(0x08)
	struct FVector2D ConnectCableBurCenter; // 0x250(0x08)
	float ConnectCableBurSize; // 0x258(0x04)
	float ConnectCableBurRate; // 0x25c(0x04)
	bool Initialized; // 0x260(0x01)

	void Update(); // Function BP_BrainFieldSequencerPP.BP_BrainFieldSequencerPP_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_BrainFieldSequencerPP.BP_BrainFieldSequencerPP_C.Initialize // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BrainFieldSequencerPP.BP_BrainFieldSequencerPP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BrainFieldSequencerPP.BP_BrainFieldSequencerPP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BrainFieldSequencerPP(int32_t EntryPoint); // Function BP_BrainFieldSequencerPP.BP_BrainFieldSequencerPP_C.ExecuteUbergraph_BP_BrainFieldSequencerPP // (Final|UbergraphFunction) // @ game+0x1685580
};

