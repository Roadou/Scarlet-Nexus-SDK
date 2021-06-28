// BlueprintGeneratedClass BP_ActionFallAction_em0700.BP_ActionFallAction_em0700_C
// Size: 0xfc (Inherited: 0xd8)
struct UBP_ActionFallAction_em0700_C : UBP_TaskBase_em0700_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FVector OldLocation; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct ABP_em0700_Base_C* em0700Base; // 0xf0(0x08)
	int32_t State; // 0xf8(0x04)

	void Update(struct AActor* Actor, float DeltaSec); // Function BP_ActionFallAction_em0700.BP_ActionFallAction_em0700_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionFallAction_em0700.BP_ActionFallAction_em0700_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_ActionFallAction_em0700.BP_ActionFallAction_em0700_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_ActionFallAction_em0700.BP_ActionFallAction_em0700_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ActionFallAction_em0700(int32_t EntryPoint); // Function BP_ActionFallAction_em0700.BP_ActionFallAction_em0700_C.ExecuteUbergraph_BP_ActionFallAction_em0700 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

