// BlueprintGeneratedClass BP_Enemy_MoveToTargetDirect.BP_Enemy_MoveToTargetDirect_C
// Size: 0x111 (Inherited: 0xd0)
struct UBP_Enemy_MoveToTargetDirect_C : UBP_TaskBase_Enemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xd8(0x28)
	float AcceptanceRadius; // 0x100(0x04)
	enum class EPathFollowingResult SaveResult; // 0x104(0x01)
	bool bSuccess; // 0x105(0x01)
	char pad_106[0x2]; // 0x106(0x02)
	struct AActor* l_CurTarget; // 0x108(0x08)
	char SaveActionEnum; // 0x110(0x01)

	void SetCoolTime(struct ARSBattleEnemy_C* Actor, bool return); // Function BP_Enemy_MoveToTargetDirect.BP_Enemy_MoveToTargetDirect_C.SetCoolTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetDirect.BP_Enemy_MoveToTargetDirect_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveToTargetDirect.BP_Enemy_MoveToTargetDirect_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function BP_Enemy_MoveToTargetDirect.BP_Enemy_MoveToTargetDirect_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_MoveToTargetDirect(int32_t EntryPoint); // Function BP_Enemy_MoveToTargetDirect.BP_Enemy_MoveToTargetDirect_C.ExecuteUbergraph_BP_Enemy_MoveToTargetDirect // (Final|UbergraphFunction) // @ game+0x1685580
};

