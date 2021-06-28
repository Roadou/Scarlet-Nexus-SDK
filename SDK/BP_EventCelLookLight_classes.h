// BlueprintGeneratedClass BP_EventCelLookLight.BP_EventCelLookLight_C
// Size: 0x248 (Inherited: 0x230)
struct ABP_EventCelLookLight_C : AEventCelLookLightBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UArrowComponent* arrow; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function BP_EventCelLookLight.BP_EventCelLookLight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventCelLookLight.BP_EventCelLookLight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventCelLookLight.BP_EventCelLookLight_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventCelLookLight(int32_t EntryPoint); // Function BP_EventCelLookLight.BP_EventCelLookLight_C.ExecuteUbergraph_BP_EventCelLookLight // (Final|UbergraphFunction) // @ game+0x1685580
};

