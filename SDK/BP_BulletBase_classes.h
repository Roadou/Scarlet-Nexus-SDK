// BlueprintGeneratedClass BP_BulletBase.BP_BulletBase_C
// Size: 0x5b4 (Inherited: 0x230)
struct ABP_BulletBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHitCheckReceiverComponent* HitCheckReceiver; // 0x238(0x08)
	struct UCapsuleComponent* AttackCollision; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float BulletSpeedPerSecond; // 0x250(0x04)
	float MaxRange; // 0x254(0x04)
	float HitRadius; // 0x258(0x04)
	bool bPenetrate; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	int32_t PenetrateCount; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct AActor* attackOwner; // 0x268(0x08)
	struct UParticleSystem* Particle; // 0x270(0x08)
	enum class EBulletParticleType ParticleType; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	struct FVector FirePoint; // 0x27c(0x0c)
	struct FVector attackDir; // 0x288(0x0c)
	struct FVector CurrentPoint; // 0x294(0x0c)
	struct UParticleSystemComponent* ParticleHandle; // 0x2a0(0x08)
	bool bRegisterCollision; // 0x2a8(0x01)
	bool bConfusion; // 0x2a9(0x01)
	enum class TeamKind OwnerTeam; // 0x2aa(0x01)
	bool bAttackEnd; // 0x2ab(0x01)
	int32_t hitCount; // 0x2ac(0x04)
	bool bAttack; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FHCAttackCollisionInfo CollisionInfo; // 0x2b8(0x270)
	float RemainingDistance; // 0x528(0x04)
	char pad_52C[0x4]; // 0x52c(0x04)
	struct UParticleSystem* ImpactParticle; // 0x530(0x08)
	bool bNoDir; // 0x538(0x01)
	bool bDisableImpactParticle; // 0x539(0x01)
	char pad_53A[0x2]; // 0x53a(0x02)
	struct FVector ImpactLandNormal; // 0x53c(0x0c)
	struct FRotator FireRotation; // 0x548(0x0c)
	float TotalDeltaSeconds; // 0x554(0x04)
	struct FVector ParticlStartPoint; // 0x558(0x0c)
	bool bPenetrateFrameOnce; // 0x564(0x01)
	bool bPenetrateEnemy; // 0x565(0x01)
	char pad_566[0x2]; // 0x566(0x02)
	float TempSpeed; // 0x568(0x04)
	bool bExecParallelMove; // 0x56c(0x01)
	char pad_56D[0x3]; // 0x56d(0x03)
	struct FVector EndPoint; // 0x570(0x0c)
	bool bImpactLand; // 0x57c(0x01)
	char pad_57D[0x3]; // 0x57d(0x03)
	float ParticleOffset; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct TArray<struct AActor*> AttackHitActorList; // 0x588(0x10)
	bool bPenetrateObj; // 0x598(0x01)
	bool bIntercept; // 0x599(0x01)
	bool bIgnorePenetrateInvinvible; // 0x59a(0x01)
	enum class ESequencerDilationOwner DilationOwner; // 0x59b(0x01)
	bool bNotRegisterCollision; // 0x59c(0x01)
	char pad_59D[0x3]; // 0x59d(0x03)
	float AttackDelayTime; // 0x5a0(0x04)
	struct FGameTimer AttackDelayTimer; // 0x5a4(0x0c)
	float HitCapsuleHalfHeight; // 0x5b0(0x04)

	void IsInterceptFail(bool bFail); // Function BP_BulletBase.BP_BulletBase_C.IsInterceptFail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptCancel(bool bDummy); // Function BP_BulletBase.BP_BulletBase_C.InterceptCancel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptReserve(bool bDummy); // Function BP_BulletBase.BP_BulletBase_C.InterceptReserve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InterceptAttack(struct ARSBattleCharacter_C* Intercepter, struct ARSBattleCharacter_C* NewTarget, bool bDummy); // Function BP_BulletBase.BP_BulletBase_C.InterceptAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	enum class ERSParallelTiming GetParallelTiming(); // Function BP_BulletBase.BP_BulletBase_C.GetParallelTiming // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool IsEnableParallelTick(); // Function BP_BulletBase.BP_BulletBase_C.IsEnableParallelTick // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttackDelayTime(float AttackCollisionDelayTime); // Function BP_BulletBase.BP_BulletBase_C.SetAttackDelayTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDilation(); // Function BP_BulletBase.BP_BulletBase_C.UpdateDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult, bool bDummy); // Function BP_BulletBase.BP_BulletBase_C.OnAttackActorHit // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrevCheckOnAttackActorHit(struct FHCHitResult HitResult, bool bOK); // Function BP_BulletBase.BP_BulletBase_C.PrevCheckOnAttackActorHit // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PostMove(); // Function BP_BulletBase.BP_BulletBase_C.PostMove // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct FVector MoveUpdate(float DeltaSeconds); // Function BP_BulletBase.BP_BulletBase_C.MoveUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnMoveUpdate(float DeltaSeconds, struct FVector ResultLocation, bool bEnd, bool bImpactLand); // Function BP_BulletBase.BP_BulletBase_C.OnMoveUpdate // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBulletVisibility(bool on, bool dunnmy); // Function BP_BulletBase.BP_BulletBase_C.SetBulletVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsAttack(bool bAttack); // Function BP_BulletBase.BP_BulletBase_C.IsAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void AttackEnd(); // Function BP_BulletBase.BP_BulletBase_C.AttackEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnUpdate(float DeltaSeconds, bool bDummy); // Function BP_BulletBase.BP_BulletBase_C.OnUpdate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackEnd(bool bDummy); // Function BP_BulletBase.BP_BulletBase_C.OnAttackEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Fire(struct AActor* attackOwner, struct FVector FirePoint, struct FVector Dir, struct FAttackCollisionInfoBP CollisionInfo, bool bDisableImpactParticle, bool bSuccess); // Function BP_BulletBase.BP_BulletBase_C.Fire // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreParallelTick(); // Function BP_BulletBase.BP_BulletBase_C.PreParallelTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PostParallelTick(); // Function BP_BulletBase.BP_BulletBase_C.PostParallelTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ParallelTick(float DeltaTime); // Function BP_BulletBase.BP_BulletBase_C.ParallelTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_BulletBase.BP_BulletBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_BulletBase.BP_BulletBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature(struct FHCHitResult Result); // Function BP_BulletBase.BP_BulletBase_C.BndEvt__HitCheckReceiver_K2Node_ComponentBoundEvent_0_HitResultDelegate__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_BulletBase(int32_t EntryPoint); // Function BP_BulletBase.BP_BulletBase_C.ExecuteUbergraph_BP_BulletBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

