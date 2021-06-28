// BlueprintGeneratedClass BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C
// Size: 0x1f0 (Inherited: 0x198)
struct UBP_WarpAttackComponentBase_C : UAttackComponentBaseBP_C {
	struct TArray<float> CalcAngleArray; // 0x198(0x10)
	bool bInputAttack; // 0x1a8(0x01)
	char pad_1A9[0x7]; // 0x1a9(0x07)
	struct UAnimMontage* StartMontage; // 0x1b0(0x08)
	struct UAnimMontage* OwnMontage; // 0x1b8(0x08)
	bool bChangingOwnMontage; // 0x1c0(0x01)
	bool bFlyingAttack; // 0x1c1(0x01)
	char pad_1C2[0x2]; // 0x1c2(0x02)
	struct FName ClaimantName; // 0x1c4(0x08)
	char pad_1CC[0x4]; // 0x1cc(0x04)
	struct TArray<float> CalcAngleArrayEnemy; // 0x1d0(0x10)
	struct TArray<float> CalcAngleArrayAttackToEm83xx; // 0x1e0(0x10)

	void SetPlayAnime(struct UAnimMontage* Montage); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.SetPlayAnime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetOwnMontage(struct UAnimMontage* OwnMontage); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.GetOwnMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Is Changing Own Montage(bool bResult); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.Is Changing Own Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void Set Attack Montage(struct UAnimMontage* AttackMontage, struct AActor* TargetActor); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.Set Attack Montage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputButton(bool bPressed); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.InputButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecWarp(struct AActor* TargetActor, bool bSuccess); // Function BP_WarpAttackComponentBase.BP_WarpAttackComponentBase_C.ExecWarp // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

