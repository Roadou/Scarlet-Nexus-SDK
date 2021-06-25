// BlueprintGeneratedClass BP_BattlefieldManager.BP_BattlefieldManager_C
// Size: 0x370 (Inherited: 0x310)
struct ABP_BattlefieldManager_C : ABattlefieldManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct TMap<int32_t, struct ABP_RushEventTriggerBox_C*> BFGroup Map; // 0x320(0x50)

	void Setting Enemy BFGroup(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.Setting Enemy BFGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsExistBattlefieldEnemiesStrictly(int32_t BFGroupID, int32_t SubGroupID); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.IsExistBattlefieldEnemiesStrictly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsExistBattlefieldEnemies(int32_t BFGroupID, int32_t SubGroupID, int32_t FirstSubGroup); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.IsExistBattlefieldEnemies // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsAnyFenceEnabled(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.IsAnyFenceEnabled // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAllBFInfoStatus(bool IsLocationChange); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.ResetAllBFInfoStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBattlefieldEventStartOne(int32_t GroupID, int32_t SubGroupID, int32_t TutorialGroupID, int32_t TutorialSubGroupID, struct AMakeEventActor* MakeEventActorClass); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.CheckBattlefieldEventStartOne // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBattlefieldEventStart(struct FBattlefieldInfo BFInfo); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.CheckBattlefieldEventStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InitializeAtStartBattlefield(struct FBattlefieldInfo currentBFInfo); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.InitializeAtStartBattlefield // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnSave_SaveData(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnSave_SaveData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnLoad_SaveData(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnLoad_SaveData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetFenceRandomSeed(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.ResetFenceRandomSeed // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFenceList(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.UpdateFenceList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeAtAreaStart(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.InitializeAtAreaStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHpDownEvent(struct AActor* Actor, struct FCharacterHPEventInfo eventInfo); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnHpDownEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFoundBattlefieldStart(int32_t GroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnFoundBattlefieldStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyDead(int32_t GroupID, int32_t SubGroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnEnemyDead // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnd(float DeltaSeconds); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.UpdateEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateExec(float DeltaSeconds); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.UpdateExec // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStart(float DeltaSeconds); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.UpdateStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInit(float DeltaSeconds); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.UpdateInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBattlefield(float DeltaSeconds); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.UpdateBattlefield // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindEvents(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.BindEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDeadDispatcher_Event_1(int32_t GroupID, int32_t SubGroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnDeadDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GroupBattleStartDispatcher_Event_1(int32_t GroupID, float FenceBattleRate, struct FName UniqueId, bool IsOnceOnly); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.GroupBattleStartDispatcher_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHpDownEvent_Event_1(struct AActor* Actor, struct FCharacterHPEventInfo eventInfo); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.OnHpDownEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetEnableEnemyOutField(bool Enable, int32_t BFGroupID); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.SetEnableEnemyOutField // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BattlefieldManager(int32_t EntryPoint); // Function BP_BattlefieldManager.BP_BattlefieldManager_C.ExecuteUbergraph_BP_BattlefieldManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

