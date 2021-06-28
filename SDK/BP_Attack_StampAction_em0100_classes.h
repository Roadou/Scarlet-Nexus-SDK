// BlueprintGeneratedClass BP_Attack_StampAction_em0100.BP_Attack_StampAction_em0100_C
// Size: 0x122 (Inherited: 0xd8)
struct UBP_Attack_StampAction_em0100_C : UBP_TaskBase_em0100_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct ABP_em0100Base_C* em0100Base; // 0xe0(0x08)
	enum class EnemyAttackAnimKind AnimKind; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	float LoopWaitTime; // 0xec(0x04)
	float PastTime; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FBlackboardKeySelector Action; // 0xf8(0x28)
	bool IsLostTarget; // 0x120(0x01)
	bool IsNoResetAI; // 0x121(0x01)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_StampAction_em0100.BP_Attack_StampAction_em0100_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_StampAction_em0100.BP_Attack_StampAction_em0100_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_StampAction_em0100.BP_Attack_StampAction_em0100_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_StampAction_em0100(int32_t EntryPoint); // Function BP_Attack_StampAction_em0100.BP_Attack_StampAction_em0100_C.ExecuteUbergraph_BP_Attack_StampAction_em0100 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

