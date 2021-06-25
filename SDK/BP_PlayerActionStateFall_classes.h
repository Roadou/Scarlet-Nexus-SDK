// BlueprintGeneratedClass BP_PlayerActionStateFall.BP_PlayerActionStateFall_C
// Size: 0x100 (Inherited: 0xe8)
struct UBP_PlayerActionStateFall_C : UBP_PlayerActionStateCommonBase_C {
	struct FVector PrevVelocity; // 0xe8(0x0c)
	float VelocityTimer; // 0xf4(0x04)
	enum class EFallActionParam FallParam; // 0xf8(0x01)
	bool bLanding; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	float BeginHeight; // 0xfc(0x04)

	void IsEnablePrevVelocity(bool bEnable); // Function BP_PlayerActionStateFall.BP_PlayerActionStateFall_C.IsEnablePrevVelocity // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateFall.BP_PlayerActionStateFall_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateFall.BP_PlayerActionStateFall_C.Update // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateFall.BP_PlayerActionStateFall_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateFall.BP_PlayerActionStateFall_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

