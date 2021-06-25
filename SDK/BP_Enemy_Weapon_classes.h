// BlueprintGeneratedClass BP_Enemy_Weapon.BP_Enemy_Weapon_C
// Size: 0x6f0 (Inherited: 0x338)
struct ABP_Enemy_Weapon_C : AEnemyWeaponBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UCapsuleComponent* PhysicsCollision; // 0x340(0x08)
	struct UCapsuleComponent* RootCollisionCapsule; // 0x348(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x350(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x358(0x08)
	struct USkeletalMeshComponent* BulletMesh; // 0x360(0x08)
	struct UBP_RSParticleSystemComponent_C* BP_RSParticleSystemComponent; // 0x368(0x08)
	struct UBP_AssetLoadComponent_C* BP_AssetLoadComponent; // 0x370(0x08)
	struct UCapsuleComponent* AttackCollisionCapsule; // 0x378(0x08)
	struct USphereComponent* AttackCollision; // 0x380(0x08)
	struct UTeamComponent* Team; // 0x388(0x08)
	struct FHCCollisionCommonInfo common; // 0x390(0x70)
	struct UHitCheckComponent* HitCheckComponent; // 0x400(0x08)
	float LifeTimer; // 0x408(0x04)
	struct FVector InitLocation; // 0x40c(0x0c)
	struct AActor* attackOwner; // 0x418(0x08)
	bool IsCurveTargetMove; // 0x420(0x01)
	char pad_421[0x3]; // 0x421(0x03)
	float CurveTargetMoveSpeed; // 0x424(0x04)
	struct FVector OldLocation; // 0x428(0x0c)
	struct FVector TargetLocation; // 0x434(0x0c)
	float TargetDistance; // 0x440(0x04)
	char pad_444[0x4]; // 0x444(0x04)
	struct UCurveFloat* CurveTargetMove; // 0x448(0x08)
	bool IsHitCurveTargetMove; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	float TargetDistanceCheck; // 0x454(0x04)
	struct FVector CommonMoveDir; // 0x458(0x0c)
	float CommonMoveSpeed; // 0x464(0x04)
	struct FVector CreateScale; // 0x468(0x0c)
	bool IsProjectileMove; // 0x474(0x01)
	bool bHitAttack; // 0x475(0x01)
	bool bHitDamage; // 0x476(0x01)
	bool bHitObject; // 0x477(0x01)
	int32_t TestCount; // 0x478(0x04)
	float TotalDeltaSeconds; // 0x47c(0x04)
	struct FVector BulletDirection; // 0x480(0x0c)
	float Gravity; // 0x48c(0x04)
	bool IsAnyHit; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UParticleSystem* HitEffect; // 0x498(0x08)
	bool IsRecycle; // 0x4a0(0x01)
	enum class EEnemyWeaponMoveKind MoveKind; // 0x4a1(0x01)
	bool bIntercepted; // 0x4a2(0x01)
	char pad_4A3[0x1]; // 0x4a3(0x01)
	struct FVector InitDir; // 0x4a4(0x0c)
	bool bDestroy; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	float AdjustAngle; // 0x4b4(0x04)
	float MaxCorrectAngleZ; // 0x4b8(0x04)
	float HomingStartDistance; // 0x4bc(0x04)
	float ProjectileGravityScale; // 0x4c0(0x04)
	float HomingMagnitude; // 0x4c4(0x04)
	float InterceptHomingMagnitude; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct AActor* Target; // 0x4d0(0x08)
	int32_t State; // 0x4d8(0x04)
	float HomingAngle; // 0x4dc(0x04)
	float HomingInterpSpeed; // 0x4e0(0x04)
	float HomingSpeed; // 0x4e4(0x04)
	struct FVector ReadyStartLocation; // 0x4e8(0x0c)
	struct FVector ReadyEndLocation; // 0x4f4(0x0c)
	float HomingReadySeconds; // 0x500(0x04)
	float HomingEnableSeconds; // 0x504(0x04)
	struct UParticleSystem* VanishEffect; // 0x508(0x08)
	bool bOldVersion; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct UParticleSystem* WallHitEffect; // 0x518(0x08)
	float AdjustFloorAngle; // 0x520(0x04)
	bool bBreakLostTarget; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct USoundAtomCue* HitSound; // 0x528(0x08)
	struct USoundAtomCue* WallHitSound; // 0x530(0x08)
	bool bNotLineCheck; // 0x538(0x01)
	bool bNotUseAttackCollision; // 0x539(0x01)
	bool bEnableSweep; // 0x53a(0x01)
	char pad_53B[0x1]; // 0x53b(0x01)
	float CommonMoveGravity; // 0x53c(0x04)
	float HomingCutDistance; // 0x540(0x04)
	bool bDisableHoming; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct USoundAtomCue* HomingLoopSe; // 0x548(0x08)
	struct URSAtomComponentBase* HomingLoopSe_Handle; // 0x550(0x08)
	struct FVector HitEffectScale; // 0x558(0x0c)
	bool bInterceptReserve; // 0x564(0x01)
	char pad_565[0x3]; // 0x565(0x03)
	struct FGameTimer InterceptReserveTimer; // 0x568(0x0c)
	bool bInterceptPauseAttackCollision; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	float CorrectBulletSpeed; // 0x578(0x04)
	float EnableHomingTime; // 0x57c(0x04)
	bool bStartHoming; // 0x580(0x01)
	bool bHomingProjectile; // 0x581(0x01)
	char pad_582[0x2]; // 0x582(0x02)
	struct FRotator PreRotation; // 0x584(0x0c)
	bool bHomingLimitDegree; // 0x590(0x01)
	char pad_591[0x3]; // 0x591(0x03)
	float HomingLimitDegree; // 0x594(0x04)
	struct FVector PreVelocity; // 0x598(0x0c)
	float CorrectBulletGravity; // 0x5a4(0x04)
	float LimitAngleUp; // 0x5a8(0x04)
	float LimitAngleDown; // 0x5ac(0x04)
	float LimitAngleLR; // 0x5b0(0x04)
	float AdjustAngleDistanceMax; // 0x5b4(0x04)
	float AdjustAngleDistanceMin; // 0x5b8(0x04)
	float LimitDistanceAdjustAngleUp; // 0x5bc(0x04)
	float LimitDistanceAdjustAngleDown; // 0x5c0(0x04)
	bool bNewCorrectDir; // 0x5c4(0x01)
	char pad_5C5[0x3]; // 0x5c5(0x03)
	struct FHCSkillCommonInfo AttackSkillInfo; // 0x5c8(0xe8)
	float InterceptMoveSpeed; // 0x6b0(0x04)
	float IntercepRotAngle; // 0x6b4(0x04)
	float IntercepRotSeconds; // 0x6b8(0x04)
	float IntercepRotTimer; // 0x6bc(0x04)
	bool bHitPhysics; // 0x6c0(0x01)
	char pad_6C1[0x3]; // 0x6c1(0x03)
	float PhysicsHalfHeightScale; // 0x6c4(0x04)
	float PhysicsRadiusScale; // 0x6c8(0x04)
	struct FVector PhysicsCollisionHitLocation; // 0x6cc(0x0c)
	bool bDisableHitPhysics; // 0x6d8(0x01)
	bool bDisableUpdatePhysics; // 0x6d9(0x01)
	char pad_6DA[0x2]; // 0x6da(0x02)
	float DelayIgnoreJustDodgeSeconds; // 0x6dc(0x04)
	float IgnoreJustDodgeTimer; // 0x6e0(0x04)
	bool IsInterceptAttack; // 0x6e4(0x01)
	char pad_6E5[0x3]; // 0x6e5(0x03)
	struct URSParticleSystemComponentBase* EmitterInstance; // 0x6e8(0x08)

	void GetLocationForHitDirection(bool IsEnemyWeapon, struct FVector Location); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GetLocationForHitDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsInterceptFail(bool bFail); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsInterceptFail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptCancel(bool bDummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InterceptCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptReserve(bool bDummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InterceptReserve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptAttack(struct ARSBattleCharacter_C* Intercepter, struct ARSBattleCharacter_C* NewTarget, bool bDummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InterceptAttack // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEmitterInstance(struct URSParticleSystemComponentBase* NewEmitterInstance); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateEmitterInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsIntercept(bool IsInterceptReserve); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsIntercept // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool HitAfterCurveMoveTarget_FromNative(struct FVector HitLocation, struct FVector HitNormal); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.HitAfterCurveMoveTarget_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct UHitCheckComponent* GetHitCheckComponent_FromNative(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GetHitCheckComponent_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ProjectileHitProcess_FromNative(bool IsHitPlayer, struct FVector HitLocation, struct FVector HitNormal); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.ProjectileHitProcess_FromNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct AActor* GetAttackOwnerTargetCharaNative(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GetAttackOwnerTargetCharaNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Set Ignore Just Dodge Seconds(float DelaySeconds, bool bDummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.Set Ignore Just Dodge Seconds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddIgnoreJustDodge(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.AddIgnoreJustDodge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitLineCheckForObjects(struct FVector StartLocation, struct FVector EndLocation, struct TArray<enum class EObjectTypeQuery> ObjectTypes, struct TArray<struct AActor*> ActorsToIgnore, bool IsAnyHit, struct FHitResult HitResult); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsHitLineCheckForObjects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EndPhysicsCollision(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.EndPhysicsCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdatePhysicsCollision(float DeltaSec); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdatePhysicsCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitPhysicsCollision(bool bHit); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsHitPhysicsCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void HitPhysicsCollision(struct FVector HitLocation); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.HitPhysicsCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartPhysicsCollision(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.StartPhysicsCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializePhysicsCollision(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitializePhysicsCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitInterceptMove(struct ARSBattleCharacter_C* attacker, struct ARSBattleCharacter_C* Target); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitInterceptMove // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInterceptMove(float DeltaSeconds, bool bDummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateInterceptMove // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitProjectileWall(bool IsWall, bool IsFloor); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.OnHitProjectileWall // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CancelAllEffect(bool bDummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.CancelAllEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndCustomMove(bool bForce, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.EndCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckHomingEnd(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.CheckHomingEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateInterceptReserve(float DeltaSeconds, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateInterceptReserve // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopHomingSe(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.StopHomingSe // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHomingCutDistance(struct FVector TargetLocation, bool IsCut); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsHomingCutDistance // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCommonMoveWithGravity(struct FVector InitPos, struct FVector MoveDir, float MoveSpeed, float Gravity, bool noTargetMove); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitCommonMoveWithGravity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void NoticeSelfDestruct(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.NoticeSelfDestruct // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayHitSound(struct FVector Location, bool IsWall); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.PlayHitSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitProjectileMoveSimple(struct FVector Location, struct FVector Velocity, float GravityScale); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitProjectileMoveSimple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsHitFloor(struct FVector Normal); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsHitFloor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWeaponVisibility(bool bVisible, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.SetWeaponVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FinishWeapon(bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.FinishWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWeapon(bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitVariable(bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitVariable // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsWeaponActive(bool bActive); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsWeaponActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetWeaponActivate(bool bActive, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.SetWeaponActivate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartVanishEffect(struct FVector HitLocation, struct FVector HitNormal, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.StartVanishEffect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitHomingMove(struct FVector ReadyStart, struct FVector ReadyEnd); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitHomingMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateHomingMove(float DeltaSeconds, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateHomingMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitHomingProjectileMove(struct FVector StartLocation, struct FVector TargetLocation, struct FVector ForwardVec, float Speed, float Angle, float maxAngle, float GravityScale, float HomingStartDis, float HomingMagunitude, struct ARSBattleCharacter_C* TargetActor); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitHomingProjectileMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CorrectBulletDirection(struct FVector FireLocation, struct FVector TargetLocation, struct FVector FireForwardVector, float AbsoluteAngleZ, float MaxAngleZ, float Speed, struct FVector OutDirection); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.CorrectBulletDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCustomMove(bool return); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCustomMove(float DeltaTime, bool return); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateCustomMove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndHoming(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.EndHoming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ProjectileHitProcess(bool IsHitPlayer, struct FVector HitLocation, struct FVector HitNormal, bool NewParam); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.ProjectileHitProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateTimer(float DeltaTime); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateTimer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsOverTarget(bool IsOver); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsOverTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAttackCollisionPrimitive(struct UPrimitiveComponent* Primitive); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GetAttackCollisionPrimitive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitInterceptMove_Old(struct ARSBattleCharacter_C* attacker, struct ARSBattleCharacter_C* Target); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitInterceptMove_Old // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitProjectileMove(struct FVector Src, struct FVector dst, struct FVector Dir, float Speed, float Angle, float maxAngle, float GravityScale); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitProjectileMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Bullet Recycle(struct FVector Location, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.Bullet Recycle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GravityHitProcess(bool IsHitPlayer, struct FVector HitLocation, struct FVector HitNormal, bool dummy); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GravityHitProcess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateGravityMiove(float DeltaSeconds); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateGravityMiove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WeaponUpdate(float DeltaSeconds); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.WeaponUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitObject(struct FHitResult HitResult, bool Result); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.OnHitObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateProjectileMove(float DeltaTime); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateProjectileMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitDamage(struct FHCHitResult HitResult, bool Result); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.OnHitDamage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitAttack(struct FHCHitResult HitResult, bool Result); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.OnHitAttack // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsHitLineCheck(struct FVector StartLocation, struct FVector EndLocation, bool IsAnyHit, struct FHitResult HitResult); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.IsHitLineCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCommonMove(float DeltaTime); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateCommonMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitCommonMove(struct FVector InitPos, struct FVector MoveDir, float MoveSpeed, bool noTargetMove); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.InitCommonMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetHitObjectType(struct TArray<enum class EObjectTypeQuery> ObjectType); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GetHitObjectType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void EndCurveTargetMove(float sec, bool return); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.EndCurveTargetMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AttackCollisionEnd(bool IsVisible); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.AttackCollisionEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitAfterCurveMoveTarget(struct FVector HitLocation, struct FVector HitNormal, bool return); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.HitAfterCurveMoveTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitCurveMoveTarget(struct FVector HitLocation, struct FVector HitNormal); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.HitCurveMoveTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetTargetMoveEffectRotation(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.SetTargetMoveEffectRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurveTargetMoveInit(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.SetCurveTargetMoveInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	float GetTargetDistance(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.GetTargetDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCurveTargetMove(float sec); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.UpdateCurveTargetMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CreateAttackCollosion(struct UDataTable* DataTable, struct FName SkillName, struct AActor* Owner, float Timer, struct FVector Location); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.CreateAttackCollosion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__BaseHitCheckReceiver_K2Node_ComponentBoundEvent_1_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.BndEvt__BaseHitCheckReceiver_K2Node_ComponentBoundEvent_1_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void BndEvt__BaseHitCheckReceiver_K2Node_ComponentBoundEvent_2_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.BndEvt__BaseHitCheckReceiver_K2Node_ComponentBoundEvent_2_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__PhysicsCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.BndEvt__PhysicsCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__PhysicsCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.BndEvt__PhysicsCollision_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void EndCurveTargetMove_FromNative(float sec); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.EndCurveTargetMove_FromNative // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_Enemy_Weapon(int32_t EntryPoint); // Function BP_Enemy_Weapon.BP_Enemy_Weapon_C.ExecuteUbergraph_BP_Enemy_Weapon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

