// BlueprintGeneratedClass BTT_Enemy_ResetAI.BTT_Enemy_ResetAI_C
// Size: 0x101 (Inherited: 0xd0)
struct UBTT_Enemy_ResetAI_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FBlackboardKeySelector Action; // 0xd8(0x28)
	char Enum; // 0x100(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_ResetAI.BTT_Enemy_ResetAI_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_ResetAI(int32_t EntryPoint); // Function BTT_Enemy_ResetAI.BTT_Enemy_ResetAI_C.ExecuteUbergraph_BTT_Enemy_ResetAI // (Final|UbergraphFunction) // @ game+0x1685580
};

