// BlueprintGeneratedClass BP_PlayerGauge.BP_PlayerGauge_C
// Size: 0x1ae (Inherited: 0xc0)
struct UBP_PlayerGauge_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	float PsychicGauge; // 0xc8(0x04)
	float PsychicGaugeMax; // 0xcc(0x04)
	float PsychicGaugeAutoRecoveryValue; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xd8(0x08)
	float PsychicGaugeAutoRecoveryValueBattle; // 0xe0(0x04)
	float PsychicGaugeAddDefeated; // 0xe4(0x04)
	float PsychicGaugeAddDefeatedBrainCrash; // 0xe8(0x04)
	float BattleBonusRate; // 0xec(0x04)
	bool bBattleBonusModeDrive; // 0xf0(0x01)
	bool bBattleBonusModeBrainField; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	struct FFBattleBonusData BattleBonusData; // 0xf4(0x40)
	bool bOpenBattleBonusUI; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct TMap<struct FName, enum class EPsychicGaugeEffect> PsychicGaugeEffectRequest; // 0x138(0x50)
	float PsychicGaugeRecoveryRate; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct TArray<struct FName> BattleBonusClaimantList; // 0x190(0x10)
	struct FGameTimer OverkillBonusTimer; // 0x1a0(0x0c)
	bool bPauseTimer; // 0x1ac(0x01)
	bool bTutorialPsychicGauge; // 0x1ad(0x01)

	void SetTutorialPsychicGauge(bool bTutorial); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetTutorialPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickBattleBonusOverkillBonus(float DeltaSeconds); // Function BP_PlayerGauge.BP_PlayerGauge_C.TickBattleBonusOverkillBonus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnableBattleBonus(bool bEnable, struct FName ClaimantName); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetEnableBattleBonus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsychicGaugeRecoveryRate(); // Function BP_PlayerGauge.BP_PlayerGauge_C.ResetPsychicGaugeRecoveryRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeRecoveryRate(float InRate); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetPsychicGaugeRecoveryRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPsychicGauge(); // Function BP_PlayerGauge.BP_PlayerGauge_C.ResetPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicGaugeEffect(); // Function BP_PlayerGauge.BP_PlayerGauge_C.UpdatePsychicGaugeEffect // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicGaugeEffect(enum class EPsychicGaugeEffect Effect, struct FName ClaimantName, bool bSet); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetPsychicGaugeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndBattleBonus(); // Function BP_PlayerGauge.BP_PlayerGauge_C.EndBattleBonus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeBattleBonusData(); // Function BP_PlayerGauge.BP_PlayerGauge_C.InitializeBattleBonusData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetBattleBonusRate(); // Function BP_PlayerGauge.BP_PlayerGauge_C.ResetBattleBonusRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableBattleBonus(bool bEnable); // Function BP_PlayerGauge.BP_PlayerGauge_C.IsEnableBattleBonus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetBattleBonusModeBrainField(bool bON); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetBattleBonusModeBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleBonusModeDrive(bool bON); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetBattleBonusModeDrive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBattleBonusMaxRate(float Rate); // Function BP_PlayerGauge.BP_PlayerGauge_C.GetBattleBonusMaxRate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetBattleBonusRate(float Rate); // Function BP_PlayerGauge.BP_PlayerGauge_C.GetBattleBonusRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AddBattleBonusRate(enum class EBattleBonusAddType InType); // Function BP_PlayerGauge.BP_PlayerGauge_C.AddBattleBonusRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitPsychicGaugeMax(); // Function BP_PlayerGauge.BP_PlayerGauge_C.InitPsychicGaugeMax // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicGaugeHUD(bool bUse, float UseParam, bool bSucess); // Function BP_PlayerGauge.BP_PlayerGauge_C.UpdatePsychicGaugeHUD // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPsychicGaugeEnemyDestroy(bool bBrainCrash); // Function BP_PlayerGauge.BP_PlayerGauge_C.AddPsychicGaugeEnemyDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AutoRecoveryPsychicGauge(float DeltaSeconds); // Function BP_PlayerGauge.BP_PlayerGauge_C.AutoRecoveryPsychicGauge // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicGaugeMax(float Value); // Function BP_PlayerGauge.BP_PlayerGauge_C.GetPsychicGaugeMax // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetPsychicGaugeMax(float Value); // Function BP_PlayerGauge.BP_PlayerGauge_C.SetPsychicGaugeMax // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicGauge(float Value); // Function BP_PlayerGauge.BP_PlayerGauge_C.GetPsychicGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AddPsychicGauge(float Value); // Function BP_PlayerGauge.BP_PlayerGauge_C.AddPsychicGauge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerGauge.BP_PlayerGauge_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerGauge.BP_PlayerGauge_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindOverkillBonusTick(); // Function BP_PlayerGauge.BP_PlayerGauge_C.BindOverkillBonusTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindOverkillBonus(); // Function BP_PlayerGauge.BP_PlayerGauge_C.UnbindOverkillBonus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventOnPauseTimer(bool bPause); // Function BP_PlayerGauge.BP_PlayerGauge_C.EventOnPauseTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerGauge(int32_t EntryPoint); // Function BP_PlayerGauge.BP_PlayerGauge_C.ExecuteUbergraph_BP_PlayerGauge // (Final|UbergraphFunction) // @ game+0x1685580
};

