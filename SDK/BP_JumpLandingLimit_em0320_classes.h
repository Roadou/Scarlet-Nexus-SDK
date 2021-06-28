// BlueprintGeneratedClass BP_JumpLandingLimit_em0320.BP_JumpLandingLimit_em0320_C
// Size: 0x2a8 (Inherited: 0x29c)
struct ABP_JumpLandingLimit_em0320_C : ABP_VolumeBase_em0300_C {
	char pad_29C[0x4]; // 0x29c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)

	void OnEndOverLap(struct AActor* OtherActor); // Function BP_JumpLandingLimit_em0320.BP_JumpLandingLimit_em0320_C.OnEndOverLap // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_JumpLandingLimit_em0320.BP_JumpLandingLimit_em0320_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JumpLandingLimit_em0320(int32_t EntryPoint); // Function BP_JumpLandingLimit_em0320.BP_JumpLandingLimit_em0320_C.ExecuteUbergraph_BP_JumpLandingLimit_em0320 // (Final|UbergraphFunction) // @ game+0x1685580
};

