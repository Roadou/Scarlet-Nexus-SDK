// BlueprintGeneratedClass BP_EnemyGoalComponent.BP_EnemyGoalComponent_C
// Size: 0x141 (Inherited: 0x100)
struct UBP_EnemyGoalComponent_C : UEnemyGoalComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	struct ABP_EnemyGoalActor_C* MoveGoalActor; // 0x108(0x08)
	struct ARSBattleEnemy_C* MyEnemy; // 0x110(0x08)
	struct ARSBattleCharacter_C* TargetCharacter; // 0x118(0x08)
	struct FVector TargetLocation; // 0x120(0x0c)
	enum class Enum_EnemyGoalType GoalType; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	float HitWallRadius; // 0x130(0x04)
	float HitWallHeight; // 0x134(0x04)
	struct UEnemyCalcGoalComponent* CalcComponent; // 0x138(0x08)
	bool bDisableUpdateCharacter; // 0x140(0x01)

	struct UEnemyCalcGoalComponent* InitializeGetEnemyCalcComponent_FromNative(struct AActor* Owner); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.InitializeGetEnemyCalcComponent_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float InitializeGetCapsuleRadius_FromNative(struct AActor* Owner); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.InitializeGetCapsuleRadius_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* InitializeSpawnMoveGoalActor_FromNative(struct AActor* Owner); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.InitializeSpawnMoveGoalActor_FromNative // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReSetGoalIntervalTime(); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.ReSetGoalIntervalTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGoalIntervalTime(float newIntervalTime); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.SetGoalIntervalTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CorrectionHitCollision(struct FVector SrcLocation, struct FVector DstLocation, float Radius, struct FVector Location); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.CorrectionHitCollision // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetGoalActor(struct AActor* Actor); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.GetGoalActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugDraw(); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.DebugDraw // (Private|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateTargetCharacter(float DeltaSeconds); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.UpdateTargetCharacter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.MainTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetLocation(struct FVector Location); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.GetTargetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void getTargetActor(struct ARSBattleCharacter_C* Character); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.getTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetTargetLocation(struct FVector Location); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.SetTargetLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetActor(struct ARSBattleCharacter_C* Character); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.SetTargetActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyGoalComponent(int32_t EntryPoint); // Function BP_EnemyGoalComponent.BP_EnemyGoalComponent_C.ExecuteUbergraph_BP_EnemyGoalComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

