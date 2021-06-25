// BlueprintGeneratedClass BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C
// Size: 0x100 (Inherited: 0xe8)
struct UBP_PlayerActionStateDamage_C : UBP_PlayerActionStateCommonBase_C {
	enum class EPlayerDamageKind DamageType; // 0xe8(0x01)
	bool bResetHologram; // 0xe9(0x01)
	char pad_EA[0x2]; // 0xea(0x02)
	struct FName ClaimantName_CoverDamage; // 0xec(0x08)
	enum class ECharacterHitPriority StoreCharacterHitPriority; // 0xf4(0x01)
	enum class EPlayerID CoverDamagePlayer; // 0xf5(0x01)
	bool bCopyFlag; // 0xf6(0x01)
	char pad_F7[0x1]; // 0xf7(0x01)
	struct FName ClaimantName_ElectricDownStart; // 0xf8(0x08)

	void GetDownType(enum class EPlayerDownType DownType); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.GetDownType // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VibrationUI(enum class EPlayerDamageKind kind); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.VibrationUI // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHologramAttack(enum class EPlayerDamageKind kind); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.CheckHologramAttack // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDeadReaction(bool bDead); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.IsDeadReaction // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsTransitionDown(enum class EPlayerDamageKind kind, bool bTransition); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.IsTransitionDown // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void RequestHologramAnim(bool bHologram); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.RequestHologramAnim // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateDamage.BP_PlayerActionStateDamage_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

