// BlueprintGeneratedClass BP_TaskBase_em0700.BP_TaskBase_em0700_C
// Size: 0xd8 (Inherited: 0xd0)
struct UBP_TaskBase_em0700_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)

	void EndProcessing(struct AActor* Actor, enum class EnemyMoveAnimKind move, bool return); // Function BP_TaskBase_em0700.BP_TaskBase_em0700_C.EndProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NextAction(struct AActor* OwnerActor, enum class Enum_em0700 Action); // Function BP_TaskBase_em0700.BP_TaskBase_em0700_C.NextAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_TaskBase_em0700.BP_TaskBase_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TaskBase_em0700(int32_t EntryPoint); // Function BP_TaskBase_em0700.BP_TaskBase_em0700_C.ExecuteUbergraph_BP_TaskBase_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

