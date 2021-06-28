// BlueprintGeneratedClass BP_ShockWavePoint_em0310.BP_ShockWavePoint_em0310_C
// Size: 0x24c (Inherited: 0x230)
struct ABP_ShockWavePoint_em0310_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct ABP_em0300Base_C* Em0300Base; // 0x240(0x08)
	float JumpStartDistance; // 0x248(0x04)

	void UpdateJumpPermission(); // Function BP_ShockWavePoint_em0310.BP_ShockWavePoint_em0310_C.UpdateJumpPermission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ShockWavePoint_em0310.BP_ShockWavePoint_em0310_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ShockWavePoint_em0310.BP_ShockWavePoint_em0310_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ShockWavePoint_em0310(int32_t EntryPoint); // Function BP_ShockWavePoint_em0310.BP_ShockWavePoint_em0310_C.ExecuteUbergraph_BP_ShockWavePoint_em0310 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

