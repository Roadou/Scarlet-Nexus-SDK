// BlueprintGeneratedClass BP_EnvComponent.BP_EnvComponent_C
// Size: 0x1268 (Inherited: 0x1259)
struct UBP_EnvComponent_C : UBP_RSAtomComponent_C {
	char pad_1259[0x7]; // 0x1259(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1260(0x08)

	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_EnvComponent.BP_EnvComponent_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_EnvComponent.BP_EnvComponent_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EnvComponent.BP_EnvComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnvComponent(int32_t EntryPoint); // Function BP_EnvComponent.BP_EnvComponent_C.ExecuteUbergraph_BP_EnvComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

