// BlueprintGeneratedClass BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C
// Size: 0x278 (Inherited: 0xc0)
struct UBP_EnemyBarrierComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc0(0x08)
	struct TArray<struct ABP_PsychicObjectBasic_C*> PsychicObjArray; // 0xc8(0x10)
	bool IsEnableBarrier; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct UCapsuleComponent* Barrier; // 0xe0(0x08)
	struct TSoftObjectPtr<UParticleSystem> WindowBarrierSoftRef; // 0xe8(0x28)
	struct TSoftObjectPtr<UParticleSystem> WindowBarrierHitSoftRef; // 0x110(0x28)
	struct TSoftObjectPtr<UParticleSystem> TornadEffectSoftRef; // 0x138(0x28)
	struct UParticleSystem* WindowBarrierEffect; // 0x160(0x08)
	struct UParticleSystem* WindowBarrierHitEffect; // 0x168(0x08)
	struct UParticleSystem* TornadEffect; // 0x170(0x08)
	struct UParticleSystem* FinishEffect; // 0x178(0x08)
	struct ARSBattlePlayer_C* OwnerPlayer; // 0x180(0x08)
	struct URSParticleSystemComponentBase* WindowLoopEffectHandle; // 0x188(0x08)
	float TotalDeltaSeconds; // 0x190(0x04)
	struct FName BarrierAttachName; // 0x194(0x08)
	struct FRotator BarrierRotation; // 0x19c(0x0c)
	struct TSoftObjectPtr<UParticleSystem> FinishEffectSoftRef; // 0x1a8(0x28)
	struct FName FinishAttachName; // 0x1d0(0x08)
	struct FRotator FinishRotation; // 0x1d8(0x0c)
	enum class EEnemyBarrierType BarrierType; // 0x1e4(0x01)
	char pad_1E5[0x3]; // 0x1e5(0x03)
	struct UParticleSystem* DamageBreakEffect; // 0x1e8(0x08)
	struct TSoftObjectPtr<UParticleSystem> DamageBreakEffectSoftRef; // 0x1f0(0x28)
	struct ABP_ENPC_BarrierBase_C* BarrierActor; // 0x218(0x08)
	int32_t BarrierMaxHp; // 0x220(0x04)
	float BarrierRadius; // 0x224(0x04)
	float BarrierMaxTime; // 0x228(0x04)
	float UniqueDamageScale; // 0x22c(0x04)
	float BouncePower; // 0x230(0x04)
	float BounceAngle; // 0x234(0x04)
	bool bEmissive; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	struct FLinearColor EmissiveColor; // 0x23c(0x10)
	float EmissivePower; // 0x24c(0x04)
	float TotalDuration; // 0x250(0x04)
	float CurrentEmissiveTime; // 0x254(0x04)
	float EmissiveScale; // 0x258(0x04)
	float EmissiveStartValue; // 0x25c(0x04)
	struct USoundAtomCue* HitBarrierSE; // 0x260(0x08)
	struct USoundAtomCue* BarrierLoopSE; // 0x268(0x08)
	struct URSAtomComponentBase* AtomComponent; // 0x270(0x08)

	void EndEmissive(); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.EndEmissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartEmissive(); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.StartEmissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateEmissive(float DeltaSec); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.UpdateEmissive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadBarrierActor(); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.LoadBarrierActor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcBarrierDamage(struct FHCHitResult Result); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.CalcBarrierDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BarrierCollisionHitNotify(struct FHCHitResult Result); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.BarrierCollisionHitNotify // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBarrier(bool IsBarrier); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.IsBarrier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void LoadAsset(); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.LoadAsset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Initialize(struct UCapsuleComponent* BarrierShape); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void HitProcess(struct ABP_PsychicObjectBasic_C* PsychicObj, struct FHCHitResult result in); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.HitProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Exit(bool IsDamage); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Update(float DeltaSeconds); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Start(); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EnemyBarrierComponent(int32_t EntryPoint); // Function BP_EnemyBarrierComponent.BP_EnemyBarrierComponent_C.ExecuteUbergraph_BP_EnemyBarrierComponent // (Final|UbergraphFunction) // @ game+0x1685580
};

