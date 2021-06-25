// BlueprintGeneratedClass BP_NormalSpeedParticleSystemComponent.BP_NormalSpeedParticleSystemComponent_C
// Size: 0x708 (Inherited: 0x6fb)
struct UBP_NormalSpeedParticleSystemComponent_C : UBP_RSParticleSystemComponent_C {
	char pad_6FB[0x5]; // 0x6fb(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)

	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function BP_NormalSpeedParticleSystemComponent.BP_NormalSpeedParticleSystemComponent_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function BP_NormalSpeedParticleSystemComponent.BP_NormalSpeedParticleSystemComponent_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_NormalSpeedParticleSystemComponent.BP_NormalSpeedParticleSystemComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_NormalSpeedParticleSystemComponent(int32_t EntryPoint); // Function BP_NormalSpeedParticleSystemComponent.BP_NormalSpeedParticleSystemComponent_C.ExecuteUbergraph_BP_NormalSpeedParticleSystemComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

