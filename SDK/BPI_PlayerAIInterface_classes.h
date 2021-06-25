// BlueprintGeneratedClass BPI_PlayerAIInterface.BPI_PlayerAIInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_PlayerAIInterface_C : UInterface {

	void CancelUseItem(bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.CancelUseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUseItemID(enum class EConsumeItemID ItemId); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.GetUseItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsTargetCanBeAttacked(bool CanDo); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsTargetCanBeAttacked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleActionStartAI(bool bStart); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsBattleActionStartAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestartBattleAI(bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.RestartBattleAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueConditionTransition(int32_t UniqueNo, bool bResult); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsUniqueConditionTransition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventWait(bool bWait); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndEventWait(bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.EndEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventWait(bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SetEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveStickBack(bool bBack, bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SetMoveStickBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicAble(bool bEnable); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsPsychicAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInputAI_Psychic(bool bON); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsInputAI_Psychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAI_Psychic(bool bPressed); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.InputAI_Psychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAIPsychicObject(bool bCapture, bool bAttack, bool bOK); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.CheckAIPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchAIPsychicObject(bool bFiound); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SearchAIPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyResetBehaviorTree(bool dummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.NotifyResetBehaviorTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsResetBehaviorTree(bool bReset); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsResetBehaviorTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsSelfRecovery(bool bResult); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsSelfRecovery // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventMoveEnd(bool Result); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsEventMoveEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckEventMovePos(bool Goal); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.CheckEventMovePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEventMovePosActor(struct AActor* Actor, float Radius); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.GetEventMovePosActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventMove(bool Result); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsEventMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetEventMove(struct TArray<struct FVector> pos list in, struct TArray<float> radius list in, bool Walk, bool bAfterWait, float MaxMoveTime, bool dummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SetEventMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInputAI_UseItem(bool bON); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsInputAI_UseItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputAI_UseItem(bool bPressed); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.InputAI_UseItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseItemThink(bool Result); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsUseItemThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OverwriteAttackInputKindAI(enum class EPlayerAIBattleThinkType ThinkType, enum class RSAttackInputKind inputKind, enum class RSAttackInputKind kind); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.OverwriteAttackInputKindAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AimEndAI(bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.AimEndAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimStartAI(bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.AimStartAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAIMoveStick(bool bMoveStick, bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SetAIMoveStick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCountAI(int32_t count); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.GetAttackCountAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnChangeBattleThink(enum class EPlayerAIBattleThinkType NextThinkType, enum class EPlayerAIBattleThinkType PrevThinkType, bool bDummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.OnChangeBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsJumpAble(bool bEnable); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsJumpAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInputAI_Jump(bool bON); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsInputAI_Jump // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InputAI_Jump(bool bPressed); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.InputAI_Jump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBattleTargetActor(struct AActor* TargetActor); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.GetBattleTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBattleThinkParam(enum class EPlayerAIBattleThinkParam Param, bool bResult); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsBattleThinkParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBattleThink(enum class EPlayerAIBattleThinkType Type, bool Result); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAIMoveMode(enum class EPlayerAIMoveMode Mode, bool Result); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsAIMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResetBattleThink(bool dummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.ResetBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NextBattleThink(bool dummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.NextBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableInputStick(bool bEnable, bool dummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SetEnableInputStick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDodgeAble(bool bEnable); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsDodgeAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsInputAI_Dodge(bool bON); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsInputAI_Dodge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InputAI_Dodge(bool bPressed); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.InputAI_Dodge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInputAI_Attack(bool bON); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsInputAI_Attack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InputAI_LeftStick(float X, float Y); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.InputAI_LeftStick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerStatusAI(enum class EPlayerCommonStatus PlayerStatus, bool bResult); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsPlayerStatusAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsActionStatusAI(enum class EPlayerActionStatus ActionStatus, bool bResult); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsActionStatusAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void InputAI_Attack(bool bPressed); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.InputAI_Attack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackAble(bool bEnable); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsAttackAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetMoveMode(enum class EPlayerAIMoveMode Mode, bool dummy); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.SetMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMovePosActor(struct AActor* MovePosActor); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.GetMovePosActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsMoveAble(bool bEnable); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.IsMoveAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetControlPlayerDist(struct FVector Dist); // Function BPI_PlayerAIInterface.BPI_PlayerAIInterface_C.GetControlPlayerDist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
};

