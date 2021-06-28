// BlueprintGeneratedClass BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C
// Size: 0x119 (Inherited: 0xd0)
struct UBP_Enemy_MoveToTargetNav_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xd8(0x28)
	float AcceptanceRadius; // 0x100(0x04)
	enum class EPathFollowingResult SaveResult; // 0x104(0x01)
	bool bSuccess; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct AActor* l_CurTarget; // 0x108(0x08)
	struct APawn* l_MovePawn; // 0x110(0x08)
	char SaveActionEnum; // 0x118(0x01)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFail_AB85B02C4CA1E8F304D09985960D59E9(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.OnFail_AB85B02C4CA1E8F304D09985960D59E9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_AB85B02C4CA1E8F304D09985960D59E9(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.OnSuccess_AB85B02C4CA1E8F304D09985960D59E9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_MoveToTargetNav(int32_t EntryPoint); // Function BP_Enemy_MoveToTargetNav.BP_Enemy_MoveToTargetNav_C.ExecuteUbergraph_BP_Enemy_MoveToTargetNav // (Final|UbergraphFunction) // @ game+0x1685580
};

