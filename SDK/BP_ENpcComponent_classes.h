// BlueprintGeneratedClass BP_ENpcComponent.BP_ENpcComponent_C
// Size: 0x598 (Inherited: 0xc8)
struct UBP_ENpcComponent_C : UPlayerENpcBaseComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0xd0(0x08)
	bool bBoss; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct FName> TickClaimantList; // 0xe0(0x10)
	bool bBattle; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicObjectArray; // 0xf8(0x10)
	struct FName PsychicManagerName; // 0x108(0x08)
	struct TArray<struct ABP_PsychicObjectBasic_C*> HitPsychicObjectArray; // 0x110(0x10)
	enum class ENpcKind ENpcKind; // 0x120(0x01)
	bool IsLoadBrainField; // 0x121(0x01)
	bool bUseBrainField; // 0x122(0x01)
	bool bDispHud; // 0x123(0x01)
	float CurrentDispHudTime; // 0x124(0x04)
	float DispHudTime; // 0x128(0x04)
	bool bReactionChance_1; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FGameTimer ReactionChanceTimer; // 0x130(0x0c)
	float ReactionChanceTime; // 0x13c(0x04)
	float EndChanceDrawingTime; // 0x140(0x04)
	int32_t BeforeElapsedTime; // 0x144(0x04)
	float EndChanceProbability; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<float> DodgeProbabilityFromPlayer; // 0x150(0x10)
	struct TArray<float> DodgeProbabilityFromENPC; // 0x160(0x10)
	struct FGameTimer DodgeCheckIntervalTimer; // 0x170(0x0c)
	float DodgeCheckIntervalTime; // 0x17c(0x04)
	bool bSetChanceEndAction; // 0x180(0x01)
	char pad_181[0x3]; // 0x181(0x03)
	struct FVector InitBattleStartLocation; // 0x184(0x0c)
	float EndChanceCounterNormalProbability; // 0x190(0x04)
	float EndChanceCounterIntenseProbability; // 0x194(0x04)
	enum class EPlayerAIBattleThinkType EndChanceCounterThinkType; // 0x198(0x01)
	bool bEnableEndChanceCounter; // 0x199(0x01)
	bool bIntence; // 0x19a(0x01)
	bool bSelectChanceCounterOnce; // 0x19b(0x01)
	bool bSeeThrough; // 0x19c(0x01)
	enum class ENpcKind PreEnpcKind; // 0x19d(0x01)
	bool bHitSpTrigger; // 0x19e(0x01)
	char pad_19F[0x1]; // 0x19f(0x01)
	float SpActiveHpRate; // 0x1a0(0x04)
	bool bActiveSpTrigger; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct TArray<float> BFStartHpList; // 0x1a8(0x10)
	int32_t CurrentBFStartHpIndex; // 0x1b8(0x04)
	bool bSpStart; // 0x1bc(0x01)
	bool bEnpcSp; // 0x1bd(0x01)
	char pad_1BE[0x2]; // 0x1be(0x02)
	struct FGameTimer SpTriggerTimer; // 0x1c0(0x0c)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct AActor* SpTriggerAttacker; // 0x1d0(0x08)
	struct AActor* SpTriggerReceiver; // 0x1d8(0x08)
	float DefalutSpTriggerStartHitSlowDelayTime; // 0x1e0(0x04)
	float DefaultSpTriggerStartSequencerDelayTime; // 0x1e4(0x04)
	int32_t SpTriggerState; // 0x1e8(0x04)
	float WorkSpTriggerStartHitSlowDelayTime; // 0x1ec(0x04)
	float WorkSpTriggerStartSequencerDelayTime; // 0x1f0(0x04)
	bool IsDrive; // 0x1f4(0x01)
	bool bTimerPauseFlag; // 0x1f5(0x01)
	char pad_1F6[0x2]; // 0x1f6(0x02)
	struct TArray<enum class E_SASKind> SasKindList; // 0x1f8(0x10)
	struct TArray<float> SASTimerList; // 0x208(0x10)
	int32_t HardenHP; // 0x218(0x04)
	int32_t MaxHardenHP; // 0x21c(0x04)
	bool IsLoadENPCBrainCrash; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct FMulticastInlineDelegate EventDispatcherSASStart; // 0x228(0x10)
	bool IsFirstUseSAS; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float FirstUseSASPastTime; // 0x23c(0x04)
	float FirstUseSASIntervalTime; // 0x240(0x04)
	float SASFireCoolTimer; // 0x244(0x04)
	float SASFireIntervalTime; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct TArray<bool> SASStartingFlags; // 0x250(0x10)
	struct AActor* InterceptCheckObj; // 0x260(0x08)
	float InterceptProbability; // 0x268(0x04)
	float EnableInterceptDistance; // 0x26c(0x04)
	bool bEnableIntercept; // 0x270(0x01)
	bool bBindInterceptableEvent; // 0x271(0x01)
	bool bInterceptInterval; // 0x272(0x01)
	char pad_273[0x1]; // 0x273(0x01)
	struct FGameTimer InterceptTimer; // 0x274(0x0c)
	float InterceptIntervalTime; // 0x280(0x04)
	float ForceSASRegistTime; // 0x284(0x04)
	float ForceSASRegistPastTime; // 0x288(0x04)
	float SASElectricCoolTimer; // 0x28c(0x04)
	float SASElectricIntervalTime; // 0x290(0x04)
	float SASStealthCoolTimer; // 0x294(0x04)
	float SASStealthIntervalTime; // 0x298(0x04)
	bool IsHitTrigger; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct TArray<float> SASStartingTimer; // 0x2a0(0x10)
	float SASAcceptTime; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<float> BFEndHpList; // 0x2b8(0x10)
	int32_t CurrentBFEndHpIndex; // 0x2c8(0x04)
	float DriveStartHP; // 0x2cc(0x04)
	bool bEnableDodgeRangeAttack; // 0x2d0(0x01)
	bool IsInitDuelPole; // 0x2d1(0x01)
	bool IsDuelPoleStart; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	float DuelPoleStartHP; // 0x2d4(0x04)
	bool IsUpdateDuelPole; // 0x2d8(0x01)
	bool DuelPoleType; // 0x2d9(0x01)
	bool DuelPoleCheckState; // 0x2da(0x01)
	bool bSealDodge; // 0x2db(0x01)
	bool bSealReactionChance; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct TArray<enum class EPlayerAIBattleThinkType> EndChanceActionList; // 0x2e0(0x10)
	bool bEnpcSpAll; // 0x2f0(0x01)
	bool IsDriveThinkChange; // 0x2f1(0x01)
	bool IsCheckBrainFieldBT; // 0x2f2(0x01)
	bool IsSasFire; // 0x2f3(0x01)
	bool IsSasElectric; // 0x2f4(0x01)
	bool IsSasTeleport; // 0x2f5(0x01)
	bool IsBrainFieldThinkChange; // 0x2f6(0x01)
	bool IsChangedBrainFieldThink; // 0x2f7(0x01)
	struct FGameTimer DiscoverIconTimer; // 0x2f8(0x0c)
	struct FName DiscoverTickClaimantName; // 0x304(0x08)
	float DiscoverIconDispSeconds; // 0x30c(0x04)
	struct UBP_Discover_Component_C* EnpcDiscoverComponent; // 0x310(0x08)
	bool bUnDiscover; // 0x318(0x01)
	bool bReadyDrive; // 0x319(0x01)
	bool bEnableTriggerSequenerReception; // 0x31a(0x01)
	char pad_31B[0x1]; // 0x31b(0x01)
	float SASStartTimer; // 0x31c(0x04)
	int32_t SASCounter; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct TArray<float> SASStartTime; // 0x328(0x10)
	enum class E_SASKind ExecuteSASKind; // 0x338(0x01)
	char pad_339[0x7]; // 0x339(0x07)
	struct TArray<struct ARSBattlePlayer_C*> UsedSasEnpc; // 0x340(0x10)
	float SASCodeFadeTime; // 0x350(0x04)
	float SASCodeFadeTimer; // 0x354(0x04)
	struct UCurveFloat* EnpcSASCameraAttention_ActorIn; // 0x358(0x08)
	bool EnpcSASCameraAttention_ChangeFov; // 0x360(0x01)
	char pad_361[0x3]; // 0x361(0x03)
	float EnpcSASCameraAttention_TargetFov; // 0x364(0x04)
	struct UCurveFloat* EnpcSASCameraAttention_FovIn; // 0x368(0x08)
	struct UCurveFloat* EnpcSASCameraAttention_ActorOut; // 0x370(0x08)
	struct UCurveFloat* EnpcSASCameraAttention_FovOut; // 0x378(0x08)
	float ENPCBrainFieldTime; // 0x380(0x04)
	bool bNotDispHud; // 0x384(0x01)
	char pad_385[0x3]; // 0x385(0x03)
	float StsrtBattleTimer; // 0x388(0x04)
	int32_t SASUseCounter; // 0x38c(0x04)
	float SASTimeOutCounter; // 0x390(0x04)
	bool IsStartSASTimeOutCount; // 0x394(0x01)
	bool IsFriendEnemy; // 0x395(0x01)
	bool bUpdateTriggerHit; // 0x396(0x01)
	char pad_397[0x1]; // 0x397(0x01)
	struct FGameTimer EndUpdateTriggerHitTimer; // 0x398(0x0c)
	bool IsDriveAttack; // 0x3a4(0x01)
	bool bReadyBrainField; // 0x3a5(0x01)
	bool bAddBossList; // 0x3a6(0x01)
	bool IsCancelDrive; // 0x3a7(0x01)
	bool bIsForceWait; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	int32_t OwnerDamageDataNum; // 0x3ac(0x04)
	int32_t OwnerDirectDamageDataNum; // 0x3b0(0x04)
	bool IsApplyPsychicObjectThrowParameter; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	float DirectshotThrowSpeed; // 0x3b8(0x04)
	float DirectshotHomingSpeed; // 0x3bc(0x04)
	float ComboThrowSpeed; // 0x3c0(0x04)
	float ComboHomingSpeed; // 0x3c4(0x04)
	float BrainfieldThrowSpeed; // 0x3c8(0x04)
	float BrainfieldHomingSpeed; // 0x3cc(0x04)
	float InterceptThrowSpeed; // 0x3d0(0x04)
	float InterceptHomingSpeed; // 0x3d4(0x04)
	bool bIsDownResetBattleThink; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FHCHitResult DeadBeforeHitResult; // 0x3e0(0x1b8)

	void GetDeadBeforeHitResult(struct FHCHitResult HitResult); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetDeadBeforeHitResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadBeforeHitResult(struct FHCHitResult HitResult); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetDeadBeforeHitResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDeadStaging(); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartDeadStaging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsResetBattleThink(bool isReset); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsResetBattleThink // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnpcPsychicObjectThrowParameter(bool isApply, float DirectshotThrowSpeed, float DirectshotHomingSpeed, float ComboThrowSpeed, float ComboHomingSpeed, float BrainfieldThrowSpeed, float BrainfieldHomingSpeed, float InterceptThrowSpeed, float InterceptHomingSpeed); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetEnpcPsychicObjectThrowParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceWait(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetForceWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsForceWait(bool bIsForceWait); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsForceWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDriveDirect(); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartDriveDirect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReadyDriveWithCancel(bool IsReadyDrive); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsReadyDriveWithCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDriveAttack(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetDriveAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDriveAttacked(bool IsAttacked); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsDriveAttacked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableUpdateTriggerHit(bool bEnable); // Function BP_ENpcComponent.BP_ENpcComponent_C.EnableUpdateTriggerHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTriggerHit(float DeltaSec); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateTriggerHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetReadyDrive(bool bReady, bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetReadyDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelDrive(bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.CancelDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishStartBattleTimer(); // Function BP_ENpcComponent.BP_ENpcComponent_C.FinishStartBattleTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStartBattleTimer(float DeltaSec); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateStartBattleTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStartBattleTimer(bool IsEffective); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsStartBattleTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StartReactionChance_CallFromCPP(); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartReactionChance_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHitTrigger_CallFromCPP(bool bIsHitTrigger); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetHitTrigger_CallFromCPP // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENPCBrainFieldTime(float ENPCBrainFieldTime); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetENPCBrainFieldTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetDyingHpRate(float DyingHpRate); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetDyingHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsActiveEnpcSASAcceleTelepo(bool IsActive); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsActiveEnpcSASAcceleTelepo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetENPCOutlineColor(bool Enable); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetENPCOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetENPCOutline(bool Enable); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetENPCOutline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableTriggerSequencerReception(bool Enable); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnableTriggerSequencerReception // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EnableTriggerSequencerReception(bool Enable); // Function BP_ENpcComponent.BP_ENpcComponent_C.EnableTriggerSequencerReception // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exec Drive(bool bForceExec, bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.Exec Drive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReadyDrive(bool bReady); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsReadyDrive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetDiscoverComponent(struct UBP_Discover_Component_C* DiscoverComponent); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetDiscoverComponent // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDiscoverIcon(float DeltaSeconds, bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateDiscoverIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShowDiscoverIcon(bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.ShowDiscoverIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShowUnDiscoverIcon(bool IsForceDispIcon, bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.ShowUnDiscoverIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpTriggerAll(bool bSpTriggerAll); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetSpTriggerAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpTriggerAll(bool IsSpTrigger); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsSpTriggerAll // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StartStealthCriticalHitSlow(struct FHCHitResult HitResult); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartStealthCriticalHitSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRandomDuelPole(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetRandomDuelPole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeDuelPoleType(bool bDuelType, bool bDuelPoleCheckState); // Function BP_ENpcComponent.BP_ENpcComponent_C.ChangeDuelPoleType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStartInitDuelPole(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateStartInitDuelPole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDuelPoleStartHp(); // Function BP_ENpcComponent.BP_ENpcComponent_C.CheckDuelPoleStartHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDuelPoleType(bool bDuelType, bool bCheckState, bool bIsCompleted); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetDuelPoleType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableDodgeRangeAttack(bool bEnable); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnableDodgeRangeAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckDriveStartBrainField(bool IsReady); // Function BP_ENpcComponent.BP_ENpcComponent_C.CheckDriveStartBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSASStartingTimer(enum class E_SASKind SasKind, float DeltaSec, bool isReset); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateSASStartingTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHitTrigger(bool IsHitTrigger); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetHitTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetForceSASRegist(); // Function BP_ENpcComponent.BP_ENpcComponent_C.ResetForceSASRegist // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSASAll(bool Active); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsActiveEnpcSASAll // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDispStealthEffect(bool bOutDisp); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsDispStealthEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateInterceptInterval(float DeltaSec); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateInterceptInterval // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndInterceptAction(); // Function BP_ENpcComponent.BP_ENpcComponent_C.EndInterceptAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartInterceptAction(struct AActor* InObj, struct AActor* InTarget); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartInterceptAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearInterceptCheckObj(); // Function BP_ENpcComponent.BP_ENpcComponent_C.ClearInterceptCheckObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetInterceptCheckObj(struct AActor* OutObj); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetInterceptCheckObj // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetInterceptCheckObj(struct AActor* InObj); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetInterceptCheckObj // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASStartingFlag(enum class E_SASKind SasKind, bool Flag); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetSASStartingFlag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSASStartingFlag(enum class E_SASKind SasKind, bool Flag); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetSASStartingFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update Execute SAS(float DeltaSec); // Function BP_ENpcComponent.BP_ENpcComponent_C.Update Execute SAS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUseBrainField(bool bUseBrainField); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsUseBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EndEnpcSAS(enum class E_SASKind kind); // Function BP_ENpcComponent.BP_ENpcComponent_C.EndEnpcSAS // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHardenHP(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetHardenHP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddHardenDamage(float Damage); // Function BP_ENpcComponent.BP_ENpcComponent_C.AddHardenDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActiveEnpcSAS(enum class E_SASKind kind); // Function BP_ENpcComponent.BP_ENpcComponent_C.ActiveEnpcSAS // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASMaxTime(enum class E_SASKind kind, float Time); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetSASMaxTime // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetTimerPause(bool bPause); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetTimerPause // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSAS(float DeltaSeconds); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateSAS // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveEnpcSAS(enum class E_SASKind kind, bool bActive); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsActiveEnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ForceEndEnpcSAS(); // Function BP_ENpcComponent.BP_ENpcComponent_C.ForceEndEnpcSAS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterSAS(enum class E_SASKind kind, bool bNoEffect); // Function BP_ENpcComponent.BP_ENpcComponent_C.UnregisterSAS // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterEnpcSAS(enum class E_SASKind kind); // Function BP_ENpcComponent.BP_ENpcComponent_C.RegisterEnpcSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDriveStartHp(); // Function BP_ENpcComponent.BP_ENpcComponent_C.CheckDriveStartHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEnpcSp(); // Function BP_ENpcComponent.BP_ENpcComponent_C.EndEnpcSp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEnpcSp(struct AActor* attacker, struct AActor* Enemy); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartEnpcSp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEnpcSp(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateEnpcSp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSpStart(bool bSpStart); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetSpStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpStart(bool bSpStart); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsSpStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Check Brain Field Start Hp(); // Function BP_ENpcComponent.BP_ENpcComponent_C.Check Brain Field Start Hp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanSpTrigger(bool bCanSpTrigger); // Function BP_ENpcComponent.BP_ENpcComponent_C.CanSpTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetActiveSpTrigger(bool Active); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetActiveSpTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActiveSpTrigger(bool bActiveSpTrigger); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetActiveSpTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetSpActiveHpRate(float ActiveHpRate); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetSpActiveHpRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetHitSpTrigger(bool bHitSpTrigger); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetHitSpTrigger // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetHitSpTrigger(bool bHit); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetHitSpTrigger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnpcKind(); // Function BP_ENpcComponent.BP_ENpcComponent_C.ResetEnpcKind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetENpcKind(enum class ENpcKind ENpcKind); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetENpcKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEnpcKind(enum class ENpcKind NewKind); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetEnpcKind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSeeThrough(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSeeThrough(); // Function BP_ENpcComponent.BP_ENpcComponent_C.EndSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSeeThrough(); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartSeeThrough // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIntence(bool bIntence); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetIntence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIntence(bool bIntence); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsIntence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetChanceEndAction(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetChanceEndAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDodge(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateDodge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndReactionChance(bool bDown, bool bForce); // Function BP_ENpcComponent.BP_ENpcComponent_C.EndReactionChance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartReactionChance(); // Function BP_ENpcComponent.BP_ENpcComponent_C.StartReactionChance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateReactionChance(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateReactionChance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReactionChance(bool bReactionChance); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsReactionChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPossibleDodgeNormalAttack(bool bPossible, bool bForceDodge); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsPossibleDodgeNormalAttack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHpDisplay(float DeltaSec); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateHpDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitPsychicObjAddImpulse(struct ABP_PsychicObjectBasic_C* HitPsychicObj); // Function BP_ENpcComponent.BP_ENpcComponent_C.HitPsychicObjAddImpulse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(float DeltaSec); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdateBrainField // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddHitPsychicObject(struct ABP_PsychicObjectBasic_C* HitPsychicObj, bool IsAdd); // Function BP_ENpcComponent.BP_ENpcComponent_C.AddHitPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddPsychicObject(struct ABP_PsychicObjectBasic_C* AddObj); // Function BP_ENpcComponent.BP_ENpcComponent_C.AddPsychicObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicObject(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UpdatePsychicObject // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyDead(); // Function BP_ENpcComponent.BP_ENpcComponent_C.NotifyDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyEndBattle(); // Function BP_ENpcComponent.BP_ENpcComponent_C.NotifyEndBattle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotifyStartBattle(bool bBrainFieldEnable); // Function BP_ENpcComponent.BP_ENpcComponent_C.NotifyStartBattle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOwnerDestroy(); // Function BP_ENpcComponent.BP_ENpcComponent_C.OnOwnerDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTickEnable(bool bEnable, struct FName ClaimantName); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetTickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInvisibleHPGauge(bool bInvisible); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsInvisibleHPGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetDistanceToPlayer(float Distance); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetDistanceToPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableEnemyMoveRange(bool bReturn); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnableEnemyMoveRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBoss(bool bBoss); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetBoss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossEnemy(bool bBoss); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsBossEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetEnemyStealthSeeEnable(bool bON, bool bReturn); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetEnemyStealthSeeEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetEnemyWait(); // Function BP_ENpcComponent.BP_ENpcComponent_C.ResetEnemyWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyWait(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetEnemyWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyGroundTransform(struct FTransform Transform, struct FTransform return); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetEnemyGroundTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnSwitchVisibleBrainFieldLevel(bool bVisible); // Function BP_ENpcComponent.BP_ENpcComponent_C.OnSwitchVisibleBrainFieldLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldEnd(bool bMoveBrainField, bool bDummy); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetEnemyBrainFieldEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldStart(); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetEnemyBrainFieldStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyStateDamageDown(bool bReturn); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnemyStateDamageDown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnemyStateDamage(bool bReturn); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnemyStateDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnemyStateAttack(bool bReturn); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnemyStateAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnemyActive(bool bResult); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnemyActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetEnemyBrainCrashPerformance(bool bReturn); // Function BP_ENpcComponent.BP_ENpcComponent_C.SetEnemyBrainCrashPerformance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemyBossActive(bool bResult); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnemyBossActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnemyInterfaceBrainAccess(bool bResult); // Function BP_ENpcComponent.BP_ENpcComponent_C.IsEnemyInterfaceBrainAccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetEnemyInterfaceSound(enum class Enum_EnemySound Sound); // Function BP_ENpcComponent.BP_ENpcComponent_C.GetEnemyInterfaceSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ENpcComponent.BP_ENpcComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ENpcComponent.BP_ENpcComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ENpcComponent.BP_ENpcComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindEnpcSASTick(); // Function BP_ENpcComponent.BP_ENpcComponent_C.BindEnpcSASTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindEnpcSASTick(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UnbindEnpcSASTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindInterceptableThrow(); // Function BP_ENpcComponent.BP_ENpcComponent_C.BindInterceptableThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnBindInterceptableThrow(); // Function BP_ENpcComponent.BP_ENpcComponent_C.UnBindInterceptableThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInterceptableThrow(struct AActor* psy obj actor in, struct AActor* target actor in); // Function BP_ENpcComponent.BP_ENpcComponent_C.OnInterceptableThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ENpcComponent(int32_t EntryPoint); // Function BP_ENpcComponent.BP_ENpcComponent_C.ExecuteUbergraph_BP_ENpcComponent // (Final|UbergraphFunction) // @ game+0x1685580
	void EventDispatcherSASStart__DelegateSignature(enum class EPlayerID SAS_PlayerID); // Function BP_ENpcComponent.BP_ENpcComponent_C.EventDispatcherSASStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

