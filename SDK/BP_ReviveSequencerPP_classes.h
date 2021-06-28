// BlueprintGeneratedClass BP_ReviveSequencerPP.BP_ReviveSequencerPP_C
// Size: 0x25c (Inherited: 0x230)
struct ABP_ReviveSequencerPP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UPostProcessComponent* PostProcess; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UMaterialInstanceDynamic* MIDRecoverPlayer; // 0x248(0x08)
	float BlurRate; // 0x250(0x04)
	float BlurSize; // 0x254(0x04)
	float BlackMaskRate; // 0x258(0x04)

	void Update(); // Function BP_ReviveSequencerPP.BP_ReviveSequencerPP_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_ReviveSequencerPP.BP_ReviveSequencerPP_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ReviveSequencerPP.BP_ReviveSequencerPP_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ReviveSequencerPP.BP_ReviveSequencerPP_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ReviveSequencerPP(int32_t EntryPoint); // Function BP_ReviveSequencerPP.BP_ReviveSequencerPP_C.ExecuteUbergraph_BP_ReviveSequencerPP // (Final|UbergraphFunction) // @ game+0x1685580
};

