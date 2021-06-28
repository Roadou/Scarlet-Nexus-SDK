// BlueprintGeneratedClass BP_TaskBase_em0100.BP_TaskBase_em0100_C
// Size: 0xd8 (Inherited: 0xd0)
struct UBP_TaskBase_em0100_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)

	void AttackAfter2LegChance(enum class Enum_em0100 Enum, struct AActor* Actor); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.AttackAfter2LegChance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveLeg(struct ABP_em0100Base_C* Actor, bool 2leg); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.SetMoveLeg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMove(struct ABP_em0100Base_C* Actor, bool SetMove); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.SetMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginTrans(struct AActor* Actor, bool 2leg); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.BeginTrans // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndProcessingEm0100(struct AActor* Actor, bool SetMove); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.EndProcessingEm0100 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeLeg(struct AActor* Actor, bool 2leg); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.ChangeLeg // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TaskBase_em0100(int32_t EntryPoint); // Function BP_TaskBase_em0100.BP_TaskBase_em0100_C.ExecuteUbergraph_BP_TaskBase_em0100 // (Final|UbergraphFunction) // @ game+0x1685580
};

