// BlueprintGeneratedClass EnemyService_UpdateActionTimer.EnemyService_UpdateActionTimer_C
// Size: 0xe0 (Inherited: 0xaa)
struct UEnemyService_UpdateActionTimer_C : UEnemyServiceBase_C {
	char pad_AA[0x6]; // 0xaa(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FBlackboardKeySelector ActionTimerKey; // 0xb8(0x28)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function EnemyService_UpdateActionTimer.EnemyService_UpdateActionTimer_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_EnemyService_UpdateActionTimer(int32_t EntryPoint); // Function EnemyService_UpdateActionTimer.EnemyService_UpdateActionTimer_C.ExecuteUbergraph_EnemyService_UpdateActionTimer // (Final|UbergraphFunction) // @ game+0x1685580
};

