// BlueprintGeneratedClass BP_BrainFieldFunction.BP_BrainFieldFunction_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_BrainFieldFunction_C : UBlueprintFunctionLibrary {

	void CheckBattleFieldNoFenceEnemy(struct TArray<struct AActor*> EnemyTargetNormalTarget, struct UObject* __WorldContext, bool UseBattleField, int32_t BFGroupID); // Function BP_BrainFieldFunction.BP_BrainFieldFunction_C.CheckBattleFieldNoFenceEnemy // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldRightPlayerLocation(struct UObject* __WorldContext, struct FVector Transform); // Function BP_BrainFieldFunction.BP_BrainFieldFunction_C.GetBrainFieldRightPlayerLocation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetBrainFieldLeftPlayerLocation(struct UObject* __WorldContext, struct FVector Transform); // Function BP_BrainFieldFunction.BP_BrainFieldFunction_C.GetBrainFieldLeftPlayerLocation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckBrainFieldTarget(struct AActor* CheckActor, bool UseBattleField, int32_t BattleFieldID, struct UObject* __WorldContext, bool BattleFieldTarget, bool NormalTarget); // Function BP_BrainFieldFunction.BP_BrainFieldFunction_C.CheckBrainFieldTarget // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

