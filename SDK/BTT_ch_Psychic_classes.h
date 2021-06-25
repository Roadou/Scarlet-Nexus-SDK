// BlueprintGeneratedClass BTT_ch_Psychic.BTT_ch_Psychic_C
// Size: 0xc0 (Inherited: 0xb0)
struct UBTT_ch_Psychic_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t Step; // 0xb8(0x04)
	float Timer; // 0xbc(0x04)

	void Success(struct APawn* ControlledPawn); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.Success // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickPsychic(struct APawn* ControlledPawn); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.TickPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Failed(struct APawn* ControlledPawn); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.Failed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit(struct APawn* ControlledPawn); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.Exit // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Psychic(int32_t EntryPoint); // Function BTT_ch_Psychic.BTT_ch_Psychic_C.ExecuteUbergraph_BTT_ch_Psychic // (Final|UbergraphFunction) // @ game+0x1685580
};

