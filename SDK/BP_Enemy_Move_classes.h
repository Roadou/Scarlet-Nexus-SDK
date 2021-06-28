// BlueprintGeneratedClass BP_Enemy_Move.BP_Enemy_Move_C
// Size: 0xb9 (Inherited: 0xb0)
struct UBP_Enemy_Move_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	enum class EnemyMoveAnimKind MoveAnim; // 0xb8(0x01)

	struct FVector GetDirectionXYVector(struct FVector From, struct FVector To); // Function BP_Enemy_Move.BP_Enemy_Move_C.GetDirectionXYVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_Move.BP_Enemy_Move_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_Move(int32_t EntryPoint); // Function BP_Enemy_Move.BP_Enemy_Move_C.ExecuteUbergraph_BP_Enemy_Move // (Final|UbergraphFunction) // @ game+0x1685580
};

