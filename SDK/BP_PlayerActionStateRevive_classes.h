// BlueprintGeneratedClass BP_PlayerActionStateRevive.BP_PlayerActionStateRevive_C
// Size: 0xf1 (Inherited: 0xe8)
struct UBP_PlayerActionStateRevive_C : UBP_PlayerActionStateBase_C {
	struct FName ClaimantName; // 0xe8(0x08)
	bool bFromNpc; // 0xf0(0x01)

	void UpdateCustomTimeDilation(); // Function BP_PlayerActionStateRevive.BP_PlayerActionStateRevive_C.UpdateCustomTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateRevive.BP_PlayerActionStateRevive_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateRevive.BP_PlayerActionStateRevive_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateRevive.BP_PlayerActionStateRevive_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateRevive.BP_PlayerActionStateRevive_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

