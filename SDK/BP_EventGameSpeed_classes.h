// BlueprintGeneratedClass BP_EventGameSpeed.BP_EventGameSpeed_C
// Size: 0x279 (Inherited: 0x230)
struct ABP_EventGameSpeed_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float TimeDilation; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct FString DilationName; // 0x248(0x10)
	struct TArray<struct ALevelSequenceActor*> Sequencers; // 0x258(0x10)
	struct TArray<float> SequencerDilations; // 0x268(0x10)
	bool ControlSASExtraCutin; // 0x278(0x01)

	void PrivateSetupTimeDilation(float Dilation); // Function BP_EventGameSpeed.BP_EventGameSpeed_C.PrivateSetupTimeDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventGameSpeed.BP_EventGameSpeed_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventGameSpeed.BP_EventGameSpeed_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventGameSpeed.BP_EventGameSpeed_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventGameSpeed(int32_t EntryPoint); // Function BP_EventGameSpeed.BP_EventGameSpeed_C.ExecuteUbergraph_BP_EventGameSpeed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

