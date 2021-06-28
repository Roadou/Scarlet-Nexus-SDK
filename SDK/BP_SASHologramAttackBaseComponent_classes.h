// BlueprintGeneratedClass BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C
// Size: 0x385 (Inherited: 0x198)
struct UBP_SASHologramAttackBaseComponent_C : UAttackComponentBaseBP_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x198(0x08)
	bool bInputAttack; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	struct FName ClaimantName; // 0x1a4(0x08)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct UAnimMontage* OwnMontage; // 0x1b0(0x08)
	bool bChangingOwnMontage; // 0x1b8(0x01)
	enum class EPlayerID hologramPlayerID; // 0x1b9(0x01)
	bool bBindEventOnLanding; // 0x1ba(0x01)
	bool bBindHologramBlendingOut; // 0x1bb(0x01)
	bool bBindEventHologramOff; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	struct UAnimMontage* OwnHologramMontage; // 0x1c0(0x08)
	float MoveDistanceMax; // 0x1c8(0x04)
	float MoveDistance; // 0x1cc(0x04)
	struct FVector MoveBeginLocation; // 0x1d0(0x0c)
	float MoveTimeMax; // 0x1dc(0x04)
	float MoveTime; // 0x1e0(0x04)
	enum class ECharacterHitPriority StoreCharacterHitPriority_1; // 0x1e4(0x01)
	bool bChangeCharacterHitPriority; // 0x1e5(0x01)
	bool bBindEventOnAttackHit; // 0x1e6(0x01)
	char pad_1E7[0x1]; // 0x1e7(0x01)
	struct TArray<struct FFHologramAnimationPlayData> MotionPlayData; // 0x1e8(0x10)
	int32_t MotionPlayIndex; // 0x1f8(0x04)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct UAnimMontage* PlayerEndMontage; // 0x200(0x08)
	struct FVector MoveGoalLocation; // 0x208(0x0c)
	float GoalOffsetDistance; // 0x214(0x04)
	float GoalOffsetHeight; // 0x218(0x04)
	enum class EHologramAttackTickProc TickProcType; // 0x21c(0x01)
	char pad_21D[0x3]; // 0x21d(0x03)
	struct FVector WeaponRootBeginLocation; // 0x220(0x0c)
	struct FVector WeaponRootEndLocation; // 0x22c(0x0c)
	struct UAnimInstance* HologramAnimInstance; // 0x238(0x08)
	float MoveWeaponRootDistanceMin; // 0x240(0x04)
	bool bBindEventOnHitThrowWeapon; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UAnimMontage* FinishMontage; // 0x248(0x08)
	struct UAnimMontage* AirFinishMontage; // 0x250(0x08)
	float FallInitialSpeed; // 0x258(0x04)
	float FallAcceleration; // 0x25c(0x04)
	float FallMaxSpeed; // 0x260(0x04)
	float CurrentFallSpeed; // 0x264(0x04)
	float MoveSpeed; // 0x268(0x04)
	bool bAttackHit; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	float NotMoved_ElapsedTime; // 0x270(0x04)
	float NotMoved_MaxTime; // 0x274(0x04)
	float NotMoved_MinSpeedRate; // 0x278(0x04)
	float MoveOverDistance; // 0x27c(0x04)
	bool bChargeMoveOver; // 0x280(0x01)
	bool bCombinationVision; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	int32_t AttractTargetState; // 0x284(0x04)
	struct UDataTable* AttractSkillTable; // 0x288(0x08)
	struct FName AttractSkillName; // 0x290(0x08)
	struct ARSBattleCharacter_C* AttractActor; // 0x298(0x08)
	struct FVector AttractDir; // 0x2a0(0x0c)
	struct FVector AttractStartLocation; // 0x2ac(0x0c)
	struct FVector AttractEndLocation; // 0x2b8(0x0c)
	float AttractEndDistance; // 0x2c4(0x04)
	bool bGroundOnly; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float AttractEnableHalfHeight; // 0x2cc(0x04)
	struct TSoftObjectPtr<UParticleSystem> AttractSuccessHitEffectSoftRef; // 0x2d0(0x28)
	struct TSoftObjectPtr<UParticleSystem> AttractFailedHitEffectSoftRef; // 0x2f8(0x28)
	struct UCurveFloat* AttractCurveData; // 0x320(0x08)
	float AttractMoveMaxDistance; // 0x328(0x04)
	float AttractMoveMinDistance; // 0x32c(0x04)
	float AttractMoveMaxTime; // 0x330(0x04)
	float AttractMoveMinTime; // 0x334(0x04)
	float AttractMoveDefaultTime; // 0x338(0x04)
	float BeforeAttractRate; // 0x33c(0x04)
	float SmallEnemyAttractDistance; // 0x340(0x04)
	float MediumEnemyAttractDistance; // 0x344(0x04)
	float LargeEnemyAttractDistance; // 0x348(0x04)
	float FixEnemyAttractDistance; // 0x34c(0x04)
	float UseAttractDistance; // 0x350(0x04)
	float AttractPower; // 0x354(0x04)
	struct FName delete_AttractHitEffectAttachSocketName; // 0x358(0x08)
	struct FVector AttractHitEffectLocationOffset; // 0x360(0x0c)
	struct FRotator AttractHitEffectRotationOffset; // 0x36c(0x0c)
	struct FVector Delete_AttractHitEffectScale; // 0x378(0x0c)
	bool bAttackHitDamage; // 0x384(0x01)

	void DoPlayEndMontage(bool bFlying); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.DoPlayEndMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackHitOnce(bool bDummy); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnAttackHitOnce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeforeFirstPlayAnimation(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BeforeFirstPlayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsBindedOnLanding(bool bBinded); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.IsBindedOnLanding // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void CheckAnimationInterrupt(bool bInterrupt); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.CheckAnimationInterrupt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnAttractHitEffect(bool bSuccess, struct FVector Location, struct FRotator Rotation); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SpawnAttractHitEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearAttractActor(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.ClearAttractActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndAttractTarget(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.EndAttractTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void FindAttractTarget(bool bFailed); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.FindAttractTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StartAttractTarget(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.StartAttractTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAttractTarget(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SetAttractTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickAttractTarget(float DeltaSeconds); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.TickAttractTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoEndAttack(bool bDummy); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsFlyingFinish(bool bFlying); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.IsFlyingFinish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void OnAttackNotify(int32_t Param); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnAttackNotify // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickFall(float DeltaSeconds); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.TickFall // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFall(bool bFlying); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SetFall // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickWaitHitThrowWeapon(float DeltaSeconds); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.TickWaitHitThrowWeapon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetWaitHitThrowWeapon(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SetWaitHitThrowWeapon // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHitThrowWeapon(struct FVector HitLocation); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnHitThrowWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcMoveWeaponRootLocation(bool bSuccess, struct FVector Location); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.CalcMoveWeaponRootLocation // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickMoveWeaponRoot(float DeltaSeconds); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.TickMoveWeaponRoot // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveWeaponRoot(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SetMoveWeaponRoot // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void DoPlayerTick(float DeltaSeconds, bool bDummy); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.DoPlayerTick // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CalcGoalLocation(struct FVector GoalLocation); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.CalcGoalLocation // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void TickMoveToGoal(float DeltaSeconds); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.TickMoveToGoal // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayEndMontage(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.PlayEndMontage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayNextHologramAnimation(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.PlayNextHologramAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndMove(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.EndMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAnimation(int32_t DataIndex); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.PlayAnimation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckFlying(bool bFlying); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.CheckFlying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetMoveToGoal(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SetMoveToGoal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnHologramHitParticle(struct FHCHitResult HitResult, bool bDummy); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SpawnHologramHitParticle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckExistTarget(float CheckRange, bool bExist); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.CheckExistTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAcceptInputAttack(bool bEnable); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.IsEnableAcceptInputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void SetChargeMove(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.SetChargeMove // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TickChargeMove(float DeltaSeconds); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.TickChargeMove // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHologramOff(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnHologramOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnHologramMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnHologramMontageBlendingOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnLanding(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnLanding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentMontage(struct UAnimMontage* Montage); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.GetCurrentMontage // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	bool OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnMontageBlendingOut // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.CheckStartAttack // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearInput(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.ClearInput // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool InputButtonByCombo(bool bPressed, bool bComboFirst); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.InputButtonByCombo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindEventOnLanding(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BindEventOnLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindEventOnLanding(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.UnbindEventOnLanding // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindHologramMontageBlendingOut(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BindHologramMontageBlendingOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindEventHologramOff(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BindEventHologramOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindEventHologramOff(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.UnbindEventHologramOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindOnAttackHit(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BindOnAttackHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindOnAttackHit(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.UnbindOnAttackHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackActorHit(struct FHCHitResult HitResult); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.OnAttackActorHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindOnHitThrowWeapon(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BindOnHitThrowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindOnHitThrowWeapon(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.UnbindOnHitThrowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BindHologramAttackNotify(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.BindHologramAttackNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UnbindHologramAttackNotify(); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.UnbindHologramAttackNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SASHologramAttackBaseComponent(int32_t EntryPoint); // Function BP_SASHologramAttackBaseComponent.BP_SASHologramAttackBaseComponent_C.ExecuteUbergraph_BP_SASHologramAttackBaseComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

