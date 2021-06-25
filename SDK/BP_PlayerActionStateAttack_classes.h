// BlueprintGeneratedClass BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C
// Size: 0x104 (Inherited: 0xe8)
struct UBP_PlayerActionStateAttack_C : UBP_PlayerActionStateCommonBase_C {
	enum class RSAttackInputKind AttackInputKind; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FName ClaimantName; // 0xec(0x08)
	bool bPsychicEffect; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float ObstructTimer; // 0xf8(0x04)
	int32_t StoreCharacterHitTimeSliceNum; // 0xfc(0x04)
	bool bPsychicSlow; // 0x100(0x01)
	bool bStealthFlag; // 0x101(0x01)
	bool bObstruct; // 0x102(0x01)
	bool bForceEnableRootMotion; // 0x103(0x01)

	void ResetUseRootMotion(bool bDummy); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.ResetUseRootMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableUseRootMotion(bool bDummy); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.EnableUseRootMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RootMotionSetting(); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.RootMotionSetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSuperArmor(bool bEnable); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.SetSuperArmor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateAttack.BP_PlayerActionStateAttack_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

