// BlueprintGeneratedClass BP_TelepoAttackComponent.BP_TelepoAttackComponent_C
// Size: 0x1f8 (Inherited: 0x198)
struct UBP_TelepoAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	struct UAnimMontage* StartMontage; // 0x1a0(0x08)
	struct UAnimMontage* AttackMontage; // 0x1a8(0x08)
	bool bInputAttack; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	struct UAnimMontage* OwnMontage; // 0x1b8(0x08)
	bool bChangeMontage; // 0x1c0(0x01)
	char pad_1C1[0x7]; // 0x1c1(0x07)
	struct UAnimMontage* StartMontageWp; // 0x1c8(0x08)
	struct UAnimMontage* AttackMontageWp; // 0x1d0(0x08)
	float MoveTime; // 0x1d8(0x04)
	bool bStorePriority; // 0x1dc(0x01)
	enum class ECharacterHitPriority StorePriority; // 0x1dd(0x01)
	bool bReleaseButtonMode; // 0x1de(0x01)
	char pad_1DF[0x1]; // 0x1df(0x01)
	int32_t TickStep; // 0x1e0(0x04)
	struct FName ClaimantName; // 0x1e4(0x08)
	char pad_1EC[0x4]; // 0x1ec(0x04)
	struct AActor* TelepoTarget; // 0x1f0(0x08)

	void DoEndAttack(bool bDummy); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Move to Target(float DeltaSeconds, bool bMoveEnd); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.Move to Target // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputButton(bool bPressed); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.InputButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TelepoAttackComponent(int32_t EntryPoint); // Function BP_TelepoAttackComponent.BP_TelepoAttackComponent_C.ExecuteUbergraph_BP_TelepoAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

