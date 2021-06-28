// BlueprintGeneratedClass BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C
// Size: 0x134 (Inherited: 0xd0)
struct UBP_Enemy_MoveToTargetPosNav_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xd8(0x28)
	float AcceptanceRadius; // 0x100(0x04)
	enum class EPathFollowingResult SaveResult; // 0x104(0x01)
	bool bSuccess; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct AActor* l_CurTarget; // 0x108(0x08)
	struct APawn* l_MovePawn; // 0x110(0x08)
	char SaveActionEnum; // 0x118(0x01)
	char pad_119[0x3]; // 0x119(0x03)
	float tmpHitWallTimer; // 0x11c(0x04)
	struct ARSBattleEnemy_C* battleEnemy; // 0x120(0x08)
	struct FVector TargetLocation; // 0x128(0x0c)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMoveFinished_21B4C00D4F87050819B9CB90B7796820(enum class EPathFollowingResult Result, struct AAIController* AIController); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.OnMoveFinished_21B4C00D4F87050819B9CB90B7796820 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnRequestFailed_21B4C00D4F87050819B9CB90B7796820(); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.OnRequestFailed_21B4C00D4F87050819B9CB90B7796820 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_MoveToTargetPosNav(int32_t EntryPoint); // Function BP_Enemy_MoveToTargetPosNav.BP_Enemy_MoveToTargetPosNav_C.ExecuteUbergraph_BP_Enemy_MoveToTargetPosNav // (Final|UbergraphFunction) // @ game+0x1685580
};

