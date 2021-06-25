// BlueprintGeneratedClass BP_PlayerActionStateJump.BP_PlayerActionStateJump_C
// Size: 0x109 (Inherited: 0xe8)
struct UBP_PlayerActionStateJump_C : UBP_PlayerActionStateCommonBase_C {
	struct FRotator JumpRot; // 0xe8(0x0c)
	bool bLerpRot; // 0xf4(0x01)
	bool bOrientRotation; // 0xf5(0x01)
	enum class EJumpActionParam JumpParam; // 0xf6(0x01)
	enum class PlayerAnimKind JumpAnimKind; // 0xf7(0x01)
	enum class EPlayerJumpActionStep JumpStateStep; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	struct FVector JumpDir; // 0xfc(0x0c)
	bool bLandingAble; // 0x108(0x01)

	void CalcJumpDir(struct FVector Dir); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.CalcJumpDir // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void BeginJumpIn(); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.BeginJumpIn // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginJump(); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.BeginJump // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateJump.BP_PlayerActionStateJump_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

