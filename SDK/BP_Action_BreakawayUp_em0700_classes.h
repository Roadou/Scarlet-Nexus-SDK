// BlueprintGeneratedClass BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C
// Size: 0xec (Inherited: 0xd8)
struct UBP_Action_BreakawayUp_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyActionAnimKind Action; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float CurrentStateTime; // 0xe4(0x04)
	float WaitTime; // 0xe8(0x04)

	void Update(struct AActor* Actor, float DeltaSec); // Function BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct AActor* Actor); // Function BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Action_BreakawayUp_em0700(int32_t EntryPoint); // Function BP_Action_BreakawayUp_em0700.BP_Action_BreakawayUp_em0700_C.ExecuteUbergraph_BP_Action_BreakawayUp_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

