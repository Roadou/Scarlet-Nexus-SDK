// BlueprintGeneratedClass BP_Enemy_GoLocation.BP_Enemy_GoLocation_C
// Size: 0x108 (Inherited: 0xb0)
struct UBP_Enemy_GoLocation_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xb8(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xe0(0x28)

	void OnFail_F5ED0EDF4CFE966CF41524A33BDAA67A(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_GoLocation.BP_Enemy_GoLocation_C.OnFail_F5ED0EDF4CFE966CF41524A33BDAA67A // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_F5ED0EDF4CFE966CF41524A33BDAA67A(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_GoLocation.BP_Enemy_GoLocation_C.OnSuccess_F5ED0EDF4CFE966CF41524A33BDAA67A // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_GoLocation.BP_Enemy_GoLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_GoLocation.BP_Enemy_GoLocation_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_GoLocation(int32_t EntryPoint); // Function BP_Enemy_GoLocation.BP_Enemy_GoLocation_C.ExecuteUbergraph_BP_Enemy_GoLocation // (Final|UbergraphFunction) // @ game+0x1685580
};

