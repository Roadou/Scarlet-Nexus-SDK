// BlueprintGeneratedClass RsBattleHero.RsBattleHero_C
// Size: 0x1def (Inherited: 0x1b13)
struct ARsBattleHero_C : ARSBattlePlayer_C {
	char pad_1B13[0x5]; // 0x1b13(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b18(0x08)
	struct UBP_PlayerPsychicObjectComponent_C* BP_PlayerPsychicObjectComponent; // 0x1b20(0x08)
	struct UBP_PlayerSequencerComponent_C* BP_PlayerSequencerComponent; // 0x1b28(0x08)
	struct UDamagePostEffectComponent_C* DamagePostEffectComponent; // 0x1b30(0x08)
	struct UBP_SAS_PlayerState_C* BP_SAS_PlayerState; // 0x1b38(0x08)
	struct UBP_PlayerEmissionComponent_C* BP_PlayerEmissionComponent; // 0x1b40(0x08)
	struct UPsychicGrabComponent_C* PsychicGrabComponent; // 0x1b48(0x08)
	enum class ETimelineDirection EnpcSASTimeLine__Direction_40BE0B2848433BB641F9E4A9E97A4077; // 0x1b50(0x01)
	char pad_1B51[0x7]; // 0x1b51(0x07)
	struct UTimelineComponent* EnpcSASTimeLine; // 0x1b58(0x08)
	float PsychicThrowActionTime; // 0x1b60(0x04)
	float PsychicCaptureActionTime; // 0x1b64(0x04)
	bool IsIK_Init; // 0x1b68(0x01)
	char pad_1B69[0x3]; // 0x1b69(0x03)
	struct FRotator HandRotator; // 0x1b6c(0x0c)
	struct FVector HandOffset; // 0x1b78(0x0c)
	struct FGameTimer AfterTelepoInvincibleTimer; // 0x1b84(0x0c)
	struct FName AfterTelepoInvincibleClaimantName; // 0x1b90(0x08)
	bool CanAnimOverrideSASColor; // 0x1b98(0x01)
	char pad_1B99[0x3]; // 0x1b99(0x03)
	struct FGameTimer SASSeeThroughTimer; // 0x1b9c(0x0c)
	struct TArray<struct FName> HideSASOutlineClaimantList; // 0x1ba8(0x10)
	struct FMulticastInlineDelegate DispatchPsychicUniqueSuccess; // 0x1bb8(0x10)
	struct FMulticastInlineDelegate DispatchPsychicCaptureCompleted; // 0x1bc8(0x10)
	struct FMulticastInlineDelegate DispatchPsychicCaptureCancel; // 0x1bd8(0x10)
	struct FMulticastInlineDelegate DispatchPsychicComboAttack; // 0x1be8(0x10)
	struct TSet<struct FName> PsychicEffectClaimantList; // 0x1bf8(0x50)
	int32_t UniquePsychicBonusLevel; // 0x1c48(0x04)
	bool bPrecedeInputPsychic; // 0x1c4c(0x01)
	bool bPrecedeInputPsychicUnique; // 0x1c4d(0x01)
	char pad_1C4E[0x2]; // 0x1c4e(0x02)
	struct TArray<struct FF_SASInputData> SASInputData; // 0x1c50(0x10)
	struct AMapGimmickObject* CurrentMapGimmickObject; // 0x1c60(0x08)
	bool bEnableCaptureMapGimmick; // 0x1c68(0x01)
	bool bPayPsychicCost; // 0x1c69(0x01)
	bool bPsychicComboPostProcess; // 0x1c6a(0x01)
	bool bCancelMapGimmick; // 0x1c6b(0x01)
	struct FName ClaimantNameDrive; // 0x1c6c(0x08)
	struct FGameTimer AutoStealthIntervalTimer; // 0x1c74(0x0c)
	struct FGameTimer AutoStealthTimer; // 0x1c80(0x0c)
	struct FGameTimer CoverDamageIntervalTimer; // 0x1c8c(0x0c)
	bool SkillAction_AirJump; // 0x1c98(0x01)
	bool SkillAction_BlowRecovery; // 0x1c99(0x01)
	bool SkillAttack_AirCombo1; // 0x1c9a(0x01)
	bool SkillAttack_AirLongPressAttack; // 0x1c9b(0x01)
	bool SkillAttack_WeaponCombo1; // 0x1c9c(0x01)
	bool SkillAttack_WeaponCombo2; // 0x1c9d(0x01)
	bool SkillAttack_PsychicSlam; // 0x1c9e(0x01)
	char pad_1C9F[0x1]; // 0x1c9f(0x01)
	int32_t SkillAttack_ChargeAttackLV; // 0x1ca0(0x04)
	float Skill_WeaponCrashScale; // 0x1ca4(0x04)
	float Skill_PsychicCrashScale; // 0x1ca8(0x04)
	float Skill_DownDamageUp; // 0x1cac(0x04)
	int32_t SkillAttack_BrainFieldThrowLevel; // 0x1cb0(0x04)
	int32_t SkillAttack_BrainFieldSwingLevel; // 0x1cb4(0x04)
	int32_t SkillAttack_BrainFieldChargeLevel; // 0x1cb8(0x04)
	bool bBeginPsychicDither; // 0x1cbc(0x01)
	char pad_1CBD[0x3]; // 0x1cbd(0x03)
	struct TArray<struct AActor*> PsychicDitherIgnoreList; // 0x1cc0(0x10)
	struct FMulticastInlineDelegate DispatchPsychicUniqueInputStart; // 0x1cd0(0x10)
	float PsychicDitherTimer; // 0x1ce0(0x04)
	float PsychicDitherTimerMax; // 0x1ce4(0x04)
	struct FMulticastInlineDelegate DispatchPsychicUniqueEnd; // 0x1ce8(0x10)
	float PsychicDitherEndTime; // 0x1cf8(0x04)
	char pad_1CFC[0x4]; // 0x1cfc(0x04)
	struct TArray<struct FName> SeeThroughPostProcessClaimantNameList; // 0x1d00(0x10)
	float Param_CancelSASCostRate; // 0x1d10(0x04)
	int32_t SASStackNum; // 0x1d14(0x04)
	struct FMulticastInlineDelegate DispatchPsychicUniqueAimBegin; // 0x1d18(0x10)
	bool bCaptureTypeCombo; // 0x1d28(0x01)
	enum class E_SASKind EnpcSASDirectionKind; // 0x1d29(0x01)
	char pad_1D2A[0x6]; // 0x1d2a(0x06)
	struct FAssassinAttackData Param_AssassinAttack; // 0x1d30(0x40)
	float Skill_AerialAttackPsychicGaugeUp; // 0x1d70(0x04)
	bool Skill_PinchStatusUp; // 0x1d74(0x01)
	char pad_1D75[0x3]; // 0x1d75(0x03)
	float Skill_DriveCrashScale; // 0x1d78(0x04)
	bool SkillAction_NoStockBrainField; // 0x1d7c(0x01)
	bool bIgnoreBrainFieldStock; // 0x1d7d(0x01)
	char pad_1D7E[0x2]; // 0x1d7e(0x02)
	struct URSAtomComponentBase* BrainFieldBackGroundVoiceHandle; // 0x1d80(0x08)
	float Skill_PinchAttackUpRate; // 0x1d88(0x04)
	float Skill_PinchDamageDownRate; // 0x1d8c(0x04)
	bool Skill_BrainFieldOverKill; // 0x1d90(0x01)
	bool Skill_AutoPickUp; // 0x1d91(0x01)
	char pad_1D92[0x2]; // 0x1d92(0x02)
	int32_t SkillAttack_PsychicComboAddLevel; // 0x1d94(0x04)
	int32_t SkillAttack_AerialPsychicComboAddLevel; // 0x1d98(0x04)
	bool IsEnpcUseDuelPole; // 0x1d9c(0x01)
	bool bPsychicInputButtonPressed; // 0x1d9d(0x01)
	enum class E_SASKindNative LastUseSASKind; // 0x1d9e(0x01)
	char pad_1D9F[0x1]; // 0x1d9f(0x01)
	int32_t LastUseSASCount; // 0x1da0(0x04)
	char pad_1DA4[0x4]; // 0x1da4(0x04)
	struct URSAtomComponentBase* PsychicComboCaptureSEHandle; // 0x1da8(0x08)
	float Skill_JustDodgeUpRecoveryValue; // 0x1db0(0x04)
	char pad_1DB4[0x4]; // 0x1db4(0x04)
	struct FSkillSASRecoverData Skill_SasRecover; // 0x1db8(0x18)
	bool IsEnpcSasCamera; // 0x1dd0(0x01)
	bool IsEnpcSasTimeDilation; // 0x1dd1(0x01)
	bool Skill_OverkillBonus; // 0x1dd2(0x01)
	char pad_1DD3[0x1]; // 0x1dd3(0x01)
	int32_t SkillAction_AirDodgeCount; // 0x1dd4(0x04)
	float Skill_BrainFieldDamageCut; // 0x1dd8(0x04)
	float SasRecastRecoveryDelayTime; // 0x1ddc(0x04)
	enum class EPlayerPsychicActionParam LastFlyingPsychicPattern; // 0x1de0(0x01)
	enum class RSAttackInputKind LastBrainFieldChargeAttackInputKind; // 0x1de1(0x01)
	char pad_1DE2[0x2]; // 0x1de2(0x02)
	float EnpcSasTimeDilationTimer; // 0x1de4(0x04)
	int32_t SkillAttack_BackStepAttackCount; // 0x1de8(0x04)
	bool bSasTelepoAttackAirResetOnce; // 0x1dec(0x01)
	bool bTelepoComboSetting; // 0x1ded(0x01)
	bool bTelepoComboSettingAir; // 0x1dee(0x01)

	bool EventManagerStart(bool EnableTick, bool Visibility); // Function RsBattleHero.RsBattleHero_C.EventManagerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndEnpcSasDirectionTimeDilation(); // Function RsBattleHero.RsBattleHero_C.EndEnpcSasDirectionTimeDilation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SASCancelEffectAndSEInterface(bool bEffect, bool bSE, bool bDummy); // Function RsBattleHero.RsBattleHero_C.SASCancelEffectAndSEInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TelepoComboSettingCoordinate(bool bEnableAttack, bool bPrevEnableAttack, bool bEnableAttackAir, bool bPrevEnableAttackAir); // Function RsBattleHero.RsBattleHero_C.TelepoComboSettingCoordinate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetFlyingCombo(); // Function RsBattleHero.RsBattleHero_C.ResetFlyingCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSasSelectSlow(); // Function RsBattleHero.RsBattleHero_C.IsEnableSasSelectSlow // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCancelSASCutin(enum class E_SASKind SasKind); // Function RsBattleHero.RsBattleHero_C.OnCancelSASCutin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHologramOff(); // Function RsBattleHero.RsBattleHero_C.OnHologramOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckCaptureVibrationEnd(); // Function RsBattleHero.RsBattleHero_C.CheckCaptureVibrationEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChargeSASRemainTime(); // Function RsBattleHero.RsBattleHero_C.ChargeSASRemainTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDisableBeginSAS_Telepo(bool bDisable); // Function RsBattleHero.RsBattleHero_C.CheckDisableBeginSAS_Telepo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void PayMapGimmckCost(); // Function RsBattleHero.RsBattleHero_C.PayMapGimmckCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAutoStealth(bool bAuto); // Function RsBattleHero.RsBattleHero_C.IsAutoStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SubCombinationVisionCost(enum class EPlayerID hologramPlayerID, bool bDummy); // Function RsBattleHero.RsBattleHero_C.SubCombinationVisionCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASRecastAndActiveGaugeRate(enum class E_SASButton SASButton, float SASGaugeRate, bool IsActive); // Function RsBattleHero.RsBattleHero_C.GetSASRecastAndActiveGaugeRate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NeedsDispNoDamage(bool bNeedsDipsNoDamage); // Function RsBattleHero.RsBattleHero_C.NeedsDispNoDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CancelActiveSAS(enum class E_SASKindNative SasKind, bool CancelSASCost); // Function RsBattleHero.RsBattleHero_C.CancelActiveSAS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void kpiGameOver(); // Function RsBattleHero.RsBattleHero_C.kpiGameOver // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SasRecastRecoverEffect(float DelayTime); // Function RsBattleHero.RsBattleHero_C.SasRecastRecoverEffect // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SASCancelEffectAndSE(bool bEffect, bool bSE, bool bCancelAll); // Function RsBattleHero.RsBattleHero_C.SASCancelEffectAndSE // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSasGuardElectric(); // Function RsBattleHero.RsBattleHero_C.CheckSasGuardElectric // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySASEffectPassiveAll(bool bLinkAbleOnly, bool bDummy); // Function RsBattleHero.RsBattleHero_C.ApplySASEffectPassiveAll // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetSASEffectFixParam(enum class E_SASKindNative InKind, struct TArray<struct F_SASParamNative> OutFixParam); // Function RsBattleHero.RsBattleHero_C.GetSASEffectFixParam // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsUseAbleSASRecastGauge(enum class E_SASKindNative SasKind); // Function RsBattleHero.RsBattleHero_C.IsUseAbleSASRecastGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySASEffectPassive(enum class E_SASKindNative kind, bool bDummy); // Function RsBattleHero.RsBattleHero_C.ApplySASEffectPassive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySASEffectActive(enum class E_SASKindNative kind, bool bActivate, bool bDummy); // Function RsBattleHero.RsBattleHero_C.ApplySASEffectActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAirDodgeCount(); // Function RsBattleHero.RsBattleHero_C.UpdateAirDodgeCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldOpenStart(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnBrainFieldOpenStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainCrashEventEnd(struct UAnimMontage* Montage); // Function RsBattleHero.RsBattleHero_C.BrainCrashEventEnd // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerSkillJustDodgeUp(); // Function RsBattleHero.RsBattleHero_C.PlayerSkillJustDodgeUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAsyncCopyParameter(bool bCheckCopy, struct FVector Right, struct FVector Left); // Function RsBattleHero.RsBattleHero_C.GetAsyncCopyParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSASCoverDamageFromPlayerID(enum class EPlayerID CoverPlayerID); // Function RsBattleHero.RsBattleHero_C.IsEnableSASCoverDamageFromPlayerID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSASGuardFire(); // Function RsBattleHero.RsBattleHero_C.CheckSASGuardFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopPsychicComboCaptureSE(bool bDummy); // Function RsBattleHero.RsBattleHero_C.StopPsychicComboCaptureSE // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayPsychicComboCaptureSE(bool bDummy); // Function RsBattleHero.RsBattleHero_C.PlayPsychicComboCaptureSE // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SASCount(enum class E_SASKindNative kind); // Function RsBattleHero.RsBattleHero_C.SASCount // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableBackStepAttack(); // Function RsBattleHero.RsBattleHero_C.IsEnableBackStepAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStrongCharacter(struct ARSCharacterBase* CheckCharacter); // Function RsBattleHero.RsBattleHero_C.CheckStrongCharacter // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNpcPsychicCombo(); // Function RsBattleHero.RsBattleHero_C.CheckNpcPsychicCombo // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldDangerDirection(bool bTimeUp); // Function RsBattleHero.RsBattleHero_C.BrainFieldDangerDirection // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldLunaticBrainTalkID(enum class EPlayerBrainFieldDanger DangerLV, bool bFirst, struct FName BrainTalkID); // Function RsBattleHero.RsBattleHero_C.GetBrainFieldLunaticBrainTalkID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainFieldLunaticBrainTalk(enum class EPlayerBrainFieldDanger DangerLV, bool bFirst); // Function RsBattleHero.RsBattleHero_C.PlayBrainFieldLunaticBrainTalk // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBrainFieldLunaticBrainTalk(bool bOK); // Function RsBattleHero.RsBattleHero_C.CheckBrainFieldLunaticBrainTalk // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventBrainCrash(); // Function RsBattleHero.RsBattleHero_C.EventBrainCrash // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEventBrainCrash(bool IsEvent); // Function RsBattleHero.RsBattleHero_C.IsEventBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaChange(bool bChangeLocation, bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnAreaChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAutoTakenItem(bool bAuto); // Function RsBattleHero.RsBattleHero_C.IsAutoTakenItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	float CalcFinalDamageByDefence(float Damage, struct AActor* attackActor); // Function RsBattleHero.RsBattleHero_C.CalcFinalDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAbleInterceptInReactionChance(bool bAbleIntercept); // Function RsBattleHero.RsBattleHero_C.CheckAbleInterceptInReactionChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopBrainFieldBackGroundVoice(); // Function RsBattleHero.RsBattleHero_C.StopBrainFieldBackGroundVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainFieldBackGroundVoice(int32_t Step); // Function RsBattleHero.RsBattleHero_C.PlayBrainFieldBackGroundVoice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDataTable(); // Function RsBattleHero.RsBattleHero_C.InitializeDataTable // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAssassinAttack(enum class EAssassinAttackHit Type, struct ARSBattleCharacter_C* DamagedActor, bool bSuccess, bool bArmorBreak); // Function RsBattleHero.RsBattleHero_C.CheckAssassinAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnpcSASLinkAble(enum class E_SASKind kind, bool bOK); // Function RsBattleHero.RsBattleHero_C.IsEnpcSASLinkAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void FinishEnpcSASDirection(); // Function RsBattleHero.RsBattleHero_C.FinishEnpcSASDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginEnpcSAS(enum class E_SASKind kind, bool bDummy); // Function RsBattleHero.RsBattleHero_C.BeginEnpcSAS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubPsychicFieldCost(); // Function RsBattleHero.RsBattleHero_C.SubPsychicFieldCost // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndPsychicField(); // Function RsBattleHero.RsBattleHero_C.EndPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPsychicField(); // Function RsBattleHero.RsBattleHero_C.BeginPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicFieldCaptureNum(int32_t Num); // Function RsBattleHero.RsBattleHero_C.GetPsychicFieldCaptureNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputPsychicField(bool bPress); // Function RsBattleHero.RsBattleHero_C.InputPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableJustDodgePsychic(bool bOK); // Function RsBattleHero.RsBattleHero_C.IsEnableJustDodgePsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableIntercept(bool bOK); // Function RsBattleHero.RsBattleHero_C.IsEnableIntercept // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPsychicCostZero(bool bUnique, bool bMapGimmick, bool bZero); // Function RsBattleHero.RsBattleHero_C.IsPsychicCostZero // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SASCancelAll(bool bCancelCost); // Function RsBattleHero.RsBattleHero_C.SASCancelAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldState(enum class EPlayerBrainFieldState State, enum class EPlayerBrainFieldState PrevState); // Function RsBattleHero.RsBattleHero_C.OnBrainFieldState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestBrainFieldHelp(bool bDummy); // Function RsBattleHero.RsBattleHero_C.RequestBrainFieldHelp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerBrainFieldEnd(); // Function RsBattleHero.RsBattleHero_C.InputTriggerBrainFieldEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActiveSASNum(int32_t Num); // Function RsBattleHero.RsBattleHero_C.GetActiveSASNum // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputReleaseBrainFieldAttackRight(); // Function RsBattleHero.RsBattleHero_C.InputReleaseBrainFieldAttackRight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerBrainFieldAttackRight(); // Function RsBattleHero.RsBattleHero_C.InputTriggerBrainFieldAttackRight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerBrainFieldAttackUp(); // Function RsBattleHero.RsBattleHero_C.InputTriggerBrainFieldAttackUp // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerBrainFieldAttackLeft(); // Function RsBattleHero.RsBattleHero_C.InputTriggerBrainFieldAttackLeft // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDriveGaugeMax(enum class ENotifyDriveEvent reason, bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnDriveGaugeMax // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableSASInput(bool bEnable); // Function RsBattleHero.RsBattleHero_C.IsEnableSASInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputSASAllOff(); // Function RsBattleHero.RsBattleHero_C.InputSASAllOff // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSeeThroughSetting(bool bEnable, struct FName ClaimantName, bool bDummy); // Function RsBattleHero.RsBattleHero_C.SetSeeThroughSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginDriveSequence(bool bSuccess); // Function RsBattleHero.RsBattleHero_C.BeginDriveSequence // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GatherPsychicDitherIgnoreList(enum class EPsychicDitherType DitherType, float Param0, float Param1, bool bSuccess, struct TArray<struct AActor*> IgnoreActorList); // Function RsBattleHero.RsBattleHero_C.GatherPsychicDitherIgnoreList // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePsychicDither(bool bDummy); // Function RsBattleHero.RsBattleHero_C.UpdatePsychicDither // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPsychicDither(bool bNoInterp, bool bDummy); // Function RsBattleHero.RsBattleHero_C.EndPsychicDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPsychicDither(struct FName ParameterName, bool bDummy); // Function RsBattleHero.RsBattleHero_C.BeginPsychicDither // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnterUpperActionState(enum class EPlayerUpperActionKind NewState, int32_t Param, bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnEnterUpperActionState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnterActionState(enum class EPlayerActionKind NewState, int32_t Param, bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnEnterActionState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoTimerPause(bool bPause, bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoTimerPause // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableInputPsychicCombo(bool bEnable); // Function RsBattleHero.RsBattleHero_C.IsEnableInputPsychicCombo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeEnd(bool bDummy); // Function RsBattleHero.RsBattleHero_C.AreaChangeEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeBegin(bool bDummy); // Function RsBattleHero.RsBattleHero_C.AreaChangeBegin // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSASHologramAttack(enum class ESASHologramAttackTiming Timing); // Function RsBattleHero.RsBattleHero_C.IsEnableSASHologramAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainFieldPsychicAttackLevel(enum class EPsychicObjectBrainFieldAttackType Type, int32_t Level); // Function RsBattleHero.RsBattleHero_C.GetBrainFieldPsychicAttackLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetActionStateObstructPsychic(bool bDummy); // Function RsBattleHero.RsBattleHero_C.SetActionStateObstructPsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySkillOther(); // Function RsBattleHero.RsBattleHero_C.ApplySkillOther // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldCloseStart(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnBrainFieldCloseStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldOpenEnd(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnBrainFieldOpenEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldMoveNormalField(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnBrainFieldMoveNormalField // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainFieldMoveBrainField(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnBrainFieldMoveBrainField // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySkillAttack(); // Function RsBattleHero.RsBattleHero_C.ApplySkillAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ApplySkillAction(); // Function RsBattleHero.RsBattleHero_C.ApplySkillAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoApplySkill(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoApplySkill // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventEnd(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoDynamicEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventStart(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoDynamicEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventEnd(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoStaticEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventStart(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoStaticEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventStart(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DoEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetWeakNumber(); // Function RsBattleHero.RsBattleHero_C.GetWeakNumber // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsActiveSAS_ForButton(enum class E_SASButton SASButton, bool IsSAS); // Function RsBattleHero.RsBattleHero_C.IsActiveSAS_ForButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsActiveSAS_ForKind(enum class E_SASKind SAS_Kind, bool IsActive); // Function RsBattleHero.RsBattleHero_C.IsActiveSAS_ForKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSASActiveSeconds(enum class E_SASButton SASButton, float RemainingSec); // Function RsBattleHero.RsBattleHero_C.GetSASActiveSeconds // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerSASHologramAttack(); // Function RsBattleHero.RsBattleHero_C.InputTriggerSASHologramAttack // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetObjectAnimationName(struct FText AnimationName); // Function RsBattleHero.RsBattleHero_C.DebugGetObjectAnimationName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateAutoStealth(); // Function RsBattleHero.RsBattleHero_C.UpdateAutoStealth // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAutoStealth(bool bSuccess); // Function RsBattleHero.RsBattleHero_C.CheckAutoStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SubHardenTime(float SubTime, bool bDummy); // Function RsBattleHero.RsBattleHero_C.SubHardenTime // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageBefore(bool bDummy); // Function RsBattleHero.RsBattleHero_C.DamageBefore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAIPsychicObject(bool bCapture, bool bAttack, bool bOK); // Function RsBattleHero.RsBattleHero_C.CheckAIPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchAIPsychicObject(bool bFiound); // Function RsBattleHero.RsBattleHero_C.SearchAIPsychicObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetUseItemSpeed(enum class EPlayerUseItemSpeed Speed); // Function RsBattleHero.RsBattleHero_C.GetUseItemSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckCoverDamageAblePlayer(enum class EPlayerID InPlayerID, bool bOK); // Function RsBattleHero.RsBattleHero_C.CheckCoverDamageAblePlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckActivateDamageCover(float DamageValue, bool bActivate, bool bLethalDamage, bool bLargeDamage); // Function RsBattleHero.RsBattleHero_C.CheckActivateDamageCover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckFriendCoverDamage(float DamageValue); // Function RsBattleHero.RsBattleHero_C.CheckFriendCoverDamage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearPrecedeInput(bool bDummy); // Function RsBattleHero.RsBattleHero_C.ClearPrecedeInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputSAS(enum class E_SASButton sas_button); // Function RsBattleHero.RsBattleHero_C.InputSAS // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeSASSet(); // Function RsBattleHero.RsBattleHero_C.ChangeSASSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCancelMapGimmick(bool bCancel); // Function RsBattleHero.RsBattleHero_C.IsCancelMapGimmick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetMapGimmickObject(struct AMapGimmickObject* MapGimmickObject); // Function RsBattleHero.RsBattleHero_C.GetMapGimmickObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckCaptureAnimPattern(struct FVector ObjectLocation, int32_t RandomFront, enum class EPlayerCaptureAnimPattern Pattern); // Function RsBattleHero.RsBattleHero_C.CheckCaptureAnimPattern // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndDrive(bool bInterruption, bool bLocationChange, bool dummy); // Function RsBattleHero.RsBattleHero_C.OnEndDrive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginDrive(bool dummy); // Function RsBattleHero.RsBattleHero_C.OnBeginDrive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerBrainField(); // Function RsBattleHero.RsBattleHero_C.InputTriggerBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAttackMotionPlayRate(float PlayRate); // Function RsBattleHero.RsBattleHero_C.GetAttackMotionPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPayPsychicCost(); // Function RsBattleHero.RsBattleHero_C.ResetPayPsychicCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMapGimmickLookAtLocation(struct FVector Location); // Function RsBattleHero.RsBattleHero_C.GetMapGimmickLookAtLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CaptureMapGimmick(); // Function RsBattleHero.RsBattleHero_C.CaptureMapGimmick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelMapGimmick(); // Function RsBattleHero.RsBattleHero_C.CancelMapGimmick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputMapGimmick(bool bPress); // Function RsBattleHero.RsBattleHero_C.InputMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndOverlapMapGimmick(struct AMapGimmickObject* gimmick); // Function RsBattleHero.RsBattleHero_C.OnEndOverlapMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginOverlapMapGimmick(struct AMapGimmickObject* gimmick, struct FVector lookAtPos); // Function RsBattleHero.RsBattleHero_C.OnBeginOverlapMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchSASButtonFromKind(enum class E_SASKind SasKind, bool bSearchLatest, enum class E_SASButton SASButton); // Function RsBattleHero.RsBattleHero_C.SearchSASButtonFromKind // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CalcPsychicCost(bool bUnique, bool bMapGimmick, bool bPsychicCombo, float Cost); // Function RsBattleHero.RsBattleHero_C.CalcPsychicCost // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetUniquePsychicAttackLevel(int32_t UniquePsychicBonusLevel); // Function RsBattleHero.RsBattleHero_C.SetUniquePsychicAttackLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicEmission(bool bON, struct FName ClaimantName); // Function RsBattleHero.RsBattleHero_C.SetPsychicEmission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputReleasePsychic(bool bUnique); // Function RsBattleHero.RsBattleHero_C.InputReleasePsychic // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputTriggerPsychic(bool bUnique); // Function RsBattleHero.RsBattleHero_C.InputTriggerPsychic // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCaptureAction(); // Function RsBattleHero.RsBattleHero_C.SetCaptureAction // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicObjectCancel(); // Function RsBattleHero.RsBattleHero_C.PsychicObjectCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicObjectCombo(int32_t Level, int32_t Index, float AttractTime, bool AirCombo, bool EnemyDirectShot); // Function RsBattleHero.RsBattleHero_C.PsychicObjectCombo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PsychicObjectThrow(bool bSlam); // Function RsBattleHero.RsBattleHero_C.PsychicObjectThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isEnableActionRecovery(bool Enable); // Function RsBattleHero.RsBattleHero_C.isEnableActionRecovery // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CloseBrainFieldSetting(enum class EBrainFieldEndType EndType, bool bDummy); // Function RsBattleHero.RsBattleHero_C.CloseBrainFieldSetting // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenBrainFieldSetting(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OpenBrainFieldSetting // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHardenRestriction(enum class EPlayerActionKind action kind in, bool dummy); // Function RsBattleHero.RsBattleHero_C.CheckHardenRestriction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonEnd(enum class E_SASKind SAS_Kind, bool bCancelSASCost, bool bDummy, float RemainTime); // Function RsBattleHero.RsBattleHero_C.SAS_CommonEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SAS_CommonStart(struct FFSASCommand SAS_Command, bool dummy); // Function RsBattleHero.RsBattleHero_C.SAS_CommonStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsIgnoreVisionFog(); // Function RsBattleHero.RsBattleHero_C.IsIgnoreVisionFog // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnDestroy(bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnDestroy // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeSAS(bool bDummy); // Function RsBattleHero.RsBattleHero_C.InitializeSAS // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyPlayerOn(float AppearTime, bool bDummy); // Function RsBattleHero.RsBattleHero_C.CopyPlayerOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHideSASOutline(bool bHide, struct FName ClaimantName, bool bDummy); // Function RsBattleHero.RsBattleHero_C.SetHideSASOutline // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSasStealth(bool stealth on in, bool hero order in, bool check delay, bool check ignore, bool no sas cancel in, bool from_event_in, bool dummy); // Function RsBattleHero.RsBattleHero_C.SetSasStealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreTick(float DeltaSeconds, bool dummy); // Function RsBattleHero.RsBattleHero_C.PreTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCanAnimOverrideSASColor(bool Enabled); // Function RsBattleHero.RsBattleHero_C.GetCanAnimOverrideSASColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCanAnimOverrideSASColor(bool Enable, bool dummy); // Function RsBattleHero.RsBattleHero_C.SetCanAnimOverrideSASColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OverwriteAttackCollisionInfo(struct FHCCollisionCommonInfo refCommonInfo, struct FHCSkillCommonInfo refSkill); // Function RsBattleHero.RsBattleHero_C.OverwriteAttackCollisionInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByAttack(float Damage, struct AActor* defenseActor, struct FHCSkillCommonInfo skillInfo); // Function RsBattleHero.RsBattleHero_C.CalcFinalDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPsychicObjectEnableRange(bool is Brain Field in, float Range); // Function RsBattleHero.RsBattleHero_C.SetPsychicObjectEnableRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDamageByAttack(float refPhysicsDamage, float refObjDamage, float refFlameDamage, float refElectricDamage, float refCriticalDamageRate, struct AActor* defenseActor); // Function RsBattleHero.RsBattleHero_C.CalcDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASParamDataCurrentLevel(enum class E_SASKind kind, struct FF_SASParam Param); // Function RsBattleHero.RsBattleHero_C.GetSASParamDataCurrentLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableSASEffect(enum class E_SASKind kind, enum class ESASEffect Effect, bool bEnable, float Param0, float Param1, float Param2, float Param3); // Function RsBattleHero.RsBattleHero_C.IsEnableSASEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetSASParamForKind(enum class E_SASKind SasKind, int32_t SASParam, float Param); // Function RsBattleHero.RsBattleHero_C.GetSASParamForKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSASKindforButton(enum class E_SASButton SASButton, enum class E_SASKindNative SasKind); // Function RsBattleHero.RsBattleHero_C.GetSASKindforButton // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetSAS_MaxActiveSeconds(enum class E_SASKindNative SasKind, float ActivationSeconds); // Function RsBattleHero.RsBattleHero_C.GetSAS_MaxActiveSeconds // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnChangeBattleReady(bool bBattle, bool bDummy); // Function RsBattleHero.RsBattleHero_C.OnChangeBattleReady // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsChangeAbleBrainField(bool bOK); // Function RsBattleHero.RsBattleHero_C.IsChangeAbleBrainField // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void StartSAS_UI(enum class E_SASButton SASButton); // Function RsBattleHero.RsBattleHero_C.StartSAS_UI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCanSAS_Use(enum class E_SASButton SASButton, bool IsSASUse); // Function RsBattleHero.RsBattleHero_C.IsCanSAS_Use // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBrainFieldTimeRate(float Rate); // Function RsBattleHero.RsBattleHero_C.GetBrainFieldTimeRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableBrainField(bool bEnable); // Function RsBattleHero.RsBattleHero_C.IsEnableBrainField // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCableBrainFieldMode(bool bEnable); // Function RsBattleHero.RsBattleHero_C.SetCableBrainFieldMode // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBrainField(float DeltaSeconds); // Function RsBattleHero.RsBattleHero_C.UpdateBrainField // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function RsBattleHero.RsBattleHero_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostTick(float DeltaSeconds, bool dummy); // Function RsBattleHero.RsBattleHero_C.PostTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult, bool dummy); // Function RsBattleHero.RsBattleHero_C.OnAttackActorHit // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSAS(enum class E_SASButton sas_button); // Function RsBattleHero.RsBattleHero_C.StartSAS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanBrainCrash(bool CanBrainCrash); // Function RsBattleHero.RsBattleHero_C.CanBrainCrash // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InputBrainCrash(); // Function RsBattleHero.RsBattleHero_C.InputBrainCrash // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckInputPsychic(bool dummy); // Function RsBattleHero.RsBattleHero_C.CheckInputPsychic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function RsBattleHero.RsBattleHero_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__FinishedFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__UpdateFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__RegistSAS__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__RegistSAS__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__EndTimeDilation__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__EndTimeDilation__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__StartTimeDilation__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__StartTimeDilation__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__EndCameraAttention__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__EndCameraAttention__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__StartCameraAttention__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__StartCameraAttention__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__Effect__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__Effect__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__Reaction__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__Reaction__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void EnpcSASTimeLine__Cable__EventFunc(); // Function RsBattleHero.RsBattleHero_C.EnpcSASTimeLine__Cable__EventFunc // (BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FirstSasFire(); // Function RsBattleHero.RsBattleHero_C.BrainTalk_FirstSasFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FirstSasElectric(); // Function RsBattleHero.RsBattleHero_C.BrainTalk_FirstSasElectric // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FnishUniqueObject(); // Function RsBattleHero.RsBattleHero_C.BrainTalk_FnishUniqueObject // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalk_FindTarget(struct TArray<enum class EFindTargetBrainTalkType> Type); // Function RsBattleHero.RsBattleHero_C.BrainTalk_FindTarget // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerBrainTalkHitCountDelegate__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerBrainTalkHitCountDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BeginEnpcSASDirection(); // Function RsBattleHero.RsBattleHero_C.BeginEnpcSASDirection // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SuspendEnpcSASDirection(); // Function RsBattleHero.RsBattleHero_C.SuspendEnpcSASDirection // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindEnpcSasTimeDilationTick(); // Function RsBattleHero.RsBattleHero_C.BindEnpcSasTimeDilationTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindEnpcSasTimeDilationTick(); // Function RsBattleHero.RsBattleHero_C.UnbindEnpcSasTimeDilationTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnpcSasTimeDilationTick(float DeltaSeconds); // Function RsBattleHero.RsBattleHero_C.OnEnpcSasTimeDilationTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerBrainFieldUpdateDelegate__DelegateSignature(float DeltaSeconds); // Function RsBattleHero.RsBattleHero_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerBrainFieldUpdateDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_1_PlayerBrainFieldStateDelegate__DelegateSignature(enum class EPlayerBrainFieldState State, enum class EPlayerBrainFieldState PrevState); // Function RsBattleHero.RsBattleHero_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_1_PlayerBrainFieldStateDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_2_PlayerBrainFieldIntarvalEndDelegate__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_2_PlayerBrainFieldIntarvalEndDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_RequestLunaticBrainTalkDelegate__DelegateSignature(enum class EPlayerBrainFieldDanger DangerLV, bool bFirstBrainField); // Function RsBattleHero.RsBattleHero_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_RequestLunaticBrainTalkDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerBrainFieldPsychicGaugeDelegate__DelegateSignature(bool bChangeDirection); // Function RsBattleHero.RsBattleHero_C.BndEvt__PlayerScript_K2Node_ComponentBoundEvent_0_PlayerBrainFieldPsychicGaugeDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainCrash(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerBrainCrash // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerLeftSAS(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerLeftSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerRightSAS(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerRightSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerUpSAS(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerUpSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerDownSAS(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerDownSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainField(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerBrainField // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerPsychic(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerPsychic // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleasePsychic(); // Function RsBattleHero.RsBattleHero_C.OnInputReleasePsychic // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerIntercept(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerIntercept // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerPsychicSpecial(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerPsychicSpecial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleasePsychicSpecial(); // Function RsBattleHero.RsBattleHero_C.OnInputReleasePsychicSpecial // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerMapGimmick(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseMapGimmick(); // Function RsBattleHero.RsBattleHero_C.OnInputReleaseMapGimmick // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerChangeSASSet(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerChangeSASSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainFieldPsychicUp(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerBrainFieldPsychicUp // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainFieldPsychicLeft(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerBrainFieldPsychicLeft // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerBrainFieldPsychicRight(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerBrainFieldPsychicRight // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseBrainFieldPsychicRight(); // Function RsBattleHero.RsBattleHero_C.OnInputReleaseBrainFieldPsychicRight // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerRessurect(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerRessurect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerSASHologramAttack(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerSASHologramAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleaseSASHologramAttack(); // Function RsBattleHero.RsBattleHero_C.OnInputReleaseSASHologramAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerSASAllOff(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerSASAllOff // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputTriggerPsychicField(); // Function RsBattleHero.RsBattleHero_C.OnInputTriggerPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputReleasePsychicField(); // Function RsBattleHero.RsBattleHero_C.OnInputReleasePsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_CaptureSuccess__DelegateSignature(struct UAnimMontage* unique montage); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_CaptureSuccess__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_UniqueAttackSuccess__DelegateSignature(struct UAnimMontage* unique montage); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_UniqueAttackSuccess__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_ComboAttackStart__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_ComboAttackStart__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__AttackInput_K2Node_ComponentBoundEvent_0_ChangePsychicComboLevelDelegate__DelegateSignature(int32_t PsychicComboLevel); // Function RsBattleHero.RsBattleHero_C.BndEvt__AttackInput_K2Node_ComponentBoundEvent_0_ChangePsychicComboLevelDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__AttackInput_K2Node_ComponentBoundEvent_2_ChangePsychicComboLevelDelegate__DelegateSignature(int32_t PsychicComboLevel); // Function RsBattleHero.RsBattleHero_C.BndEvt__AttackInput_K2Node_ComponentBoundEvent_2_ChangePsychicComboLevelDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_5_UniqueInputStart__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_5_UniqueInputStart__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_5_UniqueObjectEnd__DelegateSignature(bool input success in); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_5_UniqueObjectEnd__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void SetPsychicEmissionInterface(bool bON, struct FName ClaimantName); // Function RsBattleHero.RsBattleHero_C.SetPsychicEmissionInterface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_2_UniqueObjectAddGauge__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_2_UniqueObjectAddGauge__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_UniqueObjectControlStart__DelegateSignature(struct ABP_PsychicObjectBasic_C* psy obj in); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_PlayerPsychicObjectComponent_K2Node_ComponentBoundEvent_0_UniqueObjectControlStart__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BindCaptureVibration(); // Function RsBattleHero.RsBattleHero_C.BindCaptureVibration // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindCaptureVibration(); // Function RsBattleHero.RsBattleHero_C.UnbindCaptureVibration // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickCaptureVibration(float DeltaSeconds); // Function RsBattleHero.RsBattleHero_C.TickCaptureVibration // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveMontageEnded(struct UAnimMontage* Montage, bool Interrupted); // Function RsBattleHero.RsBattleHero_C.ReceiveMontageEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveMontageBlendingOut(struct UAnimMontage* Montage, bool Interrupted); // Function RsBattleHero.RsBattleHero_C.ReceiveMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAnimNotifyInputPsychic(); // Function RsBattleHero.RsBattleHero_C.OnAnimNotifyInputPsychic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitializeDebug(); // Function RsBattleHero.RsBattleHero_C.OnInitializeDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorStart(struct FAcceleratorParam Parameter, struct AActor* Owner, bool bHologram); // Function RsBattleHero.RsBattleHero_C.OnAcceleratorStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAcceleratorEnd(struct FAcceleratorParam Parameter, struct AActor* Owner, float RemainTime, bool bHologram); // Function RsBattleHero.RsBattleHero_C.OnAcceleratorEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricStart(struct FFSASElectricParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnElectricStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnElectricEnd(struct FFSASElectricParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnElectricEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireStart(struct FFSASFireParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnFireStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFireEnd(struct FFSASFireParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnFireEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoStart(struct FFSASTelepoParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnTelepoStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnTelepoEnd(struct FFSASTelepoParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnTelepoEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalStart(struct FFSASMetalParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnMetalStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMetalEnd(struct FFSASMetalParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnMetalEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughStart(struct FFSASSeeThroughParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnSeeThroughStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSeeThroughEnd(struct FFSASSeeThroughParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnSeeThroughEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthStart(struct FFSASStealthParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnStealthStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStealthEnd(struct FFSASStealthParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnStealthEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyStart(struct FFSASCopyParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnCopyStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCopyEnd(struct FFSASCopyParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnCopyEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicStart(struct FFSASPsychicParam Param, struct AActor* Owner); // Function RsBattleHero.RsBattleHero_C.OnPsychicStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPsychicEnd(struct FFSASPsychicParam Param, struct AActor* Owner, float RemainTime); // Function RsBattleHero.RsBattleHero_C.OnPsychicEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEquipSAS(enum class E_SASButton Button, enum class E_SASKindNative kind); // Function RsBattleHero.RsBattleHero_C.OnEquipSAS // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindDelaySasRecoveryEffect(); // Function RsBattleHero.RsBattleHero_C.BindDelaySasRecoveryEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindDelaySasRecoveryEffect(); // Function RsBattleHero.RsBattleHero_C.UnbindDelaySasRecoveryEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickDelaySasRecoveryEffect(float DeltaSeconds); // Function RsBattleHero.RsBattleHero_C.TickDelaySasRecoveryEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupPhychicCaptureMaterial(bool IsStart); // Function RsBattleHero.RsBattleHero_C.SetupPhychicCaptureMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdateHUD(); // Function RsBattleHero.RsBattleHero_C.OnUpdateHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialize(); // Function RsBattleHero.RsBattleHero_C.OnInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlayerAssetLoad(); // Function RsBattleHero.RsBattleHero_C.OnPlayerAssetLoad // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOn(enum class EHCBadState bad); // Function RsBattleHero.RsBattleHero_C.BadStateEffectOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageAfter(struct TArray<struct FHCHitResult> Result); // Function RsBattleHero.RsBattleHero_C.DamageAfter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDeadPlayerCore(); // Function RsBattleHero.RsBattleHero_C.OnDeadPlayerCore // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdateDriveHUD(); // Function RsBattleHero.RsBattleHero_C.OnUpdateDriveHUD // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCoverDamagePlayer(); // Function RsBattleHero.RsBattleHero_C.ResetCoverDamagePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageingForPlayer(struct FHCHitResult HitResult, float DamageValue); // Function RsBattleHero.RsBattleHero_C.OnDamageingForPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BP_TargetSearchComponent_K2Node_ComponentBoundEvent_0_ChangeTargetDelegate__DelegateSignature(struct ARSCharacterBase* Target, bool bLockOn, bool bLostTarget); // Function RsBattleHero.RsBattleHero_C.BndEvt__BP_TargetSearchComponent_K2Node_ComponentBoundEvent_0_ChangeTargetDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RsBattleHero.RsBattleHero_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BindHologramOff(); // Function RsBattleHero.RsBattleHero_C.BindHologramOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindHologramOff(); // Function RsBattleHero.RsBattleHero_C.UnbindHologramOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RsBattleHero(int32_t EntryPoint); // Function RsBattleHero.RsBattleHero_C.ExecuteUbergraph_RsBattleHero // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void DispatchPsychicUniqueAimBegin__DelegateSignature(struct ABP_PsychicObjectBasic_C* PsychicObject); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicUniqueAimBegin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicUniqueEnd__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicUniqueEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicUniqueInputStart__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicUniqueInputStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicComboAttack__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicComboAttack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicCaptureCancel__DelegateSignature(); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicCaptureCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicCaptureCompleted__DelegateSignature(struct UAnimMontage* FirstAttackMontage); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicCaptureCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicUniqueSuccess__DelegateSignature(struct UAnimMontage* Montage); // Function RsBattleHero.RsBattleHero_C.DispatchPsychicUniqueSuccess__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

