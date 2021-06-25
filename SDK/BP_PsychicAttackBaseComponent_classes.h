// BlueprintGeneratedClass BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C
// Size: 0x1a8 (Inherited: 0x198)
struct UBP_PsychicAttackBaseComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0x1a0(0x08)

	void IsFrontRightFoot(bool bFront); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.IsFrontRightFoot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnComboAttack(); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.OnComboAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCaptureCancel(); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.OnCaptureCancel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCaptureCompleted(struct UAnimMontage* Montage); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.OnCaptureCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchCaptureCompleted(struct UAnimMontage* FirstAttackMontage); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.DispatchCaptureCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DispatchCaptureCancel(); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.DispatchCaptureCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void DispatchPsychicComboAttack(); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.DispatchPsychicComboAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PsychicAttackBaseComponent(int32_t EntryPoint); // Function BP_PsychicAttackBaseComponent.BP_PsychicAttackBaseComponent_C.ExecuteUbergraph_BP_PsychicAttackBaseComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

