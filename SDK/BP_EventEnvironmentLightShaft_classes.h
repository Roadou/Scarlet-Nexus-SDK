// BlueprintGeneratedClass BP_EventEnvironmentLightShaft.BP_EventEnvironmentLightShaft_C
// Size: 0x248 (Inherited: 0x230)
struct ABP_EventEnvironmentLightShaft_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float LightShaftScale; // 0x240(0x04)
	float DefaultValue; // 0x244(0x04)

	void SetLightShaftScale(float Scale); // Function BP_EventEnvironmentLightShaft.BP_EventEnvironmentLightShaft_C.SetLightShaftScale // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventEnvironmentLightShaft.BP_EventEnvironmentLightShaft_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventEnvironmentLightShaft.BP_EventEnvironmentLightShaft_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventEnvironmentLightShaft.BP_EventEnvironmentLightShaft_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventEnvironmentLightShaft(int32_t EntryPoint); // Function BP_EventEnvironmentLightShaft.BP_EventEnvironmentLightShaft_C.ExecuteUbergraph_BP_EventEnvironmentLightShaft // (Final|UbergraphFunction) // @ game+0x1685580
};

