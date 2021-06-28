// BlueprintGeneratedClass BP_EventHiddenActorType.BP_EventHiddenActorType_C
// Size: 0x256 (Inherited: 0x230)
struct ABP_EventHiddenActorType_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool Enable; // 0x240(0x01)
	bool TargetPlayerMain; // 0x241(0x01)
	bool TargetPlayerNPC; // 0x242(0x01)
	bool TargetEnemy; // 0x243(0x01)
	bool TargetDeadEnpc; // 0x244(0x01)
	bool TargetPsychicObject; // 0x245(0x01)
	bool TargetSavePoint; // 0x246(0x01)
	char pad_247[0x1]; // 0x247(0x01)
	float DitherTime; // 0x248(0x04)
	bool Hidden; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	float Time; // 0x250(0x04)
	bool RestoreVisible; // 0x254(0x01)
	bool Start; // 0x255(0x01)

	void SetDither(float DeltaSeconds, bool InHidden, float InDitherTime); // Function BP_EventHiddenActorType.BP_EventHiddenActorType_C.SetDither // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_EventHiddenActorType.BP_EventHiddenActorType_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EventHiddenActorType.BP_EventHiddenActorType_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventHiddenActorType.BP_EventHiddenActorType_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventHiddenActorType.BP_EventHiddenActorType_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventHiddenActorType(int32_t EntryPoint); // Function BP_EventHiddenActorType.BP_EventHiddenActorType_C.ExecuteUbergraph_BP_EventHiddenActorType // (Final|UbergraphFunction) // @ game+0x1685580
};

