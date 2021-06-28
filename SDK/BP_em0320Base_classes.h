// BlueprintGeneratedClass BP_em0320Base.BP_em0320Base_C
// Size: 0x2429 (Inherited: 0x23dd)
struct ABP_em0320Base_C : ABP_em0300Base_C {
	char pad_23DD[0x3]; // 0x23dd(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x23e0(0x08)
	bool CurGuardTop; // 0x23e8(0x01)
	char pad_23E9[0x3]; // 0x23e9(0x03)
	float ArmorDeltaSeconds; // 0x23ec(0x04)
	struct UAnimMontage* ArmorChangeMontage; // 0x23f0(0x08)
	bool IsGuardChange; // 0x23f8(0x01)
	char pad_23F9[0x7]; // 0x23f9(0x07)
	struct UAnimMontage* ArmorChangeEndMontage; // 0x2400(0x08)
	float ArmorChangeIgnoreSeconds; // 0x2408(0x04)
	int32_t WeakHitCount; // 0x240c(0x04)
	int32_t ArmorHitCount; // 0x2410(0x04)
	int32_t ElapsedCount; // 0x2414(0x04)
	int32_t WeakHitNo; // 0x2418(0x04)
	int32_t ArmorHitNo; // 0x241c(0x04)
	bool ReserveArmorMove; // 0x2420(0x01)
	bool IsArmorBreak; // 0x2421(0x01)
	bool WeakArmorBack; // 0x2422(0x01)
	bool WeakArmorBackToUp; // 0x2423(0x01)
	int32_t CurWeakArmor; // 0x2424(0x04)
	enum class EEnemyGuardType_em0320 SetGuardType; // 0x2428(0x01)

	void Action After Attack Water Gun Cell(); // Function BP_em0320Base.BP_em0320Base_C.Action After Attack Water Gun Cell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActionAfterAttackJump(); // Function BP_em0320Base.BP_em0320Base_C.ActionAfterAttackJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventEnd(bool bDummy); // Function BP_em0320Base.BP_em0320Base_C.DoDynamicEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakTargetTransform(struct FVector AttackerPos, struct FTransform WeakTransform); // Function BP_em0320Base.BP_em0320Base_C.GetWeakTargetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsHitPrimitiveByObjectName(struct UPrimitiveComponent* Primitive, struct FString Name, bool IsHit); // Function BP_em0320Base.BP_em0320Base_C.IsHitPrimitiveByObjectName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWaterTankBreakCeiling(enum class EnemyDamageDownAnimKind DamageDown); // Function BP_em0320Base.BP_em0320Base_C.SetWaterTankBreakCeiling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeakVisble(bool visble, bool dummy); // Function BP_em0320Base.BP_em0320Base_C.SetWeakVisble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsGuardUp(bool GuardUp); // Function BP_em0320Base.BP_em0320Base_C.IsGuardUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void UpdateDamageAnim(bool DamageEnd, bool DamageDownEnd); // Function BP_em0320Base.BP_em0320Base_C.UpdateDamageAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FixedGuardProc(); // Function BP_em0320Base.BP_em0320Base_C.FixedGuardProc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ArmorBreak(); // Function BP_em0320Base.BP_em0320Base_C.ArmorBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitDamageCall(struct TArray<struct FHCHitResult> Result, bool Ret); // Function BP_em0320Base.BP_em0320Base_C.OnHitDamageCall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakParamReset(); // Function BP_em0320Base.BP_em0320Base_C.WeakParamReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(); // Function BP_em0320Base.BP_em0320Base_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageActorHit(struct FHCHitResult HitResult, bool dummy); // Function BP_em0320Base.BP_em0320Base_C.OnDamageActorHit // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_em0320Base.BP_em0320Base_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0320Base.BP_em0320Base_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GuardChange(enum class EEnemyGuardType_em0320 SettingGuardType); // Function BP_em0320Base.BP_em0320Base_C.GuardChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_em0320Base.BP_em0320Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetDamageDownAnim(enum class EnemyDamageDownAnimKind Damage); // Function BP_em0320Base.BP_em0320Base_C.SetDamageDownAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0320Base.BP_em0320Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDamage(); // Function BP_em0320Base.BP_em0320Base_C.OnBrainCrashDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0320Base(int32_t EntryPoint); // Function BP_em0320Base.BP_em0320Base_C.ExecuteUbergraph_BP_em0320Base // (Final|UbergraphFunction) // @ game+0x1685580
};

