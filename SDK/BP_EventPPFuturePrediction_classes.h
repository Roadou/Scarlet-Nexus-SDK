// BlueprintGeneratedClass BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C
// Size: 0x2ad (Inherited: 0x269)
struct ABP_EventPPFuturePrediction_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float DistortionRate; // 0x27c(0x04)
	float ChromAber; // 0x280(0x04)
	float Nega; // 0x284(0x04)
	float RadialPower; // 0x288(0x04)
	struct FLinearColor NoiseColor; // 0x28c(0x10)
	struct FLinearColor BrainFieldNoiseColor; // 0x29c(0x10)
	bool bUseBrainFieldNoiseColor; // 0x2ac(0x01)

	void ReceiveBeginPlay(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayDynamicCutScene(); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPFuturePrediction(int32_t EntryPoint); // Function BP_EventPPFuturePrediction.BP_EventPPFuturePrediction_C.ExecuteUbergraph_BP_EventPPFuturePrediction // (Final|UbergraphFunction) // @ game+0x1685580
};

