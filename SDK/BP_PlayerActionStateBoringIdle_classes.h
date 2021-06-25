// BlueprintGeneratedClass BP_PlayerActionStateBoringIdle.BP_PlayerActionStateBoringIdle_C
// Size: 0xea (Inherited: 0xe8)
struct UBP_PlayerActionStateBoringIdle_C : UBP_PlayerActionStateCommonBase_C {
	bool bChangePriority; // 0xe8(0x01)
	enum class ECharacterHitPriority StorePriority; // 0xe9(0x01)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateBoringIdle.BP_PlayerActionStateBoringIdle_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateBoringIdle.BP_PlayerActionStateBoringIdle_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateBoringIdle.BP_PlayerActionStateBoringIdle_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

