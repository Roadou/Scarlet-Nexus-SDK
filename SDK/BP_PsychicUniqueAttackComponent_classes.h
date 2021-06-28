// BlueprintGeneratedClass BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C
// Size: 0x25d (Inherited: 0x1a8)
struct UBP_PsychicUniqueAttackComponent_C : UBP_PsychicAttackBaseComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)
	bool bInputButton; // 0x1b0(0x01)
	bool bChangingOwnMontage; // 0x1b1(0x01)
	bool bCaptureing; // 0x1b2(0x01)
	char pad_1B3[0x5]; // 0x1b3(0x05)
	struct UAnimMontage* CurrentMontage; // 0x1b8(0x08)
	struct UAnimMontage* CaptureStartMontage; // 0x1c0(0x08)
	struct UAnimMontage* CaptureCompletedMontage; // 0x1c8(0x08)
	struct UAnimMontage* AttackMontage; // 0x1d0(0x08)
	struct UAnimMontage* CancelMontage; // 0x1d8(0x08)
	struct UAnimMontage* CaptureSideL; // 0x1e0(0x08)
	struct UAnimMontage* CaptureBackL; // 0x1e8(0x08)
	struct UAnimMontage* CaptureSideR; // 0x1f0(0x08)
	struct UAnimMontage* CaptureBackR; // 0x1f8(0x08)
	struct UAnimMontage* EndSideL; // 0x200(0x08)
	struct UAnimMontage* EndBackL; // 0x208(0x08)
	struct UAnimMontage* EndSideR; // 0x210(0x08)
	struct UAnimMontage* EndBackR; // 0x218(0x08)
	struct FName InvincibleClaimantName; // 0x220(0x08)
	bool bBeginDither; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UAnimMontage* AimLoop; // 0x230(0x08)
	struct UAnimMontage* AimTurnLeft; // 0x238(0x08)
	struct UAnimMontage* AimTurnRight; // 0x240(0x08)
	bool bAimMode; // 0x248(0x01)
	bool bStoreLookAtEnable; // 0x249(0x01)
	bool bPlayAimTurnAnim; // 0x24a(0x01)
	char pad_24B[0x5]; // 0x24b(0x05)
	struct ABP_PsychicObjectBasic_C* AimObject; // 0x250(0x08)
	float ObjectAngle; // 0x258(0x04)
	bool bPlayVibrationFlag; // 0x25c(0x01)

	void StopVibration(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.StopVibration // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayVibration(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.PlayVibration // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearMontage(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.ClearMontage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimEnd(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.AimEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimUpdate(float DeltaSeconds); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.AimUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AimBegin(struct ABP_PsychicObjectBasic_C* PsychicObject); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.AimBegin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBlendParameter(bool bUse, float Angle); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.SetBlendParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DitherBegin(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.DitherBegin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DitherEnd(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.DitherEnd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcDir(float Angle); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.CalcDir // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMontage(struct UAnimMontage* Montage); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.SetMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAcceptInputAttack(bool bEnable); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.IsEnableAcceptInputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnSuccess(struct UAnimMontage* Montage); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCaptureCompleted(struct UAnimMontage* Montage); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnCaptureCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCaptureCancel(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnCaptureCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInputStart(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnInputStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUniqueEnd(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnUniqueEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindAimTick(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.BindAimTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindAimTick(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.UnbindAimTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventAimBegin(struct ABP_PsychicObjectBasic_C* PsychicObject); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.EventAimBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAreaChange(); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.OnAreaChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicUniqueAttackComponent(int32_t EntryPoint); // Function BP_PsychicUniqueAttackComponent.BP_PsychicUniqueAttackComponent_C.ExecuteUbergraph_BP_PsychicUniqueAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

