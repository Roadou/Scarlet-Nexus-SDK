// BlueprintGeneratedClass BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C
// Size: 0x2e8 (Inherited: 0x2c1)
struct ABP_EventPlayerMaterialHood_C : ABP_EventPlayerMaterialSingleBase_C {
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	bool HoodON; // 0x2d0(0x01)
	bool PreviousHood; // 0x2d1(0x01)
	bool NeonWireDepthTickOff; // 0x2d2(0x01)
	char pad_2D3[0x5]; // 0x2d3(0x05)
	struct TArray<struct UBPC_NeonWireDepth_C*> RestoreNeonWireDepthComp; // 0x2d8(0x10)

	void RestoreNeonWireDepthTick(); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.RestoreNeonWireDepthTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupNeonWireDepthTick(int32_t Index, struct UMeshComponent* MeshComp); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.SetupNeonWireDepthTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedSetup(int32_t Index, struct USkinnedMeshComponent* MeshComp); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.ProtectedSetup // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProtectedCheckForceSet(bool ForceSet); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.ProtectedCheckForceSet // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPlayerMaterialHood(int32_t EntryPoint); // Function BP_EventPlayerMaterialHood.BP_EventPlayerMaterialHood_C.ExecuteUbergraph_BP_EventPlayerMaterialHood // (Final|UbergraphFunction) // @ game+0x1685580
};

