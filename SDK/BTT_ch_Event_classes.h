// BlueprintGeneratedClass BTT_ch_Event.BTT_ch_Event_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBTT_ch_Event_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Event.BTT_ch_Event_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Event(int32_t EntryPoint); // Function BTT_ch_Event.BTT_ch_Event_C.ExecuteUbergraph_BTT_ch_Event // (Final|UbergraphFunction) // @ game+0x1685580
};

