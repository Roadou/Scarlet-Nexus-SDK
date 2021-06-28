// BlueprintGeneratedClass BTT_Enemy_LostAction.BTT_Enemy_LostAction_C
// Size: 0xd9 (Inherited: 0xd0)
struct UBTT_Enemy_LostAction_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	enum class EnemyActionAnimKind LostAction; // 0xd8(0x01)

	void Update(struct APawn* Pawn, float DeltaSec); // Function BTT_Enemy_LostAction.BTT_Enemy_LostAction_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct AAIController* Controller, struct APawn* Pawn); // Function BTT_Enemy_LostAction.BTT_Enemy_LostAction_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_LostAction.BTT_Enemy_LostAction_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BTT_Enemy_LostAction.BTT_Enemy_LostAction_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BTT_Enemy_LostAction.BTT_Enemy_LostAction_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BTT_Enemy_LostAction(int32_t EntryPoint); // Function BTT_Enemy_LostAction.BTT_Enemy_LostAction_C.ExecuteUbergraph_BTT_Enemy_LostAction // (Final|UbergraphFunction) // @ game+0x1685580
};

