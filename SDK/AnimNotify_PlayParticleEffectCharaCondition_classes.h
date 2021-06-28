// BlueprintGeneratedClass AnimNotify_PlayParticleEffectCharaCondition.AnimNotify_PlayParticleEffectCharaCondition_C
// Size: 0xd8 (Inherited: 0xd0)
struct UAnimNotify_PlayParticleEffectCharaCondition_C : UAnimNotify_RSPlayParticleEffectWithCondition {
	bool WantCondition; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	int32_t ConditionNo; // 0xd4(0x04)

	bool CheckCondition(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayParticleEffectCharaCondition.AnimNotify_PlayParticleEffectCharaCondition_C.CheckCondition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1685580
};

