// BlueprintGeneratedClass BP_Action_Walk_em0300.BP_Action_Walk_em0300_C
// Size: 0xe8 (Inherited: 0xd0)
struct UBP_Action_Walk_em0300_C : UBP_TaskBase_em0300_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyActionAnimKind Start; // 0xd8(0x01)
	char pad_D9[0x3]; // 0xd9(0x03)
	float Timer; // 0xdc(0x04)
	float Time; // 0xe0(0x04)
	float InitTime; // 0xe4(0x04)

	void SelectAction(struct ABP_em0300Base_C* Actor); // Function BP_Action_Walk_em0300.BP_Action_Walk_em0300_C.SelectAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Action_Walk_em0300.BP_Action_Walk_em0300_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_Walk_em0300.BP_Action_Walk_em0300_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Action_Walk_em0300.BP_Action_Walk_em0300_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Action_Walk_em0300(int32_t EntryPoint); // Function BP_Action_Walk_em0300.BP_Action_Walk_em0300_C.ExecuteUbergraph_BP_Action_Walk_em0300 // (Final|UbergraphFunction) // @ game+0x1685580
};

