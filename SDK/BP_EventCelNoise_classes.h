// BlueprintGeneratedClass BP_EventCelNoise.BP_EventCelNoise_C
// Size: 0x274 (Inherited: 0x230)
struct ABP_EventCelNoise_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float AllRate; // 0x240(0x04)
	float LineRate; // 0x244(0x04)
	float GbRate; // 0x248(0x04)
	float RestoreGbModulate; // 0x24c(0x04)
	float RestoreLineAlpha; // 0x250(0x04)
	float LineScale; // 0x254(0x04)
	bool UseAnimation; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	float RestoreLineSpeed; // 0x25c(0x04)
	float RestoreGb1Speed; // 0x260(0x04)
	float RestoreGb2Speed; // 0x264(0x04)
	bool IsInitialized; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float RestoreLineScale; // 0x26c(0x04)
	float LineAnimationOffPattern; // 0x270(0x04)

	void Update(); // Function BP_EventCelNoise.BP_EventCelNoise_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Finalize(); // Function BP_EventCelNoise.BP_EventCelNoise_C.Finalize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EventCelNoise.BP_EventCelNoise_C.Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventCelNoise.BP_EventCelNoise_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventCelNoise.BP_EventCelNoise_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventCelNoise.BP_EventCelNoise_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventCelNoise(int32_t EntryPoint); // Function BP_EventCelNoise.BP_EventCelNoise_C.ExecuteUbergraph_BP_EventCelNoise // (Final|UbergraphFunction) // @ game+0x1685580
};

