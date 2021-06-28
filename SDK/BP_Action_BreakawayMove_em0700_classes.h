// BlueprintGeneratedClass BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C
// Size: 0x100 (Inherited: 0xd8)
struct UBP_Action_BreakawayMove_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	enum class EnemyActionAnimKind Action; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FVector MoveDir; // 0xe4(0x0c)
	int32_t BreakawayState; // 0xf0(0x04)
	float CurrentStateTime; // 0xf4(0x04)
	float MoveTime; // 0xf8(0x04)
	float MoveSpeed; // 0xfc(0x04)

	void Update(struct AActor* Actor, float DeltaSec); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EvaluateBreakawayDir(struct AActor* Actor); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.EvaluateBreakawayDir // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct AActor* Actor); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Action_BreakawayMove_em0700(int32_t EntryPoint); // Function BP_Action_BreakawayMove_em0700.BP_Action_BreakawayMove_em0700_C.ExecuteUbergraph_BP_Action_BreakawayMove_em0700 // (Final|UbergraphFunction) // @ game+0x1685580
};

