// BlueprintGeneratedClass BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C
// Size: 0x138 (Inherited: 0xb0)
struct UBP_Enemy_GoHomeLocation_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float RangeArea; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FBlackboardKeySelector Home; // 0xc0(0x28)
	struct FBlackboardKeySelector IsMove; // 0xe8(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0x110(0x28)

	void OnFail_4923306543073C6F297AAEA6B7571D09(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C.OnFail_4923306543073C6F297AAEA6B7571D09 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_4923306543073C6F297AAEA6B7571D09(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C.OnSuccess_4923306543073C6F297AAEA6B7571D09 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_GoHomeLocation(int32_t EntryPoint); // Function BP_Enemy_GoHomeLocation.BP_Enemy_GoHomeLocation_C.ExecuteUbergraph_BP_Enemy_GoHomeLocation // (Final|UbergraphFunction) // @ game+0x1685580
};

