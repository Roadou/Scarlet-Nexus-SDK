// BlueprintGeneratedClass BP_Enemy_SpawnAnim.BP_Enemy_SpawnAnim_C
// Size: 0xb9 (Inherited: 0xb0)
struct UBP_Enemy_SpawnAnim_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	enum class EnemyMoveAnimKind MoveAnim; // 0xb8(0x01)

	struct FVector GetDirectionXYVector(struct FVector From, struct FVector To); // Function BP_Enemy_SpawnAnim.BP_Enemy_SpawnAnim_C.GetDirectionXYVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_SpawnAnim.BP_Enemy_SpawnAnim_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_SpawnAnim.BP_Enemy_SpawnAnim_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Enemy_SpawnAnim.BP_Enemy_SpawnAnim_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_SpawnAnim(int32_t EntryPoint); // Function BP_Enemy_SpawnAnim.BP_Enemy_SpawnAnim_C.ExecuteUbergraph_BP_Enemy_SpawnAnim // (Final|UbergraphFunction) // @ game+0x1685580
};

