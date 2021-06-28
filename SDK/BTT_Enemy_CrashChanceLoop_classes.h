// BlueprintGeneratedClass BTT_Enemy_CrashChanceLoop.BTT_Enemy_CrashChanceLoop_C
// Size: 0xd9 (Inherited: 0xd0)
struct UBTT_Enemy_CrashChanceLoop_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	bool l_RemoveCore; // 0xd8(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_CrashChanceLoop.BTT_Enemy_CrashChanceLoop_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_CrashChanceLoop.BTT_Enemy_CrashChanceLoop_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_CrashChanceLoop.BTT_Enemy_CrashChanceLoop_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_CrashChanceLoop(int32_t EntryPoint); // Function BTT_Enemy_CrashChanceLoop.BTT_Enemy_CrashChanceLoop_C.ExecuteUbergraph_BTT_Enemy_CrashChanceLoop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

