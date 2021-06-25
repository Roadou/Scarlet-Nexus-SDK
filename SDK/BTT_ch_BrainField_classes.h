// BlueprintGeneratedClass BTT_ch_BrainField.BTT_ch_BrainField_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBTT_ch_BrainField_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void Exit(struct APawn* ControlledPawn); // Function BTT_ch_BrainField.BTT_ch_BrainField_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_BrainField.BTT_ch_BrainField_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_BrainField(int32_t EntryPoint); // Function BTT_ch_BrainField.BTT_ch_BrainField_C.ExecuteUbergraph_BTT_ch_BrainField // (Final|UbergraphFunction) // @ game+0x1685580
};

