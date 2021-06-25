// BlueprintGeneratedClass BTT_ch_MoveAttack.BTT_ch_MoveAttack_C
// Size: 0x1bc (Inherited: 0x1a5)
struct UBTT_ch_MoveAttack_C : UBTT_ch_MoveCircle_C {
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)
	int32_t Step_1; // 0x1b0(0x04)
	int32_t count; // 0x1b4(0x04)
	float AttackStartTime; // 0x1b8(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_MoveAttack.BTT_ch_MoveAttack_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_MoveAttack.BTT_ch_MoveAttack_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_MoveAttack.BTT_ch_MoveAttack_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_MoveAttack(int32_t EntryPoint); // Function BTT_ch_MoveAttack.BTT_ch_MoveAttack_C.ExecuteUbergraph_BTT_ch_MoveAttack // (Final|UbergraphFunction) // @ game+0x1685580
};

