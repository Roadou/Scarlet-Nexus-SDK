// BlueprintGeneratedClass BTT_ch_PlayerRevive.BTT_ch_PlayerRevive_C
// Size: 0xb8 (Inherited: 0xb0)
struct UBTT_ch_PlayerRevive_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)

	void Exit(struct APawn* ControlledPawn); // Function BTT_ch_PlayerRevive.BTT_ch_PlayerRevive_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_PlayerRevive.BTT_ch_PlayerRevive_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_PlayerRevive(int32_t EntryPoint); // Function BTT_ch_PlayerRevive.BTT_ch_PlayerRevive_C.ExecuteUbergraph_BTT_ch_PlayerRevive // (Final|UbergraphFunction) // @ game+0x1685580
};

