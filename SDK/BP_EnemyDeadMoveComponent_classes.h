// BlueprintGeneratedClass BP_EnemyDeadMoveComponent.BP_EnemyDeadMoveComponent_C
// Size: 0x118 (Inherited: 0x110)
struct UBP_EnemyDeadMoveComponent_C : UEnemyDeadMoveComponentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)

	void Start(float BlendExp, float MoveLength, enum class EEasingFunc Function, float MoveSeconds); // Function BP_EnemyDeadMoveComponent.BP_EnemyDeadMoveComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_EnemyDeadMoveComponent.BP_EnemyDeadMoveComponent_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyDeadMoveComponent.BP_EnemyDeadMoveComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyDeadMoveComponent(int32_t EntryPoint); // Function BP_EnemyDeadMoveComponent.BP_EnemyDeadMoveComponent_C.ExecuteUbergraph_BP_EnemyDeadMoveComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

