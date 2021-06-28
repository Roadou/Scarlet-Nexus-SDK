// BlueprintGeneratedClass BP_FlyEnemy_GoHomeLocation.BP_FlyEnemy_GoHomeLocation_C
// Size: 0x140 (Inherited: 0xb0)
struct UBP_FlyEnemy_GoHomeLocation_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float RangeArea; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FBlackboardKeySelector Home; // 0xc0(0x28)
	struct FBlackboardKeySelector IsMove; // 0xe8(0x28)
	struct FBlackboardKeySelector TargetLocation; // 0x110(0x28)
	struct ABP_BattleFlyEnemy_C* EnemyActor; // 0x138(0x08)

	void OnFail_BCD58A4B4AACF8969DA159BB6C2A3722(enum class EPathFollowingResult MovementResult); // Function BP_FlyEnemy_GoHomeLocation.BP_FlyEnemy_GoHomeLocation_C.OnFail_BCD58A4B4AACF8969DA159BB6C2A3722 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_BCD58A4B4AACF8969DA159BB6C2A3722(enum class EPathFollowingResult MovementResult); // Function BP_FlyEnemy_GoHomeLocation.BP_FlyEnemy_GoHomeLocation_C.OnSuccess_BCD58A4B4AACF8969DA159BB6C2A3722 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_FlyEnemy_GoHomeLocation.BP_FlyEnemy_GoHomeLocation_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_FlyEnemy_GoHomeLocation.BP_FlyEnemy_GoHomeLocation_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_FlyEnemy_GoHomeLocation(int32_t EntryPoint); // Function BP_FlyEnemy_GoHomeLocation.BP_FlyEnemy_GoHomeLocation_C.ExecuteUbergraph_BP_FlyEnemy_GoHomeLocation // (Final|UbergraphFunction) // @ game+0x1685580
};

