// BlueprintGeneratedClass BTT_Enemy_CrashChanceEnd.BTT_Enemy_CrashChanceEnd_C
// Size: 0xd9 (Inherited: 0xd0)
struct UBTT_Enemy_CrashChanceEnd_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	bool IsUniqueEndProcessing; // 0xd8(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_CrashChanceEnd.BTT_Enemy_CrashChanceEnd_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_CrashChanceEnd.BTT_Enemy_CrashChanceEnd_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_CrashChanceEnd.BTT_Enemy_CrashChanceEnd_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_CrashChanceEnd(int32_t EntryPoint); // Function BTT_Enemy_CrashChanceEnd.BTT_Enemy_CrashChanceEnd_C.ExecuteUbergraph_BTT_Enemy_CrashChanceEnd // (Final|UbergraphFunction) // @ game+0x1685580
};

