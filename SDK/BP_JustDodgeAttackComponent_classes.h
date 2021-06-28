// BlueprintGeneratedClass BP_JustDodgeAttackComponent.BP_JustDodgeAttackComponent_C
// Size: 0x228 (Inherited: 0x1e8)
struct UBP_JustDodgeAttackComponent_C : USingleAttackComponent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e8(0x08)
	float Param_MoveDistance; // 0x1f0(0x04)
	float Param_MoveTime; // 0x1f4(0x04)
	float Timer; // 0x1f8(0x04)
	struct FVector InitMoveDir; // 0x1fc(0x0c)
	enum class EEasingFunc Param_EaseType; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	float Param_EaseBlendExp; // 0x20c(0x04)
	float PrevDistance; // 0x210(0x04)
	char pad_214[0x4]; // 0x214(0x04)
	struct AActor* MoveTargetActor; // 0x218(0x08)
	float Param_TimeDilation; // 0x220(0x04)
	float Param_SlowTime; // 0x224(0x04)

	void UpdateMove(float DeltaSeconds); // Function BP_JustDodgeAttackComponent.BP_JustDodgeAttackComponent_C.UpdateMove // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_JustDodgeAttackComponent.BP_JustDodgeAttackComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_JustDodgeAttackComponent.BP_JustDodgeAttackComponent_C.CheckStartAttack // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_JustDodgeAttackComponent.BP_JustDodgeAttackComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_JustDodgeAttackComponent(int32_t EntryPoint); // Function BP_JustDodgeAttackComponent.BP_JustDodgeAttackComponent_C.ExecuteUbergraph_BP_JustDodgeAttackComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

