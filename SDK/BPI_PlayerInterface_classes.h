// BlueprintGeneratedClass BPI_PlayerInterface.BPI_PlayerInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_PlayerInterface_C : UInterface {

	void SASCancelEffectAndSEInterface(bool bEffect, bool bSE, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SASCancelEffectAndSEInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugNextBattleThinkLog(struct FFPlayerAIBattleThinkTransitionData InTransitionData, bool return); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.DebugNextBattleThinkLog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackCollisionDelayTime(struct TArray<float> AttackDelayTime, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetAttackCollisionDelayTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDriveAttacked(bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetDriveAttacked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableDriveAttack(bool Enable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnableDriveAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUsingItem(bool bUsing, enum class EConsumeItemID ItemId); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsUsingItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AddBattleBonusInterface(enum class EBattleBonusAddType Type, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.AddBattleBonusInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProcEndBrainCrash(int32_t CrashTargetNum, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ProcEndBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreLockTargetInterface(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.RestoreLockTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StoreLockTargetInterface(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.StoreLockTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBattleStartTimer(bool Enable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CheckBattleStartTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecTalkEvent(bool bTalk); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsExecTalkEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeforeCutSceneEventManagerStart(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.BeforeCutSceneEventManagerStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashStartTransform(struct FTransform Transform); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetBrainCrashStartTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetAttackHitStop(struct AActor* DamagedActor, struct FHCHitResult HitResult, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetAttackHitStop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BattleSettingEm1500(bool bBattle, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.BattleSettingEm1500 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnpcSasStealthEnd(bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetEnpcSasStealthEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnpcSasStealthStart(bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetEnpcSasStealthStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnablePlaySpTrigger(); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnablePlaySpTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnablePlaySpTrigger(bool bEnable, bool return ); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EnablePlaySpTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePlayerActionAfterEvent(enum class EParamAfterEventAction EventAction, bool return); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.UpdatePlayerActionAfterEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableActionBoringIdle(bool bDisable, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetDisableActionBoringIdle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSasTeleport(bool IsActive); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsActiveEnpcSasTeleport // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSasElectric(bool IsActive); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsActiveEnpcSasElectric // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSasFire(bool IsActive); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsActiveEnpcSasFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableRegistSAS(bool Enable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnableRegistSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableDrive(bool Enable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnableDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorSetting(bool bInElevator, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ElevatorSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisablePlayerFootIK(bool bDisable, struct FName ClaimantName, float BlendTime, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.DisablePlayerFootIK // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyKillEnemy(struct ARSBattleCharacter_C* KillActor, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.NotifyKillEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMainPlayer(bool bMainPlayer); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecNpcRevive(bool bExec); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsExecNpcRevive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNpcWarpDither(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetNpcWarpDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectReactionChanceEndAction(struct TArray<enum class EPlayerAIBattleThinkType> InEndAction, enum class EPlayerAIBattleThinkType OutEndAction); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SelectReactionChanceEndAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetReactionChanceEndAction(enum class EPlayerAIBattleThinkType EndAction); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetReactionChanceEndAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartEnpcDrive(bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.OnStartEnpcDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartReactionChance(bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.OnStartReactionChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableCreateCopy(bool Enable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnableCreateCopy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishMetamorphosisLastAttack(bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.FinishMetamorphosisLastAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAutoTakenItem(bool bAuto); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsAutoTakenItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsDying(bool bDying); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsDying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResumePlayer(bool bResume); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ResumePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SuspendPlayer(bool bSuspend); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SuspendPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventInputRestrictAction(bool bRestrict, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EventInputRestrictAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventInputRestrict(bool bRestrict, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EventInputRestrict // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDriveMode(bool bDrive); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsDriveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainFieldBattleTalk(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.PlayBrainFieldBattleTalk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCollisionOverlap(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ResetCollisionOverlap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAssassinAttack(enum class EAssassinAttackHit Type, struct ARSBattleCharacter_C* DamagedActor, bool bSuccess, bool bArmorBreak); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CheckAssassinAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnpcSASLinkAble(enum class E_SASKind kind, bool bOK); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnpcSASLinkAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeginEnpcSAS(enum class E_SASKind kind, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.BeginEnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAnimNotify_EnpcSAS(enum class E_SASKind kind, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.OnAnimNotify_EnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCameraControl(bool bControl); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsCameraControl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetNpcBrainFieldDrive(bool bDrive, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetNpcBrainFieldDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestBrainFieldHelp(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.RequestBrainFieldHelp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckTargetableCharacterENPC(struct ARSCharacterBase* chara); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CheckTargetableCharacterENPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableUseSeeThrough(bool bEnable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EnableUseSeeThrough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTalkLookAtLocation(bool bTalkLookAt, struct FVector Location); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetTalkLookAtLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndTalkLookAtTurn(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EndTalkLookAtTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAnimationEndTalkTurn(bool bAnimation); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsAnimationEndTalkTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetTalkLookAtTurn(struct FVector LookAtLocation, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetTalkLookAtTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableSeeThrough(bool bEnable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnableSeeThrough // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIntense(bool bIntense); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsIntense // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnpcComp(struct UBP_ENpcComponent_C* ReturnComp); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetEnpcComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetPsychicEmissionInterface(bool bON, struct FName ClaimantName); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetPsychicEmissionInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableInputPsychicCombo(bool bEnable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnableInputPsychicCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsJumpAreaAble(bool bAble); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsJumpAreaAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerInputRestriction(enum class EPlayerInputRestrictionType Type, bool bRestriction); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsPlayerInputRestriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetPlayerInputRestriction(enum class EPlayerInputRestrictionType Type, bool bRestriction, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetPlayerInputRestriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnableRigidBody(bool Enable); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetEnableRigidBody // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillParameter(enum class EPlayerSkill skill, bool bLearned, float Parameter); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetSkillParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsForceWarpAble_Interface(bool bWarpAble); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsForceWarpAble_Interface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnAnimNotifyInputPsychic(); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.OnAnimNotifyInputPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckStickInputTurn(bool bTurn); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CheckStickInputTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyRedCode(bool NewParam); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.DestroyRedCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateRedCode(bool NewParam); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CreateRedCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnpcBarrierHitNotify(struct FHCHitResult Result, bool Dammy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EnpcBarrierHitNotify // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanEnpcOpenBrainField(bool CanDo); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CanEnpcOpenBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackedEnemyDead(enum class ECharaDeadType DeadType, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.OnAttackedEnemyDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReturnMetamorphosis(struct FVector Location, struct FRotator Rotation, struct ARSBattlePlayer_C* SpecifyPlayer, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ReturnMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanSpecialMoveTrigger(bool CanDo); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CanSpecialMoveTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkillCoreDropProbability(float Probability); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetSkillCoreDropProbability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeENpcKind(enum class ENpcKind ENpcKind, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ChangeENpcKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSpecialDownTimer(float SpDownTimer); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetSpecialDownTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpecialDown(bool IsSpDown, float SpDownWince); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsSpecialDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDodgeScale(float DodgeScale); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetDodgeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDodgeTargetRot(bool IsDodgeTargetRot); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsDodgeTargetRot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENpcKind(enum class ENpcKind ENpcKind); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetENpcKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanBattleAction(enum class EPlayerAIBattleThinkType ThinkType, bool CanAction); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.CanBattleAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnpcBarrier(bool IsBarrier); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnpcBarrier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseFog(bool IsFog); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsUseFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddHitPsychicFlyObj(struct ABP_PsychicObjectBasic_C* HitFlyObj, bool IsAdd); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.AddHitPsychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicFlyObj(struct TArray<struct AActor*> FlyObj); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetPsychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPsychicFlyObj(struct ABP_PsychicObjectBasic_C* FlyObj, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.AddPsychicFlyObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyPlayer(bool bEnemyPlayer); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsEnemyPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetStealth(bool flag in); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetStealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCanAnimOverrideSASColor(bool Enabled); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetCanAnimOverrideSASColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCanAnimOverrideSASColor(bool Enable, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetCanAnimOverrideSASColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectEnableRange(bool is Brain Field in, float Range); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetPsychicObjectEnableRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ForceWarp_Interface(struct FTransform Transform, float IdlingSeconds, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ForceWarp_Interface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerCameraReset(float InterpSec, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.PlayerCameraReset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSAS_Kind(enum class E_SASButton Button, enum class E_SASKind kind); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetSAS_Kind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerActionAfterEvent(enum class EParamAfterEventAction Param, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetPlayerActionAfterEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetSpecialEffects(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.ResetSpecialEffects // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopSASCodeDirection(enum class ERSCableGravityType Type, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.StopSASCodeDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySASCodeDirection(enum class ERSCableGravityType Type, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.PlaySASCodeDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOpenBrainField(bool bOpen); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.IsOpenBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldTimeRate(float Rate); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetBrainFieldTimeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCodeActorList(struct TArray<struct ABP_CableBase_C*> CodeList); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetBrainCodeActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASCodeActorList(struct TArray<struct ABP_CableBase_C*> CodeList); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetSASCodeActorList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASCode(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.StartSASCode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSASCodeParam(float Param, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetSASCodeParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCodeVisible(bool bVisible, bool bDrive, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetBrainCodeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerBattle(bool bBattle, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetPlayerBattle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerWeaponList(enum class EGetPlayerWeaponType Type, struct TArray<struct ABP_WeaponBase_C*> WeaponList); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetPlayerWeaponList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetPlayerActionSAS(bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetPlayerActionSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableRigidBody(bool bEnable, float LerpTime, bool bDummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.EnableRigidBody // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSASCodeVisible(bool bVisible, bool dummy); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.SetSASCodeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerIndex(int32_t Index); // Function BPI_PlayerInterface.BPI_PlayerInterface_C.GetPlayerIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

