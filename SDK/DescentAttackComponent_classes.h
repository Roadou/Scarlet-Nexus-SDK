// BlueprintGeneratedClass DescentAttackComponent.DescentAttackComponent_C
// Size: 0x1ea (Inherited: 0x198)
struct UDescentAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	bool bInputAttack; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct UAnimMontage* AttackMontage; // 0x1a8(0x08)
	struct UAnimMontage* LandMontage; // 0x1b0(0x08)
	struct UAnimMontage* OwnMontage; // 0x1b8(0x08)
	struct UParticleSystemComponent* AttackLineEffect; // 0x1c0(0x08)
	struct FName MoveClaimantName; // 0x1c8(0x08)
	bool bChangingOwnMontage; // 0x1d0(0x01)
	bool bLanding; // 0x1d1(0x01)
	char pad_1D2[0x6]; // 0x1d2(0x06)
	struct UAnimMontage* WeaponAttackMontage; // 0x1d8(0x08)
	struct UAnimMontage* WeaponLandMontage; // 0x1e0(0x08)
	bool bIgnoreLandCheck; // 0x1e8(0x01)
	bool bBindEvent; // 0x1e9(0x01)

	void GetCurrentMontage(struct UAnimMontage* Montage); // Function DescentAttackComponent.DescentAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function DescentAttackComponent.DescentAttackComponent_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDiscentAttackInputFlag(bool Flag); // Function DescentAttackComponent.DescentAttackComponent_C.SetDiscentAttackInputFlag // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function DescentAttackComponent.DescentAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function DescentAttackComponent.DescentAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function DescentAttackComponent.DescentAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function DescentAttackComponent.DescentAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRequestParticleEffect(struct URequestParticleEffectArgs* Args); // Function DescentAttackComponent.DescentAttackComponent_C.OnRequestParticleEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAutoMove(); // Function DescentAttackComponent.DescentAttackComponent_C.ClearAutoMove // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttackLineEffect(); // Function DescentAttackComponent.DescentAttackComponent_C.DestroyAttackLineEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnOwnerMovementCollisionLand(); // Function DescentAttackComponent.DescentAttackComponent_C.OnOwnerMovementCollisionLand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearInputForDescentAttack(bool dummy); // Function DescentAttackComponent.DescentAttackComponent_C.ClearInputForDescentAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStartDiscentAttack(bool IsStart); // Function DescentAttackComponent.DescentAttackComponent_C.IsStartDiscentAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InputButton(bool IsPressed, bool dummy); // Function DescentAttackComponent.DescentAttackComponent_C.InputButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveMovementCollisionLand(); // Function DescentAttackComponent.DescentAttackComponent_C.ReceiveMovementCollisionLand // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveRequestParticleEffect(struct URequestParticleEffectArgs* Args); // Function DescentAttackComponent.DescentAttackComponent_C.ReceiveRequestParticleEffect // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindEvent(); // Function DescentAttackComponent.DescentAttackComponent_C.BindEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindEvent(); // Function DescentAttackComponent.DescentAttackComponent_C.UnbindEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_DescentAttackComponent(int32_t EntryPoint); // Function DescentAttackComponent.DescentAttackComponent_C.ExecuteUbergraph_DescentAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

