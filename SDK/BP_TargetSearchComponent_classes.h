// BlueprintGeneratedClass BP_TargetSearchComponent.BP_TargetSearchComponent_C
// Size: 0x188 (Inherited: 0x150)
struct UBP_TargetSearchComponent_C : UTargetSearchComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	struct AActor* CurrentLockBoss; // 0x158(0x08)
	bool IsCreateDebugWidgetTargetParam; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UBP_WidgetTargetParam_C* DebugWidgetTargetParamBP; // 0x168(0x08)
	struct UBP_PlayerFixParamater_C* PlayerFixParam; // 0x170(0x08)
	bool OldLockTarget; // 0x178(0x01)
	bool IsLockAutoChange; // 0x179(0x01)
	char pad_17A[0x6]; // 0x17a(0x06)
	struct UBP_PlayerCameraComponent_C* OwnerCameraComponent; // 0x180(0x08)

	void AutoNextTarget(bool bIgnoreRendered); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.AutoNextTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearLockBoss(); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ClearLockBoss // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetLockBoss(struct AActor* BossActor, bool bDummy); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.SetLockBoss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TargetUpdate(); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.TargetUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBossEnemyHp(); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.UpdateBossEnemyHp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLockBoss(struct AActor* LockBoss); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.GetLockBoss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool ChangeLockTarget(float AxisValue, struct TArray<struct ARSCharacterBase*> enemyList); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ChangeLockTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugWidgetTargetParam(); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.DebugWidgetTargetParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBossTarget(struct AActor* LockBoss); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.UpdateBossTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetLockTarget(bool bLock); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.SetLockTarget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_TargetSearchComponent(int32_t EntryPoint); // Function BP_TargetSearchComponent.BP_TargetSearchComponent_C.ExecuteUbergraph_BP_TargetSearchComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

