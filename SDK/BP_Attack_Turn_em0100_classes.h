// BlueprintGeneratedClass BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C
// Size: 0xe1 (Inherited: 0xd8)
struct UBP_Attack_Turn_em0100_C : UBP_TaskBase_em0100_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyAttackAnimKind Enum; // 0xe0(0x01)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCoolTimeRage(struct ABP_em0100Base_C* Actor); // Function BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C.SetCoolTimeRage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_Turn_em0100(int32_t EntryPoint); // Function BP_Attack_Turn_em0100.BP_Attack_Turn_em0100_C.ExecuteUbergraph_BP_Attack_Turn_em0100 // (Final|UbergraphFunction) // @ game+0x1685580
};
