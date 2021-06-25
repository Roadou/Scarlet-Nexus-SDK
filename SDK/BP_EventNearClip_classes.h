// BlueprintGeneratedClass BP_EventNearClip.BP_EventNearClip_C
// Size: 0x248 (Inherited: 0x230)
struct ABP_EventNearClip_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float NearClip; // 0x240(0x04)
	float PreviousNearClip; // 0x244(0x04)

	void ReceiveBeginPlay(); // Function BP_EventNearClip.BP_EventNearClip_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventNearClip.BP_EventNearClip_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventNearClip.BP_EventNearClip_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventNearClip(int32_t EntryPoint); // Function BP_EventNearClip.BP_EventNearClip_C.ExecuteUbergraph_BP_EventNearClip // (Final|UbergraphFunction) // @ game+0x1685580
};

