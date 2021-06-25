// BlueprintGeneratedClass BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C
// Size: 0xf5 (Inherited: 0xe8)
struct UBP_PlayerActionStateWakeUp_C : UBP_PlayerActionStateCommonBase_C {
	struct FName ClaimantName; // 0xe8(0x08)
	float InvalidDamageTimer; // 0xf0(0x04)
	enum class EPlayerDownType WakeUpType; // 0xf4(0x01)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateWakeUp.BP_PlayerActionStateWakeUp_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

