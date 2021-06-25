// BlueprintGeneratedClass BP_BattleManager.BP_BattleManager_C
// Size: 0x3b8 (Inherited: 0x300)
struct ABP_BattleManager_C : ABattleManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UBP_ENPCBrainFieldGauge_C* BP_ENPCBrainFieldGauge; // 0x308(0x08)
	struct UBPC_RenderScarManage_C* BPC_RenderScarManage; // 0x310(0x08)
	struct UBP_BattleSettingComponent_C* BP_BattleSettingComponent; // 0x318(0x08)
	struct UBP_PlayerHitStopComponent_C* BP_PlayerHitStopComponent; // 0x320(0x08)
	struct UBP_BattleSituationComponent_C* BP_BattleSituationComponent; // 0x328(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x330(0x08)
	enum class Enum_EnemySound CurrentEnemySound; // 0x338(0x01)
	bool IsLoop; // 0x339(0x01)
	char pad_33A[0x6]; // 0x33a(0x06)
	struct AHUDMainGame_C* HudMain; // 0x340(0x08)
	float EnemyDeadLogDelay; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct TArray<struct Fstruct_EnemyDeadLogParam> EnemyDeadLogDispQueue; // 0x350(0x10)
	struct TArray<struct UParticleSystem*> DropParticles; // 0x360(0x10)
	int32_t UseParticleIndex; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	struct TArray<struct UParticleSystem*> getParticle; // 0x378(0x10)
	struct FMulticastInlineDelegate OnHpDownEvent; // 0x388(0x10)
	bool DelayBattleLog; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	float BrainCrashBonusExp; // 0x39c(0x04)
	float BrainCrashBonusMoney; // 0x3a0(0x04)
	float BrainCrashBonusItemDrop; // 0x3a4(0x04)
	bool bExistBattleEnemy; // 0x3a8(0x01)
	bool bNoLimitHitEffect; // 0x3a9(0x01)
	bool BattleLogWaitFade; // 0x3aa(0x01)
	bool bDoneStealthLostBrainTalk; // 0x3ab(0x01)
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct AEventManager* EventManagerGlobal; // 0x3b0(0x08)

	void Is Disp Enemy Name Log(struct FName EnemyID, bool DisplayName); // Function BP_BattleManager.BP_BattleManager_C.Is Disp Enemy Name Log // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExistBattleEnemy(bool bExist); // Function BP_BattleManager.BP_BattleManager_C.IsExistBattleEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayerStealth(bool bStealth, bool bAfterStealth); // Function BP_BattleManager.BP_BattleManager_C.IsPlayerStealth // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void Set Enemy Dead from Event(int32_t DeadEnemyLevel, int32_t DropDataIndex, struct FName EnemyID, bool IsDispKillEnemyName); // Function BP_BattleManager.BP_BattleManager_C.Set Enemy Dead from Event // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAccessoryGoldBonus(float Rate); // Function BP_BattleManager.BP_BattleManager_C.GetAccessoryGoldBonus // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndDelayBattleLog(); // Function BP_BattleManager.BP_BattleManager_C.EndDelayBattleLog // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDelayBattleLog(); // Function BP_BattleManager.BP_BattleManager_C.StartDelayBattleLog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearCurrentBattle(); // Function BP_BattleManager.BP_BattleManager_C.ClearCurrentBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFullEnpcBrainFieldGauge(); // Function BP_BattleManager.BP_BattleManager_C.SetFullEnpcBrainFieldGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetENPCBrainFieldGaugeUpdate(bool bUpdate, struct FName ClaimantName); // Function BP_BattleManager.BP_BattleManager_C.SetENPCBrainFieldGaugeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibleENPCBrainFieldGauge(bool bVisible, bool bFromEnpc); // Function BP_BattleManager.BP_BattleManager_C.SetVisibleENPCBrainFieldGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddENPCBrainFieldGaugeByDefense(struct AActor* attacker); // Function BP_BattleManager.BP_BattleManager_C.AddENPCBrainFieldGaugeByDefense // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallHpDownEventDispatcher(struct AActor* Actor, struct FCharacterHPEventInfo eventInfo); // Function BP_BattleManager.BP_BattleManager_C.CallHpDownEventDispatcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableENPCBrainField(bool bEnableGauge); // Function BP_BattleManager.BP_BattleManager_C.IsEnableENPCBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetENPCBrainFieldRate(float Rate); // Function BP_BattleManager.BP_BattleManager_C.GetENPCBrainFieldRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ResetENPCBrainFieldGauge(); // Function BP_BattleManager.BP_BattleManager_C.ResetENPCBrainFieldGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddENPCBrainFieldGaugeByAttack(struct AActor* attacker); // Function BP_BattleManager.BP_BattleManager_C.AddENPCBrainFieldGaugeByAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableENPCBrainFieldGauge(bool bEnable); // Function BP_BattleManager.BP_BattleManager_C.SetEnableENPCBrainFieldGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_BattleManager.BP_BattleManager_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UBattleSettingComponent* GetBattleSetting(); // Function BP_BattleManager.BP_BattleManager_C.GetBattleSetting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SpawnCoreDrop(int32_t DropDataIndex, struct FTransform SpawnLocation, bool IsBig); // Function BP_BattleManager.BP_BattleManager_C.SpawnCoreDrop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUpBattleActor(struct FVector Location, float Distance, struct FVector Dir, float Angle, int32_t Num, struct ARSCharacterBase* BaseActor, struct TArray<struct AActor*> IgnoreActorList, struct TArray<struct AActor*> TargetList); // Function BP_BattleManager.BP_BattleManager_C.ListUpBattleActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Enemy Dead Log Param(struct FName characterId, int32_t Experience, int32_t Money, int32_t bonus, struct FName dropItemId, int32_t dropItemNum); // Function BP_BattleManager.BP_BattleManager_C.Set Enemy Dead Log Param // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyDead(struct FName Character ID, int32_t DropDataIndex, struct FTransform EnemyLocation, enum class EDeadFactor DeadFactor, int32_t DeadActorLevel, bool UseDeadCharacterName, struct FName DeadCharacterName, bool bDefeatedMainPlayer, bool IsDispKillEnemyName, struct FName LogReplaceName); // Function BP_BattleManager.BP_BattleManager_C.SetEnemyDead // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UBattleSituationComponent* GetSituation(); // Function BP_BattleManager.BP_BattleManager_C.GetSituation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateBattleSound(); // Function BP_BattleManager.BP_BattleManager_C.UpdateBattleSound // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExistBattleEnemy(bool bExistEnemy, struct ARSCharacterBase* LastEnemy); // Function BP_BattleManager.BP_BattleManager_C.CheckExistBattleEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateBattleMode(); // Function BP_BattleManager.BP_BattleManager_C.UpdateBattleMode // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPlayerDeadFlow(); // Function BP_BattleManager.BP_BattleManager_C.StartPlayerDeadFlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispEnemyDeadLog(); // Function BP_BattleManager.BP_BattleManager_C.DispEnemyDeadLog // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BattleManager.BP_BattleManager_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_BattleManager.BP_BattleManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void StartTutorialOperation(struct FName helpTutoID, float delaySec); // Function BP_BattleManager.BP_BattleManager_C.StartTutorialOperation // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnBattleFieldBegin(); // Function BP_BattleManager.BP_BattleManager_C.OnBattleFieldBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBattleFieldEnd(); // Function BP_BattleManager.BP_BattleManager_C.OnBattleFieldEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BattleManager(int32_t EntryPoint); // Function BP_BattleManager.BP_BattleManager_C.ExecuteUbergraph_BP_BattleManager // (Final|UbergraphFunction) // @ game+0x1685580
	void OnHpDownEvent__DelegateSignature(struct AActor* Actor, struct FCharacterHPEventInfo eventInfo); // Function BP_BattleManager.BP_BattleManager_C.OnHpDownEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

