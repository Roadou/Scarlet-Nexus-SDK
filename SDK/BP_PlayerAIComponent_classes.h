// BlueprintGeneratedClass BP_PlayerAIComponent.BP_PlayerAIComponent_C
// Size: 0x695 (Inherited: 0x3c0)
struct UBP_PlayerAIComponent_C : UPlayerAIBaseComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	enum class EPlayerAIMoveMode MoveMode_1; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x3d0(0x08)
	struct ARSBattlePlayer_C* ControlPlayer; // 0x3d8(0x08)
	bool bLeftPos_1; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FVector ControlPlayerDist_1; // 0x3e4(0x0c)
	struct ARSCharacterBase* BattleTargetActor_1; // 0x3f0(0x08)
	enum class EPlayerAITargetSearchModeCPP TargetSearchMode; // 0x3f8(0x01)
	char pad_3F9[0x3]; // 0x3f9(0x03)
	struct FGameTimer UpdateTargetTimer_1; // 0x3fc(0x0c)
	bool bUpdateBattleTarget_1; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	struct FVector2D LeftStick_1; // 0x40c(0x08)
	bool bDodgeAble_1; // 0x414(0x01)
	char pad_415[0x3]; // 0x415(0x03)
	struct TMap<struct FName, bool> bEnableInputStick_1; // 0x418(0x50)
	enum class EPlayerAIBattleThinkType CurrentBattleThink_1; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UDataTable* ThinkTable_Free; // 0x470(0x08)
	bool bAttackHit_1; // 0x478(0x01)
	char pad_479[0x3]; // 0x479(0x03)
	struct FVector BattleTargetDist_1; // 0x47c(0x0c)
	bool bBattleModeFlag_1; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	float MOVE_AIM_CIRRCLE_SPEED_old; // 0x48c(0x04)
	float RotateCircleAngle; // 0x490(0x04)
	bool bCircleDirClockwise_1; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	float MoveCircleSpeed_1; // 0x498(0x04)
	enum class EPlayerAIBattleThinkParam CurrentBattleThinkParam_1; // 0x49c(0x01)
	bool bDodgeAttack_1; // 0x49d(0x01)
	char pad_49E[0x2]; // 0x49e(0x02)
	struct FGameTimer DodgeIntervalTimer_1; // 0x4a0(0x0c)
	struct FVector JumpDestination_1; // 0x4ac(0x0c)
	int32_t OrderJumpNum_1; // 0x4b8(0x04)
	bool bForceUpdateTarget_1; // 0x4bc(0x01)
	char pad_4BD[0x3]; // 0x4bd(0x03)
	int32_t AttackCount_1; // 0x4c0(0x04)
	float CONFUSION_FRIEND_PRIORITY_OFFSET_old; // 0x4c4(0x04)
	float ThinkDistance_1; // 0x4c8(0x04)
	bool bUseItemThink_1; // 0x4cc(0x01)
	enum class EConsumeItemID UseItemID_1; // 0x4cd(0x01)
	char pad_4CE[0x2]; // 0x4ce(0x02)
	struct TArray<enum class EPlayerAIBattleThinkType> StealthThinkTypeList; // 0x4d0(0x10)
	struct TArray<int32_t> StealthThinkRateList_1; // 0x4e0(0x10)
	bool bEventMove_1; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct TArray<struct FVector> EventMovePosList_1; // 0x4f8(0x10)
	struct TArray<float> EventMoveRadiusList_1; // 0x508(0x10)
	float EventMoveWalkScale_1; // 0x518(0x04)
	enum class EPlayerAIOrder Order_1; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct UDataTable* ThinkTable_BF; // 0x520(0x08)
	struct UDataTable* ThinkTable_BFEnd; // 0x528(0x08)
	struct UDataTable* ThinkTable_Strong; // 0x530(0x08)
	struct UDataTable* ThinkTable_Caution; // 0x538(0x08)
	struct UDataTable* ThinkTable_Escape; // 0x540(0x08)
	float MOVE_CIRCLE_SPEED_FAR_old; // 0x548(0x04)
	bool bSelfRecoveryFlag_1; // 0x54c(0x01)
	bool bAssistItem_1; // 0x54d(0x01)
	char pad_54E[0x2]; // 0x54e(0x02)
	int32_t SelfRecoveryNum_1; // 0x550(0x04)
	enum class EPlayerAIBattleThinkType ReserveThinkType_1; // 0x554(0x01)
	enum class EPlayerAIBattleThinkParam ReserveThinkParam_1; // 0x555(0x01)
	bool bReserveNextThink_1; // 0x556(0x01)
	char pad_557[0x1]; // 0x557(0x01)
	float NoAttackTime_1; // 0x558(0x04)
	bool bOwnerENPC_1; // 0x55c(0x01)
	char pad_55D[0x3]; // 0x55d(0x03)
	int32_t CommonBranch; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct FTimerHandle EvaluateLocationTimerHandle_1; // 0x568(0x08)
	bool bDebugDrawLocationEvaluate_1; // 0x570(0x01)
	bool bBeginEvaluateLocation_1; // 0x571(0x01)
	char pad_572[0x2]; // 0x572(0x02)
	struct FVector CurrentGoalBaseLocation_1; // 0x574(0x0c)
	struct ABP_PlayerAiGoalActor_C* BPMoveGoalActor; // 0x580(0x08)
	float CurrentGoalArmLength_1; // 0x588(0x04)
	float CurrentGoalYaw_1; // 0x58c(0x04)
	bool bFirstEvaluate_1; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	struct FVector PrevThinkLastActorForward_1; // 0x594(0x0c)
	bool bCircleNear_1; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	struct FGameTimer NearCircleMoveTimer_1; // 0x5a4(0x0c)
	float NearCircleMoveNearDist_1; // 0x5b0(0x04)
	float NearCircleMoveFarDist_1; // 0x5b4(0x04)
	struct FVector BattleDodgeDir_1; // 0x5b8(0x0c)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UDataTable* TargetEvaluateTable; // 0x5c8(0x08)
	struct TArray<struct FPlayerAIEvaluateTargetParameter> TargetEvaluateTableData; // 0x5d0(0x10)
	bool bResetBehaviorTree_1; // 0x5e0(0x01)
	char pad_5E1[0x3]; // 0x5e1(0x03)
	float InitialTargetLength_1; // 0x5e4(0x04)
	struct FName ClaimantNameEventMove_1; // 0x5e8(0x08)
	float BattleTargetAngle_1; // 0x5f0(0x04)
	bool bDodgeRangeAttack_1; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct FVector DodgeRangeAttackDir_1; // 0x5f8(0x0c)
	struct FVector JumpDir_1; // 0x604(0x0c)
	bool bMoveStickBack_1; // 0x610(0x01)
	enum class ECharacterHitPriority StoreCharacterHitPriority_1; // 0x611(0x01)
	bool bStoreCharacterHitPriority_1; // 0x612(0x01)
	bool bEventMoveAfterWait_1; // 0x613(0x01)
	float DodgeIntervalTime_1; // 0x614(0x04)
	bool bEventWait_1; // 0x618(0x01)
	bool OpenBrainField; // 0x619(0x01)
	enum class EPlayerAIThinkTableType CurrentThinkTableType_1; // 0x61a(0x01)
	bool bEnableInterruptAction; // 0x61b(0x01)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct UDataTable* ThinkTable_Drive; // 0x620(0x08)
	struct TArray<struct FSNpcSelfRecoveryData> SelfRecoveryDataCommon; // 0x628(0x10)
	struct TArray<struct FSNpcSelfRecoveryData> SelfRecoveryDataWary; // 0x638(0x10)
	bool bFinishMetamorphosis_1; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	int32_t ThinkPhaseTransition_1; // 0x64c(0x04)
	bool bDisableTargetChangeResetThink_1; // 0x650(0x01)
	char pad_651[0x7]; // 0x651(0x07)
	struct UDataTable* ThinkTable_Unique00; // 0x658(0x08)
	struct TArray<struct FSNpcSelfRecoveryData> SelfRecoveryDataLimit; // 0x660(0x10)
	bool bInvalidKeepOut_1; // 0x670(0x01)
	char pad_671[0x7]; // 0x671(0x07)
	struct UDataTable* ThinkTable_Unique01; // 0x678(0x08)
	struct UDataTable* ThinkTable_Unique02; // 0x680(0x08)
	struct UDataTable* PlayerAIParameterTable; // 0x688(0x08)
	bool bBattleActionStartFlag_1; // 0x690(0x01)
	bool bReserveBehaviorTreeRun; // 0x691(0x01)
	bool bRunBehaviorTree; // 0x692(0x01)
	bool bMetamorphosisCharacter; // 0x693(0x01)
	bool bStartLastAttack; // 0x694(0x01)

	struct TArray<enum class EObjectTypeQuery> GetCollisionObjectTypesForGroundHit_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCollisionObjectTypesForGroundHit_CallFromCPP // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckSelfRecovery_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckSelfRecovery_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcTargetEvaluate_CallFromCPP(struct ARSCharacterBase* EvaluateTarget); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CalcTargetEvaluate_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetEvaluateData_CallFromCPP(struct FPlayerAIEvaluateTargetParameter OutParam); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetTargetEvaluateData_CallFromCPP // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void RunBehaviorTree(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.RunBehaviorTree // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckSelfRecoveryCallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckSelfRecoveryCallFromCPP // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetupUseItem_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetupUseItem_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PreUpdateCPP_RangeAttack_BPImplement(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.PreUpdateCPP_RangeAttack_BPImplement // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UDataTable* GetCurrentThinkTable_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCurrentThinkTable_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateDodgeBattle_Enpc_BPImplement(bool bOK, bool OutDodgeNormalAttack, bool OutDodgeRangeAttack, bool OutForceDodge); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateDodgeBattle_Enpc_BPImplement // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UpdateBattleDodgeDir_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateBattleDodgeDir_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBattleThink_CallFromCPP(enum class EPlayerAIBattleThinkTypeCPP Action, enum class EPlayerAIBattleThinkParamCPP Param); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetBattleThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool NextBattleThink_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.NextBattleThink_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DebugUpdate_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.DebugUpdate_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckBattleThinkTransition_CallFromCPP(enum class EPlayerAIBattleThinkTransitionCPP Transition); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckBattleThinkTransition_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EndEvaluateLocation_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.EndEvaluateLocation_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckInAttackArea_CallFromCPP(struct FVector CheckLocation); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckInAttackArea_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestartBattleAI_CallFromCPP(bool bInEvent); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.RestartBattleAI_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool UnbindCheckBattleActionStart_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UnbindCheckBattleActionStart_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BindCheckBattleActionStart_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.BindCheckBattleActionStart_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BeginEvaluateLocation_CallFromCPP(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.BeginEvaluateLocation_CallFromCPP // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetStealthThink_CPPType(enum class EPlayerAIBattleThinkTypeCPP return); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetStealthThink_CPPType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveNextThink_CPPType(enum class EPlayerAIBattleThinkTypeCPP ThinkTypeCPP, enum class EPlayerAIBattleThinkParamCPP ParamCPP); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ReserveNextThink_CPPType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentBattleThinkParam_CPPType(enum class EPlayerAIBattleThinkParamCPP Param); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCurrentBattleThinkParam_CPPType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBattleThink_CPPType(enum class EPlayerAIBattleThinkTypeCPP ActionCPP, enum class EPlayerAIBattleThinkParamCPP ParamCPP); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetBattleThink_CPPType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyMoveBrainField(bool bToBrainField); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.NotifyMoveBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Check Battle Action Start(bool bActionStart); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Update Check Battle Action Start // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleActionStart(bool bStart); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsBattleActionStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestartBattleAI(bool bInEvent, bool bInAvatar); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.RestartBattleAI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNpcRevive(float InDistance, bool bRevive); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckNpcRevive // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetInvalidKeepOut(bool IsInvalid); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetInvalidKeepOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Order(enum class EPlayerAIOrder Order); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Get Order // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetDisableChangeTargetResetThink(bool InDisable); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetDisableChangeTargetResetThink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThinkPhaseTransition(int32_t NewPhase, bool dummy); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetThinkPhaseTransition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetThinkPhaseTransition(int32_t CurPhase); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetThinkPhaseTransition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetFinishMetamorphosis(bool bFinish, bool dummy); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetFinishMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFinishMetamorphosis(bool bFinish); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsFinishMetamorphosis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ResetSelfRecoveryData(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ResetSelfRecoveryData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeThinkTableType(enum class EPlayerAIThinkTableType ThinkTableType, bool bResetThink); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ChangeThinkTableType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventWait(bool bWait); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsEventWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void End Event Wait(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.End Event Wait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEventWait(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetEventWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicComboThink(bool bResult); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsPsychicComboThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void On Event Start(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.On Event Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEventMove(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.EndEventMove // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveStickBack(bool bBack); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetMoveStickBack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckMoveWall(enum class EPlayerAIMoveWallCPP Wall, struct FVector Location); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckMoveWall // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Check Under Siege(bool bSiege); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Check Under Siege // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsWaitBattleStart(bool bWait); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsWaitBattleStart // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsPsychicAble(bool bEnable); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsPsychicAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentBattleThink_CPPType(enum class EPlayerAIBattleThinkTypeCPP NewParam); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCurrentBattleThink_CPPType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckPsychicObject(bool bCapture, bool bAttack, bool bOK); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchPsychicObject(bool bFound); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SearchPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckMovePos(bool bReset); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckMovePos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsResetBehaviorTree(bool bResetBehaviorTree); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsResetBehaviorTree // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void NotifyResetBehaviorTree(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.NotifyResetBehaviorTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Calc Distance Target Evaluate(struct FVector TargetLocation, float EvaluateValue); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Calc Distance Target Evaluate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcTargetEvaluate(struct ARSCharacterBase* EvaluateTarget, float EvaluateValue); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CalcTargetEvaluate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetTargetEvaluateData(struct FPlayerAIEvaluateTargetParameter Data); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetTargetEvaluateData // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateBattleDodgeDir(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateBattleDodgeDir // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInAttackArea(struct FVector CheckLocation, bool bin); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckInAttackArea // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckGoalLocationKeepOut(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckGoalLocationKeepOut // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdateUpdateEvaluateLocation(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnUpdateUpdateEvaluateLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMovePos_FollowPlayer(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateMovePos_FollowPlayer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetThinkKeepOut(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetThinkKeepOut // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveLocation(struct FVector Location, float ArmLength, float Yaw); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetMoveLocation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterEvaluateLocation(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.RegisterEvaluateLocation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReserveNextThink(enum class EPlayerAIBattleThinkType ThinkType, enum class EPlayerAIBattleThinkParam Param); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ReserveNextThink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentBattleThink(enum class EPlayerAIBattleThinkType NewParam); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCurrentBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateCounter(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUseItemID(enum class EConsumeItemID ItemId); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetUseItemID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DecreaseSelfRecoveryNum(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.DecreaseSelfRecoveryNum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Cancel Use Item(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Cancel Use Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSelfRecovery(bool bRecovery); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsSelfRecovery // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckSelfRecovery(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckSelfRecovery // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcThinkTransitionProbability(int32_t Probability, enum class EPlayerAIBattleThinkType Action, int32_t Result); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CalcThinkTransitionProbability // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchTarget(struct TArray<struct ARSCharacterBase*> TargetList, struct ARSCharacterBase* Target); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SearchTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetOrder(enum class EPlayerAIOrder Order); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetOrder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetSearchMode(enum class EPlayerAITargetSearchModeCPP TargetSearchMode); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetTargetSearchMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEventMoveLeftStickY(float Value); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetEventMoveLeftStickY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetEventMoveLeftStickX(float Value); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetEventMoveLeftStickX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateEventMove(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateEventMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventMoveEnd(bool Result); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsEventMoveEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckEventMovePos(bool check distance, bool Goal); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckEventMovePos // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEventMovePosActor(struct AActor* pos actor, float accept Radius); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetEventMovePosActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventMove(bool Result); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsEventMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEventMove(struct TArray<struct FVector> pos list in, struct TArray<float> radius list in, bool bWalk, bool bAfterWait, float MaxMoveTime); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetEventMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetStealthThink(enum class EPlayerAIBattleThinkType return); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetStealthThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackThink(enum class EPlayerAIBattleThinkType think type in, bool return); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsAttackThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsRangeTooFar(struct FVector Dist, bool bResutlt); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsRangeTooFar // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetupUseItem(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetupUseItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseItemThink(bool return); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsUseItemThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Request Use Item(enum class EConsumeItemID item id in, bool bAssist); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Request Use Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackCount(int32_t count); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetAttackCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void NotifyAttackStart(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.NotifyAttackStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyForceWarp(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.NotifyForceWarp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeParam(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.InitializeParam // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnJump(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMovementCollisionLand(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnMovementCollisionLand // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsJumpAble(bool bEnable); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsJumpAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void JumpOrder(struct FVector Destination); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.JumpOrder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChainAttack(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateChainAttack // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentBattleThinkParam(enum class EPlayerAIBattleThinkParam Param); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCurrentBattleThinkParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateMovePos_Circle(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateMovePos_Circle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleThink(enum class EPlayerAIBattleThinkType Type, bool bResult); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CalcStickDir_BattleAttack(struct FVector Dir); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CalcStickDir_BattleAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CalcStickDir_BattleDodge(struct FVector Dir); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CalcStickDir_BattleDodge // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackInputKind(enum class RSAttackInputKind AttackKind); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetAttackInputKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetCurrentThinkTable(struct UDataTable* Table); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetCurrentThinkTable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugUpdate(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.DebugUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Move Mode From Think(enum class EPlayerAIBattleThinkTypeCPP ThinkCPP); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Set Move Mode From Think // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsRangeFar(struct FVector Dist, bool bResult); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsRangeFar // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsRangeMiddle(struct FVector Dist, bool bResult); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsRangeMiddle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsRangeNear(struct FVector Dist, bool bResult); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsRangeNear // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckBattleThinkTransition(enum class EPlayerAIBattleThinkTransition Transition, bool bOK); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CheckBattleThinkTransition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Set Battle Think(enum class EPlayerAIBattleThinkType Action, enum class EPlayerAIBattleThinkParam Param); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Set Battle Think // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetBattleThink(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ResetBattleThink // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NextBattleThink(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.NextBattleThink // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackHit(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnAttackHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableStickInput(bool bEnable); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsEnableStickInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DisableStickInput(struct FName ClaimantName); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.DisableStickInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableStickInput(struct FName ClaimantName); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.EnableStickInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcStickDir(struct FVector2D Stick); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.CalcStickDir // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDodgeAble(bool bEnable); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsDodgeAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateDodge_FollowPlayer(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateDodge_FollowPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDodge_Battle(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateDodge_Battle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDodge(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateDodge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostUpdate(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.PostUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainUpdate(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.MainUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreUpdate(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.PreUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackAble(bool bEnable); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsAttackAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void UpdateMovePos_ApproachTarget(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateMovePos_ApproachTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleMode(bool bBattle); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetBattleMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleTarget(struct ARSCharacterBase* TargetActor); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetBattleTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Battle Target Actor(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Update Battle Target Actor // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBattleTargetActor(struct AActor* Target); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetBattleTargetActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetMovePosActor(struct AActor* MovePosActor); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetMovePosActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetMoveMode_CPPType(enum class EPlayerAIMoveModeCPP MoveMode); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetMoveMode_CPPType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetControlPlayerDist(struct FVector Dist); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetControlPlayerDist // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsUpdate(bool bUpdate); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.IsUpdate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Update Data(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Update Data // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveMode(enum class EPlayerAIMoveMode MoveMode); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.GetMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetMoveMode(enum class EPlayerAIMoveModeCPP ModeCPP); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.SetMoveMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Initialize // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMovePos(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UpdateMovePos // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.Update // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEvaluateLocation(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.BeginEvaluateLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEvaluateLocation(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.EndEvaluateLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterLocationEvalueateTimerEvent(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.RegisterLocationEvalueateTimerEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitializeAI(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnInitializeAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnUpdateAI(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnUpdateAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BindCheckBattleActionStart(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.BindCheckBattleActionStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindCheckBattleActionStart(); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.UnbindCheckBattleActionStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCheckBattleActionStartTick(float DeltaSeconds); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.OnCheckBattleActionStartTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerAIComponent(int32_t EntryPoint); // Function BP_PlayerAIComponent.BP_PlayerAIComponent_C.ExecuteUbergraph_BP_PlayerAIComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

