// BlueprintGeneratedClass BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C
// Size: 0x131 (Inherited: 0xe8)
struct UBP_PlayerActionStateDodge_C : UBP_PlayerActionStateCommonBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool bTransitionSprint; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FVector DodgeDir; // 0xf4(0x0c)
	bool bRotate; // 0x100(0x01)
	enum class EPlayerDodgeType DodgeType; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	struct FName ClaimantName; // 0x104(0x08)
	bool bFlyingDodge; // 0x10c(0x01)
	enum class EPlayerAnimDir DodgeAnimDir; // 0x10d(0x01)
	bool bDodgeDiagonally; // 0x10e(0x01)
	char pad_10F[0x1]; // 0x10f(0x01)
	struct FGameTimer JustDodgeCheckTimer; // 0x110(0x0c)
	enum class EPlayerDodgeType DodgeAnimType; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FGameTimer InvalidDamageTimer; // 0x120(0x0c)
	float PARAM_DodgeInvincibleTime; // 0x12c(0x04)
	bool bForceBackStep; // 0x130(0x01)

	void IsRotateToTarget(struct FVector InInputDir, struct FVector InTargetDir, struct FVector InForwardDir, bool bRotate); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.IsRotateToTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSuperArmor(bool bEnable); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.SetSuperArmor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInvalidDamage(bool bInvalid); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.SetInvalidDamage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTurnBack(bool bTurnBack); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.CheckTurnBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCheckTurnBack(bool bTurnBack); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.IsCheckTurnBack // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDodgeDiagonally(bool bEnable); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.IsDodgeDiagonally // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcDodgeAnimDir(struct FVector InDodgeDir, struct FVector InForwardDir, enum class EPlayerAnimDir AnimDir, struct FRotator Rotate); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.CalcDodgeAnimDir // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	int32_t Exit(int32_t NextStateIndex); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.Exit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool Transition(); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.Transition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Update(); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.Update // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t Enter(int32_t Param); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.Enter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDodgeEnd(bool bEnd); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.CheckDodgeEnd // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RotateToTarget(); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.RotateToTarget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckSprint(bool bSprint); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.CheckSprint // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_PlayerActionStateDodge(int32_t EntryPoint); // Function BP_PlayerActionStateDodge.BP_PlayerActionStateDodge_C.ExecuteUbergraph_BP_PlayerActionStateDodge // (Final|UbergraphFunction) // @ game+0x1685580
};

