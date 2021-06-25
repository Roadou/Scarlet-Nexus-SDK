// BlueprintGeneratedClass BP_PsychicAttackComponent.BP_PsychicAttackComponent_C
// Size: 0x259 (Inherited: 0x1a8)
struct UBP_PsychicAttackComponent_C : UBP_PsychicAttackBaseComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)
	struct UAnimMontage* EndMontage; // 0x1b0(0x08)
	struct UAnimMontage* StartMontage; // 0x1b8(0x08)
	struct UAnimMontage* LoopMontage; // 0x1c0(0x08)
	struct UAnimMontage* AttackMontage; // 0x1c8(0x08)
	struct UAnimMontage* CurrentMontage; // 0x1d0(0x08)
	bool bAddedCombo; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float WaitTimer; // 0x1dc(0x04)
	struct FName ClaimantName; // 0x1e0(0x08)
	bool bFlying; // 0x1e8(0x01)
	bool bChangingOwnMontage; // 0x1e9(0x01)
	char pad_1EA[0x6]; // 0x1ea(0x06)
	struct TArray<struct UAnimMontage*> EndMontageList; // 0x1f0(0x10)
	struct TArray<struct UAnimMontage*> StartMontageList; // 0x200(0x10)
	struct TArray<struct UAnimMontage*> LoopMontageList; // 0x210(0x10)
	enum class EPlayerCaptureAnimPattern CurrentAnimPattern; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct TArray<struct UAnimMontage*> AttackMontageList; // 0x228(0x10)
	struct TArray<struct UAnimSequence*> ObjectAnimationList; // 0x238(0x10)
	int32_t PsychicLevel; // 0x248(0x04)
	bool bFlyingCombo; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct USoundAtomCue* CaptureSE; // 0x250(0x08)
	bool bFlyingDirectShot; // 0x258(0x01)

	void EndCaptureObjectSE(); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.EndCaptureObjectSE // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLoopMotion(); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.SetLoopMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AnimationSetting(enum class EPlayerCaptureAnimPattern Pattern); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.AnimationSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetObjectAnimation(struct UAnimSequence* Animation); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.GetObjectAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void AnimPatternSetting(enum class EPlayerCaptureAnimPattern Pattern); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.AnimPatternSetting // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackMontage(bool bSuccess, bool bCancel); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.SetAttackMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMontage(struct UAnimMontage* Montage, bool bAddCombo); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.SetMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAcceptInputAttack(bool bEnable); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.IsEnableAcceptInputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnCaptureCancel(); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.OnCaptureCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicAttackComponent(int32_t EntryPoint); // Function BP_PsychicAttackComponent.BP_PsychicAttackComponent_C.ExecuteUbergraph_BP_PsychicAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

