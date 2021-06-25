// BlueprintGeneratedClass BP_SequencerParticle.BP_SequencerParticle_C
// Size: 0x2a0 (Inherited: 0x268)
struct ABP_SequencerParticle_C : ASequencerParticle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	float UserCustomTimeDilation; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct AActor* SubAttachActor; // 0x278(0x08)
	struct AActor* SubAttachActor2; // 0x280(0x08)
	struct FName SubAttachSocketName; // 0x288(0x08)
	bool BeginPlayBinding; // 0x290(0x01)
	bool Binding; // 0x291(0x01)
	bool SetupStageParam; // 0x292(0x01)
	bool UseStageParam; // 0x293(0x01)
	char pad_294[0x4]; // 0x294(0x04)
	struct AActor* SubAttachActor3; // 0x298(0x08)

	void UpdateStageParam(); // Function BP_SequencerParticle.BP_SequencerParticle_C.UpdateStageParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDilation(); // Function BP_SequencerParticle.BP_SequencerParticle_C.UpdateDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SequencerParticle.BP_SequencerParticle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SequencerParticle.BP_SequencerParticle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ClearWork(); // Function BP_SequencerParticle.BP_SequencerParticle_C.ClearWork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActiveWork(); // Function BP_SequencerParticle.BP_SequencerParticle_C.ActiveWork // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SequencerParticle(int32_t EntryPoint); // Function BP_SequencerParticle.BP_SequencerParticle_C.ExecuteUbergraph_BP_SequencerParticle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

