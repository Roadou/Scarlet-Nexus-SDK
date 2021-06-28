// BlueprintGeneratedClass BP_Enemy_MoveToTargetStop.BP_Enemy_MoveToTargetStop_C
// Size: 0xe0 (Inherited: 0xb0)
struct UBP_Enemy_MoveToTargetStop_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xb8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetStop.BP_Enemy_MoveToTargetStop_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_MoveToTargetStop(int32_t EntryPoint); // Function BP_Enemy_MoveToTargetStop.BP_Enemy_MoveToTargetStop_C.ExecuteUbergraph_BP_Enemy_MoveToTargetStop // (Final|UbergraphFunction) // @ game+0x1685580
};

