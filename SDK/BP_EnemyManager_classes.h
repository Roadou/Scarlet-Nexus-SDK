// BlueprintGeneratedClass BP_EnemyManager.BP_EnemyManager_C
// Size: 0x7e8 (Inherited: 0x4d8)
struct ABP_EnemyManager_C : AEnemyManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct UBP_EnemyFixParam_C* BP_EnemyFixParam; // 0x4e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4e8(0x08)
	float EnableRange; // 0x4f0(0x04)
	float EnableSpawnRange; // 0x4f4(0x04)
	float EnableViewAngle; // 0x4f8(0x04)
	int32_t CheckEnemyIndex; // 0x4fc(0x04)
	enum class Enum_EnemySound enemySound; // 0x500(0x01)
	enum class Enum_EnemySound EnemySoundCheck; // 0x501(0x01)
	char pad_502[0x6]; // 0x502(0x06)
	struct TArray<struct ARSCharacterBase*> BrainCrashList_Old; // 0x508(0x10)
	struct TArray<struct AActor*> BattleEnemyList; // 0x518(0x10)
	bool IsStealthSee; // 0x528(0x01)
	char pad_529[0x7]; // 0x529(0x07)
	struct FMulticastInlineDelegate OnDeadDispatcher; // 0x530(0x10)
	struct FMulticastInlineDelegate GroupBattleStartDispatcher; // 0x540(0x10)
	struct TArray<struct UActorComponent*> TickEnableComponentArray; // 0x550(0x10)
	int32_t UpdateEnemyCount; // 0x560(0x04)
	int32_t EnemyCountMax; // 0x564(0x04)
	float CheckHeightDistance; // 0x568(0x04)
	int32_t DebugEnemyIndex; // 0x56c(0x04)
	struct FTransform ENPCTriggerTransform; // 0x570(0x30)
	struct FTransform ENPCSpAttackTransform; // 0x5a0(0x30)
	struct TMap<enum class HCSkillAttribute, struct FEnemyStateDataCell> BadStateParams; // 0x5d0(0x50)
	float MaxVisionFogRate; // 0x620(0x04)
	enum class EPlayerHitStopType CurrentHitStopType; // 0x624(0x01)
	char pad_625[0x3]; // 0x625(0x03)
	struct AActor* em8300Manager; // 0x628(0x08)
	bool IsCourtMort; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct FMulticastInlineDelegate DebugUniqueEventDispatcher; // 0x638(0x10)
	struct TArray<struct FVisionFogAreaInfo> VisionFogAreaList; // 0x648(0x10)
	bool bVisionFogAction; // 0x658(0x01)
	char pad_659[0x3]; // 0x659(0x03)
	float NotAcceptVisionFogActionTimer; // 0x65c(0x04)
	struct TArray<struct FName> UniqueBrainCrashNotPlayedList; // 0x660(0x10)
	struct AActor* CoutMort_Actor; // 0x670(0x08)
	struct FMulticastInlineDelegate EndDuelPoleDispatcher; // 0x678(0x10)
	struct AActor* em1200_Actor; // 0x688(0x08)
	struct TArray<struct ARSBattleEnemy_C*> AreaCheckWaitList; // 0x690(0x10)
	struct FGameTimer AreaCheckTimer; // 0x6a0(0x0c)
	int32_t MaxEnemyMovingCountRate; // 0x6ac(0x04)
	struct FText DebugText; // 0x6b0(0x18)
	struct TMap<struct FName, struct FCopyCharacterParameterStruct> Backup ParameterList; // 0x6c8(0x50)
	float CheckOutRangeDistance; // 0x718(0x04)
	struct FName RepopOwnerNowLevel; // 0x71c(0x08)
	char pad_724[0x4]; // 0x724(0x04)
	struct AActor* RepopOwnerObj; // 0x728(0x08)
	int32_t NowLocationId; // 0x730(0x04)
	int32_t NowAreaId; // 0x734(0x04)
	struct TArray<struct ARSBattleEnemy_C*> GroundCheckWaitList; // 0x738(0x10)
	struct TArray<struct UBP_EnemyVisionFogComponent_C*> EndVisionFogCompList; // 0x748(0x10)
	bool bStartBattleEm8300; // 0x758(0x01)
	char pad_759[0x7]; // 0x759(0x07)
	struct TArray<struct AActor*> EntryAvatarList; // 0x760(0x10)
	int32_t MaxAvatarNum; // 0x770(0x04)
	char pad_774[0x4]; // 0x774(0x04)
	struct TMap<int32_t, bool> PreCheckOutOfBattleFieldGroupId; // 0x778(0x50)
	struct FName ActorLevelName; // 0x7c8(0x08)
	int32_t ActorLocationID; // 0x7d0(0x04)
	int32_t ActorAreaID; // 0x7d4(0x04)
	struct TArray<struct AActor*> PauseBrainCrashList; // 0x7d8(0x10)

	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function BP_EnemyManager.BP_EnemyManager_C.EventManagerEnd // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function BP_EnemyManager.BP_EnemyManager_C.EventManagerStart // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashDamageLocation(struct FVector WorldLocation); // Function BP_EnemyManager.BP_EnemyManager_C.GetBrainCrashDamageLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckPauseBrainCrash(struct AActor* pauseActor); // Function BP_EnemyManager.BP_EnemyManager_C.CheckPauseBrainCrash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePauseBrainCrash(); // Function BP_EnemyManager.BP_EnemyManager_C.UpdatePauseBrainCrash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableUniqueBrainCrashPlayedListFromActor(struct ARSCharacterBase* CrashEnemy); // Function BP_EnemyManager.BP_EnemyManager_C.EnableUniqueBrainCrashPlayedListFromActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTriggerEffect(); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateTriggerEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispGroupInfo(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDispGroupInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetRepopExtendInList_FromNative(struct FEnemyRepopExtendInfo EnemyRepopExtendInfo, struct ARSCharacterBase* RepopTarget); // Function BP_EnemyManager.BP_EnemyManager_C.SetRepopExtendInList_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispSettingInfo(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDispSettingInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispTIckControl(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDispTIckControl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNeedFrameWait(); // Function BP_EnemyManager.BP_EnemyManager_C.IsNeedFrameWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetCanPlayCutSceneFromNative(); // Function BP_EnemyManager.BP_EnemyManager_C.GetCanPlayCutSceneFromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossBattlefield(int32_t GroupID, bool InBoss); // Function BP_EnemyManager.BP_EnemyManager_C.IsBossBattlefield // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeEnpcUniqueThinkTable(); // Function BP_EnemyManager.BP_EnemyManager_C.ChangeEnpcUniqueThinkTable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RemoveCreateAvatar(struct AActor* NewParam); // Function BP_EnemyManager.BP_EnemyManager_C.RemoveCreateAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EntryCreateAvatar(struct AActor* NewParam); // Function BP_EnemyManager.BP_EnemyManager_C.EntryCreateAvatar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Check Create Avatar(struct AActor* NewParam1, bool NewParam); // Function BP_EnemyManager.BP_EnemyManager_C.Check Create Avatar // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDispDamageLog(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDispDamageLog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearCourtMortBattle(); // Function BP_EnemyManager.BP_EnemyManager_C.ClearCourtMortBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStartBattleEm8300(bool bStart); // Function BP_EnemyManager.BP_EnemyManager_C.IsStartBattleEm8300 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetStartBattleEm8300(bool bStart, bool bDummy); // Function BP_EnemyManager.BP_EnemyManager_C.SetStartBattleEm8300 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreCheckSetEnableOutOfBattlefield(int32_t GroupID, bool NewParam); // Function BP_EnemyManager.BP_EnemyManager_C.PreCheckSetEnableOutOfBattlefield // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEndVisionFogComp(float DeltaSec); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateEndVisionFogComp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterEndVisionFogComp(struct UBP_EnemyVisionFogComponent_C* InVisionFogComp); // Function BP_EnemyManager.BP_EnemyManager_C.RegisterEndVisionFogComp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndGroundCheck(struct ARSBattleEnemy_C* Target); // Function BP_EnemyManager.BP_EnemyManager_C.EndGroundCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGroundCheck(float DeltaSec); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateGroundCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EntryGroundCheck(struct ARSBattleEnemy_C* Target); // Function BP_EnemyManager.BP_EnemyManager_C.EntryGroundCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBattleBossEnemyUniqueName(bool bExist, struct FName UniqueName); // Function BP_EnemyManager.BP_EnemyManager_C.GetBattleBossEnemyUniqueName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeArea(enum class EChangeAreaStatus ChangeState, bool IsChange); // Function BP_EnemyManager.BP_EnemyManager_C.OnChangeArea // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RepopSpawn_FromNative(struct FEnemyRepopInfo EnemyRepopInfo, int32_t Group, int32_t SubGroup); // Function BP_EnemyManager.BP_EnemyManager_C.RepopSpawn_FromNative // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRepopOwner(struct ARSBattleEnemy_C* Owner); // Function BP_EnemyManager.BP_EnemyManager_C.SetRepopOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckRepopCharaInList(struct FName CharaUniqueId, bool Inlist); // Function BP_EnemyManager.BP_EnemyManager_C.CheckRepopCharaInList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyEnemyWithTagName(struct FName TagName); // Function BP_EnemyManager.BP_EnemyManager_C.DestroyEnemyWithTagName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBrainCrashHUDTarget_Window(struct ARSCharacterBase* TargetChara, bool EnablePlayer); // Function BP_EnemyManager.BP_EnemyManager_C.SetBrainCrashHUDTarget_Window // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreCharacterParameterToTagName(struct FName TagName); // Function BP_EnemyManager.BP_EnemyManager_C.RestoreCharacterParameterToTagName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BackupCharacterParameterToTagName(struct FName TagName); // Function BP_EnemyManager.BP_EnemyManager_C.BackupCharacterParameterToTagName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnReturnFromPartyMenu(bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.OnReturnFromPartyMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitDropItem(bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.InitDropItem // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableOutOfBattleField(bool SetEnable, int32_t GroupID); // Function BP_EnemyManager.BP_EnemyManager_C.SetEnableOutOfBattleField // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashEventFlag(); // Function BP_EnemyManager.BP_EnemyManager_C.SetBrainCrashEventFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAreaCheck(struct ARSBattleEnemy_C* Target); // Function BP_EnemyManager.BP_EnemyManager_C.EndAreaCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAreaCheck(float DeltaSec); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateAreaCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EntryAreaCheck(struct ARSBattleEnemy_C* Target); // Function BP_EnemyManager.BP_EnemyManager_C.EntryAreaCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RepopCheckInsideCamera(struct FVector MyPos, bool IsInside); // Function BP_EnemyManager.BP_EnemyManager_C.RepopCheckInsideCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RepopClear(); // Function BP_EnemyManager.BP_EnemyManager_C.RepopClear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashTargetChara(struct ARSCharacterBase* TargetChara); // Function BP_EnemyManager.BP_EnemyManager_C.GetBrainCrashTargetChara // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashEvent(struct ABP_MakeEventActorBase_C* Event); // Function BP_EnemyManager.BP_EnemyManager_C.GetBrainCrashEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckEventBrainCrash(bool IsEvent); // Function BP_EnemyManager.BP_EnemyManager_C.CheckEventBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RepopUpdate(float DeltaSeconds); // Function BP_EnemyManager.BP_EnemyManager_C.RepopUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RepopEntry(float Time, float Range, int32_t Probability, struct FString ClassBpPath, struct FVector InitPos, float MoveArea, struct FName LevelName, int32_t Group, int32_t SubGroup, struct FName UniqueId, struct FName Level, int32_t DropId, struct ARSCharacterBase* NewParam); // Function BP_EnemyManager.BP_EnemyManager_C.RepopEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NaomiChangePhaseParamSetting(); // Function BP_EnemyManager.BP_EnemyManager_C.NaomiChangePhaseParamSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNaomiActor(struct AActor* Actor); // Function BP_EnemyManager.BP_EnemyManager_C.SetNaomiActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyEndDuelPole(); // Function BP_EnemyManager.BP_EnemyManager_C.NotifyEndDuelPole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAddedEnemy(struct TArray<struct ARSBattleCharacter_C*> LocalSelectCharacters, struct TArray<struct ARSBattleCharacter_C*> DifferenceCharacters); // Function BP_EnemyManager.BP_EnemyManager_C.GetAddedEnemy // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCourtMortBattle(); // Function BP_EnemyManager.BP_EnemyManager_C.StartCourtMortBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectBrainCrashMultiCharacters(struct ARSBattleCharacter_C* LockTarget, struct TArray<struct ARSBattleCharacter_C*> TargetCharactersList); // Function BP_EnemyManager.BP_EnemyManager_C.SelectBrainCrashMultiCharacters // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueBrainCrashFlag(bool IsUnique); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateUniqueBrainCrashFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUniqueBrainCrashPlayedList(); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateUniqueBrainCrashPlayedList // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateUniqueBrainCrashPlayedListKeyName(struct ARSCharacterBase* TargetEnemy, struct FName KeyName); // Function BP_EnemyManager.BP_EnemyManager_C.CreateUniqueBrainCrashPlayedListKeyName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeUniqueBrainCrashPlayedList(); // Function BP_EnemyManager.BP_EnemyManager_C.InitializeUniqueBrainCrashPlayedList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckUniqueBrainCrash(bool IsBoss, bool IsGeneral, bool RequestJudgmentUniqueCoolTime, bool RequestJudgmentSearchSafePoint); // Function BP_EnemyManager.BP_EnemyManager_C.CheckUniqueBrainCrash // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNotAcceptVisionFogAction(); // Function BP_EnemyManager.BP_EnemyManager_C.SetNotAcceptVisionFogAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsVisionFogAction(bool bAction); // Function BP_EnemyManager.BP_EnemyManager_C.IsVisionFogAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetVisionFogAction(bool bAction); // Function BP_EnemyManager.BP_EnemyManager_C.SetVisionFogAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetVisionFogAreaList(struct TArray<struct FVisionFogAreaInfo> VisionFogAreaList); // Function BP_EnemyManager.BP_EnemyManager_C.GetVisionFogAreaList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UnregisterVisionFogArea(struct FString Name); // Function BP_EnemyManager.BP_EnemyManager_C.UnregisterVisionFogArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterVisionFogArea(struct FVector Location, float Radius, struct FString Name); // Function BP_EnemyManager.BP_EnemyManager_C.RegisterVisionFogArea // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugCallUniqueEvent(int32_t EventNo, bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.DebugCallUniqueEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCourtMortActor(struct AActor* Actor); // Function BP_EnemyManager.BP_EnemyManager_C.GetCourtMortActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCourtMortActor(struct AActor* Actor); // Function BP_EnemyManager.BP_EnemyManager_C.SetCourtMortActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleCourtMort(bool IsCourtMort); // Function BP_EnemyManager.BP_EnemyManager_C.SetBattleCourtMort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleCourtMort(bool IsCourtMort); // Function BP_EnemyManager.BP_EnemyManager_C.IsBattleCourtMort // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEm8300Manager(struct AActor* Manager); // Function BP_EnemyManager.BP_EnemyManager_C.SetEm8300Manager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEm8300Manager(struct AActor* Manager); // Function BP_EnemyManager.BP_EnemyManager_C.GetEm8300Manager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DebugDrawInfomation(bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDrawInfomation // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StopEnemyAll(); // Function BP_EnemyManager.BP_EnemyManager_C.StopEnemyAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetHpRate(float Value, bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.DebugSetHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetHpImmediate(float Value, bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.DebugSetHpImmediate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnemyVisionFog(float DeltaSec); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateEnemyVisionFog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawAttackingList(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDrawAttackingList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugDrawTargetingList(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugDrawTargetingList // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBadStateMaterialParam(enum class HCSkillAttribute Attribute, struct FEnemyStateDataCell Param, bool Find); // Function BP_EnemyManager.BP_EnemyManager_C.GetBadStateMaterialParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitBadStateMaterialParam(bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.InitBadStateMaterialParam // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENPCStartTransformbyID(enum class ECutsceneRootTransformID ID, struct FTransform Transform); // Function BP_EnemyManager.BP_EnemyManager_C.GetENPCStartTransformbyID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetENPCStartTransformbyID(enum class ECutsceneRootTransformID ID, struct FTransform Transform); // Function BP_EnemyManager.BP_EnemyManager_C.SetENPCStartTransformbyID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugResetAddDamageBlendWeight(); // Function BP_EnemyManager.BP_EnemyManager_C.DebugResetAddDamageBlendWeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetAddDamageBlendWeight(float Value); // Function BP_EnemyManager.BP_EnemyManager_C.DebugSetAddDamageBlendWeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Usable Brain Crash Lock Target(struct ARSBattleCharacter_C* TargetCharacter); // Function BP_EnemyManager.BP_EnemyManager_C.Usable Brain Crash Lock Target // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashHUDTarget(struct ARSBattleCharacter_C* BattleChara, bool bEnablePlayer, bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.SetBrainCrashHUDTarget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SelectBrainCrashCharacter(struct ARSBattleCharacter_C* TargetCharacter); // Function BP_EnemyManager.BP_EnemyManager_C.SelectBrainCrashCharacter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashTarget(struct TArray<struct ARSCharacterBase*> TargetsList); // Function BP_EnemyManager.BP_EnemyManager_C.GetBrainCrashTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void LeaveBrainCrashAccess(struct ARSBattleCharacter_C* Character, bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.LeaveBrainCrashAccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EntryBrainCrashAccess(struct ARSBattleCharacter_C* Character, bool dummy); // Function BP_EnemyManager.BP_EnemyManager_C.EntryBrainCrashAccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSeeEnemy(struct AActor* Actor, struct FVector TargetLocation, bool IsSeeEnemy); // Function BP_EnemyManager.BP_EnemyManager_C.CheckSeeEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KillAllEnemiesInSubGroup(int32_t GroupID, int32_t SubGroupID); // Function BP_EnemyManager.BP_EnemyManager_C.KillAllEnemiesInSubGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KillAllEnemiesInGroup(int32_t GroupID, int32_t SubGroupID); // Function BP_EnemyManager.BP_EnemyManager_C.KillAllEnemiesInGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void KillEnemy(struct ARSCharacterBase* Actor); // Function BP_EnemyManager.BP_EnemyManager_C.KillEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnAllEnemiesInGroup(int32_t GroupID, int32_t SubGroupID); // Function BP_EnemyManager.BP_EnemyManager_C.SpawnAllEnemiesInGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnOneEnemyInSubGroup(int32_t GroupID, int32_t SubGroupID, bool SpawnOK); // Function BP_EnemyManager.BP_EnemyManager_C.SpawnOneEnemyInSubGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnEnemyByName(struct FName enemyName); // Function BP_EnemyManager.BP_EnemyManager_C.SpawnEnemyByName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnAllEnemiesInSubGroup(int32_t GroupID, int32_t SubGroupID); // Function BP_EnemyManager.BP_EnemyManager_C.SpawnAllEnemiesInSubGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSubGroupEnemyCount(int32_t CheckGroupdID, int32_t CheckSubGroupID, int32_t GroupCount); // Function BP_EnemyManager.BP_EnemyManager_C.GetSubGroupEnemyCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUpdate(struct AActor* EnemyActor, int32_t EnemyIndex); // Function BP_EnemyManager.BP_EnemyManager_C.DebugUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugENPCSelectCommand(struct ARSBattlePlayer_C* TargetENPC, int32_t Command); // Function BP_EnemyManager.BP_EnemyManager_C.DebugENPCSelectCommand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugEnemySelectCommand(struct ARSBattleEnemy_C* TargetEnemy, int32_t Command); // Function BP_EnemyManager.BP_EnemyManager_C.DebugEnemySelectCommand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugTargetEnemy(int32_t Command); // Function BP_EnemyManager.BP_EnemyManager_C.DebugTargetEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IncrementUpdateEnemy(); // Function BP_EnemyManager.BP_EnemyManager_C.IncrementUpdateEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanUpdateEnemy(bool CanUpdate); // Function BP_EnemyManager.BP_EnemyManager_C.CanUpdateEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPsychicFlyObj(struct ABP_PsychicObjectBasic_C* PsychicFlyObj); // Function BP_EnemyManager.BP_EnemyManager_C.AddPsychicFlyObj // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GroupBattleStart(int32_t GroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_EnemyManager.BP_EnemyManager_C.GroupBattleStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGroupEnemyCount(int32_t CheckGroupdID, int32_t GroupCount); // Function BP_EnemyManager.BP_EnemyManager_C.GetGroupEnemyCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyHitObjectType(struct TArray<enum class EObjectTypeQuery> ObjectType); // Function BP_EnemyManager.BP_EnemyManager_C.GetEnemyHitObjectType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetBrainCrashParam(float BrainCrashTimer, float BrainCrashMissScale); // Function BP_EnemyManager.BP_EnemyManager_C.SetBrainCrashParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStealthSeeEnable(bool return); // Function BP_EnemyManager.BP_EnemyManager_C.IsStealthSeeEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetStealthSeeEnable(bool on, bool ShadowChange); // Function BP_EnemyManager.BP_EnemyManager_C.SetStealthSeeEnable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubBattleEnemyList(struct AActor* Enemy); // Function BP_EnemyManager.BP_EnemyManager_C.SubBattleEnemyList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddBattleEnemyList(struct AActor* Enemy); // Function BP_EnemyManager.BP_EnemyManager_C.AddBattleEnemyList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnemyRigitBodyEmptyUpdate(float RigitBodyEmptyUpdateSeconds); // Function BP_EnemyManager.BP_EnemyManager_C.EnemyRigitBodyEmptyUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemySound(enum class Enum_EnemySound return); // Function BP_EnemyManager.BP_EnemyManager_C.GetEnemySound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEnemySoundCheck(struct AActor* Actor); // Function BP_EnemyManager.BP_EnemyManager_C.SetEnemySoundCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemySound(); // Function BP_EnemyManager.BP_EnemyManager_C.SetEnemySound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainCrashAccessEnable(bool return); // Function BP_EnemyManager.BP_EnemyManager_C.IsBrainCrashAccessEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetTickEnable(struct AActor* Actor); // Function BP_EnemyManager.BP_EnemyManager_C.SetTickEnable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTick(float DeltaSeconds); // Function BP_EnemyManager.BP_EnemyManager_C.UpdateTick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashStartUserMotion(); // Function BP_EnemyManager.BP_EnemyManager_C.OnBrainCrashStartUserMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashStart(bool bBeginActor); // Function BP_EnemyManager.BP_EnemyManager_C.OnBrainCrashStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDamage(); // Function BP_EnemyManager.BP_EnemyManager_C.OnBrainCrashDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDead(); // Function BP_EnemyManager.BP_EnemyManager_C.OnBrainCrashDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashEnd(bool bBeginActor, struct UAnimMontage* PlayerEndMontage); // Function BP_EnemyManager.BP_EnemyManager_C.OnBrainCrashEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyManager.BP_EnemyManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyManager.BP_EnemyManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashTargetFloating(); // Function BP_EnemyManager.BP_EnemyManager_C.OnBrainCrashTargetFloating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventManagerRigitBodyEmptyUpdateSeconds(float RigitBodyEmptyUpdateSeconds); // Function BP_EnemyManager.BP_EnemyManager_C.EventManagerRigitBodyEmptyUpdateSeconds // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EnemyManager.BP_EnemyManager_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void StopEnemyAll_FromNative(); // Function BP_EnemyManager.BP_EnemyManager_C.StopEnemyAll_FromNative // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventReturnFromPartyMenu(); // Function BP_EnemyManager.BP_EnemyManager_C.EventReturnFromPartyMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeAreaLoadStatus(enum class EChangeAreaStatus Status, bool IsChangeLocation); // Function BP_EnemyManager.BP_EnemyManager_C.OnChangeAreaLoadStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DelayBeginPlay(); // Function BP_EnemyManager.BP_EnemyManager_C.DelayBeginPlay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyManager(int32_t EntryPoint); // Function BP_EnemyManager.BP_EnemyManager_C.ExecuteUbergraph_BP_EnemyManager // (Final|UbergraphFunction) // @ game+0x1685580
	void EndDuelPoleDispatcher__DelegateSignature(); // Function BP_EnemyManager.BP_EnemyManager_C.EndDuelPoleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUniqueEventDispatcher__DelegateSignature(int32_t EventNo); // Function BP_EnemyManager.BP_EnemyManager_C.DebugUniqueEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GroupBattleStartDispatcher__DelegateSignature(int32_t GroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_EnemyManager.BP_EnemyManager_C.GroupBattleStartDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDeadDispatcher__DelegateSignature(int32_t GroupID, int32_t SubGroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_EnemyManager.BP_EnemyManager_C.OnDeadDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

