// BlueprintGeneratedClass BP_ao_Pouf.BP_ao_Pouf_C
// Size: 0x2d4 (Inherited: 0x2c0)
struct ABP_ao_Pouf_C : ABP_ao_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FVector FirstLocation; // 0x2c8(0x0c)

	void ReceiveBeginPlay(); // Function BP_ao_Pouf.BP_ao_Pouf_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ao_Pouf.BP_ao_Pouf_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ResetLocation(); // Function BP_ao_Pouf.BP_ao_Pouf_C.ResetLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ao_Pouf(int32_t EntryPoint); // Function BP_ao_Pouf.BP_ao_Pouf_C.ExecuteUbergraph_BP_ao_Pouf // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

