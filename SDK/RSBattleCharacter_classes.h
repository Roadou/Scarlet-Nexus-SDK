// BlueprintGeneratedClass RSBattleCharacter.RSBattleCharacter_C
// Size: 0xfed (Inherited: 0x8f0)
struct ARSBattleCharacter_C : ARSCharacterBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8f0(0x08)
	struct UBP_DamageFloatingControlComponent_C* BP_DamageFloatingControlComponent; // 0x8f8(0x08)
	struct UBPC_RenderScarComponent_C* BPC_RenderScarComponent; // 0x900(0x08)
	struct UBP_HpEventComponent_C* BP_HpEventComponent; // 0x908(0x08)
	struct UBP_RSCharacterCommonDataComponent_C* BP_RSCharacterCommonDataComponent; // 0x910(0x08)
	struct UBP_AssetLoadComponent_C* BP_AssetLoadComponent; // 0x918(0x08)
	struct UParticleManageComponent_C* WeakDamageParticleManageComponent; // 0x920(0x08)
	struct UCapsuleComponent* CharacterOverlapCapsuleComponent; // 0x928(0x08)
	struct UBP_EventParamComponent_C* BP_CharacterEventComponent; // 0x930(0x08)
	struct UBP_GhostTrailComponent_C* BP_GhostTrailComponent; // 0x938(0x08)
	struct UHateTargetComponent* HateTarget; // 0x940(0x08)
	struct UCharactersParameterComponent* CharactersParameter; // 0x948(0x08)
	struct UDamageArrayComponent* DamageArray; // 0x950(0x08)
	struct UDynamicMaterialControllerComponent* DynamicMaterialController; // 0x958(0x08)
	struct UAutoAimComponent* AutoAim; // 0x960(0x08)
	struct UHoveringComponent* Hovering; // 0x968(0x08)
	struct UContinualMoveComponent* ContinualMove; // 0x970(0x08)
	struct UMoveImpulseComponent* MoveImpulse; // 0x978(0x08)
	struct UHitStopComponent* HitStop; // 0x980(0x08)
	struct UHitBitComponent* HitBit; // 0x988(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x990(0x08)
	struct UDamageResponseComponent* DamageResponse; // 0x998(0x08)
	struct UDamageAcceptComponent* DamageAccept; // 0x9a0(0x08)
	struct UDamageCalcComponent* DamageCalc; // 0x9a8(0x08)
	struct UTeamComponent* Team; // 0x9b0(0x08)
	struct UDamagePropertyMediatorComponent* DamagePropertyMediator; // 0x9b8(0x08)
	struct UMovementPropertyMediator* MovementPropertyMediator; // 0x9c0(0x08)
	struct FName BattleCharaClaimantName; // 0x9c8(0x08)
	int32_t CharactersParameterOffset; // 0x9d0(0x04)
	bool UseCharactersParameterName; // 0x9d4(0x01)
	char pad_9D5[0x3]; // 0x9d5(0x03)
	struct FName CharactersParameterName; // 0x9d8(0x08)
	struct UDataTable* CharactersParameterTable; // 0x9e0(0x08)
	bool UseDeadCharacterName; // 0x9e8(0x01)
	char pad_9E9[0x3]; // 0x9e9(0x03)
	struct FName HateParamName; // 0x9ec(0x08)
	char pad_9F4[0x4]; // 0x9f4(0x04)
	struct UDataTable* HateParamTable; // 0x9f8(0x08)
	bool bNotifyAnimEnd; // 0xa00(0x01)
	bool bReserveAnimEnd; // 0xa01(0x01)
	char pad_A02[0x2]; // 0xa02(0x02)
	float MinRadomX; // 0xa04(0x04)
	float MaxRadomX; // 0xa08(0x04)
	float MinRadomY; // 0xa0c(0x04)
	float MaxRadomY; // 0xa10(0x04)
	float MinRadomZ; // 0xa14(0x04)
	float MaxRandomZ; // 0xa18(0x04)
	bool bNotDamageMotion; // 0xa1c(0x01)
	enum class ECharaDeadType CharaDeadType; // 0xa1d(0x01)
	char pad_A1E[0x2]; // 0xa1e(0x02)
	float FrameDamageTimer; // 0xa20(0x04)
	char pad_A24[0x4]; // 0xa24(0x04)
	struct UParticleSystem* BadStateFlameParticle; // 0xa28(0x08)
	struct TSoftObjectPtr<UParticleSystem> BadStateFlameSoftReference; // 0xa30(0x28)
	struct URSParticleSystemComponentBase* BadStateFlameParticleHandle; // 0xa58(0x08)
	int32_t CurrentAttackAttribute; // 0xa60(0x04)
	char pad_A64[0x4]; // 0xa64(0x04)
	struct UParticleSystem* BadStateElecParticle; // 0xa68(0x08)
	struct TSoftObjectPtr<UParticleSystem> BadStateElecSoftReference; // 0xa70(0x28)
	struct URSParticleSystemComponentBase* BadStateElecParticleHandle; // 0xa98(0x08)
	struct FGameTimer BadEffectWetChangeTimer; // 0xaa0(0x0c)
	char pad_AAC[0x4]; // 0xaac(0x04)
	struct TArray<struct AActor*> AttackHitActorList; // 0xab0(0x10)
	float AreaChangeGravityScale; // 0xac0(0x04)
	int32_t OutlineMaterialIndex; // 0xac4(0x04)
	bool OutlineMaterialEnabled; // 0xac8(0x01)
	bool OutlineMaterialForceEnabled; // 0xac9(0x01)
	char pad_ACA[0x2]; // 0xaca(0x02)
	float OutlineMaterialLength; // 0xacc(0x04)
	bool UseDefaultCapsuleShadow; // 0xad0(0x01)
	bool UseForceMeshShadow; // 0xad1(0x01)
	char pad_AD2[0x6]; // 0xad2(0x06)
	struct FCharactersParameterTable CharacterParameterTableData; // 0xad8(0x1f8)
	struct UMaterialInstanceDynamic* SkinMaterial; // 0xcd0(0x08)
	bool AreaChangeSave; // 0xcd8(0x01)
	char pad_CD9[0x7]; // 0xcd9(0x07)
	struct UParticleSystem* BadStateConfusionParticle; // 0xce0(0x08)
	struct TSoftObjectPtr<UParticleSystem> BadStateConfusionSoftReference; // 0xce8(0x28)
	struct FVector BadStateConfusionParticleScale; // 0xd10(0x0c)
	struct FName BadStateConfusionParticleSocketName; // 0xd1c(0x08)
	char pad_D24[0x4]; // 0xd24(0x04)
	struct URSParticleSystemComponentBase* BadStateConfusionParticleHandle; // 0xd28(0x08)
	int32_t GroupID; // 0xd30(0x04)
	bool IsEventWeak; // 0xd34(0x01)
	char pad_D35[0x3]; // 0xd35(0x03)
	struct FVector ProvokeParticleScale; // 0xd38(0x0c)
	char pad_D44[0x4]; // 0xd44(0x04)
	struct TMap<struct FName, bool> InvalidDamageRequests; // 0xd48(0x50)
	struct TMap<struct FName, struct UParticleSystemComponent*> AnimNotifyStateEffectHandle; // 0xd98(0x50)
	bool IsGraceDamage; // 0xde8(0x01)
	char pad_DE9[0x3]; // 0xde9(0x03)
	float IgnoreEffectLoopSeconds; // 0xdec(0x04)
	bool IsRatioDamage; // 0xdf0(0x01)
	char pad_DF1[0x3]; // 0xdf1(0x03)
	int32_t SubGroupID; // 0xdf4(0x04)
	bool IsHitDelayDeath; // 0xdf8(0x01)
	char pad_DF9[0x3]; // 0xdf9(0x03)
	struct FFNotifyAttackData NotifyAttackData; // 0xdfc(0x10)
	char pad_E0C[0x4]; // 0xe0c(0x04)
	struct AActor* FinishActor; // 0xe10(0x08)
	bool bAccelerating; // 0xe18(0x01)
	bool bBadEffectWetDirEnable; // 0xe19(0x01)
	char pad_E1A[0x2]; // 0xe1a(0x02)
	float WetOnChangeSeconds; // 0xe1c(0x04)
	float WetOffChangeSeconds; // 0xe20(0x04)
	bool bInBeginPlay; // 0xe24(0x01)
	bool bBindHitSlow; // 0xe25(0x01)
	bool UseDither; // 0xe26(0x01)
	bool UseDitherBefore; // 0xe27(0x01)
	struct FCharacterDither CameraDitherData; // 0xe28(0x20)
	bool SetupCelLookMat; // 0xe48(0x01)
	char pad_E49[0x7]; // 0xe49(0x07)
	struct UParticleSystemComponent* BadStateIconHandle; // 0xe50(0x08)
	struct TArray<struct URSParticleSystemComponentBase*> CameraDitherParticleList; // 0xe58(0x10)
	struct UDataTable* CameraDitherDataTableAsset; // 0xe68(0x08)
	bool bOccupiedCameraAttention; // 0xe70(0x01)
	char pad_E71[0x7]; // 0xe71(0x07)
	struct TMap<struct FName, bool> SuperArmorRequests; // 0xe78(0x50)
	bool MeshFitGroundMultipleChecks; // 0xec8(0x01)
	bool IsLeader; // 0xec9(0x01)
	char pad_ECA[0x2]; // 0xeca(0x02)
	int32_t RushBrainFieldLocation; // 0xecc(0x04)
	bool RushBrainFieldLongAway; // 0xed0(0x01)
	char pad_ED1[0x7]; // 0xed1(0x07)
	struct ABP_MakeEventActorBase_C* BrainCrashEvent; // 0xed8(0x08)
	bool IsPartsInvincible; // 0xee0(0x01)
	bool bAreaChange; // 0xee1(0x01)
	bool bNoTipsCheckBadStatusOil; // 0xee2(0x01)
	bool bNoTipsCheckBadStatusFlooded; // 0xee3(0x01)
	bool bIsBrainCrashEventFlag; // 0xee4(0x01)
	char pad_EE5[0x3]; // 0xee5(0x03)
	struct UDataTable* DTEnemyAnimScaleHitStop; // 0xee8(0x08)
	enum class HCSkillAttackType ReceiveAttackType; // 0xef0(0x01)
	bool bEnableNormalAttackReactionCoefficient; // 0xef1(0x01)
	bool bEnablePsychicAttackReactionCoefficient; // 0xef2(0x01)
	char pad_EF3[0x1]; // 0xef3(0x01)
	float ReactionCoefficientReactionSRate; // 0xef4(0x04)
	float ReactionCoefficientReactionLRate; // 0xef8(0x04)
	float ReactionCoefficientDownRate; // 0xefc(0x04)
	float ReactionCoefficientCrashRate; // 0xf00(0x04)
	bool IsHitDDInstantKill; // 0xf04(0x01)
	char pad_F05[0x3]; // 0xf05(0x03)
	struct FVector2D BrainCrashDamageDisplayOffset; // 0xf08(0x08)
	bool bDamageDisplayOffset; // 0xf10(0x01)
	bool IsNoFinishBrainCrash; // 0xf11(0x01)
	char pad_F12[0x6]; // 0xf12(0x06)
	struct FST_DisplayDamageBrainCrashInfo DisplayBrainCrashDamageInfo; // 0xf18(0x30)
	bool IsDisplayBossHp; // 0xf48(0x01)
	char pad_F49[0x3]; // 0xf49(0x03)
	float BossDispBCDamageSecond; // 0xf4c(0x04)
	struct FName BrainCrashDamageDisplayPointName; // 0xf50(0x08)
	float InScreenTolerance; // 0xf58(0x04)
	float BossDelayResetCrashSecond; // 0xf5c(0x04)
	float BattlefieldFenceAppearRate; // 0xf60(0x04)
	bool IsFindBattlefieldFenceOnce; // 0xf64(0x01)
	bool bCanSetTick; // 0xf65(0x01)
	bool IsFrameDamage; // 0xf66(0x01)
	char pad_F67[0x9]; // 0xf67(0x09)
	struct FTransform BrainFieldNormalTransform; // 0xf70(0x30)
	bool IsStartFindBattlefieldFence; // 0xfa0(0x01)
	enum class ERootMotionMode LastRootMotionMode; // 0xfa1(0x01)
	bool bDisableMeshFitGround; // 0xfa2(0x01)
	char pad_FA3[0x5]; // 0xfa3(0x05)
	struct TArray<struct FName> DiableMeshFitGroundClaimantList; // 0xfa8(0x10)
	float UnaffectedTimeDilation; // 0xfb8(0x04)
	float UnaffectedDilationTimer; // 0xfbc(0x04)
	enum class EAnimNotifyTimeDilationMode UnaffectedDilationMode; // 0xfc0(0x01)
	bool IsActiveUpdateUnaffectedTimeDilation; // 0xfc1(0x01)
	char pad_FC2[0x6]; // 0xfc2(0x06)
	struct FString ClaimantNameUnaffectedTimeDilation; // 0xfc8(0x10)
	struct UCurveFloat* UnaffectedCameraAttentionActorCurveOut; // 0xfd8(0x08)
	struct UCurveFloat* UnaffectedCameraAttentionFovCurveOut; // 0xfe0(0x08)
	float UnaffectedCameraAttentionTimer; // 0xfe8(0x04)
	bool IsActiveUpdateUnaffectedCameraAttention; // 0xfec(0x01)

	void CheckExecuteAnimNotifyCharacterKind(enum class ECharaExecuteNotifyKind kind, bool bExecute); // Function RSBattleCharacter.RSBattleCharacter_C.CheckExecuteAnimNotifyCharacterKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearFlyingForceInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.ClearFlyingForceInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearFlyingInterface(struct FName ClaimantName); // Function RSBattleCharacter.RSBattleCharacter_C.ClearFlyingInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetFlyingInterface(struct FName ClaimantName); // Function RSBattleCharacter.RSBattleCharacter_C.SetFlyingInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetRemoteActorLocation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetRemoteActorLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetRemoteActorRotation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetRemoteActorRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraDirection(); // Function RSBattleCharacter.RSBattleCharacter_C.GetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetPlayerCameraFieldOfView(); // Function RSBattleCharacter.RSBattleCharacter_C.GetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetPlayerCameraLocation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class EPlayerCameraMode GetPlayerCameraMode(); // Function RSBattleCharacter.RSBattleCharacter_C.GetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FRotator GetPlayerCameraRotation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraDirection(struct FVector Pos); // Function RSBattleCharacter.RSBattleCharacter_C.SetPlayerCameraDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraFieldOfView(float FOV); // Function RSBattleCharacter.RSBattleCharacter_C.SetPlayerCameraFieldOfView // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraLocation(struct FVector Pos); // Function RSBattleCharacter.RSBattleCharacter_C.SetPlayerCameraLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraMode(enum class EPlayerCameraMode Mode); // Function RSBattleCharacter.RSBattleCharacter_C.SetPlayerCameraMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraRotation(struct FRotator Rot); // Function RSBattleCharacter.RSBattleCharacter_C.SetPlayerCameraRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetPlayerCameraViewTarget(float BlendTime, enum class EViewTargetBlendFunction BlendFunc, float BlendExp); // Function RSBattleCharacter.RSBattleCharacter_C.SetPlayerCameraViewTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetCameraLookAtPos(); // Function RSBattleCharacter.RSBattleCharacter_C.GetCameraLookAtPos // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsStartDamageAnimAdditional(struct FHCHitResult HitResult, int32_t Damage, bool IsDown); // Function RSBattleCharacter.RSBattleCharacter_C.IsStartDamageAnimAdditional // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEmphasisCrashGauge(); // Function RSBattleCharacter.RSBattleCharacter_C.IsEmphasisCrashGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool SetEmphasisCrashGauge(bool bEmphasisCrashGauge); // Function RSBattleCharacter.RSBattleCharacter_C.SetEmphasisCrashGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHpGaugeAlwaysMax(bool bAlwaysMax); // Function RSBattleCharacter.RSBattleCharacter_C.IsHpGaugeAlwaysMax // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsInvisibleMiniMap(); // Function RSBattleCharacter.RSBattleCharacter_C.IsInvisibleMiniMap // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	int32_t GetWeakNumber(); // Function RSBattleCharacter.RSBattleCharacter_C.GetWeakNumber // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsSpawnWait(bool bSpawnWait); // Function RSBattleCharacter.RSBattleCharacter_C.IsSpawnWait // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool BrainCrashUnlock(); // Function RSBattleCharacter.RSBattleCharacter_C.BrainCrashUnlock // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCrashChanceCursorPoint(struct FVector Point); // Function RSBattleCharacter.RSBattleCharacter_C.GetCrashChanceCursorPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetHpGaugePoint(struct FVector Point); // Function RSBattleCharacter.RSBattleCharacter_C.GetHpGaugePoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetTargetCursorPoint(struct FVector Point); // Function RSBattleCharacter.RSBattleCharacter_C.GetTargetCursorPoint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsInvisibleHPGauge(bool bInvisible); // Function RSBattleCharacter.RSBattleCharacter_C.IsInvisibleHPGauge // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct AActor* GetHitCheckIgnoredActor(); // Function RSBattleCharacter.RSBattleCharacter_C.GetHitCheckIgnoredActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsObstacleHitCheckToActor(struct AActor* pTarget); // Function RSBattleCharacter.RSBattleCharacter_C.IsObstacleHitCheckToActor // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDisableDamageHit(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDisableDamageHit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsOnGround(bool bIncludeObject); // Function RSBattleCharacter.RSBattleCharacter_C.IsOnGround // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsIgnoreAccelerator(enum class HCSkillExtraType Type); // Function RSBattleCharacter.RSBattleCharacter_C.IsIgnoreAccelerator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsObstacleHitCheck(struct UPrimitiveComponent* pPrimitive, struct AActor* pAttacker, struct FVector EndPosition); // Function RSBattleCharacter.RSBattleCharacter_C.IsObstacleHitCheck // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckFriendlyFire(struct AActor* HitActor); // Function RSBattleCharacter.RSBattleCharacter_C.IsCheckFriendlyFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsIgnoreHitCheck(struct UPrimitiveComponent* pPrimitive, struct FVector hitPosition); // Function RSBattleCharacter.RSBattleCharacter_C.IsIgnoreHitCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicFieldDamageRateToBoss(); // Function RSBattleCharacter.RSBattleCharacter_C.IsPsychicFieldDamageRateToBoss // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OverwriteAttackCollisionInfo(struct FHCCollisionCommonInfo refCommonInfo, struct FHCSkillCommonInfo refSkill); // Function RSBattleCharacter.RSBattleCharacter_C.OverwriteAttackCollisionInfo // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByAttack(float Damage, struct AActor* defenseActor, struct FHCSkillCommonInfo skillInfo); // Function RSBattleCharacter.RSBattleCharacter_C.CalcFinalDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByDefence(float Damage, struct AActor* attackActor); // Function RSBattleCharacter.RSBattleCharacter_C.CalcFinalDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByAttack(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* defenseActor, enum class HCSkillAttackType AttackType, bool bCopyActor); // Function RSBattleCharacter.RSBattleCharacter_C.CalcAccumulationByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* attackActor); // Function RSBattleCharacter.RSBattleCharacter_C.CalcAccumulationByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcCritical(float Critical, struct AActor* defenseActor); // Function RSBattleCharacter.RSBattleCharacter_C.CalcCritical // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDamageByAttack(float refPhysicsDamage, float refObjDamage, float refFlameDamage, float refElectricDamage, float refCriticalDamageRate, struct AActor* defenseActor); // Function RSBattleCharacter.RSBattleCharacter_C.CalcDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDamageByDefence(float refPhysicsDamage, float refObjDamage, float refFlameDamage, float refElectricDamage, float refCriticalDamageRate, struct AActor* attackActor); // Function RSBattleCharacter.RSBattleCharacter_C.CalcDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDefence(float refPhysicsDefence, float refObjDefence, float refFlameDefence, float refElectricPhysics); // Function RSBattleCharacter.RSBattleCharacter_C.CalcDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FCharactersParameterTable GetCharactersParameterTableInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharactersParameterTableInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerEnd(bool RestoreEnableTick, bool RestoreVisibility); // Function RSBattleCharacter.RSBattleCharacter_C.EventManagerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventManagerStart(bool EnableTick, bool Visibility); // Function RSBattleCharacter.RSBattleCharacter_C.EventManagerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DynamicEventBeforeBindCharacter(); // Function RSBattleCharacter.RSBattleCharacter_C.DynamicEventBeforeBindCharacter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BattleSequencerEnd(bool isRestoreTransform, bool isSetEnemyEvent, bool bDriveSequence); // Function RSBattleCharacter.RSBattleCharacter_C.BattleSequencerEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool BattleSequencerStart(bool isSetEnemyEvent, bool bDriveSequence); // Function RSBattleCharacter.RSBattleCharacter_C.BattleSequencerStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ResetShadowOffset(); // Function RSBattleCharacter.RSBattleCharacter_C.ResetShadowOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetShadowOffsetMapID(enum class EMaterialShadowOffsetID ShadowOffsetID); // Function RSBattleCharacter.RSBattleCharacter_C.SetShadowOffsetMapID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetShadowOffsetTexture(struct UTexture2D* Texture); // Function RSBattleCharacter.RSBattleCharacter_C.SetShadowOffsetTexture // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetEventVisible(bool Visible); // Function RSBattleCharacter.RSBattleCharacter_C.SetEventVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEndEventAnimMontage(struct UAnimMontage* AnimMontage); // Function RSBattleCharacter.RSBattleCharacter_C.IsEndEventAnimMontage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool PlayEventAnimMontage(struct UAnimMontage* AnimMontage, struct FName Section, float InPlayRate); // Function RSBattleCharacter.RSBattleCharacter_C.PlayEventAnimMontage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopEventAnimMontage(struct UAnimMontage* AnimMontage); // Function RSBattleCharacter.RSBattleCharacter_C.StopEventAnimMontage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHoodVisible(bool Visible); // Function RSBattleCharacter.RSBattleCharacter_C.SetHoodVisible // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DynamicEventEnd(bool isRestoreTransform); // Function RSBattleCharacter.RSBattleCharacter_C.DynamicEventEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool DynamicEventStart(); // Function RSBattleCharacter.RSBattleCharacter_C.DynamicEventStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventEnd(); // Function RSBattleCharacter.RSBattleCharacter_C.EventEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool EventStart(); // Function RSBattleCharacter.RSBattleCharacter_C.EventStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StaticEventEnd(bool isRestoreTransform); // Function RSBattleCharacter.RSBattleCharacter_C.StaticEventEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StaticEventStart(); // Function RSBattleCharacter.RSBattleCharacter_C.StaticEventStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool TalkEventEnd(bool isRestoreTransform); // Function RSBattleCharacter.RSBattleCharacter_C.TalkEventEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool TalkEventStart(); // Function RSBattleCharacter.RSBattleCharacter_C.TalkEventStart // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEndConnectEffect(struct FName ObjectName, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnEndConnectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBeginConnectEffect(struct UParticleSystem* ParticleSystem, struct FName ObjectName, enum class EEffectConnectPoint SourceConnectPoint, struct FName SourceSocketName, enum class EEffectConnectPoint TargetConnectPoint, struct FName TargetSocketName, struct USoundAtomCue* PlaySound, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnBeginConnectEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFootStepTemplate(enum class EPhysicalSurface SurfaceType, struct UParticleSystem* Template); // Function RSBattleCharacter.RSBattleCharacter_C.GetFootStepTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLandingTemplate(enum class EPhysicalSurface SurfaceType, struct UParticleSystem* Template); // Function RSBattleCharacter.RSBattleCharacter_C.GetLandingTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCrashDamageLocation(struct FVector WorldLocation); // Function RSBattleCharacter.RSBattleCharacter_C.GetBrainCrashDamageLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectThrowParameter(bool apply, float directshot throw speed, float directshot homing speed, float combo throw speed, float combo homing speed, float brainfield throw speed, float brainfield homing speed, float intercept throw speed, float intercept homing speed); // Function RSBattleCharacter.RSBattleCharacter_C.GetPsychicObjectThrowParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackerMainPlayer(bool bMainPlayer); // Function RSBattleCharacter.RSBattleCharacter_C.IsAttackerMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StopMovementImmediately(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.StopMovementImmediately // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGroupIDInterface(bool bSuccess, int32_t GroupID, int32_t SubGroupID); // Function RSBattleCharacter.RSBattleCharacter_C.GetGroupIDInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNoDamagePopUpFromAttacker(bool bNoPopUp); // Function RSBattleCharacter.RSBattleCharacter_C.CheckNoDamagePopUpFromAttacker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterBrainFieldNormalTransform(struct FTransform InNormalTransform, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.RegisterBrainFieldNormalTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Event Bind Mesh Component(struct TArray<struct UStaticMeshComponent*> MeshComponent); // Function RSBattleCharacter.RSBattleCharacter_C.Get Event Bind Mesh Component // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInScreen(bool InScreen); // Function RSBattleCharacter.RSBattleCharacter_C.IsInScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSequencerEffectInterface(float DeltaSec, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.UpdateSequencerEffectInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSequencerEffectInterface(struct FName ClaimantName, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.EndSequencerEffectInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnSequencerEffectInterface(struct FName ClaimantName, struct UParticleSystem* Template, struct FTransform Transform, struct FName AttachName, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.SpawnSequencerEffectInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisableReactionCoefficient(bool bNormalAttack, bool bPsychicAttack, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.DisableReactionCoefficient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableReactionCoefficient(bool bNormalAttack, bool bPsychicAttack, float ReactionSRate, float ReactionLRate, float DownRate, float CrashRate, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.EnableReactionCoefficient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableReactionCoefficient(bool bEnable, float ReactionSRate, float ReactionLRate, float DownRate, float CrashRate); // Function RSBattleCharacter.RSBattleCharacter_C.IsEnableReactionCoefficient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetCharacterLV(int32_t LV); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharacterLV // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAutoAimRate(float Rate); // Function RSBattleCharacter.RSBattleCharacter_C.GetAutoAimRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndVisionFog(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.EndVisionFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestDie(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.RequestDie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCounterWait(bool bWait); // Function RSBattleCharacter.RSBattleCharacter_C.IsCounterWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainCrashAccessInterface(bool bAccess); // Function RSBattleCharacter.RSBattleCharacter_C.IsBrainCrashAccessInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetUseCameraDither(bool bUse, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetUseCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCameraDither(float SetDitherValue, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCameraDither(float DeltaSeconds, bool UseDither, float CameraDither); // Function RSBattleCharacter.RSBattleCharacter_C.UpdateCameraDither // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableSlashEffect(struct FHCHitResult HitResult, bool bEnable); // Function RSBattleCharacter.RSBattleCharacter_C.IsEnableSlashEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsHitWeak_ChangeDefaultEffect(bool ChangeDefault); // Function RSBattleCharacter.RSBattleCharacter_C.IsHitWeak_ChangeDefaultEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CanTakeBrainField(bool CanTake); // Function RSBattleCharacter.RSBattleCharacter_C.CanTakeBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetHitStopInterface(enum class HCRestictedHitStopType HitStopType, bool bCritical, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetHitStopInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSASChance(bool Dammy); // Function RSBattleCharacter.RSBattleCharacter_C.EndSASChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASChance(float Time, bool Dammy); // Function RSBattleCharacter.RSBattleCharacter_C.StartSASChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelMeshFitGround(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.CancelMeshFitGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshFitGroundCheckLocation(struct FVector Location, float checkHeight); // Function RSBattleCharacter.RSBattleCharacter_C.GetMeshFitGroundCheckLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MeshFitGround(float interpSpeed, float angleLimit, bool bEndFit, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.MeshFitGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAccelerating(bool Accelerating, bool Dammy); // Function RSBattleCharacter.RSBattleCharacter_C.SetAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAccelerating(bool Accelerating); // Function RSBattleCharacter.RSBattleCharacter_C.GetAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLockOnTargetInterface(struct AActor* TargetActor); // Function RSBattleCharacter.RSBattleCharacter_C.GetLockOnTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNotifyAttackData(struct FFNotifyAttackData Data); // Function RSBattleCharacter.RSBattleCharacter_C.GetNotifyAttackData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetNotifyAttackData(struct FFNotifyAttackData Data, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetNotifyAttackData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActorStartPoint(struct FVector StartLocation); // Function RSBattleCharacter.RSBattleCharacter_C.GetActorStartPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartVisionFog(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.StartVisionFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakTargetComponent(struct USceneComponent* WeakComponent); // Function RSBattleCharacter.RSBattleCharacter_C.GetWeakTargetComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCounterSuccess(bool Success); // Function RSBattleCharacter.RSBattleCharacter_C.IsCounterSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakUIPoint(int32_t Index, struct FVector Point); // Function RSBattleCharacter.RSBattleCharacter_C.GetWeakUIPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetTopTargetPoint(struct FVector Point); // Function RSBattleCharacter.RSBattleCharacter_C.GetTopTargetPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetWeakTargetPoint(struct FVector AttackerPos, struct FVector Point); // Function RSBattleCharacter.RSBattleCharacter_C.GetWeakTargetPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsMetalMode(bool bMetal); // Function RSBattleCharacter.RSBattleCharacter_C.IsMetalMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetCharacterVisibility(bool bVisibility, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetCharacterVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnemy(bool bEnemy); // Function RSBattleCharacter.RSBattleCharacter_C.IsEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPlayer(bool bPlayer); // Function RSBattleCharacter.RSBattleCharacter_C.IsPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetTeam(enum class TeamKind Team); // Function RSBattleCharacter.RSBattleCharacter_C.GetTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void isForceCritical(bool bResult); // Function RSBattleCharacter.RSBattleCharacter_C.isForceCritical // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBadStatusAny(bool bBadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStatusAny // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHp(int32_t HP, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHPPercent(float percent); // Function RSBattleCharacter.RSBattleCharacter_C.GetHPPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetHp(int32_t HP); // Function RSBattleCharacter.RSBattleCharacter_C.GetHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetMaxHp(int32_t MaxHp); // Function RSBattleCharacter.RSBattleCharacter_C.GetMaxHp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBadStatusFrame(bool bBadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStatusFrame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBadStatusElectric(bool bBadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStatusElectric // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBadStatusFlooded(bool bBadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStatusFlooded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBadStatusOil(bool bBadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStatusOil // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsBadStatusConfusion(bool bBadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStatusConfusion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsDead(bool bDead); // Function RSBattleCharacter.RSBattleCharacter_C.IsDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetCapsuleHalfHeight(float HalfHeight); // Function RSBattleCharacter.RSBattleCharacter_C.GetCapsuleHalfHeight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroySpringArm(struct USpringArmComponent* SpringArm, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.DestroySpringArm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSpringArm(struct USpringArmComponent* SpringArm); // Function RSBattleCharacter.RSBattleCharacter_C.AddSpringArm // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCurrentAttackAttributeAI(enum class EAttackAttribute Attribute, bool bResult); // Function RSBattleCharacter.RSBattleCharacter_C.IsCurrentAttackAttributeAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsAbleMove(bool IsAble); // Function RSBattleCharacter.RSBattleCharacter_C.IsAbleMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ScaleMaxSpeed(float Scale, struct FName ClaimantName, bool Result); // Function RSBattleCharacter.RSBattleCharacter_C.ScaleMaxSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RestoreMaxSpeed(struct FName ClaimantName, bool Result); // Function RSBattleCharacter.RSBattleCharacter_C.RestoreMaxSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginMoveBackward(bool Result); // Function RSBattleCharacter.RSBattleCharacter_C.BeginMoveBackward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMoveBackward(bool Result); // Function RSBattleCharacter.RSBattleCharacter_C.EndMoveBackward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlying(bool IsFlying); // Function RSBattleCharacter.RSBattleCharacter_C.IsFlying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHeadLocation(struct FVector Location); // Function RSBattleCharacter.RSBattleCharacter_C.GetHeadLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetFlightAltitude(float FlightAltitude); // Function RSBattleCharacter.RSBattleCharacter_C.GetFlightAltitude // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCapsuleRadius(float Radius); // Function RSBattleCharacter.RSBattleCharacter_C.GetCapsuleRadius // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIsBattleMode(bool IsBattleMode); // Function RSBattleCharacter.RSBattleCharacter_C.GetIsBattleMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	bool IsBerserkCharacter(); // Function RSBattleCharacter.RSBattleCharacter_C.IsBerserkCharacter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsControlPlayer(); // Function RSBattleCharacter.RSBattleCharacter_C.IsControlPlayer // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct AActor* GetPsychicObjectShield(); // Function RSBattleCharacter.RSBattleCharacter_C.GetPsychicObjectShield // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicObjectShieldActive(); // Function RSBattleCharacter.RSBattleCharacter_C.IsPsychicObjectShieldActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetTargetCursorLocation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetTargetCursorLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDeadBeforeHitResultByDirectAttack(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.SetDeadBeforeHitResultByDirectAttack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsDisableMeshFitGround(bool bDisable); // Function RSBattleCharacter.RSBattleCharacter_C.IsDisableMeshFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CalcMeshFitGroundVector(struct FVector UpVector); // Function RSBattleCharacter.RSBattleCharacter_C.CalcMeshFitGroundVector // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGroupID(int32_t NewGroupID); // Function RSBattleCharacter.RSBattleCharacter_C.SetGroupID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopUnaffectedCameraAttention(); // Function RSBattleCharacter.RSBattleCharacter_C.StopUnaffectedCameraAttention // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopUnaffectedTimeDilation(); // Function RSBattleCharacter.RSBattleCharacter_C.StopUnaffectedTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNoCrashChanceEvent(); // Function RSBattleCharacter.RSBattleCharacter_C.IsNoCrashChanceEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsNoDeadEvent(); // Function RSBattleCharacter.RSBattleCharacter_C.IsNoDeadEvent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnHitDamage(struct FHCHitResult Result, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.OnHitDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUnaffectedCameraAttention(float DeltaSec); // Function RSBattleCharacter.RSBattleCharacter_C.UpdateUnaffectedCameraAttention // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartUnaffectedCameraAttention(struct UCurveFloat* ActorCurveOut, struct UCurveFloat* FovCurveOut, float AttentionTime, bool IsStart); // Function RSBattleCharacter.RSBattleCharacter_C.StartUnaffectedCameraAttention // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateUnaffectedTimeDilation(float DeltaSec); // Function RSBattleCharacter.RSBattleCharacter_C.UpdateUnaffectedTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start Unaffected Time Dilation(float TimeDilation, float DilationTime, enum class EAnimNotifyTimeDilationMode DilationMode); // Function RSBattleCharacter.RSBattleCharacter_C.Start Unaffected Time Dilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDisableMeshFitGround(bool bDisable, struct FName ClaimantName); // Function RSBattleCharacter.RSBattleCharacter_C.SetDisableMeshFitGround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetWeakTargetPointInterface(struct FVector AttackerPos); // Function RSBattleCharacter.RSBattleCharacter_C.GetWeakTargetPointInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetRootMotionMode(char Mode); // Function RSBattleCharacter.RSBattleCharacter_C.GetRootMotionMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ModifyParameterTable_Attack(float Scale, int32_t NewAttack); // Function RSBattleCharacter.RSBattleCharacter_C.ModifyParameterTable_Attack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetGroupID(); // Function RSBattleCharacter.RSBattleCharacter_C.GetGroupID // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void RestartBehaviorTreeCore(bool bTickEnable); // Function RSBattleCharacter.RSBattleCharacter_C.RestartBehaviorTreeCore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopBehaviorTreeCore(bool bTickDisable); // Function RSBattleCharacter.RSBattleCharacter_C.StopBehaviorTreeCore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetBehaviorTreeTickEnable(bool bEnable); // Function RSBattleCharacter.RSBattleCharacter_C.SetBehaviorTreeTickEnable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool RestartBehaviorTree(bool bTickEnable); // Function RSBattleCharacter.RSBattleCharacter_C.RestartBehaviorTree // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool StopBehaviorTree(bool bTickDisable); // Function RSBattleCharacter.RSBattleCharacter_C.StopBehaviorTree // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDirectAttackWpPrimitive(struct UPrimitiveComponent* OutPrimitive); // Function RSBattleCharacter.RSBattleCharacter_C.GetDirectAttackWpPrimitive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsAttractSelfInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.IsAttractSelfInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnEndDamageCalcArray(); // Function RSBattleCharacter.RSBattleCharacter_C.OnEndDamageCalcArray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DamagePopupCore(struct FVector InLocation, int32_t InDamage, float InCrashDamage, enum class DamagePointKind InKind, bool InIsCritical, bool InIsWeakhit, bool InIsStealthCritical, bool InIsBrainCrash, struct AActor* attackActor); // Function RSBattleCharacter.RSBattleCharacter_C.DamagePopupCore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattleDamage3D(struct AHUDMainGame_C* HUD, int32_t Damage, struct FVector position3D, bool IsPlayer, bool isCritical, bool isSasCritical, bool isBrainCrashCritical, bool isHeal, bool isWeak, bool isNoDamage, struct ARSBattleCharacter_C* crushTarget, int32_t crushBonus, struct FVector2D Offset); // Function RSBattleCharacter.RSBattleCharacter_C.SetBattleDamage3D // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool VibrationControllerInDamageInterface(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.VibrationControllerInDamageInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ShakeCameraInDamageInterface(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.ShakeCameraInDamageInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoCollisionAndStopAiFade(bool bNoColAndStopAi, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetNoCollisionAndStopAiFade // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainCrashMissAccumulationScale(bool IsBoss); // Function RSBattleCharacter.RSBattleCharacter_C.SetBrainCrashMissAccumulationScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetDamageReactionDirInterface(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.GetDamageReactionDirInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsSuperArmorInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.IsSuperArmorInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetCounterInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.SetCounterInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCounterWaitInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.IsCounterWaitInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DisenableSetCanTick(); // Function RSBattleCharacter.RSBattleCharacter_C.DisenableSetCanTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableSetCanTick(); // Function RSBattleCharacter.RSBattleCharacter_C.EnableSetCanTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CanSetTick(bool Result); // Function RSBattleCharacter.RSBattleCharacter_C.CanSetTick // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsEnableReactionCoefficientInterface(float OutReactionSRate, float OutReactionLRate, float OutDownRate, float OutCrashRate); // Function RSBattleCharacter.RSBattleCharacter_C.IsEnableReactionCoefficientInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnDamageArmorBreak(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnDamageArmorBreak // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDisableAtomCuePlayInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDisableAtomCuePlayInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsHitWeakChangeDefaultEffectInterface(); // Function RSBattleCharacter.RSBattleCharacter_C.IsHitWeakChangeDefaultEffectInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableSlashEffectInterface(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.IsEnableSlashEffectInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool AddScarFromHitDamageInfoInterface(struct AActor* Actor, struct FHitDamageInfo HitDamageInfo); // Function RSBattleCharacter.RSBattleCharacter_C.AddScarFromHitDamageInfoInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAssumptionData(bool bondsIn, enum class EPlayerID bondsPlayerID In, enum class EPlayerID bondsTargetID In, bool retrun enable, int32_t outAssumptionLv, bool outRelativeLv, bool outIsFreeLv); // Function RSBattleCharacter.RSBattleCharacter_C.GetAssumptionData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharactersParameterName(); // Function RSBattleCharacter.RSBattleCharacter_C.SetCharactersParameterName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsNoDeadTutorial(); // Function RSBattleCharacter.RSBattleCharacter_C.IsNoDeadTutorial // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDeadPhysicsAttackOnly(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDeadPhysicsAttackOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDeadPsychicObjOnly(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDeadPsychicObjOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDeadLaunchAttackOnly(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDeadLaunchAttackOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetAutoAimTargetLocation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetAutoAimTargetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector GetLookAtTargetLocation(); // Function RSBattleCharacter.RSBattleCharacter_C.GetLookAtTargetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcDirectDamageValue(struct UDataTable* DataTable, struct FName SkillName, struct AActor* attacker, struct AActor* AttackerOwner, int32_t DamageValue); // Function RSBattleCharacter.RSBattleCharacter_C.CalcDirectDamageValue // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeDifficulty(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.InitializeDifficulty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBossHpDisp(bool isDisp); // Function RSBattleCharacter.RSBattleCharacter_C.IsBossHpDisp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ResetSelfHateFromEnemy(); // Function RSBattleCharacter.RSBattleCharacter_C.ResetSelfHateFromEnemy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMaterialOutlineIndex(); // Function RSBattleCharacter.RSBattleCharacter_C.SetupMaterialOutlineIndex // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventBeforeBindCharacter(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoDynamicEventBeforeBindCharacter // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckReceiveStealthCritical(struct FHCHitResult HitResult, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.CheckReceiveStealthCritical // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	bool IsCrashMaxWithGuts(); // Function RSBattleCharacter.RSBattleCharacter_C.IsCrashMaxWithGuts // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetBodyMaterialScalarParameter(struct FName ParameterName, float ParameterValue); // Function RSBattleCharacter.RSBattleCharacter_C.SetBodyMaterialScalarParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraAttentionStart_LookAtPos(struct UCurveFloat* ActorCurveIn, bool bChangeFov, float TargetFov, struct UCurveFloat* FovCurveIn, bool bEnableOffsetAngleVt, float OffsetAngleVtIn, bool bEnableOffsetDist, float OffsetDistIn, struct FVector lookAtPos, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.CameraAttentionStart_LookAtPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBadStatusTips(enum class EHCBadState BadStatus); // Function RSBattleCharacter.RSBattleCharacter_C.CheckBadStatusTips // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugSetCharaParam(struct FName DebugParamName); // Function RSBattleCharacter.RSBattleCharacter_C.DebugSetCharaParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDeadChaseAttackOnly(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDeadChaseAttackOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsDeadPsychicObjComboOnly(); // Function RSBattleCharacter.RSBattleCharacter_C.IsDeadPsychicObjComboOnly // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnSetStealthMode(bool bStealth, bool bSuccess); // Function RSBattleCharacter.RSBattleCharacter_C.OnSetStealthMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectDispSwitch(bool bInDisp, bool bSuccess); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectDispSwitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnableCharacterTick(bool bEnable); // Function RSBattleCharacter.RSBattleCharacter_C.IsEnableCharacterTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsLastBrainCrash(bool IsLast); // Function RSBattleCharacter.RSBattleCharacter_C.IsLastBrainCrash // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalculateBrainCrashDamage(int32_t Damage); // Function RSBattleCharacter.RSBattleCharacter_C.CalculateBrainCrashDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExecuteNotifyKind(struct AActor* Owner, enum class ECharaExecuteNotifyKind ExecuteKind, bool IsExecute); // Function RSBattleCharacter.RSBattleCharacter_C.CheckExecuteNotifyKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshFitGroundCheckLocationArray(struct TArray<struct FVector> Location, float checkHeight); // Function RSBattleCharacter.RSBattleCharacter_C.GetMeshFitGroundCheckLocationArray // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	int32_t GetCharaKind(); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharaKind // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CallDead(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.CallDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraAttentionEnd(struct UCurveFloat* ActorCurveOut, struct UCurveFloat* FovCurveOut, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.CameraAttentionEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CameraAttentionStart(struct UCurveFloat* ActorCurveIn, bool bChangeFov, float TargetFov, struct UCurveFloat* FovCurveIn, bool bEnableOffsetAngleVt, float OffsetAngleVtIn, bool bEnableOffsetDist, float OffsetDistIn, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.CameraAttentionStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCameraDitherTableRowName(struct FName RowName); // Function RSBattleCharacter.RSBattleCharacter_C.GetCameraDitherTableRowName // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCameraDitherToParticle(float DeitherValue); // Function RSBattleCharacter.RSBattleCharacter_C.SetCameraDitherToParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnregisterCameraDitherParticleHandle(struct URSParticleSystemComponentBase* Particle); // Function RSBattleCharacter.RSBattleCharacter_C.UnregisterCameraDitherParticleHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterCameraDitherParticleHandle(struct URSParticleSystemComponentBase* Particle); // Function RSBattleCharacter.RSBattleCharacter_C.RegisterCameraDitherParticleHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsAttackerTargetSelf(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.IsAttackerTargetSelf // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBadStateIconCameraOffset(float Value); // Function RSBattleCharacter.RSBattleCharacter_C.GetBadStateIconCameraOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBadStateIconParam(enum class EHCBadState BadType, struct FBadStateAddParticleData ParamData); // Function RSBattleCharacter.RSBattleCharacter_C.GetBadStateIconParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void BadStateIconOff(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateIconOff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateIconOn(struct FBadStateAddParticleData Data, struct UParticleSystemComponent* Handle); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateIconOn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoHPEvent(int32_t NewHP, int32_t PrevHP, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoHPEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetActorAllTickEnabled(bool bEnabled); // Function RSBattleCharacter.RSBattleCharacter_C.SetActorAllTickEnabled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void VibrationControllerInDamage(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.VibrationControllerInDamage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayVibrationController(struct FHCHitResult HitResult, bool bCanPlay); // Function RSBattleCharacter.RSBattleCharacter_C.IsPlayVibrationController // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinalizeCelLookMaterial(); // Function RSBattleCharacter.RSBattleCharacter_C.FinalizeCelLookMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupCelLookMaterialNonPlayer(); // Function RSBattleCharacter.RSBattleCharacter_C.SetupCelLookMaterialNonPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool SetHiddenCharacterAttachment(bool NewHidden); // Function RSBattleCharacter.RSBattleCharacter_C.SetHiddenCharacterAttachment // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckCameraDitherApply(struct FVector WorldLocation, float HalfHeight, struct FRotator WorldRotation, bool apply); // Function RSBattleCharacter.RSBattleCharacter_C.CheckCameraDitherApply // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadCameraDitherData(); // Function RSBattleCharacter.RSBattleCharacter_C.LoadCameraDitherData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoBattleSequencerEnd(bool bSetEnemyEvent, bool bDriveSequence, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoBattleSequencerEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoBattleSequencerStart(bool bSetEnemyEvent, bool bDriveSequence, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoBattleSequencerStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInBeginPlay(bool InBegin); // Function RSBattleCharacter.RSBattleCharacter_C.IsInBeginPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DoTalkEventEnd(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoTalkEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoTalkEventStart(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoTalkEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventEnd(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoDynamicEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoDynamicEventStart(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoDynamicEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventEnd(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoStaticEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoStaticEventStart(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoStaticEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventEnd(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoEventEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEventStart(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DoEventStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool GetCharacterMovementGroundInfoSimple(struct FHitResult Result); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharacterMovementGroundInfoSimple // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetGroundInfo(bool bFind, struct FHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.GetGroundInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	struct FVector GetCharacterMovementLocationSimple(); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharacterMovementLocationSimple // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBodyMeshes(struct TArray<struct USkeletalMeshComponent*> Meshes); // Function RSBattleCharacter.RSBattleCharacter_C.GetBodyMeshes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DamageBefore(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.DamageBefore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsBrainCrashAccess(); // Function RSBattleCharacter.RSBattleCharacter_C.IsBrainCrashAccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsBrainCrashSuccess(); // Function RSBattleCharacter.RSBattleCharacter_C.IsBrainCrashSuccess // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	struct FVector GetGroundLocationSimple(bool bIncludeObject); // Function RSBattleCharacter.RSBattleCharacter_C.GetGroundLocationSimple // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SelectShake(struct UCameraShake* ShakeClass, float Scale, struct FVector ShakeLocation, struct UCameraShake* ReturnClass, float ReturnScale); // Function RSBattleCharacter.RSBattleCharacter_C.SelectShake // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShakeCameraInRange(struct UCameraShake* ShakeClass, float Scale, struct FVector ShakeLocation); // Function RSBattleCharacter.RSBattleCharacter_C.ShakeCameraInRange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsPlayShakeCamera(struct FHCHitResult HitResult, bool bCanPlay); // Function RSBattleCharacter.RSBattleCharacter_C.IsPlayShakeCamera // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetDamageReactionDir(struct FHCHitResult HitResult, struct FVector ReactionDir); // Function RSBattleCharacter.RSBattleCharacter_C.GetDamageReactionDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CheckHateCalc(struct FHCHitResult HitResult, int32_t Damage); // Function RSBattleCharacter.RSBattleCharacter_C.CheckHateCalc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMaxSpeedScale(float Scale); // Function RSBattleCharacter.RSBattleCharacter_C.GetMaxSpeedScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void ReceiveDamageScar(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.ReceiveDamageScar // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UCharactersParameterComponent* GetCharactersParameterComponent(); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharactersParameterComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void RequestHitStop(struct TArray<struct FHCHitResult> HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.RequestHitStop // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckDelayDeath(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.CheckDelayDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDelayDeath(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetDelayDeath // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNotifyAnimEnd(); // Function RSBattleCharacter.RSBattleCharacter_C.SetNotifyAnimEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceivedNotifyAnimEnd(bool Received); // Function RSBattleCharacter.RSBattleCharacter_C.ReceivedNotifyAnimEnd // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInvalidDamage(bool InvalidDamage); // Function RSBattleCharacter.RSBattleCharacter_C.IsInvalidDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetBulletDirection(struct FVector FireLocation, struct FVector TargetLocation, struct FVector FireForwardVector, float MaxAngle_XY, float MaxAngle_Z, struct FVector BulletDirection); // Function RSBattleCharacter.RSBattleCharacter_C.GetBulletDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNotDamageMotion(bool bNotDamageMotion); // Function RSBattleCharacter.RSBattleCharacter_C.SetNotDamageMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsNotDamageMotion(bool bNotDamageMotion); // Function RSBattleCharacter.RSBattleCharacter_C.IsNotDamageMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimNotifyCondition(int32_t ConditionNo, bool Result); // Function RSBattleCharacter.RSBattleCharacter_C.GetAnimNotifyCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainCrashLock(); // Function RSBattleCharacter.RSBattleCharacter_C.BrainCrashLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DirectAttack(bool UseFixDamage, int32_t fixDamage, struct UDataTable* DataTable, struct FName SkillName, struct AActor* attacker, struct AActor* AttackerOwner, bool IgnoreInvalid, struct FHCHitEffectInfo Effect Info, bool UseHitPosition, struct FVector hitPosition, bool NoDamageDisplay); // Function RSBattleCharacter.RSBattleCharacter_C.DirectAttack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEyesCheck(struct FVector StartLocation, struct FVector TargetLocation, bool IsEyes); // Function RSBattleCharacter.RSBattleCharacter_C.IsEyesCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGroundLocation(struct FVector groundLocation); // Function RSBattleCharacter.RSBattleCharacter_C.GetGroundLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnCharacterAssetLoad(bool return); // Function RSBattleCharacter.RSBattleCharacter_C.OnCharacterAssetLoad // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsStealthEnable(bool return); // Function RSBattleCharacter.RSBattleCharacter_C.IsStealthEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DebugDisplayStatus(); // Function RSBattleCharacter.RSBattleCharacter_C.DebugDisplayStatus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsArmor(struct UPrimitiveComponent* Prim, bool return); // Function RSBattleCharacter.RSBattleCharacter_C.IsArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void GetRootLocation(struct FVector RootLocation); // Function RSBattleCharacter.RSBattleCharacter_C.GetRootLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void DamageAfterCommon(); // Function RSBattleCharacter.RSBattleCharacter_C.DamageAfterCommon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeMaterial(); // Function RSBattleCharacter.RSBattleCharacter_C.InitializeMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCharactersParameterData(struct FCharactersParameterTable ParamTable); // Function RSBattleCharacter.RSBattleCharacter_C.SetCharactersParameterData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceMeshShadow(bool ForceMeshShadow); // Function RSBattleCharacter.RSBattleCharacter_C.SetForceMeshShadow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeShadow(); // Function RSBattleCharacter.RSBattleCharacter_C.InitializeShadow // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetForceMaterialOutlineVisibility(bool ForceEnabled); // Function RSBattleCharacter.RSBattleCharacter_C.SetForceMaterialOutlineVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeMaterialVisibility(); // Function RSBattleCharacter.RSBattleCharacter_C.InitializeMaterialVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateMaterialVisibility(bool ChangeVisibility, bool NewVisibility); // Function RSBattleCharacter.RSBattleCharacter_C.UpdateMaterialVisibility // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeFadeOut Internal(); // Function RSBattleCharacter.RSBattleCharacter_C.AreaChangeFadeOut Internal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaStart(); // Function RSBattleCharacter.RSBattleCharacter_C.AreaStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeStart(); // Function RSBattleCharacter.RSBattleCharacter_C.AreaChangeStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackWeakHit(struct FHCHitResult HitResult, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnAttackWeakHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevCheckOnAttackActorHit(struct FHCHitResult HitResult, bool bOK); // Function RSBattleCharacter.RSBattleCharacter_C.PrevCheckOnAttackActorHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFootIKEnable(bool Enable, float BlendTime, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetFootIKEnable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateBadStateEffect(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.UpdateBadStateEffect // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffConfusion(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOffConfusion // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffOil(bool bNoMaterial, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOffOil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffFlooded(bool bNoMaterial, bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOffFlooded // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnConfusion(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOnConfusion // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnOil(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOnOil // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnFlooded(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOnFlooded // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnElec(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOnElec // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOnFlame(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOnFlame // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffElec(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOffElec // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOffFlame(bool bDummy); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOffFlame // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBrainAndBadStatusParam(float BrainCrashTimer, float BrainCrashMissScale); // Function RSBattleCharacter.RSBattleCharacter_C.SetBrainAndBadStatusParam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCurrentAttackAttribute(enum class EAttackAttribute Attribute, bool bResult); // Function RSBattleCharacter.RSBattleCharacter_C.IsCurrentAttackAttribute // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void ClearCurrentAttackAttribute(); // Function RSBattleCharacter.RSBattleCharacter_C.ClearCurrentAttackAttribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddCurrentAttackAttribute(enum class EAttackAttribute Attribute); // Function RSBattleCharacter.RSBattleCharacter_C.AddCurrentAttackAttribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectAllOff(); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectAllOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOff(enum class EHCBadState bad); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BadStateEffectOn(enum class EHCBadState bad); // Function RSBattleCharacter.RSBattleCharacter_C.BadStateEffectOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FrameDamage(float sec); // Function RSBattleCharacter.RSBattleCharacter_C.FrameDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSuperArmor(bool bSuperArmor, struct FName ClaimantName); // Function RSBattleCharacter.RSBattleCharacter_C.SetSuperArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isSuperArmor(bool bSuperArmor); // Function RSBattleCharacter.RSBattleCharacter_C.isSuperArmor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInvalidDamage(bool bInvalid, int32_t Param, struct FName ClaimantName, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetInvalidDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddRandomLocation(struct FVector Vector, struct FVector return); // Function RSBattleCharacter.RSBattleCharacter_C.AddRandomLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetRootMotionMode(enum class ERootMotionMode Mode); // Function RSBattleCharacter.RSBattleCharacter_C.SetRootMotionMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostTick(float DeltaSeconds, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.PostTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MainTick(float DeltaSeconds, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.MainTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreTick(float DeltaSeconds, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.PreTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetHateParam(); // Function RSBattleCharacter.RSBattleCharacter_C.SetHateParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHateParamTable(struct FHateParamData return); // Function RSBattleCharacter.RSBattleCharacter_C.GetHateParamTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void DamageAfter(struct TArray<struct FHCHitResult> Result); // Function RSBattleCharacter.RSBattleCharacter_C.DamageAfter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHitNearCharacter(float Length, struct TArray<struct AActor*> Actor); // Function RSBattleCharacter.RSBattleCharacter_C.GetHitNearCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetCharactersParameterAll(); // Function RSBattleCharacter.RSBattleCharacter_C.SetCharactersParameterAll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharactersParameterTable(struct FCharactersParameter Param); // Function RSBattleCharacter.RSBattleCharacter_C.GetCharactersParameterTable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetBattling(bool bBattling, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.SetBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBattling(bool bBatting); // Function RSBattleCharacter.RSBattleCharacter_C.IsBattling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void OnRevive(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnRevive // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Revive(); // Function RSBattleCharacter.RSBattleCharacter_C.Revive // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDamaging(struct FHCHitResult HitResult, float DamageValue, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnDamaging // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartDamageAnimFunc(struct FHCHitResult HitResult, int32_t DamageValue, bool IsDown, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.StartDamageAnimFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBulletAimTarget(struct AActor* Target); // Function RSBattleCharacter.RSBattleCharacter_C.GetBulletAimTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ShakeCameraInDamage(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.ShakeCameraInDamage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsExecGuard(bool IsExec); // Function RSBattleCharacter.RSBattleCharacter_C.IsExecGuard // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void OnDamageActorHit(struct FHCHitResult HitResult, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnDamageActorHit // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult, bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnAttackActorHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDeadCoreBattleChara(); // Function RSBattleCharacter.RSBattleCharacter_C.OnDeadCoreBattleChara // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnDead(bool dummy); // Function RSBattleCharacter.RSBattleCharacter_C.OnDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DebugMovementModePrint(); // Function RSBattleCharacter.RSBattleCharacter_C.DebugMovementModePrint // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EventPhysicsIdling(float IdlingSec, float IdleRestoreDelay); // Function RSBattleCharacter.RSBattleCharacter_C.EventPhysicsIdling // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhost(float Time); // Function RSBattleCharacter.RSBattleCharacter_C.OnBonusGhost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostFromDT(enum class EBonusGhostType Type); // Function RSBattleCharacter.RSBattleCharacter_C.OnBonusGhostFromDT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBonusGhostOneShot(float AliveTime); // Function RSBattleCharacter.RSBattleCharacter_C.OnBonusGhostOneShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldOpenStart(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldOpenStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldOpenEnd(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldOpenEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldMoveBrainField(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldMoveBrainField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldMoveNormalField(struct AActor* BrainFieldUser, bool IsAttacker, enum class EBrainFieldEndType EndType); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldMoveNormalField // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldOverrideStart(struct AActor* BrainFieldUser, bool IsAttacker); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldOverrideStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashStart(bool bBeginActor); // Function RSBattleCharacter.RSBattleCharacter_C.OnBrainCrashStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDamage(); // Function RSBattleCharacter.RSBattleCharacter_C.OnBrainCrashDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashDead(); // Function RSBattleCharacter.RSBattleCharacter_C.OnBrainCrashDead // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashStartUserMotion(); // Function RSBattleCharacter.RSBattleCharacter_C.OnBrainCrashStartUserMotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashTargetFloating(); // Function RSBattleCharacter.RSBattleCharacter_C.OnBrainCrashTargetFloating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBadStausMetalMode(); // Function RSBattleCharacter.RSBattleCharacter_C.IsBadStausMetalMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCounterWait(bool wait on in); // Function RSBattleCharacter.RSBattleCharacter_C.SetCounterWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCounter(); // Function RSBattleCharacter.RSBattleCharacter_C.SetCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_294_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_294_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__DamageAccept_K2Node_ComponentBoundEvent_5_StartDamageAnimDelegate__DelegateSignature(struct FHCHitResult HitResult, int32_t Damage, bool IsDamage); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__DamageAccept_K2Node_ComponentBoundEvent_5_StartDamageAnimDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__DamageAccept_K2Node_ComponentBoundEvent_6_DamagePopupDelegate__DelegateSignature(struct FVector Location, int32_t Damage, float crashDamage, enum class DamagePointKind kind, bool isCritical, bool isWeakhit, bool isStealthCritical, bool isBrainCrash, struct AActor* attackActor); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__DamageAccept_K2Node_ComponentBoundEvent_6_DamagePopupDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ProcDamageAfter(struct TArray<struct FHCHitResult> Result); // Function RSBattleCharacter.RSBattleCharacter_C.ProcDamageAfter // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ProcDamageActorHit(struct FHCHitResult HitResult); // Function RSBattleCharacter.RSBattleCharacter_C.ProcDamageActorHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1685580
	void ProcDamageBefore(); // Function RSBattleCharacter.RSBattleCharacter_C.ProcDamageBefore // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void SetInvalidDamageInterface(bool bInvalidDamage, struct FName ClaimantName, int32_t Param); // Function RSBattleCharacter.RSBattleCharacter_C.SetInvalidDamageInterface // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindBadStateFlameDamageTick(); // Function RSBattleCharacter.RSBattleCharacter_C.BindBadStateFlameDamageTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindBadStateFlameDamageTick(); // Function RSBattleCharacter.RSBattleCharacter_C.UnbindBadStateFlameDamageTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnBrainCrashEnd(bool bBeginActor, struct UAnimMontage* PlayerEndMontage); // Function RSBattleCharacter.RSBattleCharacter_C.OnBrainCrashEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnGhostOneShot(float AliveTime); // Function RSBattleCharacter.RSBattleCharacter_C.OnGhostOneShot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetGhostActive(bool Active); // Function RSBattleCharacter.RSBattleCharacter_C.SetGhostActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function RSBattleCharacter.RSBattleCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function RSBattleCharacter.RSBattleCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_291_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_291_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__DamageResponse_K2Node_ComponentBoundEvent_4_DamageResponceDelegate__DelegateSignature(struct FHCHitResult HitResult, int32_t Damage); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__DamageResponse_K2Node_ComponentBoundEvent_4_DamageResponceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_SimpleMulticastDelegateBP__DelegateSignature(); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_SimpleMulticastDelegateBP__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__DamageResponse_K2Node_ComponentBoundEvent_0_DamageResponceDelegate__DelegateSignature(struct FHCHitResult HitResult, int32_t Damage); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__DamageResponse_K2Node_ComponentBoundEvent_0_DamageResponceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_HpDelegate__DelegateSignature(int32_t current_hp, int32_t base_hp); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_HpDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharacterOverlapCapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharacterOverlapCapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharacterOverlapCapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharacterOverlapCapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveUniqueInputEnd(); // Function RSBattleCharacter.RSBattleCharacter_C.ReceiveUniqueInputEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_2_NotifyFinishActor__DelegateSignature(struct AActor* finisher); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_2_NotifyFinishActor__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__DamageAccept_K2Node_ComponentBoundEvent_5_DamageHitDelegate__DelegateSignature(struct FHCHitResult HitResult, int32_t Damage); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__DamageAccept_K2Node_ComponentBoundEvent_5_DamageHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BindHitSlowDispatcher(); // Function RSBattleCharacter.RSBattleCharacter_C.BindHitSlowDispatcher // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitSlow(); // Function RSBattleCharacter.RSBattleCharacter_C.OnHitSlow // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindHitSlowDispatcher(); // Function RSBattleCharacter.RSBattleCharacter_C.UnbindHitSlowDispatcher // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function RSBattleCharacter.RSBattleCharacter_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_6_BadStateOnDelegate__DelegateSignature(enum class EHCBadState bad_state, struct AActor* attacker); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_6_BadStateOnDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BadStateOffDelegate__DelegateSignature(enum class EHCBadState bad_state); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__CharactersParameter_K2Node_ComponentBoundEvent_0_BadStateOffDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void DisEnableNoDeadTutorial(); // Function RSBattleCharacter.RSBattleCharacter_C.DisEnableNoDeadTutorial // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeFadeOut(); // Function RSBattleCharacter.RSBattleCharacter_C.AreaChangeFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_3_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function RSBattleCharacter.RSBattleCharacter_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_3_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BrainFieldCloseStart(struct AActor* BrainFieldUser, bool IsAttacker, enum class EBrainFieldEndType EndType); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldCloseStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BrainFieldCloseEnd(struct AActor* BrainFieldUser, bool IsAttacker, enum class EBrainFieldEndType EndType); // Function RSBattleCharacter.RSBattleCharacter_C.BrainFieldCloseEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindUnaffectedTimeDilationTick(); // Function RSBattleCharacter.RSBattleCharacter_C.BindUnaffectedTimeDilationTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnBindUnaffectedTimeDilationTick(); // Function RSBattleCharacter.RSBattleCharacter_C.UnBindUnaffectedTimeDilationTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindUnaffectedCameraAttention(); // Function RSBattleCharacter.RSBattleCharacter_C.BindUnaffectedCameraAttention // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnBindUnaffectedCameraAttention(); // Function RSBattleCharacter.RSBattleCharacter_C.UnBindUnaffectedCameraAttention // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndNoDeadNoCrashChanceEvent(); // Function RSBattleCharacter.RSBattleCharacter_C.EndNoDeadNoCrashChanceEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoDeadEvent(bool noDeadEvent); // Function RSBattleCharacter.RSBattleCharacter_C.SetNoDeadEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNoCrashChanceEvent(bool noCrashChanceEvent); // Function RSBattleCharacter.RSBattleCharacter_C.SetNoCrashChanceEvent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterInterruptTelepoEffectInterface(struct URSParticleSystemComponentBase* Particle); // Function RSBattleCharacter.RSBattleCharacter_C.RegisterInterruptTelepoEffectInterface // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RegisterEffectInterface(struct URSParticleSystemComponentBase* Particle); // Function RSBattleCharacter.RSBattleCharacter_C.RegisterEffectInterface // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_RSBattleCharacter(int32_t EntryPoint); // Function RSBattleCharacter.RSBattleCharacter_C.ExecuteUbergraph_RSBattleCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

