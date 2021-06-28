// BlueprintGeneratedClass BTT_Enemy_SetActionTimer.BTT_Enemy_SetActionTimer_C
// Size: 0x104 (Inherited: 0xd0)
struct UBTT_Enemy_SetActionTimer_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FBlackboardKeySelector ActionTimerKey; // 0xd8(0x28)
	float l_SetTime; // 0x100(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_SetActionTimer.BTT_Enemy_SetActionTimer_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_SetActionTimer(int32_t EntryPoint); // Function BTT_Enemy_SetActionTimer.BTT_Enemy_SetActionTimer_C.ExecuteUbergraph_BTT_Enemy_SetActionTimer // (Final|UbergraphFunction) // @ game+0x1685580
};

