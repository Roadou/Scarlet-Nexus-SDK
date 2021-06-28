// BlueprintGeneratedClass BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C
// Size: 0x210 (Inherited: 0x198)
struct UBP_TelepoAirAttackComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	struct UAnimMontage* StartMontage; // 0x1a0(0x08)
	struct UAnimMontage* AttackMontage; // 0x1a8(0x08)
	struct FName ClaimantName; // 0x1b0(0x08)
	bool bInputAttack; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UAnimMontage* OwnMontage; // 0x1c0(0x08)
	bool bChangeMontage; // 0x1c8(0x01)
	char pad_1C9[0x7]; // 0x1c9(0x07)
	struct UAnimMontage* EndMontage; // 0x1d0(0x08)
	struct UAnimMontage* StartMontageWp; // 0x1d8(0x08)
	struct UAnimMontage* AttackMontageWp; // 0x1e0(0x08)
	struct UAnimMontage* EndMontageWP; // 0x1e8(0x08)
	float MoveTime; // 0x1f0(0x04)
	float RemoveTime; // 0x1f4(0x04)
	float HeightOffset; // 0x1f8(0x04)
	float AttackDistance; // 0x1fc(0x04)
	struct AActor* MoveTargetActor; // 0x200(0x08)
	bool bStorePriority; // 0x208(0x01)
	enum class ECharacterHitPriority StorePriority; // 0x209(0x01)
	bool bReleaseButtonMode; // 0x20a(0x01)
	char pad_20B[0x1]; // 0x20b(0x01)
	int32_t TickStep; // 0x20c(0x04)

	void DoEndAttack(bool bDummy); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveUpdate(float DeltaSeconds, bool bToTarget, bool bMoveEnd); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.MoveUpdate // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InputButton(bool bPressed); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.InputButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TelepoAirAttackComponent(int32_t EntryPoint); // Function BP_TelepoAirAttackComponent.BP_TelepoAirAttackComponent_C.ExecuteUbergraph_BP_TelepoAirAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

