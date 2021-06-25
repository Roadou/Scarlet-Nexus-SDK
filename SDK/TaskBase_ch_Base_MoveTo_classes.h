// BlueprintGeneratedClass TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C
// Size: 0x178 (Inherited: 0x170)
struct UTaskBase_ch_Base_MoveTo_C : UBTTask_RSPlayerMoveTo_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)

	void GetRandomReachablePointAndCheck(struct FVector Origin, float Radius, struct ANavigationData* NavData, struct FVector Point, bool IsValidPoint); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.GetRandomReachablePointAndCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalculateSpeedScaleFromDistance(struct FVector Start, struct FVector Goal, float BaseRange, float BaseSpeedScale, float Scale); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.CalculateSpeedScaleFromDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomPointOriginTarget(struct AActor* OriginTarget, float Radius, float FlightAltittude, struct FVector Point); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.GetRandomPointOriginTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomPointOriginLocation(struct FVector OriginLocation, float Radius, float FlightAltittude, struct FVector Point); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.GetRandomPointOriginLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TurnToTarget(struct APawn* ControlledPawn, struct AActor* Target, float DeltaSeconds, float interpSpeed); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.TurnToTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugPrintStringWithMyName(struct APawn* ControlledPawn, struct FString String); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.DebugPrintStringWithMyName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ConvertDistanceAToB(struct AActor* ActorA, struct AActor* ActorB, float Distance, float ConvertedDistance); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.ConvertDistanceAToB // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetRandomReachablePointFromTarget(struct AActor* TargetActor, float Radius, struct ANavigationData* NavData, struct FVector ReachablePoint, bool IsValidPoint); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.GetRandomReachablePointFromTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDirectionByMovementMode(struct APawn* FromControlledPawn, struct AActor* ToTarget, struct FVector Direction); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.GetDirectionByMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void StopMoveAndAbort(struct AController* OwnerController); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.StopMoveAndAbort // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDirectionVectorXY(struct FVector From, struct FVector To, struct FVector Direction); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.GetDirectionVectorXY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_TaskBase_ch_Base_MoveTo(int32_t EntryPoint); // Function TaskBase_ch_Base_MoveTo.TaskBase_ch_Base_MoveTo_C.ExecuteUbergraph_TaskBase_ch_Base_MoveTo // (Final|UbergraphFunction) // @ game+0x1685580
};

