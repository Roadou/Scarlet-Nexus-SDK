// BlueprintGeneratedClass BP_ActionThreat_em0600.BP_ActionThreat_em0600_C
// Size: 0xe4 (Inherited: 0xd0)
struct UBP_ActionThreat_em0600_C : UBP_TaskBase_em0400_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyActionAnimKind Action; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float Time; // 0xdc(0x04)
	float Timer; // 0xe0(0x04)

	void CheckTimer(float sec, bool return); // Function BP_ActionThreat_em0600.BP_ActionThreat_em0600_C.CheckTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTimer(struct ABP_em0600_Base_C* Actor); // Function BP_ActionThreat_em0600.BP_ActionThreat_em0600_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionThreat_em0600.BP_ActionThreat_em0600_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionThreat_em0600.BP_ActionThreat_em0600_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionThreat_em0600.BP_ActionThreat_em0600_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionThreat_em0600(int32_t EntryPoint); // Function BP_ActionThreat_em0600.BP_ActionThreat_em0600_C.ExecuteUbergraph_BP_ActionThreat_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

