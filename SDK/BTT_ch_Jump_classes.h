// BlueprintGeneratedClass BTT_ch_Jump.BTT_ch_Jump_C
// Size: 0xc8 (Inherited: 0xb0)
struct UBTT_ch_Jump_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool bPress; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	struct FGameTimer Timer; // 0xbc(0x0c)

	void Exit(struct APawn* ControlledPawn); // Function BTT_ch_Jump.BTT_ch_Jump_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Jump.BTT_ch_Jump_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Jump.BTT_ch_Jump_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Jump.BTT_ch_Jump_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Jump(int32_t EntryPoint); // Function BTT_ch_Jump.BTT_ch_Jump_C.ExecuteUbergraph_BTT_ch_Jump // (Final|UbergraphFunction) // @ game+0x1685580
};

