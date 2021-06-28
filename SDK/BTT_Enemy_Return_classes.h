// BlueprintGeneratedClass BTT_Enemy_Return.BTT_Enemy_Return_C
// Size: 0xb9 (Inherited: 0xb0)
struct UBTT_Enemy_Return_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool return; // 0xb8(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_Return.BTT_Enemy_Return_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_Return(int32_t EntryPoint); // Function BTT_Enemy_Return.BTT_Enemy_Return_C.ExecuteUbergraph_BTT_Enemy_Return // (Final|UbergraphFunction) // @ game+0x1685580
};

