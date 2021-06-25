// BlueprintGeneratedClass BP_PlayerUpperActionStateChangeBattle.BP_PlayerUpperActionStateChangeBattle_C
// Size: 0xf0 (Inherited: 0xe0)
struct UBP_PlayerUpperActionStateChangeBattle_C : UBP_PlayerUpperActionStateBase_C {
	int32_t Param; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UAnimMontage* Montage; // 0xe8(0x08)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerUpperActionStateChangeBattle.BP_PlayerUpperActionStateChangeBattle_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerUpperActionStateChangeBattle.BP_PlayerUpperActionStateChangeBattle_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerUpperActionStateChangeBattle.BP_PlayerUpperActionStateChangeBattle_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

