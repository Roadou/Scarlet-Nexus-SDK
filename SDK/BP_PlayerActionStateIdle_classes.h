// BlueprintGeneratedClass BP_PlayerActionStateIdle.BP_PlayerActionStateIdle_C
// Size: 0xf6 (Inherited: 0xe8)
struct UBP_PlayerActionStateIdle_C : UBP_PlayerActionStateCommonBase_C {
	struct FGameTimer BoringTimer; // 0xe8(0x0c)
	bool bChangePriority; // 0xf4(0x01)
	enum class ECharacterHitPriority StorePriority; // 0xf5(0x01)

	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateIdle.BP_PlayerActionStateIdle_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateIdle.BP_PlayerActionStateIdle_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateIdle.BP_PlayerActionStateIdle_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateIdle.BP_PlayerActionStateIdle_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

