// BlueprintGeneratedClass BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C
// Size: 0x381 (Inherited: 0x230)
struct ABP_SASCopyPlayerActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBP_AttachmentManageComponent_C* BP_AttachmentManageComponent; // 0x238(0x08)
	struct UTickManageComponent* TickManage; // 0x240(0x08)
	struct UBP_AttackEmitter_C* BP_AttackEmitter; // 0x248(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x250(0x08)
	struct UTeamComponent* Team; // 0x258(0x08)
	struct UBP_WeaponManageComponent_C* BP_WeaponManageComponent; // 0x260(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x278(0x08)
	struct UCopyPlayerAnimInstance* CopyAnimBP; // 0x280(0x08)
	struct FGameTimer GameTimer; // 0x288(0x0c)
	enum class ESASCopyStatus Status; // 0x294(0x01)
	bool bCopyOnParticle; // 0x295(0x01)
	char pad_296[0x2]; // 0x296(0x02)
	float COPY_PARTICLE_TIME_RATE; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UParticleSystem* AppearParticle; // 0x2a0(0x08)
	struct UParticleSystem* DisappearParticle; // 0x2a8(0x08)
	struct TArray<struct AActor*> AttackHitActorList; // 0x2b0(0x10)
	struct TMap<struct UParticleSystem*, struct URSParticleSystemComponentBase*> SpawnParticleMap; // 0x2c0(0x50)
	struct FGameTimer DirTimer; // 0x310(0x0c)
	float DirAngle; // 0x31c(0x04)
	float PARAM_ATTACK_RATE; // 0x320(0x04)
	float CameraDither; // 0x324(0x04)
	enum class ESASCopyAttachType AttachLocationType; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FVector PrevLocation; // 0x32c(0x0c)
	float DefaultRelativeZ; // 0x338(0x04)
	bool bDelayCancel; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct TArray<struct UParticleSystem*> ReserveParticleList; // 0x340(0x10)
	struct TArray<struct FName> ReserveParticleAttachPoint; // 0x350(0x10)
	struct TArray<struct FName> ReserveParticleParameterName; // 0x360(0x10)
	struct TArray<bool> ReserveParticleUseActorParameter; // 0x370(0x10)
	bool bSpawnReserveParticle; // 0x380(0x01)

	void GetAttachedCharacterMesh(enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, struct USkeletalMeshComponent* Mesh); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetAttachedCharacterMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipAttachmentInterface(enum class EPlayerAttachment Index, int32_t AttachmentItemID, enum class EPlayerID EquipPlayerID, int32_t EquipMeshIndex, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.EquipAttachmentInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DestroyAttachmentMeshComponent(struct USceneComponent* DestroyMeshComponent, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.DestroyAttachmentMeshComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttachmentVisibilityOffOnHead(bool bOff, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.AttachmentVisibilityOffOnHead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* GetHitCheckIgnoredActor(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetHitCheckIgnoredActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsCheckFriendlyFire(struct AActor* HitActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsCheckFriendlyFire // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsDisableDamageHit(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsDisableDamageHit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool IsIgnoreAccelerator(enum class HCSkillExtraType Type); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsIgnoreAccelerator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsIgnoreHitCheck(struct UPrimitiveComponent* pPrimitive, struct FVector hitPosition); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsIgnoreHitCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsObstacleHitCheck(struct UPrimitiveComponent* pPrimitive, struct AActor* pAttacker, struct FVector EndPosition); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsObstacleHitCheck // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsObstacleHitCheckToActor(struct AActor* pTarget); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsObstacleHitCheckToActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsOnGround(bool bIncludeObject); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsOnGround // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckExecuteAnimNotifyCharacterKind(enum class ECharaExecuteNotifyKind kind, bool bExecute); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CheckExecuteAnimNotifyCharacterKind // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class FHitEffectPriority GetHitEffectPriorityInterface(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetHitEffectPriorityInterface // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPlayerWeaponManage(struct UBP_WeaponManageComponent_C* WeaponManage); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetPlayerWeaponManage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsExistPlayerCopy(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsExistPlayerCopy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPlayerCopy(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsPlayerCopy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProxyRequestedPlayer(struct ARSBattlePlayer_C* Player); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetProxyRequestedPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetProxyMesh(struct UMeshComponent* Mesh); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetProxyMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetPsychicObjectThrowParameter(bool apply, float directshot throw speed, float directshot homing speed, float combo throw speed, float combo homing speed, float brainfield throw speed, float brainfield homing speed, float intercept throw speed, float intercept homing speed); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetPsychicObjectThrowParameter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttackerMainPlayer(bool bMainPlayer); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsAttackerMainPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StopMovementImmediately(bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.StopMovementImmediately // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetGroupIDInterface(bool bSuccess, int32_t GroupID, int32_t SubGroupID); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetGroupIDInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckNoDamagePopUpFromAttacker(bool bNoPopUp); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CheckNoDamagePopUpFromAttacker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterBrainFieldNormalTransform(struct FTransform InNormalTransform, bool return); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.RegisterBrainFieldNormalTransform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Get Event Bind Mesh Component(struct TArray<struct UStaticMeshComponent*> MeshComponent); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.Get Event Bind Mesh Component // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInScreen(bool InScreen); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsInScreen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateSequencerEffectInterface(float DeltaSec, bool return); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.UpdateSequencerEffectInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSequencerEffectInterface(struct FName ClaimantName, bool return); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.EndSequencerEffectInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnSequencerEffectInterface(struct FName ClaimantName, struct UParticleSystem* Template, struct FTransform Transform, struct FName AttachName, bool return); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SpawnSequencerEffectInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableReactionCoefficient(bool bEnable, float ReactionSRate, float ReactionLRate, float DownRate, float CrashRate); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsEnableReactionCoefficient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void DisableReactionCoefficient(bool bNormalAttack, bool bPsychicAttack, bool return); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.DisableReactionCoefficient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EnableReactionCoefficient(bool bNormalAttack, bool bPsychicAttack, float ReactionSRate, float ReactionLRate, float DownRate, float CrashRate, bool return); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.EnableReactionCoefficient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCharacterLV(int32_t LV); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetCharacterLV // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAutoAimRate(float Rate); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetAutoAimRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void EndVisionFog(bool dummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.EndVisionFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RequestDie(bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.RequestDie // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCounterWait(bool bWait); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsCounterWait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBrainCrashAccessInterface(bool bAccess); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsBrainCrashAccessInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetUseCameraDither(bool bUse, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetUseCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCameraDither(float SetDitherValue, bool dummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCameraDither(float DeltaSeconds, bool UseDither, float CameraDither); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.UpdateCameraDither // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableSlashEffect(struct FHCHitResult HitResult, bool bEnable); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsEnableSlashEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsHitWeak_ChangeDefaultEffect(bool ChangeDefault); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsHitWeak_ChangeDefaultEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void CanTakeBrainField(bool CanTake); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CanTakeBrainField // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetHitStopInterface(enum class HCRestictedHitStopType HitStopType, bool bCritical, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetHitStopInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void isForceCritical(bool bResult); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.isForceCritical // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetTeam(enum class TeamKind Team); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsPlayer(bool bPlayer); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsEnemy(bool bEnemy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsEnemy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void SetCharacterVisibility(bool bVisibility, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetCharacterVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsMetalMode(bool bMetal); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsMetalMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetWeakTargetPoint(struct FVector AttackerPos, struct FVector Point); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetWeakTargetPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetTopTargetPoint(struct FVector Point); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetTopTargetPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetWeakUIPoint(int32_t Index, struct FVector Point); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetWeakUIPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void IsCounterSuccess(bool Success); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsCounterSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeakTargetComponent(struct USceneComponent* WeakComponent); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetWeakTargetComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void StartVisionFog(bool dummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.StartVisionFog // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetActorStartPoint(struct FVector StartLocation); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetActorStartPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNotifyAttackData(struct FFNotifyAttackData Data, bool dummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetNotifyAttackData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetNotifyAttackData(struct FFNotifyAttackData Data); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetNotifyAttackData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetLockOnTargetInterface(struct AActor* TargetActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetLockOnTargetInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAccelerating(bool Accelerating); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAccelerating(bool Accelerating, bool Dammy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetAccelerating // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MeshFitGround(float interpSpeed, float angleLimit, bool bEndFit, bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.MeshFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMeshFitGroundCheckLocation(struct FVector Location, float checkHeight); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetMeshFitGroundCheckLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelMeshFitGround(bool bDummy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CancelMeshFitGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartSASChance(float Time, bool Dammy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.StartSASChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndSASChance(bool Dammy); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.EndSASChance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsPsychicFieldDamageRateToBoss(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsPsychicFieldDamageRateToBoss // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByAttack(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* defenseActor, enum class HCSkillAttackType AttackType, bool bCopyActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcAccumulationByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcAccumulationByDefence(float refWince, float refKnockback, float refDown, float refLaunch, float refFlame, float refElectric, float refFlooded, float refOil, float refConfusion, float refCrashScale, struct AActor* attackActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcAccumulationByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcCritical(float Critical, struct AActor* defenseActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcCritical // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDamageByAttack(float refPhysicsDamage, float refObjDamage, float refFlameDamage, float refElectricDamage, float refCriticalDamageRate, struct AActor* defenseActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDamageByDefence(float refPhysicsDamage, float refObjDamage, float refFlameDamage, float refElectricDamage, float refCriticalDamageRate, struct AActor* attackActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CalcDefence(float refPhysicsDefence, float refObjDefence, float refFlameDefence, float refElectricPhysics); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByAttack(float Damage, struct AActor* defenseActor, struct FHCSkillCommonInfo skillInfo); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcFinalDamageByAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float CalcFinalDamageByDefence(float Damage, struct AActor* attackActor); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CalcFinalDamageByDefence // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FCharactersParameterTable GetCharactersParameterTableInterface(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetCharactersParameterTableInterface // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool OverwriteAttackCollisionInfo(struct FHCCollisionCommonInfo refCommonInfo, struct FHCSkillCommonInfo refSkill); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.OverwriteAttackCollisionInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelCopyMeshFitGround(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CancelCopyMeshFitGround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyMeshFitGround(float interpSpeed, float angleLimit, bool bEndFit); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CopyMeshFitGround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NewFunction_1(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.NewFunction_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCostume(struct USkeletalMesh* Costume); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetCostume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetWeaponList(struct TArray<struct ABP_WeaponBase_C*> WeaponList); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetWeaponList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetBrainCodeActorList(struct TArray<struct ABP_CableBase_C*> CodeList); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetBrainCodeActorList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSASCodeActorList(struct TArray<struct ABP_CableBase_C*> CodeList); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetSASCodeActorList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateLocation(bool bLerp); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.UpdateLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttachLocationType(enum class ESASCopyAttachType InType); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetAttachLocationType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCopyStatus(enum class ESASCopyStatus Status); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.GetCopyStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateDir(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.UpdateDir // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDir(float Angle, float Time); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetDir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAimRotate(struct FRotator Rotator); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetAimRotate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticleAll(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.StopParticleAll // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopParticle(struct UParticleSystem* Particle); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnParticle(struct UParticleSystem* Particle, struct FName AttachPointName, bool bUseActorParameter, struct FName ParameterName); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SpawnParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevCheckOnAttackActorHit(struct FHCHitResult HCHitResult, bool bOK); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.PrevCheckOnAttackActorHit // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopMontage(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.StopMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayMontage(struct UAnimMontage* Montage, float PlayRate, struct FName SectionName); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.PlayMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsCopyVisible(bool bVisible); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsCopyVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetCopyMaterialValue(float Rate); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetCopyMaterialValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisibility(bool bVisibility, bool bWithSubWeapon); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyOff(float Time); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CopyOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CopyOn(float Time, bool bWithSubWeapon); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.CopyOn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Setting(struct ARSBattlePlayer_C* OriginalPlayer, struct UAnimInstance* AnimBP, enum class ESASCopyAttachType AttachType); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.Setting // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBadStausMetalMode(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.IsBadStausMetalMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCounterWait(bool wait on in); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetCounterWait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCounter(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.SetCounter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AreaChangeFadeOut(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.AreaChangeFadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void DelayTickEnd(); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.DelayTickEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void RegisterInterruptTelepoEffectInterface(struct URSParticleSystemComponentBase* Particle); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.RegisterInterruptTelepoEffectInterface // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void RegisterEffectInterface(struct URSParticleSystemComponentBase* Particle); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.RegisterEffectInterface // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASCopyPlayerActor(int32_t EntryPoint); // Function BP_SASCopyPlayerActor.BP_SASCopyPlayerActor_C.ExecuteUbergraph_BP_SASCopyPlayerActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

