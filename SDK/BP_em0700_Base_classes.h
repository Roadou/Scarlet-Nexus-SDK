// BlueprintGeneratedClass BP_em0700_Base.BP_em0700_Base_C
// Size: 0x2210 (Inherited: 0x20ec)
struct ABP_em0700_Base_C : ABP_BattleFlyEnemy_C {
	char pad_20EC[0x4]; // 0x20ec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x20f0(0x08)
	struct UDamagePartCollisionComponent* Core; // 0x20f8(0x08)
	struct UBP_EnemyWeaponManageComponent_C* BP_EnemyWeaponManageComponent; // 0x2100(0x08)
	struct UBP_Param_em0700_C* BP_Param_em0700; // 0x2108(0x08)
	struct UDamagePartCollisionComponent* BackBody; // 0x2110(0x08)
	struct UBP_Ai_em0700_C* BP_Ai_em0700; // 0x2118(0x08)
	float CT_LongRangeAttakc; // 0x2120(0x04)
	float CT_AttackHighSpeed; // 0x2124(0x04)
	float CT_MissileAttack; // 0x2128(0x04)
	struct FName FlyingName; // 0x212c(0x08)
	bool IsWeakOpen; // 0x2134(0x01)
	bool RequestDamage; // 0x2135(0x01)
	enum class Enum_em0700 MissileKind; // 0x2136(0x01)
	char pad_2137[0x1]; // 0x2137(0x01)
	float Speed; // 0x2138(0x04)
	enum class Enum_em0700 NextAction; // 0x213c(0x01)
	char pad_213D[0x3]; // 0x213d(0x03)
	float CT_GroundWait; // 0x2140(0x04)
	float CT_FlyWait; // 0x2144(0x04)
	float DeltaTimer; // 0x2148(0x04)
	float Sign; // 0x214c(0x04)
	float CT_FlyThreat; // 0x2150(0x04)
	float CT_GroundThreat; // 0x2154(0x04)
	float CT_ActionLand; // 0x2158(0x04)
	float CT_ActionTakeoff; // 0x215c(0x04)
	float MoveSpeed; // 0x2160(0x04)
	struct FVector AddVector; // 0x2164(0x0c)
	float CT_AttackTakeoff; // 0x2170(0x04)
	bool IsActionChange; // 0x2174(0x01)
	char pad_2175[0x3]; // 0x2175(0x03)
	float LariatDistance; // 0x2178(0x04)
	float CT_LariatAttack; // 0x217c(0x04)
	float CT_LongRangeFlyAttack; // 0x2180(0x04)
	bool IsCounter; // 0x2184(0x01)
	enum class Enum_em0700 GroundAction; // 0x2185(0x01)
	bool IsWalkAbort; // 0x2186(0x01)
	char pad_2187[0x1]; // 0x2187(0x01)
	float CT_FallAttack; // 0x2188(0x04)
	float CT_GroundLariat; // 0x218c(0x04)
	int32_t CurrentHeightState; // 0x2190(0x04)
	float CurrentStateTime; // 0x2194(0x04)
	bool IsFallHeight; // 0x2198(0x01)
	char pad_2199[0x3]; // 0x2199(0x03)
	struct FVector FallAttackEffectLocation; // 0x219c(0x0c)
	float CurrentCheckAroundTime; // 0x21a8(0x04)
	bool bExistAround; // 0x21ac(0x01)
	char pad_21AD[0x3]; // 0x21ad(0x03)
	float FlyHeightTime; // 0x21b0(0x04)
	bool bChangeFlyHeight; // 0x21b4(0x01)
	char pad_21B5[0x3]; // 0x21b5(0x03)
	float NextFlyHeight; // 0x21b8(0x04)
	float CurrentFlyHeightTime; // 0x21bc(0x04)
	float CT_Breakaway; // 0x21c0(0x04)
	float BeforeFlyHeight; // 0x21c4(0x04)
	float CT_Escape; // 0x21c8(0x04)
	bool bEscapeMove; // 0x21cc(0x01)
	bool bEscapeAttack; // 0x21cd(0x01)
	bool bHitBullet; // 0x21ce(0x01)
	char pad_21CF[0x1]; // 0x21cf(0x01)
	float CT_WalkLR; // 0x21d0(0x04)
	int32_t AttackAttribute; // 0x21d4(0x04)
	float CT_FireShot; // 0x21d8(0x04)
	float CT_ElectricShot; // 0x21dc(0x04)
	float CT_FireRush; // 0x21e0(0x04)
	float CT_ElectricRush; // 0x21e4(0x04)
	bool bLostDueToStealth; // 0x21e8(0x01)
	bool bEnableFallAction; // 0x21e9(0x01)
	char pad_21EA[0x2]; // 0x21ea(0x02)
	struct FGameTimer FallActionTimer; // 0x21ec(0x0c)
	struct FGameTimer EscapeIntervalTimer; // 0x21f8(0x0c)
	bool bHitWeak; // 0x2204(0x01)
	bool bNotFoundGroundWait; // 0x2205(0x01)
	char pad_2206[0x2]; // 0x2206(0x02)
	struct UAnimMontage* FlyDeadMontage; // 0x2208(0x08)

	enum class EEnemyTribe GetEnemyTribe(); // Function BP_em0700_Base.BP_em0700_Base_C.GetEnemyTribe // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Enemy Target Battle(); // Function BP_em0700_Base.BP_em0700_Base_C.Set Enemy Target Battle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadMontage(bool bEnableConsiderFlag); // Function BP_em0700_Base.BP_em0700_Base_C.SetDeadMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBaseMontage(struct UAnimMontage* BaseMontage); // Function BP_em0700_Base.BP_em0700_Base_C.SetBaseMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(bool return); // Function BP_em0700_Base.BP_em0700_Base_C.Initialize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShotMissile(int32_t InAttributeType); // Function BP_em0700_Base.BP_em0700_Base_C.ShotMissile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallFuncDamageDownEnd(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.CallFuncDamageDownEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartCrashChance(bool bStart); // Function BP_em0700_Base.BP_em0700_Base_C.OnStartCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndCrashChance(bool bEnd); // Function BP_em0700_Base.BP_em0700_Base_C.OnEndCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallFuncDamageDownStart(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.CallFuncDamageDownStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamageActorHit(struct FHCHitResult HitResult, bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.OnDamageActorHit // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueDownCondition(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, bool bDown); // Function BP_em0700_Base.BP_em0700_Base_C.IsUniqueDownCondition // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUniqueEffectiveSas(struct AActor* attackActor, bool IsEffectiveSas, float WinceRate, float KnockBackRate, float DownRate, float CrashRate); // Function BP_em0700_Base.BP_em0700_Base_C.IsUniqueEffectiveSas // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetTargetHate(); // Function BP_em0700_Base.BP_em0700_Base_C.ResetTargetHate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableFallAction(bool OutEnable); // Function BP_em0700_Base.BP_em0700_Base_C.IsEnableFallAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void FinalizeFallAction(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.FinalizeFallAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeFallAction(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.InitializeFallAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFallActionTimer(bool IsOver); // Function BP_em0700_Base.BP_em0700_Base_C.UpdateFallActionTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetAction(bool bMoveBrainField, bool bReset); // Function BP_em0700_Base.BP_em0700_Base_C.OnEnemyBrainFieldResetAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function BP_em0700_Base.BP_em0700_Base_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableLostAction(bool bDisable); // Function BP_em0700_Base.BP_em0700_Base_C.IsDisableLostAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function BP_em0700_Base.BP_em0700_Base_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct UEnemyAiComponentBase* GetEnemyAiComponent(); // Function BP_em0700_Base.BP_em0700_Base_C.GetEnemyAiComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetAttackAttribute(int32_t Attribute); // Function BP_em0700_Base.BP_em0700_Base_C.SetAttackAttribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateEnemyWeapon(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.CreateEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugUpdate(float DeltaSec); // Function BP_em0700_Base.BP_em0700_Base_C.DebugUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetUniqueConditionText(struct TArray<struct FText> text); // Function BP_em0700_Base.BP_em0700_Base_C.DebugGetUniqueConditionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetAiUniqueCondition(char ConditionNo, bool bResult); // Function BP_em0700_Base.BP_em0700_Base_C.GetAiUniqueCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SearchNextMoveDir(struct FVector MoveDir, float HitDistance); // Function BP_em0700_Base.BP_em0700_Base_C.SearchNextMoveDir // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CloseGauge(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.CloseGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OpenGauge(bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.OpenGauge // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetChangeFlyHeight(float Height, float ChangeTime); // Function BP_em0700_Base.BP_em0700_Base_C.SetChangeFlyHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFlyHeight(float DeltaSec); // Function BP_em0700_Base.BP_em0700_Base_C.UpdateFlyHeight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAround(float DeltaSec); // Function BP_em0700_Base.BP_em0700_Base_C.CheckAround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndFallAttackEffect(bool Dammy); // Function BP_em0700_Base.BP_em0700_Base_C.EndFallAttackEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFallAttackEffectLocation(struct FVector EffectLocation, bool Dammy); // Function BP_em0700_Base.BP_em0700_Base_C.SetFallAttackEffectLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartFallAttackEffect(int32_t Type, bool Dammy); // Function BP_em0700_Base.BP_em0700_Base_C.StartFallAttackEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeHeightState(bool Dammy); // Function BP_em0700_Base.BP_em0700_Base_C.InitializeHeightState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHeightState(float DeltaSec, bool Dammy); // Function BP_em0700_Base.BP_em0700_Base_C.UpdateHeightState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHeightState(int32_t State, bool Dammy); // Function BP_em0700_Base.BP_em0700_Base_C.SetHeightState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimNotifyCondition(int32_t ConditionNo, bool Result); // Function BP_em0700_Base.BP_em0700_Base_C.GetAnimNotifyCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBerserkAttackTimer(); // Function BP_em0700_Base.BP_em0700_Base_C.GetBerserkAttackTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyEnumLength(int32_t Length); // Function BP_em0700_Base.BP_em0700_Base_C.GetEnemyEnumLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsFlyHeightAdjust(bool IsFlyHeightAdjust); // Function BP_em0700_Base.BP_em0700_Base_C.IsFlyHeightAdjust // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CounterAttack(enum class HCSkillAttackType AttackType, struct AActor* attacker, bool IsHitWeek, bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.CounterAttack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimer(float DeltaSeconds); // Function BP_em0700_Base.BP_em0700_Base_C.UpdateTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0700_Base.BP_em0700_Base_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAiTimer(char Enum, bool return); // Function BP_em0700_Base.BP_em0700_Base_C.SetAiTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamageMontage(struct TArray<struct FHCHitResult> Result, bool Damage_Enable); // Function BP_em0700_Base.BP_em0700_Base_C.DamageMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiTimer(char Enum, float AiTimer); // Function BP_em0700_Base.BP_em0700_Base_C.GetAiTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetAiDataTableString(char Enum, struct FString Param); // Function BP_em0700_Base.BP_em0700_Base_C.GetAiDataTableString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0700_Base.BP_em0700_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void RequestDamageMotion(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, bool IsSideDamage, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, struct AActor* AttackObj, bool WasStartDamage); // Function BP_em0700_Base.BP_em0700_Base_C.RequestDamageMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageDownAnim(enum class EnemyDamageDownAnimKind Damage); // Function BP_em0700_Base.BP_em0700_Base_C.SetDamageDownAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_em0700_Base.BP_em0700_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0700_Base(int32_t EntryPoint); // Function BP_em0700_Base.BP_em0700_Base_C.ExecuteUbergraph_BP_em0700_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

