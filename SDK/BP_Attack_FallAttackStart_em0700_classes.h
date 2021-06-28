// BlueprintGeneratedClass BP_Attack_FallAttackStart_em0700.BP_Attack_FallAttackStart_em0700_C
// Size: 0x100 (Inherited: 0xd8)
struct UBP_Attack_FallAttackStart_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	float DeltaZ; // 0xe0(0x04)
	struct FVector PreActorLocation; // 0xe4(0x0c)
	bool IsFree; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct ABP_em0700_Base_C* em0700Base; // 0xf8(0x08)

	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_FallAttackStart_em0700.BP_Attack_FallAttackStart_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Attack_FallAttackStart_em0700.BP_Attack_FallAttackStart_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Attack_FallAttackStart_em0700.BP_Attack_FallAttackStart_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Attack_FallAttackStart_em0700(int32_t EntryPoint); // Function BP_Attack_FallAttackStart_em0700.BP_Attack_FallAttackStart_em0700_C.ExecuteUbergraph_BP_Attack_FallAttackStart_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

