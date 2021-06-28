// BlueprintGeneratedClass BP_Move_em0700.BP_Move_em0700_C
// Size: 0xe0 (Inherited: 0xd8)
struct UBP_Move_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)

	void IsMove(struct AActor* Actor, bool Ret); // Function BP_Move_em0700.BP_Move_em0700_C.IsMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetMove(struct ABP_em0700_Base_C* Actor, enum class EnemyMoveAnimKind move); // Function BP_Move_em0700.BP_Move_em0700_C.GetMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Move_em0700.BP_Move_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Move_em0700(int32_t EntryPoint); // Function BP_Move_em0700.BP_Move_em0700_C.ExecuteUbergraph_BP_Move_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

