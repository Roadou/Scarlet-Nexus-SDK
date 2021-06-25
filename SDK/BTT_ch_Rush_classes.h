// BlueprintGeneratedClass BTT_ch_Rush.BTT_ch_Rush_C
// Size: 0xc1 (Inherited: 0xb0)
struct UBTT_ch_Rush_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t count; // 0xb8(0x04)
	int32_t Step; // 0xbc(0x04)
	bool bExecMoveTo; // 0xc0(0x01)

	void Exit(struct APawn* ControlledPawn, struct AAIController* OwnerController); // Function BTT_ch_Rush.BTT_ch_Rush_C.Exit // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFail_DE67968147E7AE929E26DA99FE78378D(enum class EPathFollowingResult MovementResult); // Function BTT_ch_Rush.BTT_ch_Rush_C.OnFail_DE67968147E7AE929E26DA99FE78378D // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_DE67968147E7AE929E26DA99FE78378D(enum class EPathFollowingResult MovementResult); // Function BTT_ch_Rush.BTT_ch_Rush_C.OnSuccess_DE67968147E7AE929E26DA99FE78378D // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFail_DFFE4004481D9FDEE7077F9D4A3499C7(enum class EPathFollowingResult MovementResult); // Function BTT_ch_Rush.BTT_ch_Rush_C.OnFail_DFFE4004481D9FDEE7077F9D4A3499C7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_DFFE4004481D9FDEE7077F9D4A3499C7(enum class EPathFollowingResult MovementResult); // Function BTT_ch_Rush.BTT_ch_Rush_C.OnSuccess_DFFE4004481D9FDEE7077F9D4A3499C7 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Rush.BTT_ch_Rush_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Rush.BTT_ch_Rush_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Rush.BTT_ch_Rush_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Rush(int32_t EntryPoint); // Function BTT_ch_Rush.BTT_ch_Rush_C.ExecuteUbergraph_BTT_ch_Rush // (Final|UbergraphFunction) // @ game+0x1685580
};

