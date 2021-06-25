// BlueprintGeneratedClass ChargeAttackComponent.ChargeAttackComponent_C
// Size: 0x2da (Inherited: 0x198)
struct UChargeAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	bool bInputAttack; // 0x1a0(0x01)
	bool bPressedAttack; // 0x1a1(0x01)
	bool bCharging; // 0x1a2(0x01)
	bool bLoopStart; // 0x1a3(0x01)
	float MaxChargeTime; // 0x1a4(0x04)
	float MaxChargeTimeNpc; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct USoundAtomCue* ChargeLoopSE; // 0x1b0(0x08)
	struct UAnimMontage* ChargeStartMontage; // 0x1b8(0x08)
	struct UAnimMontage* ChargeStartFallMontage; // 0x1c0(0x08)
	struct UAnimMontage* ChargeStartLandingMontage; // 0x1c8(0x08)
	struct UAnimMontage* ChargeLoopMontage; // 0x1d0(0x08)
	struct UAnimMontage* OwnMontage; // 0x1d8(0x08)
	int32_t ChargeEffectIndex; // 0x1e0(0x04)
	bool bChangingOwnMontage; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct URSAtomComponentBase* ChargeAudioComp; // 0x1e8(0x08)
	struct FGameTimer ChargeTimer; // 0x1f0(0x0c)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct UAnimMontage* ChargeWeaponMontage; // 0x200(0x08)
	struct UAnimMontage* ChargeWeaponLoopMontage; // 0x208(0x08)
	struct UAnimMontage* ShortStartMontage; // 0x210(0x08)
	struct UAnimMontage* ShortStartWeaponMontage; // 0x218(0x08)
	struct FName ChargeLoopEffectAttachPointName; // 0x220(0x08)
	struct TArray<struct FChargeAttackData> AttackDatas; // 0x228(0x10)
	bool BranchAbleAssassinAttack; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct FChargeAttackData ExecAttackData; // 0x240(0x70)
	bool bFlyingAttack; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FName ClaimantName; // 0x2b4(0x08)
	bool bCheckTelepo; // 0x2bc(0x01)
	enum class EChargeTelepoStep TelepoStep; // 0x2bd(0x01)
	bool bForceAttack; // 0x2be(0x01)
	char pad_2BF[0x1]; // 0x2bf(0x01)
	float RushStopDistance; // 0x2c0(0x04)
	enum class ECharacterHitPriority StorePriority; // 0x2c4(0x01)
	bool bStorePriority; // 0x2c5(0x01)
	char pad_2C6[0x2]; // 0x2c6(0x02)
	struct FName ClaimantNameTelepo; // 0x2c8(0x08)
	struct AActor* TelepoTargetActor; // 0x2d0(0x08)
	bool bPlayControllerVibration; // 0x2d8(0x01)
	bool bDisableFootIKChargeLoop; // 0x2d9(0x01)

	void ResetFootIKCustomParam(); // Function ChargeAttackComponent.ChargeAttackComponent_C.ResetFootIKCustomParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopChargeControllerVibration(); // Function ChargeAttackComponent.ChargeAttackComponent_C.StopChargeControllerVibration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayChargeControllerVibration(enum class HCHitControllerVibrationType Type); // Function ChargeAttackComponent.ChargeAttackComponent_C.PlayChargeControllerVibration // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRushEndMotion(); // Function ChargeAttackComponent.ChargeAttackComponent_C.SetRushEndMotion // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharging(bool Result); // Function ChargeAttackComponent.ChargeAttackComponent_C.GetCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function ChargeAttackComponent.ChargeAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TelepoTick(float DeltaSeconds); // Function ChargeAttackComponent.ChargeAttackComponent_C.TelepoTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckLanding(float DeltaSeconds); // Function ChargeAttackComponent.ChargeAttackComponent_C.CheckLanding // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAttack(int32_t AttackIndex); // Function ChargeAttackComponent.ChargeAttackComponent_C.StartAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckRushStop(float DeltaSeconds); // Function ChargeAttackComponent.ChargeAttackComponent_C.CheckRushStop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BranchAssassinAttack(bool bBranch); // Function ChargeAttackComponent.ChargeAttackComponent_C.BranchAssassinAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnChangeChargeLevel(int32_t ChargeLevel, bool bDummy); // Function ChargeAttackComponent.ChargeAttackComponent_C.OnChangeChargeLevel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function ChargeAttackComponent.ChargeAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void StopChargeEffectAll(); // Function ChargeAttackComponent.ChargeAttackComponent_C.StopChargeEffectAll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopChargeEffect(enum class EAttackEffectStopType Timing); // Function ChargeAttackComponent.ChargeAttackComponent_C.StopChargeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChargeEffect(struct TArray<struct FFAttackEffectData> Data); // Function ChargeAttackComponent.ChargeAttackComponent_C.StartChargeEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function ChargeAttackComponent.ChargeAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function ChargeAttackComponent.ChargeAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function ChargeAttackComponent.ChargeAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function ChargeAttackComponent.ChargeAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndChargeSE(); // Function ChargeAttackComponent.ChargeAttackComponent_C.EndChargeSE // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChargeSE(); // Function ChargeAttackComponent.ChargeAttackComponent_C.StartChargeSE // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartChargeLoop(); // Function ChargeAttackComponent.ChargeAttackComponent_C.StartChargeLoop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateChargeEffect(); // Function ChargeAttackComponent.ChargeAttackComponent_C.UpdateChargeEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnChargeEffect(int32_t ChargeEffectIndex); // Function ChargeAttackComponent.ChargeAttackComponent_C.SpawnChargeEffect // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCharge(); // Function ChargeAttackComponent.ChargeAttackComponent_C.StartCharge // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearInputForChargeAttack(); // Function ChargeAttackComponent.ChargeAttackComponent_C.ClearInputForChargeAttack // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStartCharge(bool IsStart); // Function ChargeAttackComponent.ChargeAttackComponent_C.IsStartCharge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CancelCharge(); // Function ChargeAttackComponent.ChargeAttackComponent_C.CancelCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputButton(bool IsPressed, bool dummy); // Function ChargeAttackComponent.ChargeAttackComponent_C.InputButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindRushTick(); // Function ChargeAttackComponent.ChargeAttackComponent_C.BindRushTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindRushTick(); // Function ChargeAttackComponent.ChargeAttackComponent_C.UnbindRushTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindFallTick(); // Function ChargeAttackComponent.ChargeAttackComponent_C.BindFallTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindFallTick(); // Function ChargeAttackComponent.ChargeAttackComponent_C.UnbindFallTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindTelepo(); // Function ChargeAttackComponent.ChargeAttackComponent_C.BindTelepo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindTelepo(); // Function ChargeAttackComponent.ChargeAttackComponent_C.UnbindTelepo // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ChargeAttackComponent(int32_t EntryPoint); // Function ChargeAttackComponent.ChargeAttackComponent_C.ExecuteUbergraph_ChargeAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

