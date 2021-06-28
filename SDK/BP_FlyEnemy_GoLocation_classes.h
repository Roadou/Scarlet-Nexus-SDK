// BlueprintGeneratedClass BP_FlyEnemy_GoLocation.BP_FlyEnemy_GoLocation_C
// Size: 0x110 (Inherited: 0xb0)
struct UBP_FlyEnemy_GoLocation_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xb8(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0xe0(0x28)
	struct ABP_BattleFlyEnemy_C* EnemyActor; // 0x108(0x08)

	void OnFail_0E4E9D584AA6043600D314B0EB4183F3(enum class EPathFollowingResult MovementResult); // Function BP_FlyEnemy_GoLocation.BP_FlyEnemy_GoLocation_C.OnFail_0E4E9D584AA6043600D314B0EB4183F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_0E4E9D584AA6043600D314B0EB4183F3(enum class EPathFollowingResult MovementResult); // Function BP_FlyEnemy_GoLocation.BP_FlyEnemy_GoLocation_C.OnSuccess_0E4E9D584AA6043600D314B0EB4183F3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_FlyEnemy_GoLocation.BP_FlyEnemy_GoLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_FlyEnemy_GoLocation.BP_FlyEnemy_GoLocation_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_FlyEnemy_GoLocation(int32_t EntryPoint); // Function BP_FlyEnemy_GoLocation.BP_FlyEnemy_GoLocation_C.ExecuteUbergraph_BP_FlyEnemy_GoLocation // (Final|UbergraphFunction) // @ game+0x1685580
};

