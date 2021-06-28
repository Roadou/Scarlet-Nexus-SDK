// BlueprintGeneratedClass BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C
// Size: 0xe8 (Inherited: 0xd4)
struct UBP_AttackAroundForwardMoveLoop_em0600_C : UBP_TaskBase_em0600_C {
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float AttackDeltaSec; // 0xe0(0x04)
	float MaxAttackSec; // 0xe4(0x04)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTimer(struct ABP_em0600_Base_C* em0600); // Function BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C.SetTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_AttackAroundForwardMoveLoop_em0600(int32_t EntryPoint); // Function BP_AttackAroundForwardMoveLoop_em0600.BP_AttackAroundForwardMoveLoop_em0600_C.ExecuteUbergraph_BP_AttackAroundForwardMoveLoop_em0600 // (Final|UbergraphFunction) // @ game+0x1685580
};

