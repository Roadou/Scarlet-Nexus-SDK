// BlueprintGeneratedClass BP_FlyEnemyPawnBase.BP_FlyEnemyPawnBase_C
// Size: 0x2bc (Inherited: 0x290)
struct ABP_FlyEnemyPawnBase_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UFloatingPawnMovement* FloatingPawnMovement; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)
	struct ABP_BattleFlyEnemy_C* EnemyOwner; // 0x2a8(0x08)
	bool IsAiMove; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	float AiMoveFailSec; // 0x2b4(0x04)
	float DefaultMaxSpeed; // 0x2b8(0x04)

	void Set Actor All Tick Enabled(bool bEnabled); // Function BP_FlyEnemyPawnBase.BP_FlyEnemyPawnBase_C.Set Actor All Tick Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_FlyEnemyPawnBase.BP_FlyEnemyPawnBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_FlyEnemyPawnBase.BP_FlyEnemyPawnBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_FlyEnemyPawnBase(int32_t EntryPoint); // Function BP_FlyEnemyPawnBase.BP_FlyEnemyPawnBase_C.ExecuteUbergraph_BP_FlyEnemyPawnBase // (Final|UbergraphFunction) // @ game+0x1685580
};

