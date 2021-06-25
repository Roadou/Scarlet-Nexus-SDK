// BlueprintGeneratedClass BP_PlayerUpperActionStateAttack.BP_PlayerUpperActionStateAttack_C
// Size: 0xe1 (Inherited: 0xe0)
struct UBP_PlayerUpperActionStateAttack_C : UBP_PlayerUpperActionStateBase_C {
	enum class RSAttackInputKind AttackInputKind; // 0xe0(0x01)

	void SetSuperArmor(bool bEnable); // Function BP_PlayerUpperActionStateAttack.BP_PlayerUpperActionStateAttack_C.SetSuperArmor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerUpperActionStateAttack.BP_PlayerUpperActionStateAttack_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerUpperActionStateAttack.BP_PlayerUpperActionStateAttack_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerUpperActionStateAttack.BP_PlayerUpperActionStateAttack_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

