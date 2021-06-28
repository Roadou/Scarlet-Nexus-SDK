// BlueprintGeneratedClass BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C
// Size: 0x3b0 (Inherited: 0x385)
struct UBP_AttackCombinationVisionBaseComponent_C : UBP_SASHologramAttackBaseComponent_C {
	char pad_385[0x3]; // 0x385(0x03)
	struct UParticleSystem* HitParticle; // 0x388(0x08)
	bool bHitParticleUseAttackerHeight; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct USoundAtomCue* HitSE; // 0x398(0x08)
	float HitParticleHeightOffset; // 0x3a0(0x04)
	struct FVector HitParticleScale; // 0x3a4(0x0c)

	void DoEndAttack(bool bDummy); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.DoEndAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackHitOnce(bool bDummy); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.OnAttackHitOnce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool CheckStartAttack(float DeltaTime); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.CheckStartAttack // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnHologramHitParticleCore(struct FHCHitResult HitResult, struct UParticleSystem* InHitParticle, bool bInHitParticleUseAttackerHeight, float InHitParticleHeightOffset, struct FVector InHitParticleScale, struct USoundAtomCue* InHitSE, bool bDummy); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.SpawnHologramHitParticleCore // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnHologramHitParticle(struct FHCHitResult HitResult, bool bDummy); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.SpawnHologramHitParticle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEnableAcceptInputAttack(bool bEnable); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.IsEnableAcceptInputAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
	void IsEnableAttack(bool bEnable); // Function BP_AttackCombinationVisionBaseComponent.BP_AttackCombinationVisionBaseComponent_C.IsEnableAttack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
};

