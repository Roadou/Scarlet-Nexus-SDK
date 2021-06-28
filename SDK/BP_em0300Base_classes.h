// BlueprintGeneratedClass BP_em0300Base.BP_em0300Base_C
// Size: 0x23dd (Inherited: 0x2088)
struct ABP_em0300Base_C : ARSBattleEnemy_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2088(0x08)
	struct UDamagePartCollisionComponent* Core; // 0x2090(0x08)
	struct UBP_EnemyFurComponent_C* BP_EnemyFurComponent; // 0x2098(0x08)
	struct UBP_EnemyWeaponManageComponent_C* BP_EnemyWeaponManageComponent; // 0x20a0(0x08)
	struct UBP_Param_em0300_C* BP_Param_em0300; // 0x20a8(0x08)
	struct UDamagePartCollisionComponent* Tail; // 0x20b0(0x08)
	struct UDamagePartCollisionComponent* Tank; // 0x20b8(0x08)
	struct UDamagePartCollisionComponent* LeftCenterArm; // 0x20c0(0x08)
	struct UDamagePartCollisionComponent* LeftCenterElbow; // 0x20c8(0x08)
	struct UDamagePartCollisionComponent* LeftCenterHand; // 0x20d0(0x08)
	struct UDamagePartCollisionComponent* RightCenterArm; // 0x20d8(0x08)
	struct UDamagePartCollisionComponent* RightCeterElbow; // 0x20e0(0x08)
	struct UDamagePartCollisionComponent* RightCenterHand; // 0x20e8(0x08)
	struct UDamagePartCollisionComponent* LeftBackLeg; // 0x20f0(0x08)
	struct UDamagePartCollisionComponent* LeftBackMiddle; // 0x20f8(0x08)
	struct UDamagePartCollisionComponent* LeftBackHand; // 0x2100(0x08)
	struct UDamagePartCollisionComponent* RightBackLeg; // 0x2108(0x08)
	struct UDamagePartCollisionComponent* RightBackMiddle; // 0x2110(0x08)
	struct UDamagePartCollisionComponent* RightBackHand; // 0x2118(0x08)
	struct UDamagePartCollisionComponent* LeftArm; // 0x2120(0x08)
	struct UDamagePartCollisionComponent* LeftElbow; // 0x2128(0x08)
	struct UDamagePartCollisionComponent* LeftHand; // 0x2130(0x08)
	struct UDamagePartCollisionComponent* RightArm; // 0x2138(0x08)
	struct UDamagePartCollisionComponent* RightElbow; // 0x2140(0x08)
	struct UDamagePartCollisionComponent* RightHand; // 0x2148(0x08)
	struct UDamagePartCollisionComponent* Body; // 0x2150(0x08)
	struct UDamagePartCollisionComponent* Head; // 0x2158(0x08)
	struct UBP_Ai_em0300_C* BP_Ai_em0300; // 0x2160(0x08)
	bool IsWaterTank; // 0x2168(0x01)
	char pad_2169[0x3]; // 0x2169(0x03)
	float CT_Short_Knock; // 0x216c(0x04)
	float CT_Short_Scatter; // 0x2170(0x04)
	float CT_Middle_Jump; // 0x2174(0x04)
	float CT_Middle_WaterGun; // 0x2178(0x04)
	float CT_Middle_Sprinkler; // 0x217c(0x04)
	float CT_Middle_Scatter; // 0x2180(0x04)
	float CT_Long_Jump; // 0x2184(0x04)
	float CT_Long_WaterGun; // 0x2188(0x04)
	bool IsCeiling; // 0x218c(0x01)
	char pad_218D[0x3]; // 0x218d(0x03)
	float CT_Long_Scatter; // 0x2190(0x04)
	float CT_RunAttack; // 0x2194(0x04)
	float JumpUpTimer; // 0x2198(0x04)
	enum class EnemyDamageDownAnimKind DamageDown; // 0x219c(0x01)
	char pad_219D[0x3]; // 0x219d(0x03)
	int32_t WaterTankNo; // 0x21a0(0x04)
	enum class EnemyDamageAnimKind Damage; // 0x21a4(0x01)
	char pad_21A5[0x3]; // 0x21a5(0x03)
	float RepairTimer; // 0x21a8(0x04)
	char pad_21AC[0x4]; // 0x21ac(0x04)
	struct UMaterialInstanceDynamic* MatInstWeak; // 0x21b0(0x08)
	float TurnCeilingTimer; // 0x21b8(0x04)
	char pad_21BC[0x4]; // 0x21bc(0x04)
	struct UMaterialInstanceDynamic* MatInstWeakTube; // 0x21c0(0x08)
	struct UMaterialInstanceDynamic* MatInstWaterTankGlass0; // 0x21c8(0x08)
	struct UMaterialInstanceDynamic* MatInstWaterTankGlass1; // 0x21d0(0x08)
	bool IsWeakStart; // 0x21d8(0x01)
	char pad_21D9[0x3]; // 0x21d9(0x03)
	struct FName WeakParamName; // 0x21dc(0x08)
	struct FName WaterTankGlassName; // 0x21e4(0x08)
	bool IsRepairStart; // 0x21ec(0x01)
	enum class Enum_WaterWave_em0300 WaterWaveNum; // 0x21ed(0x01)
	char pad_21EE[0x2]; // 0x21ee(0x02)
	struct UAnimMontage* WaterWave; // 0x21f0(0x08)
	struct UAnimMontage* WaterWave_S; // 0x21f8(0x08)
	struct UAnimMontage* WaterWave_M; // 0x2200(0x08)
	struct UAnimMontage* WaterWave_L; // 0x2208(0x08)
	struct UMaterialInstanceDynamic* MatInstWater; // 0x2210(0x08)
	struct FName WaterVanish; // 0x2218(0x08)
	float WaterTankTimer; // 0x2220(0x04)
	float WaterTankTimerScale; // 0x2224(0x04)
	float WaterTankDamageTimer; // 0x2228(0x04)
	float WaterTankDamageTimerScale; // 0x222c(0x04)
	float WaterTankDamagePercent1; // 0x2230(0x04)
	float WaterTankDamagePercent2; // 0x2234(0x04)
	float WaterTankDamagePercent3; // 0x2238(0x04)
	bool IsHitWaterTank; // 0x223c(0x01)
	bool IsDebugJump; // 0x223d(0x01)
	char pad_223E[0x2]; // 0x223e(0x02)
	float CT_C_WaterGun; // 0x2240(0x04)
	float CT_C_Sprinkler; // 0x2244(0x04)
	float CT_C_Jump; // 0x2248(0x04)
	float CT_C_WaterGun_Line; // 0x224c(0x04)
	bool IsWaterGunLoop; // 0x2250(0x01)
	char pad_2251[0x7]; // 0x2251(0x07)
	struct UAnimMontage* WaterWavePlay; // 0x2258(0x08)
	float CT_L_WaterFire; // 0x2260(0x04)
	float CT_M_WaterFire; // 0x2264(0x04)
	float CT_S_SpinAttack; // 0x2268(0x04)
	bool WaterTankBreak; // 0x226c(0x01)
	bool IsGuardTop; // 0x226d(0x01)
	char pad_226E[0x2]; // 0x226e(0x02)
	float BadStateTimeScale; // 0x2270(0x04)
	bool IsForceBreakWaterTank; // 0x2274(0x01)
	bool IsForceFallDown; // 0x2275(0x01)
	char pad_2276[0x2]; // 0x2276(0x02)
	struct TMap<struct ABP_MapGimmickObjectBase_C*, struct FVector> MapGimmickList; // 0x2278(0x50)
	bool IsMapGimmickEnablePermission; // 0x22c8(0x01)
	char pad_22C9[0x7]; // 0x22c9(0x07)
	struct ABP_MapGimmickObjectBase_C* EnemyNearMapGimmick; // 0x22d0(0x08)
	bool IsCeillingCrashChance; // 0x22d8(0x01)
	char pad_22D9[0x7]; // 0x22d9(0x07)
	struct TArray<struct ABP_SprinklerStart_em0300_C*> SprinklerVolimeList; // 0x22e0(0x10)
	struct TArray<struct ABP_WaterGunStart_em0300_C*> WaterGunList; // 0x22f0(0x10)
	struct ABP_ShockWavePoint_em0310_C* ShockWavePoint; // 0x2300(0x08)
	struct AActor* C_RunTarget; // 0x2308(0x08)
	bool bBrainTalkTankEm0300; // 0x2310(0x01)
	char pad_2311[0x7]; // 0x2311(0x07)
	struct FCameraTriggerInfo CameraTriggerInfo; // 0x2318(0x28)
	bool isEnableCameraPreset; // 0x2340(0x01)
	char pad_2341[0x7]; // 0x2341(0x07)
	struct ABP_MapGimmickObjectBase_C* PlayerNearMapGimmick; // 0x2348(0x08)
	struct FName MaterialLocationName; // 0x2350(0x08)
	enum class EPlayerCameraPreset EnumCameraPreset; // 0x2358(0x01)
	char pad_2359[0x7]; // 0x2359(0x07)
	struct UCurveFloat* InCurve; // 0x2360(0x08)
	struct UCurveFloat* OutCurve; // 0x2368(0x08)
	float PlayerSerchDistance; // 0x2370(0x04)
	float PlayerLockDistance; // 0x2374(0x04)
	bool bSetPlayerDistance; // 0x2378(0x01)
	bool IsChangeLockOnDistance; // 0x2379(0x01)
	bool bChangedAi; // 0x237a(0x01)
	bool IsCeillingCrashChanceLandCheck; // 0x237b(0x01)
	char pad_237C[0x4]; // 0x237c(0x04)
	struct ABP_WaterTank_em0300_C* TankInstance; // 0x2380(0x08)
	struct AActor* TankBraker; // 0x2388(0x08)
	struct FName BrainTalkIDEventChanceGimmick; // 0x2390(0x08)
	struct FName BrainTalkIDHitGimmick; // 0x2398(0x08)
	bool IsHitMapGimmick; // 0x23a0(0x01)
	char pad_23A1[0x3]; // 0x23a1(0x03)
	int32_t UpdateTransformJumpMode; // 0x23a4(0x04)
	struct FVector UpdateJumpTargetLocation; // 0x23a8(0x0c)
	struct FRotator UpdateJumpTargetRotation; // 0x23b4(0x0c)
	bool IsCeilingJump; // 0x23c0(0x01)
	char pad_23C1[0x3]; // 0x23c1(0x03)
	float JumpTimer; // 0x23c4(0x04)
	bool IsTankEmpty; // 0x23c8(0x01)
	bool IsBanBreakTank; // 0x23c9(0x01)
	bool IsJumping; // 0x23ca(0x01)
	bool DebugFlagSpDownAnimKind; // 0x23cb(0x01)
	bool IsAirRoll; // 0x23cc(0x01)
	char pad_23CD[0x3]; // 0x23cd(0x03)
	struct FRotator AirRollAbortRotation; // 0x23d0(0x0c)
	bool IsSetAirRollAbortRotation; // 0x23dc(0x01)

	void IsGuardUp(bool GuardUp); // Function BP_em0300Base.BP_em0300Base_C.IsGuardUp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnBrainCrashAccessOff(bool dummy); // Function BP_em0300Base.BP_em0300Base_C.OnBrainCrashAccessOff // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRotationAbortAirRoll(bool CeilingCrashChance); // Function BP_em0300Base.BP_em0300Base_C.SetRotationAbortAirRoll // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAirRoll(bool Result); // Function BP_em0300Base.BP_em0300Base_C.GetAirRoll // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetAirRoll(bool NewParam); // Function BP_em0300Base.BP_em0300Base_C.SetAirRoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHitObjectType(struct TArray<enum class EObjectTypeQuery> ObjectType); // Function BP_em0300Base.BP_em0300Base_C.GetHitObjectType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetJumpTimer(); // Function BP_em0300Base.BP_em0300Base_C.ResetJumpTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector UpdateJumpMoveVecter(); // Function BP_em0300Base.BP_em0300Base_C.UpdateJumpMoveVecter // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	float UpdateJumpTimer(float DeltaSec); // Function BP_em0300Base.BP_em0300Base_C.UpdateJumpTimer // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateTransformJumpNotLost(float DeltaSec); // Function BP_em0300Base.BP_em0300Base_C.UpdateTransformJumpNotLost // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTransformJumpLost(float DeltaSec); // Function BP_em0300Base.BP_em0300Base_C.UpdateTransformJumpLost // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndJump(); // Function BP_em0300Base.BP_em0300Base_C.OnEndJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStartJump(bool IsLost, bool IsCeiling); // Function BP_em0300Base.BP_em0300Base_C.OnStartJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetJumpTargetRotation(struct FRotator Rotation); // Function BP_em0300Base.BP_em0300Base_C.SetJumpTargetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetJumpTargetLocation(struct FVector Location); // Function BP_em0300Base.BP_em0300Base_C.SetJumpTargetLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTransformJump(float DeltaSec); // Function BP_em0300Base.BP_em0300Base_C.UpdateTransformJump // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainTalkHitGimmick(); // Function BP_em0300Base.BP_em0300Base_C.PlayBrainTalkHitGimmick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainTalkBeginChanceGimmick(); // Function BP_em0300Base.BP_em0300Base_C.PlayBrainTalkBeginChanceGimmick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayBrainTalk(struct FName BrainTalkID); // Function BP_em0300Base.BP_em0300Base_C.PlayBrainTalk // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CallTankBrakeHitSlow(); // Function BP_em0300Base.BP_em0300Base_C.CallTankBrakeHitSlow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndWaterGun(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0300Base.BP_em0300Base_C.EndWaterGun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponClassBallExplosion(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0300Base.BP_em0300Base_C.GetWeaponClassBallExplosion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetWeaponClassBall(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0300Base.BP_em0300Base_C.GetWeaponClassBall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetWeaponClassShockWave(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0300Base.BP_em0300Base_C.GetWeaponClassShockWave // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetWeaponClassScatter(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0300Base.BP_em0300Base_C.GetWeaponClassScatter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void GetWeaponClassGun(struct ABP_Enemy_Weapon_C* Weapon); // Function BP_em0300Base.BP_em0300Base_C.GetWeaponClassGun // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnEndCrashChance(bool bEnd); // Function BP_em0300Base.BP_em0300Base_C.OnEndCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReSetPlayerLockOnDistance(); // Function BP_em0300Base.BP_em0300Base_C.ReSetPlayerLockOnDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPlayerLockOnDistance(); // Function BP_em0300Base.BP_em0300Base_C.SetPlayerLockOnDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnEmitterSprinklerLand(struct UParticleSystem* Effect); // Function BP_em0300Base.BP_em0300Base_C.SpawnEmitterSprinklerLand // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnFallDown(); // Function BP_em0300Base.BP_em0300Base_C.OnFallDown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetPresetCamera(bool Enable); // Function BP_em0300Base.BP_em0300Base_C.SetPresetCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MeshFitGround(float interpSpeed, float angleLimit, bool bEndFit, bool bDummy); // Function BP_em0300Base.BP_em0300Base_C.MeshFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsUsePsychicMapGimmick(bool IsUseMapGimmick); // Function BP_em0300Base.BP_em0300Base_C.IsUsePsychicMapGimmick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* attackActor); // Function BP_em0300Base.BP_em0300Base_C.CalcAccumulationByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGunAreaList(bool IsReturnUsed, struct TArray<struct ABP_WaterGunStart_em0300_C*> areaList); // Function BP_em0300Base.BP_em0300Base_C.GetGunAreaList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiTable(enum class Enum_em0300 Name, struct FAiParamEnemy Param); // Function BP_em0300Base.BP_em0300Base_C.GetAiTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Fall Break Water Tank(); // Function BP_em0300Base.BP_em0300Base_C.Fall Break Water Tank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Action After Attack Water Gun Cell(); // Function BP_em0300Base.BP_em0300Base_C.Action After Attack Water Gun Cell // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartCrashChance(bool bStart); // Function BP_em0300Base.BP_em0300Base_C.StartCrashChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitMapGimmick(struct ARSBattlePlayer_C* AttackPlayer); // Function BP_em0300Base.BP_em0300Base_C.HitMapGimmick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateNearMapGimmick(); // Function BP_em0300Base.BP_em0300Base_C.UpdateNearMapGimmick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerNearMapGimmick(struct ABP_MapGimmickObjectBase_C* NewParam); // Function BP_em0300Base.BP_em0300Base_C.GetPlayerNearMapGimmick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetEnemyNearMapGimmick(struct ABP_MapGimmickObjectBase_C* NearMapGimmick); // Function BP_em0300Base.BP_em0300Base_C.GetEnemyNearMapGimmick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddMapGimmick(struct ABP_MapGimmickObjectBase_C* NewParam); // Function BP_em0300Base.BP_em0300Base_C.AddMapGimmick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiUniqueCondition(char ConditionNo, bool bResult); // Function BP_em0300Base.BP_em0300Base_C.GetAiUniqueCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ActionAfterAttackJump(); // Function BP_em0300Base.BP_em0300Base_C.ActionAfterAttackJump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEnemyBrainFieldResetAction(bool bMoveBrainField, bool bReset); // Function BP_em0300Base.BP_em0300Base_C.OnEnemyBrainFieldResetAction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCoreCollision(struct UDamagePartCollisionComponent* CoreCollision); // Function BP_em0300Base.BP_em0300Base_C.GetCoreCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMoveToTargetAnim(enum class EnemyMoveAnimKind MoveAnim); // Function BP_em0300Base.BP_em0300Base_C.GetMoveToTargetAnim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct UEnemyAiComponentBase* GetEnemyAiComponent(); // Function BP_em0300Base.BP_em0300Base_C.GetEnemyAiComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetWeakTargetTransform(struct FVector AttackerPos, struct FTransform WeakTransform); // Function BP_em0300Base.BP_em0300Base_C.GetWeakTargetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CreateEnemyWeapon(bool dummy); // Function BP_em0300Base.BP_em0300Base_C.CreateEnemyWeapon // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugGetUniqueConditionText(struct TArray<struct FText> text); // Function BP_em0300Base.BP_em0300Base_C.DebugGetUniqueConditionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DebugUpdate(); // Function BP_em0300Base.BP_em0300Base_C.DebugUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitFur(); // Function BP_em0300Base.BP_em0300Base_C.InitFur // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartWaterTankBreak(); // Function BP_em0300Base.BP_em0300Base_C.StartWaterTankBreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageDownCeiling(enum class EnemyDamageDownAnimKind DamageDown); // Function BP_em0300Base.BP_em0300Base_C.SetDamageDownCeiling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWaterTankHP(int32_t HP); // Function BP_em0300Base.BP_em0300Base_C.SetWaterTankHP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBadState(); // Function BP_em0300Base.BP_em0300Base_C.SetBadState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIdleResetMoveMode(bool bReset); // Function BP_em0300Base.BP_em0300Base_C.IsIdleResetMoveMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetEnemyEnumLength(int32_t Length); // Function BP_em0300Base.BP_em0300Base_C.GetEnemyEnumLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetEnemySoundEnum(enum class Enum_EnemySound SoundEnum); // Function BP_em0300Base.BP_em0300Base_C.GetEnemySoundEnum // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMontageChange(bool MontageOn); // Function BP_em0300Base.BP_em0300Base_C.SetMontageChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiTimer(char Enum, float AiTimer); // Function BP_em0300Base.BP_em0300Base_C.GetAiTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetAiTimer(char Enum, bool return); // Function BP_em0300Base.BP_em0300Base_C.SetAiTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NotDamageMontage(bool return); // Function BP_em0300Base.BP_em0300Base_C.NotDamageMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DamageMontage(struct TArray<struct FHCHitResult> Result, bool Damage_Enable); // Function BP_em0300Base.BP_em0300Base_C.DamageMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEnemyBrainFieldStart(bool MoveBrainField, bool NewParam); // Function BP_em0300Base.BP_em0300Base_C.SetEnemyBrainFieldStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPhase2(bool return); // Function BP_em0300Base.BP_em0300Base_C.IsPhase2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void WaterTankDamageStage(); // Function BP_em0300Base.BP_em0300Base_C.WaterTankDamageStage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWaterTankDamage(float Value); // Function BP_em0300Base.BP_em0300Base_C.UpdateWaterTankDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWaterVisble(bool visble); // Function BP_em0300Base.BP_em0300Base_C.SetWaterVisble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChangeWaterBlend(); // Function BP_em0300Base.BP_em0300Base_C.ChangeWaterBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateWaterBlend(); // Function BP_em0300Base.BP_em0300Base_C.UpdateWaterBlend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAiDataTableString(char Enum, struct FString Param); // Function BP_em0300Base.BP_em0300Base_C.GetAiDataTableString // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateWaterTankRepair(float Value); // Function BP_em0300Base.BP_em0300Base_C.UpdateWaterTankRepair // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitDebugCeiling(); // Function BP_em0300Base.BP_em0300Base_C.InitDebugCeiling // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDistance(); // Function BP_em0300Base.BP_em0300Base_C.SetDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitMaterial(); // Function BP_em0300Base.BP_em0300Base_C.InitMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DeadFlyCheck(); // Function BP_em0300Base.BP_em0300Base_C.DeadFlyCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDead(bool dummy); // Function BP_em0300Base.BP_em0300Base_C.OnDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWaterTankVisble(bool visble); // Function BP_em0300Base.BP_em0300Base_C.SetWaterTankVisble // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsTurnCeilingTimerCheck(bool return); // Function BP_em0300Base.BP_em0300Base_C.IsTurnCeilingTimerCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetTurnCeilingTimer(bool Reset); // Function BP_em0300Base.BP_em0300Base_C.SetTurnCeilingTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRepairTimer(); // Function BP_em0300Base.BP_em0300Base_C.SetRepairTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateRepairImpact(enum class EHCBadState BadState); // Function BP_em0300Base.BP_em0300Base_C.BadStateRepairImpact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakOnOff(bool on); // Function BP_em0300Base.BP_em0300Base_C.WeakOnOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetAttackTimer(); // Function BP_em0300Base.BP_em0300Base_C.ResetAttackTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeakDraw(); // Function BP_em0300Base.BP_em0300Base_C.WeakDraw // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeakVisble(bool visble, bool dummy); // Function BP_em0300Base.BP_em0300Base_C.SetWeakVisble // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWaterTankBreakCeiling(enum class EnemyDamageDownAnimKind DamageDown); // Function BP_em0300Base.BP_em0300Base_C.SetWaterTankBreakCeiling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WaterTankBreakCheck(struct AActor* attacker, bool IsMapGimmickAttack, struct FHCSkillCommonInfo SkillParamRef, bool IsBreak, enum class EnemyDamageDownAnimKind DownKind); // Function BP_em0300Base.BP_em0300Base_C.WaterTankBreakCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetJumpUpTimer(); // Function BP_em0300Base.BP_em0300Base_C.SetJumpUpTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetRotation(); // Function BP_em0300Base.BP_em0300Base_C.SetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimer(float sec); // Function BP_em0300Base.BP_em0300Base_C.UpdateTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function BP_em0300Base.BP_em0300Base_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDeadStaging(); // Function BP_em0300Base.BP_em0300Base_C.StartDeadStaging // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDamageDownAnim(enum class EnemyDamageDownAnimKind Damage); // Function BP_em0300Base.BP_em0300Base_C.SetDamageDownAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestDamageMotion(struct FRotator Rot, struct FVector hitPosition, struct FVector HitDir, bool IsSideDamage, struct UPrimitiveComponent* Primitive, bool PsychicObjectCombo, struct FHCSkillCommonInfo skill, struct AActor* attacker, struct AActor* AttackObj, bool WasStartDamage); // Function BP_em0300Base.BP_em0300Base_C.RequestDamageMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOn(enum class EHCBadState bad); // Function BP_em0300Base.BP_em0300Base_C.BadStateEffectOn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDamage(); // Function BP_em0300Base.BP_em0300Base_C.OnBrainCrashDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_em0300Base.BP_em0300Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_em0300Base.BP_em0300Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void SetDamageAnim(enum class EnemyDamageAnimKind alive, struct UPrimitiveComponent* Primitive); // Function BP_em0300Base.BP_em0300Base_C.SetDamageAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnCrashChanceCeilling(); // Function BP_em0300Base.BP_em0300Base_C.OnCrashChanceCeilling // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_em0300Base.BP_em0300Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashEnd(bool bBeginActor, struct UAnimMontage* PlayerEndMontage); // Function BP_em0300Base.BP_em0300Base_C.OnBrainCrashEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainTalkAfterThreat(); // Function BP_em0300Base.BP_em0300Base_C.BrainTalkAfterThreat // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_em0300Base(int32_t EntryPoint); // Function BP_em0300Base.BP_em0300Base_C.ExecuteUbergraph_BP_em0300Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

