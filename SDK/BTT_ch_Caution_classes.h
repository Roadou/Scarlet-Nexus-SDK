// BlueprintGeneratedClass BTT_ch_Caution.BTT_ch_Caution_C
// Size: 0xbc (Inherited: 0xb0)
struct UBTT_ch_Caution_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float CautionTimer; // 0xb8(0x04)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Caution.BTT_ch_Caution_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Caution.BTT_ch_Caution_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Caution.BTT_ch_Caution_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Caution(int32_t EntryPoint); // Function BTT_ch_Caution.BTT_ch_Caution_C.ExecuteUbergraph_BTT_ch_Caution // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

