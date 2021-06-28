// BlueprintGeneratedClass ServiceBase.ServiceBase_C
// Size: 0xaa (Inherited: 0x98)
struct UServiceBase_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct AActor* TmpActor; // 0xa0(0x08)
	bool Result; // 0xa8(0x01)
	enum class EDrawDebugTrace DrawDebugTrace; // 0xa9(0x01)

	void IsAbleTargetState(struct AActor* TargetActor, bool IsAble); // Function ServiceBase.ServiceBase_C.IsAbleTargetState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchPotentialTargets(struct AActor* OwnActor, float searchRadius, float searchHeight, struct TArray<struct AActor*> IgnoreActors, struct TArray<struct AActor*> PotentialTargets); // Function ServiceBase.ServiceBase_C.SearchPotentialTargets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DecideSecondTarget(struct FBlackboardKeySelector SecondTarget, struct AActor* TargetActor, struct TArray<struct AActor*> PotentialTargets); // Function ServiceBase.ServiceBase_C.DecideSecondTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFirstTarget(struct FBlackboardKeySelector Target, struct FBlackboardKeySelector TargetLocation, struct AActor* TargetActor); // Function ServiceBase.ServiceBase_C.SetFirstTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckTargetViewLost(struct AActor* OwnActor, struct AActor* TargetActor, float LostDistance, struct TArray<struct AActor*> IgnoreActors, bool IsView, bool IsLost); // Function ServiceBase.ServiceBase_C.CheckTargetViewLost // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAIStateBattling(struct FBlackboardKeySelector KeySelector, bool IsValid); // Function ServiceBase.ServiceBase_C.IsAIStateBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EqualBattleAIStateToKeySelector(struct FBlackboardKeySelector KeySelector, enum class BattleAIStateType BattleAIStateType, bool Result); // Function ServiceBase.ServiceBase_C.EqualBattleAIStateToKeySelector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetBattleAIStateByKeySelector(struct FBlackboardKeySelector KeySelector, enum class BattleAIStateType BattleAIState); // Function ServiceBase.ServiceBase_C.SetBattleAIStateByKeySelector // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDrawDebugTrace(); // Function ServiceBase.ServiceBase_C.SetDrawDebugTrace // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattleAIStateInAction(enum class BattleAIStateType BattleAIStateType, bool InAction); // Function ServiceBase.ServiceBase_C.IsBattleAIStateInAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsDead(struct UObject* Object, bool IsDead); // Function ServiceBase.ServiceBase_C.IsDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void BubbleSortByDistance(struct TArray<struct AActor*> ActorList, struct AActor* originActor); // Function ServiceBase.ServiceBase_C.BubbleSortByDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActorsDistance(struct AActor* Actor0, struct AActor* Actor1, float Distance); // Function ServiceBase.ServiceBase_C.GetActorsDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function ServiceBase.ServiceBase_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_ServiceBase(int32_t EntryPoint); // Function ServiceBase.ServiceBase_C.ExecuteUbergraph_ServiceBase // (Final|UbergraphFunction) // @ game+0x1685580
};

