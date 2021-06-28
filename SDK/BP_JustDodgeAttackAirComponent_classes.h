// BlueprintGeneratedClass BP_JustDodgeAttackAirComponent.BP_JustDodgeAttackAirComponent_C
// Size: 0x230 (Inherited: 0x1ea)
struct UBP_JustDodgeAttackAirComponent_C : UDescentAttackComponent_C {
	char pad_1EA[0x6]; // 0x1ea(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1f0(0x08)
	float Timer; // 0x1f8(0x04)
	float Param_MoveDistance; // 0x1fc(0x04)
	float Param_MoveTime; // 0x200(0x04)
	enum class EEasingFunc Param_EaseType; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	float Param_EaseBlendExp; // 0x208(0x04)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct AActor* MoveTargetActor; // 0x210(0x08)
	struct FVector InitMoveDir; // 0x218(0x0c)
	float PrevDistance; // 0x224(0x04)
	float Param_TimeDilation; // 0x228(0x04)
	float Param_SlowTime; // 0x22c(0x04)

	void UpdateMove(float DeltaSeconds); // Function BP_JustDodgeAttackAirComponent.BP_JustDodgeAttackAirComponent_C.UpdateMove // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_JustDodgeAttackAirComponent.BP_JustDodgeAttackAirComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_JustDodgeAttackAirComponent.BP_JustDodgeAttackAirComponent_C.CheckStartAttack // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_JustDodgeAttackAirComponent.BP_JustDodgeAttackAirComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JustDodgeAttackAirComponent(int32_t EntryPoint); // Function BP_JustDodgeAttackAirComponent.BP_JustDodgeAttackAirComponent_C.ExecuteUbergraph_BP_JustDodgeAttackAirComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

