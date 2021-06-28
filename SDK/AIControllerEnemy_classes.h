// BlueprintGeneratedClass AIControllerEnemy.AIControllerEnemy_C
// Size: 0x350 (Inherited: 0x338)
struct AAIControllerEnemy_C : AAIController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct FName HomeLocation; // 0x340(0x08)
	struct FName SelfActor; // 0x348(0x08)

	void SetAiController(struct UBlackboardData* Blackboard, struct UBehaviorTree* tree); // Function AIControllerEnemy.AIControllerEnemy_C.SetAiController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function AIControllerEnemy.AIControllerEnemy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_AIControllerEnemy(int32_t EntryPoint); // Function AIControllerEnemy.AIControllerEnemy_C.ExecuteUbergraph_AIControllerEnemy // (Final|UbergraphFunction) // @ game+0x1685580
};

