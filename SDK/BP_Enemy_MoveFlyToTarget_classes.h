// BlueprintGeneratedClass BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C
// Size: 0x108 (Inherited: 0xb0)
struct UBP_Enemy_MoveFlyToTarget_C : UTaskBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FBlackboardKeySelector IsMove; // 0xb8(0x28)
	float AcceptanceRadius; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct ABP_BattleFlyEnemy_C* EnemyActor; // 0xe8(0x08)
	struct AActor* TargetActor; // 0xf0(0x08)
	bool IsVectorMove; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct ARSBattleCharacter_C* TargetCharacter; // 0x100(0x08)

	void IsCanMove(struct APawn* Enemy, bool IsMove); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.IsCanMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDamageAnim(struct ARSBattleEnemy_C* Actor); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.IsDamageAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnFail_FF90BE5948074A45CBF5538835903A59(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.OnFail_FF90BE5948074A45CBF5538835903A59 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnSuccess_FF90BE5948074A45CBF5538835903A59(enum class EPathFollowingResult MovementResult); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.OnSuccess_FF90BE5948074A45CBF5538835903A59 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_MoveFlyToTarget(int32_t EntryPoint); // Function BP_Enemy_MoveFlyToTarget.BP_Enemy_MoveFlyToTarget_C.ExecuteUbergraph_BP_Enemy_MoveFlyToTarget // (Final|UbergraphFunction) // @ game+0x1685580
};

