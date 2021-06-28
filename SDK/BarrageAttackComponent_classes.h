// BlueprintGeneratedClass BarrageAttackComponent.BarrageAttackComponent_C
// Size: 0x21a (Inherited: 0x198)
struct UBarrageAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	float InputAcceptIntervalTime; // 0x1a0(0x04)
	float MinAttackTime; // 0x1a4(0x04)
	struct FGameTimer InputAcceptTimer; // 0x1a8(0x0c)
	struct FGameTimer MinAttackTimer; // 0x1b4(0x0c)
	bool bPlayEndMontage; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UAnimMontage* AttackMontage; // 0x1c8(0x08)
	struct UAnimMontage* EndMontage; // 0x1d0(0x08)
	bool bInputAttack; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct UAnimMontage* CurrentMontage; // 0x1e0(0x08)
	bool bIgnoreOnMontageBlendingOut; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct UAnimMontage* WeaponAttackMontage; // 0x1f0(0x08)
	struct UAnimMontage* WeaponEndMontage; // 0x1f8(0x08)
	enum class EPlayerID hologramPlayerID; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	struct UAnimMontage* HologramAttackMontage; // 0x208(0x08)
	struct UAnimMontage* HologramEndMontage; // 0x210(0x08)
	bool bReleaseButtonMode; // 0x218(0x01)
	bool bUseUI; // 0x219(0x01)

	void EndUI(); // Function BarrageAttackComponent.BarrageAttackComponent_C.EndUI // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TrgUI(); // Function BarrageAttackComponent.BarrageAttackComponent_C.TrgUI // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginUI(); // Function BarrageAttackComponent.BarrageAttackComponent_C.BeginUI // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BarrageAttackComponent.BarrageAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void EndAttack(bool dummy); // Function BarrageAttackComponent.BarrageAttackComponent_C.EndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEndMontage(); // Function BarrageAttackComponent.BarrageAttackComponent_C.PlayEndMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BarrageAttackComponent.BarrageAttackComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputButton(bool IsPressed, bool dummy); // Function BarrageAttackComponent.BarrageAttackComponent_C.InputButton // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BarrageAttackComponent.BarrageAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BarrageAttackComponent.BarrageAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function BarrageAttackComponent.BarrageAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BarrageAttackComponent.BarrageAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BarrageAttackComponent.BarrageAttackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BarrageAttackComponent.BarrageAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BarrageAttackComponent(int32_t EntryPoint); // Function BarrageAttackComponent.BarrageAttackComponent_C.ExecuteUbergraph_BarrageAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

