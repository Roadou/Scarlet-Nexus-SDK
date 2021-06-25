// BlueprintGeneratedClass BPI_EnemyInterface.BPI_EnemyInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_EnemyInterface_C : UInterface {

	void em1130_EnableWeak(bool bEnable, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.em1130_EnableWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em8310_IsMaskMan(bool bMaskMan); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em8310_IsMaskMan // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartCriticalHitSlow(struct FHCHitResult InHitResult, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.StartCriticalHitSlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyUpDownWait(bool bUpDownWait); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyUpDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyUpDownWait(bool DownWait, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyUpDownWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSwitchAttackCollisionInfo(bool IsSwitch); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsSwitchAttackCollisionInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainFieldEnemyAlive(bool bEnemyAlive); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsBrainFieldEnemyAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_GetSpawnTransform(struct FTransform SpawTransform); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em1400_GetSpawnTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_SetSpawnTransform(struct FTransform SpawnTransform, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em1400_SetSpawnTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_UpdateDither(enum class EEasingFunc EasingFunc, float DeltaSec, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em1400_UpdateDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_EndDither(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em1400_EndDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em1400_StartDither(float TotalDuration, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em1400_StartDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Em0700_EnableInvalidDamage(bool bEnable); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.Em0700_EnableInvalidDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDiscoveredOnceInterface(bool bDiscoverd); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyDiscoveredOnceInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartReactionDilation(char ReactionKind, bool AddDamage, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.StartReactionDilation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyTickDisableCondition(bool bDisableCondition); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyTickDisableCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void em1210_AddPSychicFlyObj(struct ABP_PsychicObjectBasic_C* FlyObj, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.em1210_AddPSychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void em1200_ChangePhaseParamSetting(bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.em1200_ChangePhaseParamSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotFindPlayer(bool bNotFind); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsNotFindPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsChangeAiTypeAction(enum class Enum_EnemyAiType InAiType, bool bPossible); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsChangeAiTypeAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckChangeAiTypeForHpRate(bool Failed); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.CheckChangeAiTypeForHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAiType(enum class Enum_EnemyAiType ChangeAiType, bool bFailed); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.ChangeAiType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldCutChange(bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnEnemyBrainFieldCutChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetStatus(bool bMoveBrainField, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnEnemyBrainFieldResetStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldFinishWeapon(bool bMoveBrainField, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnEnemyBrainFieldFinishWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetAction(bool bMoveBrainField, bool bReset); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnEnemyBrainFieldResetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSpawnMoveStart(bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnSpawnMoveStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableLostAction(bool bDisable); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsDisableLostAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemySpawnNow(bool SpawnNow); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemySpawnNow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPossibleTargetAttack(struct AActor* attacker, bool bPossible); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsPossibleTargetAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCrashChance(bool bEnd); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnEndCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCrashChance(bool bStart); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnStartCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRealThings(bool bReal); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsRealThings // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMainPlayerDistance(float Distance); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetMainPlayerDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SwitchDispCore(bool DisplayOn, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SwitchDispCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueObjState(bool ReturnState); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUniqueObjState(struct FHCHitResult HitResult, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.CheckUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUniqueObjState(struct ABP_PsychicObjectBasic_C* AttackObject, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.StartUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndUniqueObjState(bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.EndUniqueObjState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyPressDownEnd(bool Dammy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyPressDownEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcCameraShake(struct UCameraShake* InputShakeClass, float InputScale, struct FVector ShakeLocation, struct UCameraShake* OutputShakeClass, float OutputScale); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.CalcCameraShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateFloating(bool IsFloating); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyStateFloating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCore(struct ABP_co2000Base_C* CoreObject); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetBrainCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetKind(enum class RSPartyPlayerKind TargetKind); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetTargetKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttacking(bool IsAttack); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsAttacking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashSequence(bool IsUnique, struct ULevelSequence* Sequence); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetBrainCrashSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReturnStart(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.ReturnStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHideWeak(bool IsHideWeak); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsHideWeak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnStart(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SpawnStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyEnemyCheck(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsFlyEnemyCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHeightCheckFlag(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetHeightCheckFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnemySpawn(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetEnemySpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemySpawn(bool Spawn, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemySpawn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnemyDataDrop(struct FVector SpawnLocation, struct FVector SpawnDir, bool IsDrop); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.EnemyDataDrop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerActionForEnemyReaction(enum class EPsychicObjectAttackType PsychicObjectType, struct FVector PsychicObjLocation, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.PlayerActionForEnemyReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetDistance(float Distance); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetTargetDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetDistanceToPlayer(float Distance); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetDistanceToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableEnemyMoveRange(bool bReturn); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnableEnemyMoveRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossEnemy(bool bBoss); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsBossEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemyBrainCrashParam(float BrainCrashTimer, float BrainCrashMissScale, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyBrainCrashParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyStealthSeeEnable(bool on, bool ShadowChange, bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyStealthSeeEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSwitchVisibleBrainFieldLevel(bool Visible, bool Unused); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.OnSwitchVisibleBrainFieldLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyWait(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.ResetEnemyWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyWait(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyGroundTransform(struct FTransform Transform, struct FTransform return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetEnemyGroundTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldEnd(bool MoveBrainField, bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyBrainFieldEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldStart(bool MoveBrainField, bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyBrainFieldStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldMoveNormal(bool MoveBrainField, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyBrainFieldMoveNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldMoveInner(bool MoveBrainField, bool dummy); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyBrainFieldMoveInner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyDamageReaction(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyDamageReaction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyTarget(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.ResetEnemyTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyTarget(bool NewParam); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyActive(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEnemyBrainCrashPerformance(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.SetEnemyBrainCrashPerformance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyBossActive(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyBossActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateAction(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyStateAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateMove(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyStateMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamageDown(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyStateDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamage(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyStateDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateAttack(bool return); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyStateAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnemyDamageBlow(bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.isEnemyDamageBlow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageknockBack(bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyDamageknockBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnemyDamageLaunch(bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.isEnemyDamageLaunch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyAction(enum class EnemyActionAnimKind Action, bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyAction(enum class EnemyActionAnimKind Action, bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.BeginEnemyAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageDown(bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyDamageWince(bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyDamageWince // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyMove(enum class EnemyMoveAnimKind move, bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyMove(enum class EnemyMoveAnimKind move, bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.BeginEnemyMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyAttack(enum class EnemyAttackAnimKind Attack, bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.IsEnemyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnemyAttack(enum class EnemyAttackAnimKind Attack, bool bool); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.BeginEnemyAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyInterfaceSound(enum class Enum_EnemySound Enum); // Function BPI_EnemyInterface.BPI_EnemyInterface_C.GetEnemyInterfaceSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

