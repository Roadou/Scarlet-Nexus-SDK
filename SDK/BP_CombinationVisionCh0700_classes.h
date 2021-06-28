// BlueprintGeneratedClass BP_CombinationVisionCh0700.BP_CombinationVisionCh0700_C
// Size: 0x3f0 (Inherited: 0x3b0)
struct UBP_CombinationVisionCh0700_C : UBP_AttackCombinationVisionBaseComponent_C {
	struct TArray<struct FFHologramAnimationPlayData> PlayData; // 0x3b0(0x10)
	bool bFailed; // 0x3c0(0x01)
	char pad_3C1[0x3]; // 0x3c1(0x03)
	float GroundCheckDistance; // 0x3c4(0x04)
	struct UParticleSystem* BulletHitParticle; // 0x3c8(0x08)
	bool bBulletHitParticleUseAttackerHeight; // 0x3d0(0x01)
	char pad_3D1[0x3]; // 0x3d1(0x03)
	float BulletHitParticleHeightOffset; // 0x3d4(0x04)
	struct FVector BulletHitParticleScale; // 0x3d8(0x0c)
	char pad_3E4[0x4]; // 0x3e4(0x04)
	struct USoundAtomCue* BulletHitSE; // 0x3e8(0x08)

	void SpawnHologramHitParticle(struct FHCHitResult HitResult, bool bDummy); // Function BP_CombinationVisionCh0700.BP_CombinationVisionCh0700_C.SpawnHologramHitParticle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeforeFirstPlayAnimation(); // Function BP_CombinationVisionCh0700.BP_CombinationVisionCh0700_C.BeforeFirstPlayAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayNextHologramAnimation(); // Function BP_CombinationVisionCh0700.BP_CombinationVisionCh0700_C.PlayNextHologramAnimation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckAnimationInterrupt(bool bInterrupt); // Function BP_CombinationVisionCh0700.BP_CombinationVisionCh0700_C.CheckAnimationInterrupt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetAnimationPlayData(struct TArray<struct FFHologramAnimationPlayData> Data); // Function BP_CombinationVisionCh0700.BP_CombinationVisionCh0700_C.GetAnimationPlayData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

