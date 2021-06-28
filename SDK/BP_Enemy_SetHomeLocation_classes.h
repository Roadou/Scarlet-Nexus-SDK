// BlueprintGeneratedClass BP_Enemy_SetHomeLocation.BP_Enemy_SetHomeLocation_C
// Size: 0x108 (Inherited: 0xb0)
struct UBP_Enemy_SetHomeLocation_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FBlackboardKeySelector Home; // 0xb8(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xe0(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_SetHomeLocation.BP_Enemy_SetHomeLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_SetHomeLocation.BP_Enemy_SetHomeLocation_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_SetHomeLocation(int32_t EntryPoint); // Function BP_Enemy_SetHomeLocation.BP_Enemy_SetHomeLocation_C.ExecuteUbergraph_BP_Enemy_SetHomeLocation // (Final|UbergraphFunction) // @ game+0x1685580
};

