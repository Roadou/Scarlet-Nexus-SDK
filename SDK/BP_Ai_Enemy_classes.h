// BlueprintGeneratedClass BP_Ai_Enemy.BP_Ai_Enemy_C
// Size: 0x17d (Inherited: 0x120)
struct UBP_Ai_Enemy_C : UEnemyAiComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct ARSBattleEnemy_C* Enemy; // 0x128(0x08)
	struct FName Action; // 0x130(0x08)
	float Range_Work; // 0x138(0x04)
	float NoRange_Work; // 0x13c(0x04)
	float Angle_Work; // 0x140(0x04)
	float NoAngle_Work; // 0x144(0x04)
	float ActionSelectSkipTime; // 0x148(0x04)
	char ReserveAction; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	float ReserveValue00; // 0x150(0x04)
	float ReserveValue01; // 0x154(0x04)
	float ActionValue00; // 0x158(0x04)
	float ActionValue01; // 0x15c(0x04)
	bool IsSetActionWinceCounter; // 0x160(0x01)
	bool IsSetActionKnockBackCounter; // 0x161(0x01)
	char pad_162[0x2]; // 0x162(0x02)
	float l_BaseSeconds; // 0x164(0x04)
	struct TArray<char> idleMoveAction; // 0x168(0x10)
	bool IsUseControlTickEnable; // 0x178(0x01)
	bool bIgnoreMove; // 0x179(0x01)
	bool bBossBattleBegineAction; // 0x17a(0x01)
	char EnumBossBattleBegineAction; // 0x17b(0x01)
	bool IsFade; // 0x17c(0x01)

	void OnEndFade(); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.OnEndFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartFade(); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.OnStartFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BossBattleBeginAction(bool Success); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.BossBattleBeginAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetAiTimer_FromNative(char actionEnym); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.GetAiTimer_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPossibleMove(bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, bool bPossible); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsPossibleMove // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckIdleMoveAction(char Action, bool isIdleMoveAction); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.CheckIdleMoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIdleMoveAction(); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SetIdleMoveAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiDataTable(char Enum, bool ThroughNotFound, struct FAiParamEnemy DataTable); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.GetAiDataTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAttackingOtherEnemy(struct ARSBattlePlayer_C* TargetPlayer, bool bAttacking); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsAttackingOtherEnemy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPreConditionOK(struct FAiParamEnemy AiParam, bool bOK); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsPreConditionOK // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCommonAreaOK(enum class EEnemyThinkActionType ActionType, bool bOK); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsCommonAreaOK // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPossibleAttack(bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, bool bPossible); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsPossibleAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void KnockBackCounterAction(char Enum, bool isSet); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.KnockBackCounterAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WinceCounterAction(char Enum, bool isSet); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.WinceCounterAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActionTime(char curAction, float Seconds); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.GetActionTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsUniqueConditionCheck(struct TArray<char> Conditions, bool bResult); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsUniqueConditionCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ResetAction(bool dummy); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.ResetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionFromReserved(bool dummy); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SetActionFromReserved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetReserveAction(); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.ResetReserveAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReservedAction(bool Reserved); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsReservedAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetReserveAction(char Action, float Param00, float Param01, bool dummy); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SetReserveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectRangeAction(bool NotHeight, char SelectAction); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SelectRangeAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsTimerOK(char Enum, bool Result); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsTimerOK // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SelectParamAction(struct TArray<char> ActionEnums, bool NotHeight, char Action); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SelectParamAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAiAction(char Enum, bool NotHeight, bool NotProbability, bool return); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsAiAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void NotMoveAction(bool return); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.NotMoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveAction(bool return); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.MoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectAction(); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SelectAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEvent(bool Ret); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAiDataDistanceAngleCheck(char Enum, bool NotHeight, bool return); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.GetAiDataDistanceAngleCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAiDataDistance(char Enum, bool NotAngle, bool NotHeight, bool return); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.GetAiDataDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAction(char Enum); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.SetAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiData(char Enum, bool ThroughNotFound, enum class EEnemyThinkActionType ThinkActionType, float Probability, float Range, float NoRange, float Angle, float NoAngle, float HP, struct TArray<char> UniqueConditions); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.GetAiData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHpPercentDown(float percent, bool return, bool Error); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsHpPercentDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsDamage(bool Ret); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsIdleMove(bool Ret); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsIdleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsTimerCheck(float Value, bool Ret); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsTimerCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsRandomCheck(float Value, bool Ret); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.IsRandomCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ai_Enemy(int32_t EntryPoint); // Function BP_Ai_Enemy.BP_Ai_Enemy_C.ExecuteUbergraph_BP_Ai_Enemy // (Final|UbergraphFunction) // @ game+0x1685580
};

