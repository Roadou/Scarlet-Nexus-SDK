// BlueprintGeneratedClass BTT_ch_Dodge.BTT_ch_Dodge_C
// Size: 0xc0 (Inherited: 0xb0)
struct UBTT_ch_Dodge_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool bPress; // 0xb8(0x01)
	bool bSprint; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t Step; // 0xbc(0x04)

	void Exit(struct APawn* ControlledPawn); // Function BTT_ch_Dodge.BTT_ch_Dodge_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Dodge.BTT_ch_Dodge_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Dodge.BTT_ch_Dodge_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Dodge.BTT_ch_Dodge_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Dodge(int32_t EntryPoint); // Function BTT_ch_Dodge.BTT_ch_Dodge_C.ExecuteUbergraph_BTT_ch_Dodge // (Final|UbergraphFunction) // @ game+0x1685580
};

