// BlueprintGeneratedClass BTT_ch_UseItem.BTT_ch_UseItem_C
// Size: 0xbc (Inherited: 0xb0)
struct UBTT_ch_UseItem_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t Step; // 0xb8(0x04)

	void CheckNeedsUseItem(struct APawn* Pawn, bool bNeedsUseItem); // Function BTT_ch_UseItem.BTT_ch_UseItem_C.CheckNeedsUseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Exit(struct APawn* controlled pawn); // Function BTT_ch_UseItem.BTT_ch_UseItem_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_UseItem.BTT_ch_UseItem_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_UseItem.BTT_ch_UseItem_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_UseItem.BTT_ch_UseItem_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_UseItem(int32_t EntryPoint); // Function BTT_ch_UseItem.BTT_ch_UseItem_C.ExecuteUbergraph_BTT_ch_UseItem // (Final|UbergraphFunction) // @ game+0x1685580
};

