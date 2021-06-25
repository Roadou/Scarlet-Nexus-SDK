// BlueprintGeneratedClass BP_InterceptComponent.BP_InterceptComponent_C
// Size: 0xdf (Inherited: 0xc0)
struct UBP_InterceptComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct AActor* InterceptObject; // 0xc8(0x08)
	struct ARsBattleHero_C* OwnerHero; // 0xd0(0x08)
	float InterceptRange; // 0xd8(0x04)
	bool bInterceptAble; // 0xdc(0x01)
	bool bNoEnemyAttackIntercept; // 0xdd(0x01)
	bool bReserveIntercept; // 0xde(0x01)

	void CatchInterceptObject(); // Function BP_InterceptComponent.BP_InterceptComponent_C.CatchInterceptObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsReserveIntercept(bool bReserve); // Function BP_InterceptComponent.BP_InterceptComponent_C.IsReserveIntercept // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsNoEnemyAttackIntercept(bool bNoEnemyAttack); // Function BP_InterceptComponent.BP_InterceptComponent_C.IsNoEnemyAttackIntercept // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsExistInterceptObject(bool bExist); // Function BP_InterceptComponent.BP_InterceptComponent_C.IsExistInterceptObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ReserveIntercept(); // Function BP_InterceptComponent.BP_InterceptComponent_C.ReserveIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelIntercept(); // Function BP_InterceptComponent.BP_InterceptComponent_C.CancelIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetIntercept(); // Function BP_InterceptComponent.BP_InterceptComponent_C.ResetIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInterceptAble(bool bAble); // Function BP_InterceptComponent.BP_InterceptComponent_C.IsInterceptAble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ExecIntercept(); // Function BP_InterceptComponent.BP_InterceptComponent_C.ExecIntercept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckIntercept(bool bExistObject); // Function BP_InterceptComponent.BP_InterceptComponent_C.CheckIntercept // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_InterceptComponent.BP_InterceptComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_InterceptComponent.BP_InterceptComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_InterceptComponent(int32_t EntryPoint); // Function BP_InterceptComponent.BP_InterceptComponent_C.ExecuteUbergraph_BP_InterceptComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

