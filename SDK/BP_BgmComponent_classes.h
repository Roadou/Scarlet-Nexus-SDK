// BlueprintGeneratedClass BP_BgmComponent.BP_BgmComponent_C
// Size: 0x1270 (Inherited: 0x1259)
struct UBP_BgmComponent_C : UBP_RSAtomComponent_C {
	char pad_1259[0x7]; // 0x1259(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1260(0x08)
	float tmpAisac; // 0x1268(0x04)
	float tmpDulation; // 0x126c(0x04)

	void ReceiveBeginPlay(); // Function BP_BgmComponent.BP_BgmComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BgmComponent.BP_BgmComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BgmComponent.BP_BgmComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_BgmComponent.BP_BgmComponent_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_BgmComponent.BP_BgmComponent_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function BP_BgmComponent.BP_BgmComponent_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function BP_BgmComponent.BP_BgmComponent_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function BP_BgmComponent.BP_BgmComponent_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function BP_BgmComponent.BP_BgmComponent_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BgmComponent(int32_t EntryPoint); // Function BP_BgmComponent.BP_BgmComponent_C.ExecuteUbergraph_BP_BgmComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

