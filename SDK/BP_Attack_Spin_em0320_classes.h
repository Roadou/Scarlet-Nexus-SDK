// BlueprintGeneratedClass BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C
// Size: 0xda (Inherited: 0xd0)
struct UBP_Attack_Spin_em0320_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class Enum_em0300 Enum; // 0xd8(0x01)
	enum class EnemyAttackAnimKind Attack; // 0xd9(0x01)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndProcessing(struct AActor* Actor, enum class EnemyMoveAnimKind move, bool return); // Function BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C.EndProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_Spin_em0320(int32_t EntryPoint); // Function BP_Attack_Spin_em0320.BP_Attack_Spin_em0320_C.ExecuteUbergraph_BP_Attack_Spin_em0320 // (Final|UbergraphFunction) // @ game+0x1685580
};

