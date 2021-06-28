// BlueprintGeneratedClass BP_SequencerParticleTrail.BP_SequencerParticleTrail_C
// Size: 0x2aa (Inherited: 0x290)
struct ABP_SequencerParticleTrail_C : ASequencerParticleTrail {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct AActor* SubAttachActor; // 0x298(0x08)
	struct AActor* SubAttachActor2; // 0x2a0(0x08)
	bool IsInitialize; // 0x2a8(0x01)
	bool BeginPlayBinding; // 0x2a9(0x01)

	void Initialize(); // Function BP_SequencerParticleTrail.BP_SequencerParticleTrail_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SequencerParticleTrail.BP_SequencerParticleTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SequencerParticleTrail.BP_SequencerParticleTrail_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ClearWork(); // Function BP_SequencerParticleTrail.BP_SequencerParticleTrail_C.ClearWork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActiveWork(); // Function BP_SequencerParticleTrail.BP_SequencerParticleTrail_C.ActiveWork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SequencerParticleTrail(int32_t EntryPoint); // Function BP_SequencerParticleTrail.BP_SequencerParticleTrail_C.ExecuteUbergraph_BP_SequencerParticleTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

