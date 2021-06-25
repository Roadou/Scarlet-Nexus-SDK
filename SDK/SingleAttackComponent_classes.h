// BlueprintGeneratedClass SingleAttackComponent.SingleAttackComponent_C
// Size: 0x1e8 (Inherited: 0x198)
struct USingleAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	bool bInputAttack; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct UAnimMontage* Montage; // 0x1a8(0x08)
	bool bFlyingAttack; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	struct FName ClaimantName; // 0x1b4(0x08)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct UAnimMontage* WeaponMontage; // 0x1c0(0x08)
	bool bReleaseButtonMode; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UAnimMontage* ShortMontage; // 0x1d0(0x08)
	struct UAnimMontage* ShortWeaponMontage; // 0x1d8(0x08)
	struct UAnimMontage* UseMontage; // 0x1e0(0x08)

	void GetWeaponAnimStopType(enum class EWeaponAttackAnimStopType Type); // Function SingleAttackComponent.SingleAttackComponent_C.GetWeaponAnimStopType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsEndCondition(struct UAnimMontage* Montage, bool bEnd); // Function SingleAttackComponent.SingleAttackComponent_C.IsEndCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function SingleAttackComponent.SingleAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function SingleAttackComponent.SingleAttackComponent_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function SingleAttackComponent.SingleAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function SingleAttackComponent.SingleAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function SingleAttackComponent.SingleAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function SingleAttackComponent.SingleAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearInputForSingleAttack(bool dummy); // Function SingleAttackComponent.SingleAttackComponent_C.ClearInputForSingleAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStartSingleAttack(bool IsStart); // Function SingleAttackComponent.SingleAttackComponent_C.IsStartSingleAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void InputButton(bool IsPressed, bool dummy); // Function SingleAttackComponent.SingleAttackComponent_C.InputButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function SingleAttackComponent.SingleAttackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_SingleAttackComponent(int32_t EntryPoint); // Function SingleAttackComponent.SingleAttackComponent_C.ExecuteUbergraph_SingleAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

