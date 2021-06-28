// BlueprintGeneratedClass BP_TaskBase_Enemy.BP_TaskBase_Enemy_C
// Size: 0xd0 (Inherited: 0xb0)
struct UBP_TaskBase_Enemy_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float Rad; // 0xb8(0x04)
	float Height; // 0xbc(0x04)
	bool IsCapsuleChange; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct UCurveFloat* FovOutCurve; // 0xc8(0x08)

	void AbortCrashChance(struct ARSBattleEnemy_C* Enemy, bool RemoveCore, bool dummy); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.AbortCrashChance // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHItWallOnly(struct AActor* Actor, struct FVector Vec, float Length, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsHItWallOnly // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTarget4DirLeft(struct AActor* Actor, struct AActor* Target, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsTarget4DirLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTarget4DirRight(struct AActor* Actor, struct AActor* Target, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsTarget4DirRight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTarget4DirBack(struct AActor* Actor, struct AActor* Target, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsTarget4DirBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTarget4DirFront(struct AActor* Actor, struct AActor* Target, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsTarget4DirFront // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void PlayActionEnd(struct AActor* Actor, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.PlayActionEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawState(struct FString String); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.DebugDrawState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitWall(struct AActor* Actor, struct FVector Vec, float Length, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsHitWall // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetRotation(struct AActor* Actor, float sec, float interpSpeed); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.SetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLookTargetRotation(struct AActor* Actor, struct AActor* Target, struct FRotator Rot); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.GetLookTargetRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetCapsule(struct AActor* Actor); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.ResetCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCapsule(struct AActor* Actor); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.SetCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMovement(struct AActor* Actor, enum class EMovementMode move); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.SetMovement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLandCheck(struct AActor* Actor, bool IsCeiling, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsLandCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTargetBack(struct AActor* Actor, struct AActor* Target, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsTargetBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTargetLeft(struct AActor* Actor, struct AActor* Target, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.IsTargetLeft // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndProcessing(struct AActor* Actor, enum class EnemyMoveAnimKind move, bool return); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.EndProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TaskBase_Enemy(int32_t EntryPoint); // Function BP_TaskBase_Enemy.BP_TaskBase_Enemy_C.ExecuteUbergraph_BP_TaskBase_Enemy // (Final|UbergraphFunction) // @ game+0x1685580
};

