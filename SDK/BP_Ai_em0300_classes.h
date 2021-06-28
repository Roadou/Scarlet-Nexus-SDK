// BlueprintGeneratedClass BP_Ai_em0300.BP_Ai_em0300_C
// Size: 0x1b8 (Inherited: 0x17d)
struct UBP_Ai_em0300_C : UBP_Ai_Enemy_C {
	char pad_17D[0x3]; // 0x17d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	struct ABP_em0300Base_C* em0300; // 0x188(0x08)
	enum class Enum_em0300 Enum; // 0x190(0x01)
	bool IsEnd; // 0x191(0x01)
	enum class Enum_em0300 ActioNone; // 0x192(0x01)
	bool IsAttackRunCheck; // 0x193(0x01)
	bool IsFisher; // 0x194(0x01)
	bool IsDebugNoCeiling; // 0x195(0x01)
	bool PermissionJump_em0320; // 0x196(0x01)
	bool LandingLocationLimit; // 0x197(0x01)
	bool CanAiChange; // 0x198(0x01)
	bool IsAnyWhereAction; // 0x199(0x01)
	char pad_19A[0x2]; // 0x19a(0x02)
	int32_t CellActionIndex; // 0x19c(0x04)
	bool ChangedAi; // 0x1a0(0x01)
	bool PermissionWaterGun; // 0x1a1(0x01)
	bool PermissionSprinkler; // 0x1a2(0x01)
	bool PermissionJump_em0310; // 0x1a3(0x01)
	bool bCeilingRan; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	int32_t CeilingSprinklerCount; // 0x1a8(0x04)
	int32_t CeilingSprinklerCountMax; // 0x1ac(0x04)
	bool IsPreviousActionTurn; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	float JumpPermissionSecondTimer; // 0x1b4(0x04)

	void SetAction(char Enum); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCeilingTargetAngle(float targetAngle); // Function BP_Ai_em0300.BP_Ai_em0300_C.GetCeilingTargetAngle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void RequestSprinklerIgnoreCoolTime(); // Function BP_Ai_em0300.BP_Ai_em0300_C.RequestSprinklerIgnoreCoolTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CountCeilingAction(enum class Enum_em0300 Action); // Function BP_Ai_em0300.BP_Ai_em0300_C.CountCeilingAction // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPermissionJumpEm0320(bool permission); // Function BP_Ai_em0300.BP_Ai_em0300_C.IsPermissionJumpEm0320 // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsResurrection(bool IsResurection); // Function BP_Ai_em0300.BP_Ai_em0300_C.IsResurrection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCeilingTarget(float OverlapDistance, struct FVector TargetLocation, struct AActor* TargetActor); // Function BP_Ai_em0300.BP_Ai_em0300_C.UpdateCeilingTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetPermission_em0300(); // Function BP_Ai_em0300.BP_Ai_em0300_C.ResetPermission_em0300 // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPermissionJump_em0310(bool permission); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetPermissionJump_em0310 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPermissionSprinkler_em0300(bool permission); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetPermissionSprinkler_em0300 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPermissionWaterGun_em0300(bool permission); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetPermissionWaterGun_em0300 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBadStatePlayer(bool return); // Function BP_Ai_em0300.BP_Ai_em0300_C.IsBadStatePlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeAiAction(); // Function BP_Ai_em0300.BP_Ai_em0300_C.ChangeAiAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackActionAfterAttackWaterGunCell(); // Function BP_Ai_em0300.BP_Ai_em0300_C.AttackActionAfterAttackWaterGunCell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackActionAfterAttackJump(); // Function BP_Ai_em0300.BP_Ai_em0300_C.AttackActionAfterAttackJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLandingLocationLimit_em0320(bool IsLimit); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetLandingLocationLimit_em0320 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPermissionJump_em0320(bool permission); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetPermissionJump_em0320 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetIdleMove(bool IsSetMove); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetIdleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNeedTurn(bool IsNeedTurn); // Function BP_Ai_em0300.BP_Ai_em0300_C.CheckNeedTurn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTurnAction(bool IsSetTurn); // Function BP_Ai_em0300.BP_Ai_em0300_C.SetTurnAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Kind2_Action(); // Function BP_Ai_em0300.BP_Ai_em0300_C.Kind2_Action // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OriginalAction(); // Function BP_Ai_em0300.BP_Ai_em0300_C.OriginalAction // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotMoveAction(bool return); // Function BP_Ai_em0300.BP_Ai_em0300_C.NotMoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveAction(bool return); // Function BP_Ai_em0300.BP_Ai_em0300_C.MoveAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackActionAttackRun(); // Function BP_Ai_em0300.BP_Ai_em0300_C.AttackActionAttackRun // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackRun(enum class Enum_em0300 Enum, bool Ret); // Function BP_Ai_em0300.BP_Ai_em0300_C.IsAttackRun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Attack Action Ceiling(); // Function BP_Ai_em0300.BP_Ai_em0300_C.Attack Action Ceiling // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpecialAction(bool Ret); // Function BP_Ai_em0300.BP_Ai_em0300_C.SpecialAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Ai_em0300.BP_Ai_em0300_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Ai_em0300.BP_Ai_em0300_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Ai_em0300(int32_t EntryPoint); // Function BP_Ai_em0300.BP_Ai_em0300_C.ExecuteUbergraph_BP_Ai_em0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

