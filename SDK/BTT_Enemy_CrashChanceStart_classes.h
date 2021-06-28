// BlueprintGeneratedClass BTT_Enemy_CrashChanceStart.BTT_Enemy_CrashChanceStart_C
// Size: 0xe8 (Inherited: 0xd0)
struct UBTT_Enemy_CrashChanceStart_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	float CrashAccessDelay; // 0xd8(0x04)
	bool IsHitStop; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
	struct UBP_PlayerHitStopComponent_C* HitStopComp; // 0xe0(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_CrashChanceStart.BTT_Enemy_CrashChanceStart_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_CrashChanceStart.BTT_Enemy_CrashChanceStart_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_CrashChanceStart.BTT_Enemy_CrashChanceStart_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_CrashChanceStart(int32_t EntryPoint); // Function BTT_Enemy_CrashChanceStart.BTT_Enemy_CrashChanceStart_C.ExecuteUbergraph_BTT_Enemy_CrashChanceStart // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

