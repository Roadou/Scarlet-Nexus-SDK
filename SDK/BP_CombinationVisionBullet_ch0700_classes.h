// BlueprintGeneratedClass BP_CombinationVisionBullet_ch0700.BP_CombinationVisionBullet_ch0700_C
// Size: 0x5c8 (Inherited: 0x5b4)
struct ABP_CombinationVisionBullet_ch0700_C : ABP_BulletBase_C {
	char pad_5B4[0x4]; // 0x5b4(0x04)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x5b8(0x08)
	struct URSParticleSystemComponentBase* EffectKnife; // 0x5c0(0x08)

	void SetEffectKnife(bool flag in); // Function BP_CombinationVisionBullet_ch0700.BP_CombinationVisionBullet_ch0700_C.SetEffectKnife // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Fire(struct AActor* attackOwner, struct FVector FirePoint, struct FVector Dir, struct FAttackCollisionInfoBP CollisionInfo, bool bDisableImpactParticle, bool bSuccess); // Function BP_CombinationVisionBullet_ch0700.BP_CombinationVisionBullet_ch0700_C.Fire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBulletVisibility(bool on, bool dunnmy); // Function BP_CombinationVisionBullet_ch0700.BP_CombinationVisionBullet_ch0700_C.SetBulletVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAttackEnd(bool bDummy); // Function BP_CombinationVisionBullet_ch0700.BP_CombinationVisionBullet_ch0700_C.OnAttackEnd // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

