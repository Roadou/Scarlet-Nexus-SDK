// BlueprintGeneratedClass BP_AttackAround_em0600.BP_AttackAround_em0600_C
// Size: 0xe0 (Inherited: 0xd4)
struct UBP_AttackAround_em0600_C : UBP_TaskBase_em0600_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_AttackAround_em0600.BP_AttackAround_em0600_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackAround_em0600.BP_AttackAround_em0600_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_AttackAround_em0600.BP_AttackAround_em0600_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackAround_em0600.BP_AttackAround_em0600_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttackAround_em0600(int32_t EntryPoint); // Function BP_AttackAround_em0600.BP_AttackAround_em0600_C.ExecuteUbergraph_BP_AttackAround_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

