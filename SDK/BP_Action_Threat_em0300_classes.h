// BlueprintGeneratedClass BP_Action_Threat_em0300.BP_Action_Threat_em0300_C
// Size: 0xdc (Inherited: 0xd0)
struct UBP_Action_Threat_em0300_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyActionAnimKind Action; // 0xd8(0x01)
	enum class EnemyActionAnimKind ActionChangeAi; // 0xd9(0x01)
	enum class EnemyActionAnimKind ActionNormal; // 0xda(0x01)
	bool IsAiChange; // 0xdb(0x01)

	void EndProcessing(struct AActor* Actor, enum class EnemyMoveAnimKind move, bool return); // Function BP_Action_Threat_em0300.BP_Action_Threat_em0300_C.EndProcessing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_Threat_em0300.BP_Action_Threat_em0300_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Action_Threat_em0300.BP_Action_Threat_em0300_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_Threat_em0300.BP_Action_Threat_em0300_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Action_Threat_em0300(int32_t EntryPoint); // Function BP_Action_Threat_em0300.BP_Action_Threat_em0300_C.ExecuteUbergraph_BP_Action_Threat_em0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

