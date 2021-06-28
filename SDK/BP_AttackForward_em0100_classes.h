// BlueprintGeneratedClass BP_AttackForward_em0100.BP_AttackForward_em0100_C
// Size: 0x110 (Inherited: 0xd8)
struct UBP_AttackForward_em0100_C : UBP_TaskBase_em0100_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyAttackAnimKind EnumAttack; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FBlackboardKeySelector IsNoSignRushEscape; // 0xe8(0x28)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackForward_em0100.BP_AttackForward_em0100_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_AttackForward_em0100.BP_AttackForward_em0100_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackForward_em0100.BP_AttackForward_em0100_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttackForward_em0100(int32_t EntryPoint); // Function BP_AttackForward_em0100.BP_AttackForward_em0100_C.ExecuteUbergraph_BP_AttackForward_em0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

