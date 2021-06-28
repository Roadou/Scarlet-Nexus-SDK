// BlueprintGeneratedClass BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C
// Size: 0x1d9 (Inherited: 0x198)
struct UBP_PsychicFieldAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	struct UAnimMontage* AM_Start; // 0x1a0(0x08)
	struct UAnimMontage* AM_Loop; // 0x1a8(0x08)
	struct UAnimMontage* AM_End; // 0x1b0(0x08)
	struct UAnimMontage* AM_Cancel; // 0x1b8(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0x1c0(0x08)
	bool bPressedButton; // 0x1c8(0x01)
	bool bInputButton; // 0x1c9(0x01)
	char pad_1CA[0x6]; // 0x1ca(0x06)
	struct UAnimMontage* CurrentMontage; // 0x1d0(0x08)
	bool bChangingOwnMontage; // 0x1d8(0x01)

	void CancelPsychicField(); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.CancelPsychicField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackPsychicField(); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.AttackPsychicField // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CaptureTick(float DeltaSeconds); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.CaptureTick // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayMontage(struct UAnimMontage* Montage); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.PlayMontage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAcceptInputAttack(bool bEnable); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.IsEnableAcceptInputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ClearInput(); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BindCaptureTick(); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.BindCaptureTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindCaptureTick(); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.UnbindCaptureTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicFieldAttackComponent(int32_t EntryPoint); // Function BP_PsychicFieldAttackComponent.BP_PsychicFieldAttackComponent_C.ExecuteUbergraph_BP_PsychicFieldAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

