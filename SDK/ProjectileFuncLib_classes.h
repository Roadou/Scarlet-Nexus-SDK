// BlueprintGeneratedClass ProjectileFuncLib.ProjectileFuncLib_C
// Size: 0x28 (Inherited: 0x28)
struct UProjectileFuncLib_C : UBlueprintFunctionLibrary {

	void CalcActorForwardGroundLocation(struct AActor* Actor, float Distance, struct UObject* __WorldContext, struct FVector groundLocation); // Function ProjectileFuncLib.ProjectileFuncLib_C.CalcActorForwardGroundLocation // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TraceGroundLocation(struct FVector baseLocation, float startHeightOffset, float traceLength, struct UObject* __WorldContext, struct FVector groundLocation); // Function ProjectileFuncLib.ProjectileFuncLib_C.TraceGroundLocation // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupProjectileComponents(struct AActor* projectileActor, struct AActor* OwnerActor, struct UObject* __WorldContext); // Function ProjectileFuncLib.ProjectileFuncLib_C.SetupProjectileComponents // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

