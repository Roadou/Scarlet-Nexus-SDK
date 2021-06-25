// BlueprintGeneratedClass BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C
// Size: 0x1b4 (Inherited: 0x180)
struct UBTT_ch_MoveToPlayer_C : UBTT_ch_Base_MoveTo_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	bool bSprint; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	float StopPlayerDistanceZ; // 0x18c(0x04)
	float StopPlayerDistance; // 0x190(0x04)
	bool bRunning; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	float WALK_TO_RUN_DIST; // 0x198(0x04)
	float RUN_TO_WALK_DIST; // 0x19c(0x04)
	float RUN_SPEED_RATE_MIN; // 0x1a0(0x04)
	float RunSpeedRate; // 0x1a4(0x04)
	float BaseWalkSpeedScale; // 0x1a8(0x04)
	float RUN_SPEED_RATE_DIST_MAX; // 0x1ac(0x04)
	float RUN_SPEED_RATE_DIST_MIN; // 0x1b0(0x04)

	void CalcRunSpeedRate(float CurrentDistSq, float MinDistSq, float MaxDistSq, float SpeedScale); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.CalcRunSpeedRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateWalkOrRun(struct APawn* ControlledPawn); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.UpdateWalkOrRun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeWalkOrRun(struct APawn* ControlledPawn); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.InitializeWalkOrRun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWalkSpeed(struct APawn* ControlledPawn); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.UpdateWalkSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_ch_MoveToPlayer(int32_t EntryPoint); // Function BTT_ch_MoveToPlayer.BTT_ch_MoveToPlayer_C.ExecuteUbergraph_BTT_ch_MoveToPlayer // (Final|UbergraphFunction) // @ game+0x1685580
};

