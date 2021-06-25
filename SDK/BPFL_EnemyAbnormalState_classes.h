// BlueprintGeneratedClass BPFL_EnemyAbnormalState.BPFL_EnemyAbnormalState_C
// Size: 0x28 (Inherited: 0x28)
struct UBPFL_EnemyAbnormalState_C : UBlueprintFunctionLibrary {

	void UpdateBadStateStart(struct USkeletalMeshComponent* Mesh, struct UCurveFloat* startCurve, float curveTime, struct UObject* __WorldContext, bool isStarting); // Function BPFL_EnemyAbnormalState.BPFL_EnemyAbnormalState_C.UpdateBadStateStart // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateMaterialUseSwitch(bool Use, struct USkeletalMeshComponent* Mesh, struct UObject* __WorldContext); // Function BPFL_EnemyAbnormalState.BPFL_EnemyAbnormalState_C.BadStateMaterialUseSwitch // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadEnemyBadState(struct UObject* __WorldContext, struct TMap<enum class HCSkillAttribute, struct FEnemyStateDataCell> rCells); // Function BPFL_EnemyAbnormalState.BPFL_EnemyAbnormalState_C.LoadEnemyBadState // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBadStateMaterial(struct FEnemyStateDataCell SetState, struct USkeletalMeshComponent* Mesh, struct UObject* __WorldContext); // Function BPFL_EnemyAbnormalState.BPFL_EnemyAbnormalState_C.SetBadStateMaterial // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

