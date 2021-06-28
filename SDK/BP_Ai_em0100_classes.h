// BlueprintGeneratedClass BP_Ai_em0100.BP_Ai_em0100_C
// Size: 0x1d1 (Inherited: 0x17d)
struct UBP_Ai_em0100_C : UBP_Ai_Enemy_C {
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct ABP_em0100Base_C* em0100; // 0x188(0x08)
	enum class Enum_em0100 Enum; // 0x190(0x01)
	bool IsEnd; // 0x191(0x01)
	enum class Enum_em0100 ActionNone; // 0x192(0x01)
	char pad_193[0x1]; // 0x193(0x01)
	int32_t comboCount; // 0x194(0x04)
	bool IsSetCounterAction; // 0x198(0x01)
	enum class Enum_ActionCategory_em0100 LastActionCategory; // 0x199(0x01)
	char pad_19A[0x2]; // 0x19a(0x02)
	int32_t HatePattern; // 0x19c(0x04)
	float HateNearRange; // 0x1a0(0x04)
	float HateFarRange; // 0x1a4(0x04)
	int32_t 2legModePhase; // 0x1a8(0x04)
	bool IsSetDisableAiMove; // 0x1ac(0x01)
	enum class Enum_ActionCategory_em0100 LastActionCategoryAi; // 0x1ad(0x01)
	enum class Enum_em0100 EnumActionMove; // 0x1ae(0x01)
	enum class Enum_EnemyRange EnumRangePrevios; // 0x1af(0x01)
	enum class Enum_EnemyRange EnumRange; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float MoveActionSecondNear; // 0x1b4(0x04)
	float MoveActionSecondMiddle; // 0x1b8(0x04)
	float MoveActionSecondFar; // 0x1bc(0x04)
	float MoveActionSecondTimer; // 0x1c0(0x04)
	float AttackParcentDefault; // 0x1c4(0x04)
	float AttackParcentKind1; // 0x1c8(0x04)
	float AttackParcentKind2; // 0x1cc(0x04)
	enum class Enum_em0100 PreviousEnum; // 0x1d0(0x01)

	void SetAction(char Enum); // Function BP_Ai_em0100.BP_Ai_em0100_C.SetAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActionAfterAbortSpecialWalk(bool IsNearPlayer, bool IsNearObject); // Function BP_Ai_em0100.BP_Ai_em0100_C.SetActionAfterAbortSpecialWalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveActionSecond(); // Function BP_Ai_em0100.BP_Ai_em0100_C.SetMoveActionSecond // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateRange(); // Function BP_Ai_em0100.BP_Ai_em0100_C.UpdateRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveToFarRange(bool RequestMove, bool IsSuccess); // Function BP_Ai_em0100.BP_Ai_em0100_C.MoveToFarRange // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCanRush(enum class Enum_em0100 SelectAction, bool CanRush); // Function BP_Ai_em0100.BP_Ai_em0100_C.IsCanRush // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIdleMove(bool Ret); // Function BP_Ai_em0100.BP_Ai_em0100_C.IsIdleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RequestAction(enum class Enum_em0100 Action, bool IsIgnoreAi, bool IsSuccess); // Function BP_Ai_em0100.BP_Ai_em0100_C.RequestAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveTime(enum class Enum_em0100 Action, float Time); // Function BP_Ai_em0100.BP_Ai_em0100_C.GetMoveTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMiddleDistance(bool IsMiddle); // Function BP_Ai_em0100.BP_Ai_em0100_C.IsMiddleDistance // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSelectAction(enum class Enum_em0100 Action, bool IsSelect); // Function BP_Ai_em0100.BP_Ai_em0100_C.IsSelectAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveToMiddleRange(bool IsSuccess); // Function BP_Ai_em0100.BP_Ai_em0100_C.MoveToMiddleRange // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackAction4legKind2(); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackAction4legKind2 // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackAction4legKind1(); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackAction4legKind1 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackAction4legDefault(); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackAction4legDefault // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Idle Move(bool IsSetMove); // Function BP_Ai_em0100.BP_Ai_em0100_C.Set Idle Move // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBackWalk(bool isOK); // Function BP_Ai_em0100.BP_Ai_em0100_C.CheckBackWalk // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableAiMove(bool SetDisable); // Function BP_Ai_em0100.BP_Ai_em0100_C.SetDisableAiMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableAiMove(bool isDisable); // Function BP_Ai_em0100.BP_Ai_em0100_C.IsDisableAiMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LockOnHateTarget(bool isLock); // Function BP_Ai_em0100.BP_Ai_em0100_C.LockOnHateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackAction2legMode(); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackAction2legMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChengeHateTarget(); // Function BP_Ai_em0100.BP_Ai_em0100_C.ChengeHateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackActionTrans(enum class Enum_em0100 TransAction, bool isTrans); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackActionTrans // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KnockBackCounterAction(char Enum, bool isSet); // Function BP_Ai_em0100.BP_Ai_em0100_C.KnockBackCounterAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectAfterAttackActionOrigin(enum class Enum_em0100 curAction); // Function BP_Ai_em0100.BP_Ai_em0100_C.SelectAfterAttackActionOrigin // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectAfterAttackActionOrge(enum class Enum_em0100 curAction); // Function BP_Ai_em0100.BP_Ai_em0100_C.SelectAfterAttackActionOrge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectAfterAttackActionCore(enum class Enum_em0100 curAction); // Function BP_Ai_em0100.BP_Ai_em0100_C.SelectAfterAttackActionCore // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectAfterAttackAction(enum class Enum_em0100 curAction); // Function BP_Ai_em0100.BP_Ai_em0100_C.SelectAfterAttackAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackActionSubspecies(); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackActionSubspecies // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackAction4leg(); // Function BP_Ai_em0100.BP_Ai_em0100_C.AttackAction4leg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotMoveAction(bool return); // Function BP_Ai_em0100.BP_Ai_em0100_C.NotMoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveAction(bool return); // Function BP_Ai_em0100.BP_Ai_em0100_C.MoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Ai_em0100.BP_Ai_em0100_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Ai_em0100.BP_Ai_em0100_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ai_em0100(int32_t EntryPoint); // Function BP_Ai_em0100.BP_Ai_em0100_C.ExecuteUbergraph_BP_Ai_em0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

