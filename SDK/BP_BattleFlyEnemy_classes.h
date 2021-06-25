// BlueprintGeneratedClass BP_BattleFlyEnemy.BP_BattleFlyEnemy_C
// Size: 0x20ec (Inherited: 0x2088)
struct ABP_BattleFlyEnemy_C : ARSBattleEnemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2088(0x08)
	struct ABP_FlyEnemyPawnBase_C* FlyEnemyPawn; // 0x2090(0x08)
	bool ChildMove; // 0x2098(0x01)
	char pad_2099[0x3]; // 0x2099(0x03)
	struct FVector OldLocation; // 0x209c(0x0c)
	bool IsFlyState; // 0x20a8(0x01)
	bool IsFloating; // 0x20a9(0x01)
	char pad_20AA[0x2]; // 0x20aa(0x02)
	float FlyLowerHeight; // 0x20ac(0x04)
	float FlyHighestHeight; // 0x20b0(0x04)
	bool FlyAdjust; // 0x20b4(0x01)
	char pad_20B5[0x3]; // 0x20b5(0x03)
	float FlyModeChangeIgnoreSeconds; // 0x20b8(0x04)
	float FlyModeChangeIgnoreTime; // 0x20bc(0x04)
	bool FlyMoveSlopeRestore; // 0x20c0(0x01)
	char pad_20C1[0x3]; // 0x20c1(0x03)
	float FlyMoveSlopeRestoreSeconds; // 0x20c4(0x04)
	float RotPow; // 0x20c8(0x04)
	float FlyAdjustSpeed; // 0x20cc(0x04)
	struct FGameTimer GroundCheckTimer; // 0x20d0(0x0c)
	float GroundCheckTime; // 0x20dc(0x04)
	float BeforeFlyPawnZ; // 0x20e0(0x04)
	float AnyMoreDifferentHeightUpdate; // 0x20e4(0x04)
	float AnyMoreDifferentLocationUpdatePawn; // 0x20e8(0x04)

	void SetAreaOutActorLocation(struct FVector NewLocation, bool return); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.SetAreaOutActorLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFlyModeChangeIgnoreSeconds(float FlyModeChangeIgnoreSeconds); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.SetFlyModeChangeIgnoreSeconds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetActorAllTickEnabled(bool bEnabled); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.SetActorAllTickEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize Max Speed(float MaxSpeed); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.Initialize Max Speed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ScaleMaxSpeed(float Scale, struct FName ClaimantName, bool Result); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.ScaleMaxSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LaunchDown(bool IsEnd); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.LaunchDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetCharacterMovementLocationSimple(); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.GetCharacterMovementLocationSimple // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsFlyHeightAdjust(bool IsFlyHeightAdjust); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.IsFlyHeightAdjust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyEnemyCheck(bool NewParam); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.IsFlyEnemyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnemyBaseLocation(struct FVector baseLocation); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.GetEnemyBaseLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCanFlyModeChange(bool IsFlyModeChange); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.IsCanFlyModeChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitializeHeight(float LowerHeight, float HightestHeight, bool dummy); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.InitializeHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FlyHeightAdjust(float DeltaSeconds, float FlyBaseZ); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.FlyHeightAdjust // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFlying(bool IsFlying); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.SetFlying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.MainTick // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BattleFlyEnemy(int32_t EntryPoint); // Function BP_BattleFlyEnemy.BP_BattleFlyEnemy_C.ExecuteUbergraph_BP_BattleFlyEnemy // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

