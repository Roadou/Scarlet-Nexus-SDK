// BlueprintGeneratedClass BP_EventNeonWireDepth.BP_EventNeonWireDepth_C
// Size: 0x269 (Inherited: 0x230)
struct ABP_EventNeonWireDepth_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool Initialized; // 0x240(0x01)
	char pad_241[0x7]; // 0x241(0x07)
	struct UBPC_NeonWireDepth_C* AddNeonWireComponent; // 0x248(0x08)
	bool RenderAfterDOFOff; // 0x250(0x01)
	bool RestoreAfterDOFOff; // 0x251(0x01)
	char pad_252[0x2]; // 0x252(0x02)
	int32_t RestoreAfterDOFOffMaterialIndex; // 0x254(0x04)
	struct UMaterialInterface* RestoreAfterDOFOffMaterial; // 0x258(0x08)
	struct UMeshComponent* RestoreAfterDOFOffTargetMesh; // 0x260(0x08)
	bool DepthWire; // 0x268(0x01)

	void Finalize(); // Function BP_EventNeonWireDepth.BP_EventNeonWireDepth_C.Finalize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventNeonWireDepth.BP_EventNeonWireDepth_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventNeonWireDepth.BP_EventNeonWireDepth_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventNeonWireDepth.BP_EventNeonWireDepth_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventNeonWireDepth.BP_EventNeonWireDepth_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventNeonWireDepth(int32_t EntryPoint); // Function BP_EventNeonWireDepth.BP_EventNeonWireDepth_C.ExecuteUbergraph_BP_EventNeonWireDepth // (Final|UbergraphFunction) // @ game+0x1685580
};

