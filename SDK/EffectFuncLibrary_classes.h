// BlueprintGeneratedClass EffectFuncLibrary.EffectFuncLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UEffectFuncLibrary_C : UBlueprintFunctionLibrary {

	void GetHitResult(struct FHCHitResult HCHitResult, struct UObject* __WorldContext, struct AActor* attacker, struct UPrimitiveComponent* wpPrimitive, struct FVector hitPosition, enum class HCSkillAttackType skill_AttackType, enum class HCSkillType skill_SkillType, struct TArray<enum class HCSkillAttribute> skill_Attribute, struct AActor* attackOwner, bool isCritical, enum class HCSkillEnemyHitEffect skill_EnemyHItEffect, enum class HCSkillEnemyHitEffect skill_EnemyHitSound, struct TArray<enum class HCSkillExtraType> SkillExtraType, struct FVector HitNormal, struct FVector Attack Dir, struct FHCHitEffectInfo effectInfo); // Function EffectFuncLibrary.EffectFuncLibrary_C.GetHitResult // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnDamageHitEffect(struct AActor* Actor, struct FHCHitResult HitResult, struct UObject* __WorldContext); // Function EffectFuncLibrary.EffectFuncLibrary_C.SpawnDamageHitEffect // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SpawnAttachDeadVanishEffect(struct ACharacter* DeadChara, struct UMeshComponent* AttachedMesh, struct UParticleSystem* DeadParticle, struct UObject* __WorldContext, struct URSParticleSystemComponentBase* DeadEffectParticle); // Function EffectFuncLibrary.EffectFuncLibrary_C.SpawnAttachDeadVanishEffect // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

