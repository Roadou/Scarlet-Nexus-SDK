// BlueprintGeneratedClass BP_EnemyDamageMoveComponent.BP_EnemyDamageMoveComponent_C
// Size: 0x128 (Inherited: 0x118)
struct UBP_EnemyDamageMoveComponent_C : UEnemyDamageMoveComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x118(0x08)
	struct ARSBattleEnemy_C* OwnerEnemy; // 0x120(0x08)

	void Start(struct FVector DamageDir, float Power, bool DeadMove, struct AActor* attacker); // Function BP_EnemyDamageMoveComponent.BP_EnemyDamageMoveComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSec); // Function BP_EnemyDamageMoveComponent.BP_EnemyDamageMoveComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyDamageMoveComponent.BP_EnemyDamageMoveComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyDamageMoveComponent.BP_EnemyDamageMoveComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyDamageMoveComponent(int32_t EntryPoint); // Function BP_EnemyDamageMoveComponent.BP_EnemyDamageMoveComponent_C.ExecuteUbergraph_BP_EnemyDamageMoveComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

