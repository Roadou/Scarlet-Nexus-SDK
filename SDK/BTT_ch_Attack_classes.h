// BlueprintGeneratedClass BTT_ch_Attack.BTT_ch_Attack_C
// Size: 0xc0 (Inherited: 0xb0)
struct UBTT_ch_Attack_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t count; // 0xb8(0x04)
	int32_t Step; // 0xbc(0x04)

	void IsObstacleHitCheckToTargetActor(struct AActor* ControlledPawn, bool Hit); // Function BTT_ch_Attack.BTT_ch_Attack_C.IsObstacleHitCheckToTargetActor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit(struct APawn* ControlledPawn); // Function BTT_ch_Attack.BTT_ch_Attack_C.Exit // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Attack.BTT_ch_Attack_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Attack.BTT_ch_Attack_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Attack.BTT_ch_Attack_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Attack(int32_t EntryPoint); // Function BTT_ch_Attack.BTT_ch_Attack_C.ExecuteUbergraph_BTT_ch_Attack // (Final|UbergraphFunction) // @ game+0x1685580
};

