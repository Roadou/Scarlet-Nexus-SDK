// BlueprintGeneratedClass BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C
// Size: 0x180 (Inherited: 0x178)
struct UBTT_ch_Base_MoveTo_C : UTaskBase_ch_Base_MoveTo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x178(0x08)

	void StopAIMoveTo(struct ARSCharacterBase* OwnerCharacter, bool bRechargeResetAIMoveTimer); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.StopAIMoveTo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDistanceAndHeight(struct FVector Location1, struct FVector Location2, float DistanceXY, float DistanceZ, bool bNearly); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.CheckDistanceAndHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ForceWarp(struct ARSBattlePlayer_C* OwnerCharacter); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.ForceWarp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMoveDistance_IsEnd(struct ARSCharacterBase* OwnerCharacter, bool bEnd); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.CheckMoveDistance_IsEnd // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckMovedDistance_Initialize(struct ARSCharacterBase* OwnerCharacter); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.CheckMovedDistance_Initialize // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMovedDistance_Tick(struct ARSCharacterBase* OwnerCharacter, float DeltaSeconds); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.CheckMovedDistance_Tick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckWall(struct ARSBattlePlayer_C* Player); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.CheckWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickMove(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.TickMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Check Stick Move End(struct APawn* ControlledPawn, bool bEnd); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.Check Stick Move End // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Exit(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFail_6FF7E653409D8C7BD2E703A76336C01D(enum class EPathFollowingResult MovementResult); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.OnFail_6FF7E653409D8C7BD2E703A76336C01D // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_6FF7E653409D8C7BD2E703A76336C01D(enum class EPathFollowingResult MovementResult); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.OnSuccess_6FF7E653409D8C7BD2E703A76336C01D // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetAIMoveTo(struct AAIController* OwnerController, struct ARSBattlePlayer_C* Player); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.SetAIMoveTo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAIMoveTo_CallFromCPP(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.SetAIMoveTo_CallFromCPP // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit_CallFromCPP(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.Exit_CallFromCPP // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_Base_MoveTo(int32_t EntryPoint); // Function BTT_ch_Base_MoveTo.BTT_ch_Base_MoveTo_C.ExecuteUbergraph_BTT_ch_Base_MoveTo // (Final|UbergraphFunction) // @ game+0x1685580
};

